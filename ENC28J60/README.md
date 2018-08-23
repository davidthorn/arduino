# ENC28J60 

So it took me a long time to figure this out but after doing some googling it found out why it was not working.

# CS goes to Port 10 not 8

### 5v to 5v
### GND to GND
### 11 to ST
### 12 to SO
### 13 to SCK
### 10 to CS

You need to change your ip address and gateway ip address in the file:

So for example I wanted my device to have the ip of 192.168.2.111 so I made the myip set to ```{ 192,168,2,111 }```

My gateway is on 192.168.2.1 therefore you would need to add ```{ 192,168,2,1 }``` as the gwip

````cpp
#if STATIC
// ethernet interface ip address
static byte myip[] = { 192,168,1,111 };
// gateway ip address
static byte gwip[] = { 192,168,2,1 };
#endif
```

Dont forget to set the following to 0 if you want to use DHCP

```
#define STATIC 0  // set to 1 to disable DHCP (adjust myip/gwip values below)
```
