
# My first postmortem 

![warning-8908707_1280](https://github.com/user-attachments/assets/67663de4-2bf4-45d7-8a19-60dad4af3081)

	# Issue  Summary 
	- The outage lasted for 2 hours(from 20:00 UTC to 22:00 UTC)
	- 12000 users were impacted by the outage
	- The root  of the outage was a configuration change that prevented access bt the login service.


TIMELINE
![ai-generated-9008727_1280](https://github.com/user-attachments/assets/da38326a-5ae4-4d93-a0a3-b9d8b801b002)

Below is  atimelineof the activities between 20:00 UTC -22:000 UTC

	#timeline
	. 20:00: Monitoring system reported sudden spike in error rates during login.
	. 20:02: Engineering team was alerted to the issue.
	. 20:10: The team began investigating the issue.
	. 20:20:  Team realized restaring the login service didn't resolve issue.
	. 20:30: A database issue was suspected.
	. 20:35:Databse was discovered to be experiencing high CPU usage.
	. 20:50:  Database queries were optimized to reduce the CPU usage , no signifficant change
	. 21:00: Matter escalated to the senior engineering team as all attempts failed to restore service.
	. 21:10: The databse administrators noted a chage in the configuration that might have caused the deadlock.
	. 21:20: Team decided to roll back to hte previous configuration.
	. 21.30: Daabase was restarted.
	. 21:35: Login service was restored users were able to login.
	. 22:00: Issue declared resolved by the senior engineering team.


Corrective and preventative measures: To prevent similar incidents from happening in the future.

Conclusion 
the outage and disruption of service was caused by misconfigured database index that resulted in a deadlock and high CPU usage. The incident was resolved by rolling back the configuration change and restarting the database.

