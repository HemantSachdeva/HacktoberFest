<h1>Kotlin Coroutines</h1>

<h2>Why we need coroutines?</h2>
<p>As we know android developers today have many async tools in hand. These include RxJava, AsyncTasks, Jobs, Threads. So why there is a need to learn something new?

While Using Rx, it requires a lot of effort to get it enough, to use it safely. On the Other hand, AsyncTasks and threads can easily introduce leaks and memory overhead. Even using these tools after so many disadvantages, the code can suffer from callbacks, which can introduce tons of extra code. Not only that, but the code also becomes unreadable as it has many callbacks which ultimately slow down or hang the device leading to poor user experience.
Android is a single thread platform, By default, everything runs on the main thread. In Android, almost every application needs to perform some non UI operations like (Network call, I/O operations), so when coroutines concept is not introduced, what is done is that programmer dedicate this task to different threads, each thread executes the task given to it, when the task is completed, they return the result to UI thread to update the changes required. Though In android there is a detailed procedure given, about how to perform this task in an effective way using best practices using threads, this procedure includes lots of callbacks for passing the result among threads, which ultimately introduce tons of code in our application and the waiting time to get the result back to increases.
On Android, Every app has a main thread (which handles all the UI operations like drawing views and other user interactions. If there is too much work happening on this main thread, like network calls (eg fetching a web page), the apps will appear to hang or slow down leading to poor user experience.
Kotlin Coroutines Features
Coroutines is the recommended solution for asynchronous programming on Android. Some highlighted features of coroutines are given below.

Lightweight: One can run many coroutines on a single thread due to support for suspension, which doesn’t block the thread where the coroutine is running. Suspending frees memory over blocking while supporting multiple concurrent operations.
Built-in cancellation support: Cancellation is generated automatically through the running coroutine hierarchy.
Fewer memory leaks: It uses structured concurrency to run operations within a scope.
Jetpack integration: Many Jetpack libraries include extensions that provide full coroutines support. Some libraries also provide their own coroutine scope that one can use for structured concurrency.
Kotlin Coroutines vs Threads
Fetching the data from one thread and passing it to another thread takes a lot of time. It also introduces lots of callbacks, leading to less readability of code. On the other hand, coroutines eliminate callbacks.
Creating and stopping a thread is an expensive job, as it involves creating their own stacks.,whereas creating coroutines is very cheap when compared to the performance it offers. coroutines do not have their own stack.
Threads are blocking, whereas coroutines are suspendable. By blocking it means that when a thread sleeps for some duration, the entire threads get blocked, it cannot do any other operation, whereas since coroutines are suspendable, so when they are delayed for some seconds, they can perform any other work.
Coroutines offer a very high level of concurrency as compared to threads, as multiple threads involve blocking and context switching. Context switching with threads is slower as compared to coroutines, as with threads context can only be switched when the job of 1 thread gets over, but with coroutines, they can change context any time, as they are suspendable.
Coroutines are light and super fast. Coroutines are faster than threads, as threads are managed by Operating System, whereas coroutines are managed by users. Having thousands of coroutines working together are much better than having tens of threads working together.</p>
