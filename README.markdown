# Hackathon Management System

## About
The Hackathon Management System is a C++ application designed to streamline the organization and management of hackathons. Developed as part of an academic project at École Nationale d'Ingénieurs de Carthage (ENICarthage), it provides a modular, object-oriented solution for managing participants, judges, organizers, teams, projects, and sponsors. The system supports key functionalities like registration, team formation, project evaluation, and communication, ensuring an efficient and user-friendly experience for all stakeholders.

## Objectives
1. **Streamline Hackathon Operations**: Automate processes like participant registration, team management, and project evaluation.
2. **Enhance User Experience**: Provide intuitive interfaces for participants, judges, and organizers.
3. **Ensure Modularity**: Use object-oriented programming to create a scalable and maintainable codebase.
4. **Support Collaboration**: Facilitate communication and coordination among hackathon stakeholders.

## Features
- **Participant Management**:
  - Register participants with details like name, email, age, and skills.
  - Modify or delete participant information.
  - Store participant data in files for persistence.
- **Team Management**:
  - Create and manage teams with up to five members.
  - Assign team leaders and track member details.
- **Project Management**:
  - Support for technological and design projects with specific attributes (e.g., technologies used, design concepts).
  - Allow judges to assign scores and calculate final rankings.
- **Judge and Organizer Management**:
  - Register judges with expertise domains and organizers with specific tasks.
  - Modify or remove judge/organizer details.
- **Sponsor Management**:
  - Track sponsor details, including sponsorship amounts and products.
  - Add or remove sponsored products.
- **Communication**:
  - Send and view messages with date tracking.
- **Execution Flow**:
  - Interactive menus for creating hackathons, registering users, evaluating projects, and displaying winners.
  - File-based data storage for participants and messages.

## Technologies
- **Language**: C++ (Object-Oriented Programming)
- **Tools**:
  - Code::Blocks or Visual Studio Code (code editor)
  - StarUML (UML modeling for use case and class diagrams)
- **Development Environment**: Windows 11

## Installation
1. **Prerequisites**:
   - C++ compiler (e.g., g++ or MinGW)
   - Standard C++ libraries
2. **Setup**:
   - Clone the repository: `git clone https://github.com/yourusername/hackathon-management.git`
   - Navigate to the project directory: `cd hackathon-management`
3. **Compile and Run**:
   - Compile the source files: `g++ *.cpp -o hackathon`
   - Run the executable: `./hackathon` (Windows: `hackathon.exe`)
4. **File Setup**:
   - Ensure write permissions for file operations (e.g., participant and message storage).
   - The system creates and manages text files for data persistence.

## Project Structure
- `src/`:
  - `Personne.h/cpp`: Base class for all individuals (participants, judges, organizers).
  - `Participant.h/cpp`: Manages participant details and skills.
  - `Juge.h/cpp`: Handles judge information and project evaluation.
  - `Organisateur.h/cpp`: Manages organizer tasks.
  - `Equipe.h/cpp`: Team management with member and leader assignments.
  - `Projet.h/cpp`: Base class for projects (technological and design).
  - `Projet_technologique.h/cpp`: Technological project specifics.
  - `Projet_design.h/cpp`: Design project specifics.
  - `Sponsor.h/cpp`: Sponsor details and product management.
  - `Message.h/cpp`: Communication functionality.
  - `Hackathon.h/cpp`: Core hackathon management logic.
- `diagrams/`: UML diagrams (use case, class, etc.).
- `docs/`: Project report and documentation.

## Usage
1. **Run the Program**:
   - Launch the executable to access the main menu.
2. **Main Menu Options**:
   - Create a hackathon.
   - Register as a participant, judge, or organizer.
   - Join or manage teams and projects.
   - Evaluate projects (judges) or manage sponsors (organizers).
   - Send messages or view winners.
3. **Example Operations**:
   - Register a participant: Enter name, email, age, and skills.
   - Create a team: Assign a name and add up to five members.
   - Evaluate a project: Judges assign scores (0-20) to calculate final rankings.
   - Add a sponsor: Input sponsor name, email, phone, and sponsorship amount.

## Key Components
- **Classes**:
  - `Personne`: Abstract base class for individuals with attributes like ID, name, and email.
  - `Participant`, `Juge`, `Organisateur`: Derived classes with specific attributes (e.g., skills, expertise, tasks).
  - `Equipe`: Manages teams with members and leaders.
  - `Projet`, `Projet_technologique`, `Projet_design`: Handle project details and evaluations.
  - `Sponsor`: Tracks sponsorship details.
  - `Message`, `Date`: Support communication and date tracking.
  - `Hackathon`: Orchestrates the entire event.
- **File Operations**:
  - Store participant and message data in text files.
  - Functions to open, write, read, and clear files.
- **UML Diagrams**:
  - Use case diagram for user interactions.
  - Class diagram for system structure.

## Recommendations
1. **Security**: Add input validation to prevent invalid data entries.
2. **UI Enhancements**: Integrate a graphical interface using libraries like Qt.
3. **Database Integration**: Replace file storage with a database (e.g., SQLite) for better scalability.
4. **Internationalization**: Support multiple languages for global use.

## Limitations
- **Text-Based Interface**: Lacks a graphical user interface.
- **File-Based Storage**: Limited scalability for large datasets.
- **Single-Threaded**: No support for concurrent operations.

## Future Improvements
- Develop a web-based version using C++ frameworks like Crow.
- Add real-time notifications for participants and organizers.
- Implement advanced analytics for project performance.
- Support cloud-based storage for data persistence.

## Contributors
- **Mahdi TOUMI**: Lead developer, system design, and implementation.
- **Hadil TRABELSI**: Co-developer, system design, and testing.

## License
This project is licensed under the MIT License. See the `LICENSE` file for details.

## Acknowledgments
Developed as part of a C++ project for the Computer Engineering Department at ENICarthage during the 2023/2024 academic year. Special thanks to the faculty and peers for their support and feedback.