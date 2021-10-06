<h1>Must Know Android Facts</h1>

<h2> Activity </h2>
<p> Activity in java is a single screen that represents GUI(Graphical User Interface) with which users can interact in order to do something like dial the phone, view email, etc.

For example, the Facebook start page where you enter your email/phone number and password to log in acts as an activity.</p>

<h2> Adapter </h2>
An adapter in Android acts as a bridge between an AdapterView and the underlying data for that view. The adapter holds the data and sends the data to the adapter view, the view can take the data from the adapter view and shows the data on different views like a spinner, list view, grid view, etc.

<h2> Toast </h2>
Toast is a message that pops up on the screen. It is used to display the message regarding the status of the operation initiated by the user and covers only the expanse of space required for the message while the user’s recent activity remains visible and interactive.

Toast notification automatically fades in and out and it does not accept interaction events.

Syntax:

Toast.makeText(ProjectActivity.this, "Your message here", Toast.LENGTH_LONG).show();

<h2> Coroutines </h2>
The Kotlin team defines coroutines as “lightweight threads”. They are sort of tasks that the actual threads can execute. Coroutines were added to Kotlin in version 1.3 and are based on established concepts from other languages. Kotlin coroutines introduce a new style of concurrency that can be used on Android to simplify async code.

<h2>MVVM </h2>
The separate code layers of MVVM are:
Model: This layer is responsible for the abstraction of the data sources. Model and ViewModel work together to get and save the data.

View: The purpose of this layer is to inform the ViewModel about the user’s action. This layer observes the ViewModel and does not contain any kind of application logic.

ViewModel: It exposes those data streams which are relevant to the View. Moreover, it servers as a link between the Model and the View.
