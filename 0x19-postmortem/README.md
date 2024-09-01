quirements:

Issue Summary (that is often what executives will read) must contain:
duration of the outage with start and end times (including timezone)
what was the impact (what service was down/slow? What were user experiencing? How many % of the users were affected?)
what was the root cause
Timeline (format bullet point, format: time - keep it short, 1 or 2 sentences) must contain:

when was the issue detected
how was the issue detected (monitoring alert, an engineer noticed something, a customer complained…)
actions taken (what parts of the system were investigated, what were the assumption on the root cause of the issue)
misleading investigation/debugging paths that were taken
which team/individuals was the incident escalated to
how the incident was resolved
Root cause and resolution must contain:

explain in detail what was causing the issue
explain in detail how the issue was fixed
Corrective and preventative measures must contain:

what are the things that can be improved/fixed (broadly speaking)
a list of tasks to address the issue (be very specific, like a TODO, example: patch Nginx server, add monitoring on server memory…)
Be brief and straight to the point, between 400 to 600 words

While postmortem format can vary, stick to this one so that you can get properly reviewed by your peers.

Please, remember that these blogs must be written in English to further your technical ability in a variety of settings.



# My first postmortem 


	# Issue  Summary 
	- The outage lasted for 2 hours(from 20:00 UTC to 22:00 UTC)
	- 12000 users were impacted by the outage
	- The root  of the outage was a configuration change that prevented access bt the login service.


TIMELINE
Below is  atimelineof the activities between 20:00 UTC -22:000 UTC

	#timeline
	. 20:00 : Monitoring system reported sudden spike in error rates during login.
	. 20:02 : ngineering team was alerted to the issue.
	. 20:10 : The team began investigating the issue.
	. 20:20 :  Team realized restaring the login service didn't resolve issue.
	
