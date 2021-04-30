# Explanations & Screenshots of the Diagrams:
### Login Use-Case:
This diagram shows the login process. It assumes that the user is valid and will use their credentials to log in. The credentials introduced by the user are then validated by the database.

<p align = "center"><img src = "https://github.com/Hannah-Ashna/SDI-Project/blob/8145a5d1c644c6eb1cd5129ffa92940a2fb52e00/Project%20Diagrams/SDI/Activity-Login.png"></p> 

### Send Message Use-Case:
A user attempts to send a message, the system will first need to validate their connection to ensure that the target user is online and connected to the broker.  

If the user is online:
  - The source message is sent, and the source chat history is updated
  - The target user is notified, and the target user’s chat history is also updated
  - The chat histories on both ends are updated within the database  
  
If the user is offline:
  - The source message is stored within the database temporarily
  - The source user’s connection is then repeatedly checked until they are confirmed to be online
  - Once the source user is online, their message is then sent to the target user, and the following stages mentioned above occur

<p align = "center"><img src = "https://github.com/Hannah-Ashna/SDI-Project/blob/4062ebbb7d89a2aac79789378dc3664e23cd220f/Project%20Diagrams/SDI/Activity-SendMessage.png"></p> 

### Make Room Use-Case:
The diagram shows the process that occurs when a user makes a new room. The user is assumed to be Admin as by making a room the user becomes that Room’s Admin by default. The new room is made, and the database is updated.  
The Admin then has the option to add users to room and make these users moderators. The Admin can also make channels in the room. Whenever any changes are made the database is updated.  

<p align = "center"><img src = "https://github.com/Hannah-Ashna/SDI-Project/blob/main/Project%20Diagrams/Diagrams/UseCase%20-%20MakeRoom.PNG"></p> 

-------------------------------

### Login Activity Diagram:
In this scenario, the User attempts to login into the application by inputting the User credentials (i.e., Username and Password). The credentials are then authenticated against the existing credentials within the database.  

- If the password is valid, they access their user space
- If the password is invalid, they are notified of their credentials being incorrect and are asked to try again.

<p align = "center"><img src = "https://github.com/Hannah-Ashna/SDI-Project/blob/main/Project%20Diagrams/Diagrams/ActivityDiagram%20-%20Login.PNG"></p> 

### Send Message Activity Diagram:
The activity diagram covers the flow of events required to send a message. The user triggers an event when sending a new message using the application. The source user’s status is validated to ensure they are connected to the broker. If the source user is offline, the message is temporarily stored in the database. The application keeps checking the status of the users every 10 seconds.  

Once the source user's connection is established as being online, the system retrieves any messages that are stored in the database. A queue of messages to be sent is created and messages are ordered accordingly in a first in, first out fashion. A fork then occurs for several activities to run concurrently, such as notifying the target user that a new message has been received, updating chat logs, and updating the chat history itself. Once these are all completed, they merge back to end the 'send message' activity.

<p align = "center"><img src = "https://github.com/Hannah-Ashna/SDI-Project/blob/main/Project%20Diagrams/Diagrams/ActivityDiagram%20-%20SendMessage.PNG"></p> 

### Make Room Activity Diagram:
The activity diagram shows the process that occurs when a user makes a new room. First, the user is promoted to room Admin. The Admin is then given the option to add a user to the room. If they do, they are then given the option to make the user a moderator.  
Regardless of if they make the new user moderator or not, the Admin is given the option of adding a user again, looping back. Once the Admin has finished adding users, they are then given the option to add a channel to the room. If they choose yes, they can add the channel and then the option is given again, the same as when adding users. The database is then updated, and process concludes.  
While the add user and add channel options should not be unique to this process, they are still part of the process for making a new room and should be given immediately. 

<p align = "center"><img src = "https://github.com/Hannah-Ashna/SDI-Project/blob/main/Project%20Diagrams/Diagrams/ActivityDiagram%20-%20MakeRoom.PNG"></p> 


