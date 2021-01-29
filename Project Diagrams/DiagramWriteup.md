# Explanations & Screenshots of the Diagrams:
### Login Use-Case:
This diagram shows the login process. It assumes that the user is valid and will use their credentials to log in. The credentials introduced by the user are then validated by the database.

<p align = "center"><img src = "https://github.com/Hannah-Ashna/SDI-Project/blob/main/Project%20Diagrams/Diagrams/UseCase%20-%20Login.PNG"></p> 

### Send Message Use-Case:
A user attempts to send a message, the system will first need to validate their connection to ensure that the target user is online and connected to the broker.  

-	If the user is online:
  - The source message is sent, and the source chat history is updated
  - The target user is notified, and the target user’s chat history is also updated
  - The chat histories on both ends are updated within the database
-	If the user is offline:
  - The source message is stored within the database temporarily
  - The source user’s connection is then repeatedly checked until they are confirmed to be online
  - Once the source user is online, their message is then sent to the target user, and the following stages mentioned above occur

<p align = "center"><img src = "https://github.com/Hannah-Ashna/SDI-Project/blob/main/Project%20Diagrams/Diagrams/UseCase%20-%20SendMessage.PNG"></p> 

### Make Room Use-Case:
The diagram shows the process that occurs when a user makes a new room. The user is assumed to be Admin as by making a room the user becomes that Room’s Admin by default. The new room is made, and the database is updated.  
The Admin then has the option to add users to room and make these users moderators. The Admin can also make channels in the room. Whenever any changes are made the database is updated.  

<p align = "center"><img src = "https://github.com/Hannah-Ashna/SDI-Project/blob/main/Project%20Diagrams/Diagrams/ActivityDiagram%20-%20MakeRoom.PNG"></p> 

-------------------------------

### Login Activity Diagram:
The diagram first begins with the user attempting to login into the application by inputting their username and password. These credentials are then authenticated against the existing credentials within the database.
- If the password is valid, they access their user space
- If the password is invalid, they are notified of their credentials being incorrect and are asked to try again.

<p align = "center"><img src = "https://github.com/Hannah-Ashna/SDI-Project/blob/main/Project%20Diagrams/Diagrams/ActivityDiagram%20-%20Login.PNG"></p> 

### Send Message Activity Diagram:
This diagram looks at the flow of activities involved in sending a message. The activity first begins when the user sends a message through the application. Their status is then checked to ensure they are connected to the server. In the case that they are offline, their message is temporarily stored on the database. The process then loops back to the check to see whether they are online yet.  

Once the user's connection is established as being online, the system retrieves any messages that are stored away in the database. A queue of messages to be sent is created and messages are ordered accordingly in a first in, first out fashion. A fork then occurs for several activities to run concurrently; such as notifying the receiver that a new message has been received, updating chat logs and updating the chat itself. Once these are all completed, they merge back to end the 'send message' activity. 

<p align = "center"><img src = "https://github.com/Hannah-Ashna/SDI-Project/blob/main/Project%20Diagrams/Diagrams/ActivityDiagram%20-%20SendMessage.PNG"></p> 
