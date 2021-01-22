### Login Use-Case:
This diagram looks into the process of a user attempting to login into their account on the application. There are two primary use cases here which consider whether a user is a new or returning user.  
If the user is new, they will first be required to create an account and have their crendentials stored in a specific database. If the user is an existing user (hence, a child of a new user), they can use their credentials to log in.
Their credentials are then authenticated against the data stored within the credentials database:
- If the password is valid, they access their user space
- If the password is invalid, they have the option to reset their password

### Send Message Use-Case:
When a user attempts to send a message, the system will first need to validate their connection to ensure that they are online and connected to the server:
- If the user is online:
  - Their message is sent and their chat is updated
  - The contact they are talking to is notified
  - Their chat log file is updated and stored in the database
  
- If the user is offline:
  - Their message is stored within the database temporarily
  - Their connection is then repeatedly checked until they are confirmed to be online
  - Once the user is online, their message is then sent and the following stages mentioned above occur
