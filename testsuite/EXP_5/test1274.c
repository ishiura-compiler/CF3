#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = INT8_MIN;
int64_t x42 = INT64_MIN;
volatile int32_t x43 = 791570795;
static volatile int32_t x49 = -1;
int32_t t3 = -224157;
volatile int32_t x89 = -67645693;
int8_t x92 = 1;
int32_t t4 = -14676975;
uint32_t x134 = 15653733U;
static uint64_t x135 = 159245LLU;
static int32_t x171 = INT32_MIN;
int32_t t6 = 1;
static volatile int32_t t7 = 0;
volatile int32_t x249 = INT32_MIN;
uint16_t x296 = 0U;
int8_t x329 = -1;
int32_t x330 = INT32_MIN;
int32_t x333 = INT32_MIN;
static int16_t x336 = 0;
int16_t x347 = INT16_MIN;
static uint64_t x364 = 1LLU;
int16_t x413 = -1;
uint64_t x441 = 663062996943619554LLU;
int32_t x483 = -1;
int64_t x497 = INT64_MAX;
static volatile int64_t t21 = INT64_MAX;
volatile uint64_t x518 = UINT64_MAX;
int16_t x623 = INT16_MIN;
volatile uint32_t t24 = UINT32_MAX;
static int16_t x791 = -1;
int8_t x792 = 11;
static int64_t x946 = INT64_MIN;
int64_t x994 = -1LL;
int32_t x1014 = INT32_MIN;
int32_t t29 = 0;
static uint64_t x1022 = UINT64_MAX;
uint16_t x1025 = 86U;
uint16_t x1026 = 16021U;
uint8_t x1027 = 16U;
static volatile int32_t x1173 = -12002626;
uint8_t x1176 = 7U;
uint16_t x1189 = 12163U;
volatile uint64_t t39 = 52LLU;
static uint64_t x1326 = UINT64_MAX;
int32_t t42 = 187;
volatile int32_t t44 = 22;
static volatile int32_t t45 = INT32_MIN;
int32_t x1539 = INT32_MIN;
static volatile int64_t t52 = 237LL;
int8_t x1652 = 28;
int32_t t55 = INT32_MIN;
static volatile uint16_t x1774 = 14411U;
int32_t t56 = -35304;
int16_t x1806 = 17;
int8_t x1888 = 4;
volatile int32_t t61 = -134;
uint64_t x2056 = 0LLU;
int16_t x2063 = INT16_MIN;
int16_t x2127 = INT16_MIN;
volatile uint16_t x2169 = UINT16_MAX;
volatile uint32_t x2240 = 1U;
uint8_t x2396 = 1U;
int64_t x2602 = INT64_MIN;
int32_t t73 = INT32_MAX;
int8_t x2755 = -1;
uint32_t x2781 = 12615U;
int8_t x2782 = INT8_MAX;
int64_t x2783 = 327309374LL;
volatile int8_t x2856 = 0;
uint8_t x2888 = 14U;
volatile int8_t x2889 = INT8_MIN;
static int16_t x2988 = 1;
int16_t x3138 = INT16_MAX;
static int8_t x3167 = INT8_MIN;
static uint8_t x3312 = 6U;
volatile uint8_t x3359 = 0U;
int32_t x3379 = INT32_MIN;
volatile uint8_t x3380 = 2U;
static int32_t t92 = 498014;
uint8_t x3420 = 2U;
static volatile int32_t t93 = 12041;
uint32_t x3459 = UINT32_MAX;
volatile int8_t x3464 = 1;
int32_t t97 = 0;
volatile int32_t x3479 = INT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x3 = -1;
	uint16_t x4 = 9U;
	static int32_t t0 = 363752;

	t0 = (x1^((x2==x3)>>x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x41 = UINT8_MAX;
	volatile uint16_t x44 = 0U;
	int32_t t1 = -187951;

	t1 = (x41^((x42==x43)>>x44));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x50 = UINT64_MAX;
	static int8_t x51 = INT8_MAX;
	uint32_t x52 = 4U;
	int32_t t2 = -6;

	t2 = (x49^((x50==x51)>>x52));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x53 = UINT16_MAX;
	int32_t x54 = INT32_MIN;
	static int8_t x55 = -1;
	uint32_t x56 = 29U;

	t3 = (x53^((x54==x55)>>x56));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x90 = INT64_MIN;
	int8_t x91 = INT8_MIN;

	t4 = (x89^((x90==x91)>>x92));

	if (t4 != -67645693) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x133 = 43U;
	static uint8_t x136 = 6U;
	static volatile int32_t t5 = -287149;

	t5 = (x133^((x134==x135)>>x136));

	if (t5 != 43) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x169 = 12045U;
	uint16_t x170 = 2890U;
	uint16_t x172 = 1U;

	t6 = (x169^((x170==x171)>>x172));

	if (t6 != 12045) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x201 = -1;
	uint64_t x202 = UINT64_MAX;
	uint16_t x203 = 21U;
	int8_t x204 = 1;

	t7 = (x201^((x202==x203)>>x204));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x250 = INT16_MAX;
	static int64_t x251 = -4LL;
	int8_t x252 = 0;
	volatile int32_t t8 = INT32_MIN;

	t8 = (x249^((x250==x251)>>x252));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x293 = -1;
	int16_t x294 = INT16_MIN;
	int64_t x295 = 16066779LL;
	static int32_t t9 = 259349;

	t9 = (x293^((x294==x295)>>x296));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x301 = INT8_MIN;
	int8_t x302 = -1;
	static uint8_t x303 = 8U;
	uint64_t x304 = 5LLU;
	static volatile int32_t t10 = -85117;

	t10 = (x301^((x302==x303)>>x304));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x331 = -1;
	uint16_t x332 = 3U;
	volatile int32_t t11 = 15635;

	t11 = (x329^((x330==x331)>>x332));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x334 = INT64_MAX;
	volatile int32_t x335 = -3;
	int32_t t12 = INT32_MIN;

	t12 = (x333^((x334==x335)>>x336));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x345 = 447259U;
	uint64_t x346 = 53031668162LLU;
	int8_t x348 = 0;
	volatile uint32_t t13 = 11246U;

	t13 = (x345^((x346==x347)>>x348));

	if (t13 != 447259U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x361 = INT64_MIN;
	int32_t x362 = INT32_MAX;
	uint32_t x363 = UINT32_MAX;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x361^((x362==x363)>>x364));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x381 = INT32_MIN;
	volatile uint64_t x382 = 23462381784420LLU;
	int32_t x383 = INT32_MAX;
	int16_t x384 = 1;
	int32_t t15 = INT32_MIN;

	t15 = (x381^((x382==x383)>>x384));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x414 = 72191279;
	static int8_t x415 = INT8_MIN;
	uint32_t x416 = 0U;
	volatile int32_t t16 = 16785704;

	t16 = (x413^((x414==x415)>>x416));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x442 = -13;
	volatile int8_t x443 = INT8_MAX;
	static uint8_t x444 = 4U;
	uint64_t t17 = 4481647060396500999LLU;

	t17 = (x441^((x442==x443)>>x444));

	if (t17 != 663062996943619554LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x445 = -1;
	uint64_t x446 = 2355500LLU;
	uint8_t x447 = 16U;
	uint8_t x448 = 3U;
	volatile int32_t t18 = 1;

	t18 = (x445^((x446==x447)>>x448));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x465 = UINT8_MAX;
	int8_t x466 = -1;
	int64_t x467 = -1LL;
	volatile int32_t x468 = 4;
	volatile int32_t t19 = -856144;

	t19 = (x465^((x466==x467)>>x468));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x481 = 3;
	volatile int8_t x482 = INT8_MIN;
	uint16_t x484 = 0U;
	static int32_t t20 = 1933179;

	t20 = (x481^((x482==x483)>>x484));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x498 = 28797570U;
	int32_t x499 = INT32_MIN;
	uint16_t x500 = 3U;

	t21 = (x497^((x498==x499)>>x500));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x517 = INT64_MIN;
	int64_t x519 = INT64_MAX;
	uint16_t x520 = 4U;
	volatile int64_t t22 = INT64_MIN;

	t22 = (x517^((x518==x519)>>x520));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x621 = -1LL;
	volatile int32_t x622 = -1;
	static uint16_t x624 = 7U;
	volatile int64_t t23 = 182LL;

	t23 = (x621^((x622==x623)>>x624));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x749 = UINT32_MAX;
	int32_t x750 = 133288564;
	int64_t x751 = -1LL;
	int8_t x752 = 1;

	t24 = (x749^((x750==x751)>>x752));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x789 = 7U;
	int32_t x790 = 16;
	volatile int32_t t25 = 234148;

	t25 = (x789^((x790==x791)>>x792));

	if (t25 != 7) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x925 = 0;
	int16_t x926 = INT16_MIN;
	uint16_t x927 = UINT16_MAX;
	volatile uint8_t x928 = 26U;
	volatile int32_t t26 = -1156176;

	t26 = (x925^((x926==x927)>>x928));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x945 = -1;
	static uint16_t x947 = 694U;
	uint32_t x948 = 0U;
	volatile int32_t t27 = 382357591;

	t27 = (x945^((x946==x947)>>x948));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x993 = INT8_MAX;
	static int32_t x995 = -1;
	uint16_t x996 = 14U;
	static volatile int32_t t28 = 2;

	t28 = (x993^((x994==x995)>>x996));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1013 = 26;
	int64_t x1015 = -1LL;
	static uint16_t x1016 = 1U;

	t29 = (x1013^((x1014==x1015)>>x1016));

	if (t29 != 26) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1021 = 4;
	static volatile uint32_t x1023 = 20U;
	int8_t x1024 = 0;
	volatile int32_t t30 = -233280;

	t30 = (x1021^((x1022==x1023)>>x1024));

	if (t30 != 4) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1028 = 1U;
	volatile int32_t t31 = -387092;

	t31 = (x1025^((x1026==x1027)>>x1028));

	if (t31 != 86) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1065 = INT8_MIN;
	uint32_t x1066 = 3411U;
	int32_t x1067 = INT32_MAX;
	uint8_t x1068 = 7U;
	int32_t t32 = 2247;

	t32 = (x1065^((x1066==x1067)>>x1068));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x1113 = UINT64_MAX;
	int16_t x1114 = INT16_MIN;
	int64_t x1115 = -77099104LL;
	uint8_t x1116 = 0U;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = (x1113^((x1114==x1115)>>x1116));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1137 = -49;
	int32_t x1138 = -3236801;
	int16_t x1139 = INT16_MIN;
	uint32_t x1140 = 8U;
	volatile int32_t t34 = -928189;

	t34 = (x1137^((x1138==x1139)>>x1140));

	if (t34 != -49) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1174 = -1;
	static int32_t x1175 = -27435268;
	int32_t t35 = -1615;

	t35 = (x1173^((x1174==x1175)>>x1176));

	if (t35 != -12002626) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x1190 = INT32_MAX;
	uint32_t x1191 = 54427072U;
	uint8_t x1192 = 0U;
	int32_t t36 = -101;

	t36 = (x1189^((x1190==x1191)>>x1192));

	if (t36 != 12163) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1201 = -6716322574980LL;
	uint64_t x1202 = UINT64_MAX;
	static int16_t x1203 = -111;
	static int16_t x1204 = 0;
	int64_t t37 = -750LL;

	t37 = (x1201^((x1202==x1203)>>x1204));

	if (t37 != -6716322574980LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1217 = -821;
	int8_t x1218 = -1;
	static int8_t x1219 = INT8_MIN;
	int8_t x1220 = 1;
	int32_t t38 = 15;

	t38 = (x1217^((x1218==x1219)>>x1220));

	if (t38 != -821) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1229 = 51038506LLU;
	int8_t x1230 = -59;
	int16_t x1231 = INT16_MIN;
	static uint8_t x1232 = 3U;

	t39 = (x1229^((x1230==x1231)>>x1232));

	if (t39 != 51038506LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1301 = INT64_MIN;
	int32_t x1302 = -174701;
	volatile uint8_t x1303 = 98U;
	uint64_t x1304 = 12LLU;
	volatile int64_t t40 = INT64_MIN;

	t40 = (x1301^((x1302==x1303)>>x1304));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x1305 = 1619360U;
	uint64_t x1306 = 29910670430372LLU;
	uint8_t x1307 = 9U;
	uint16_t x1308 = 15U;
	uint32_t t41 = 30300U;

	t41 = (x1305^((x1306==x1307)>>x1308));

	if (t41 != 1619360U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1325 = INT8_MIN;
	int64_t x1327 = 2905808788227298386LL;
	uint8_t x1328 = 25U;

	t42 = (x1325^((x1326==x1327)>>x1328));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x1357 = -1;
	static int32_t x1358 = 487815184;
	int32_t x1359 = INT32_MIN;
	volatile uint16_t x1360 = 7U;
	int32_t t43 = -47949;

	t43 = (x1357^((x1358==x1359)>>x1360));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x1373 = -1;
	static uint32_t x1374 = UINT32_MAX;
	uint64_t x1375 = 761LLU;
	volatile int8_t x1376 = 0;

	t44 = (x1373^((x1374==x1375)>>x1376));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1389 = INT32_MIN;
	static uint16_t x1390 = 4U;
	volatile int8_t x1391 = 1;
	volatile uint8_t x1392 = 4U;

	t45 = (x1389^((x1390==x1391)>>x1392));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1409 = -61;
	volatile int32_t x1410 = INT32_MIN;
	int32_t x1411 = 47227;
	int8_t x1412 = 10;
	static volatile int32_t t46 = 70871746;

	t46 = (x1409^((x1410==x1411)>>x1412));

	if (t46 != -61) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x1449 = INT64_MIN;
	uint16_t x1450 = UINT16_MAX;
	int8_t x1451 = INT8_MIN;
	volatile uint8_t x1452 = 21U;
	int64_t t47 = INT64_MIN;

	t47 = (x1449^((x1450==x1451)>>x1452));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x1485 = 3849627U;
	uint8_t x1486 = UINT8_MAX;
	volatile int16_t x1487 = INT16_MIN;
	uint8_t x1488 = 3U;
	static uint32_t t48 = 15617U;

	t48 = (x1485^((x1486==x1487)>>x1488));

	if (t48 != 3849627U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1537 = -1;
	volatile int64_t x1538 = INT64_MAX;
	uint8_t x1540 = 9U;
	static int32_t t49 = 3020975;

	t49 = (x1537^((x1538==x1539)>>x1540));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1573 = -1;
	int16_t x1574 = -6603;
	uint64_t x1575 = 1039263283984LLU;
	uint32_t x1576 = 9U;
	int32_t t50 = -171;

	t50 = (x1573^((x1574==x1575)>>x1576));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1577 = -307837265;
	int16_t x1578 = INT16_MIN;
	int8_t x1579 = -12;
	static int8_t x1580 = 1;
	volatile int32_t t51 = -141906228;

	t51 = (x1577^((x1578==x1579)>>x1580));

	if (t51 != -307837265) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x1641 = -1LL;
	int64_t x1642 = -1LL;
	volatile int8_t x1643 = INT8_MIN;
	uint8_t x1644 = 20U;

	t52 = (x1641^((x1642==x1643)>>x1644));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1649 = -1;
	int8_t x1650 = -6;
	int16_t x1651 = -40;
	int32_t t53 = -244;

	t53 = (x1649^((x1650==x1651)>>x1652));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x1701 = -4394;
	volatile int32_t x1702 = INT32_MAX;
	volatile uint64_t x1703 = 349769622LLU;
	static uint8_t x1704 = 0U;
	int32_t t54 = -57;

	t54 = (x1701^((x1702==x1703)>>x1704));

	if (t54 != -4394) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1713 = INT32_MIN;
	int32_t x1714 = -18;
	volatile int16_t x1715 = INT16_MAX;
	uint16_t x1716 = 7U;

	t55 = (x1713^((x1714==x1715)>>x1716));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x1773 = 42U;
	int16_t x1775 = INT16_MIN;
	uint16_t x1776 = 1U;

	t56 = (x1773^((x1774==x1775)>>x1776));

	if (t56 != 42) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x1801 = 1222619020657LLU;
	uint32_t x1802 = 371114U;
	static int32_t x1803 = 15;
	static uint8_t x1804 = 1U;
	uint64_t t57 = 7624665412193766071LLU;

	t57 = (x1801^((x1802==x1803)>>x1804));

	if (t57 != 1222619020657LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1805 = UINT8_MAX;
	int8_t x1807 = -1;
	static int8_t x1808 = 0;
	volatile int32_t t58 = 58;

	t58 = (x1805^((x1806==x1807)>>x1808));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1881 = 1;
	uint8_t x1882 = 1U;
	uint8_t x1883 = 100U;
	uint8_t x1884 = 1U;
	volatile int32_t t59 = -195687;

	t59 = (x1881^((x1882==x1883)>>x1884));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x1885 = 76U;
	uint8_t x1886 = 4U;
	int8_t x1887 = INT8_MIN;
	static int32_t t60 = 1;

	t60 = (x1885^((x1886==x1887)>>x1888));

	if (t60 != 76) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x1941 = 7U;
	uint64_t x1942 = 8280152593291312LLU;
	volatile int16_t x1943 = 67;
	uint8_t x1944 = 1U;

	t61 = (x1941^((x1942==x1943)>>x1944));

	if (t61 != 7) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x1961 = -1;
	uint64_t x1962 = 91280240LLU;
	int16_t x1963 = -1;
	volatile uint8_t x1964 = 1U;
	int32_t t62 = -410;

	t62 = (x1961^((x1962==x1963)>>x1964));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2025 = UINT64_MAX;
	int64_t x2026 = 2LL;
	int32_t x2027 = INT32_MIN;
	uint32_t x2028 = 22U;
	uint64_t t63 = UINT64_MAX;

	t63 = (x2025^((x2026==x2027)>>x2028));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2053 = 95U;
	volatile uint64_t x2054 = UINT64_MAX;
	volatile int64_t x2055 = INT64_MAX;
	int32_t t64 = -9;

	t64 = (x2053^((x2054==x2055)>>x2056));

	if (t64 != 95) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x2061 = INT64_MIN;
	int8_t x2062 = 19;
	uint32_t x2064 = 0U;
	int64_t t65 = INT64_MIN;

	t65 = (x2061^((x2062==x2063)>>x2064));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2125 = UINT64_MAX;
	uint8_t x2126 = 32U;
	uint8_t x2128 = 30U;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x2125^((x2126==x2127)>>x2128));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x2170 = 4U;
	int16_t x2171 = INT16_MAX;
	uint16_t x2172 = 1U;
	static int32_t t67 = 900;

	t67 = (x2169^((x2170==x2171)>>x2172));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2237 = -1;
	uint8_t x2238 = 3U;
	int16_t x2239 = -9358;
	int32_t t68 = -1;

	t68 = (x2237^((x2238==x2239)>>x2240));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2377 = 13825U;
	int16_t x2378 = -1;
	static int32_t x2379 = 200;
	static int8_t x2380 = 1;
	int32_t t69 = -52;

	t69 = (x2377^((x2378==x2379)>>x2380));

	if (t69 != 13825) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2393 = INT16_MAX;
	int64_t x2394 = -1LL;
	int16_t x2395 = 465;
	int32_t t70 = 1;

	t70 = (x2393^((x2394==x2395)>>x2396));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2449 = 1;
	int64_t x2450 = -1LL;
	static int32_t x2451 = INT32_MAX;
	uint16_t x2452 = 0U;
	volatile int32_t t71 = 1;

	t71 = (x2449^((x2450==x2451)>>x2452));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2601 = UINT64_MAX;
	uint32_t x2603 = UINT32_MAX;
	uint16_t x2604 = 8U;
	static uint64_t t72 = UINT64_MAX;

	t72 = (x2601^((x2602==x2603)>>x2604));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x2697 = INT32_MAX;
	volatile int16_t x2698 = INT16_MIN;
	volatile int32_t x2699 = -691;
	static uint16_t x2700 = 15U;

	t73 = (x2697^((x2698==x2699)>>x2700));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x2741 = 49;
	uint16_t x2742 = UINT16_MAX;
	uint64_t x2743 = 35643208455622538LLU;
	static uint8_t x2744 = 1U;
	int32_t t74 = 392;

	t74 = (x2741^((x2742==x2743)>>x2744));

	if (t74 != 49) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x2753 = INT32_MIN;
	int32_t x2754 = INT32_MIN;
	int16_t x2756 = 23;
	int32_t t75 = INT32_MIN;

	t75 = (x2753^((x2754==x2755)>>x2756));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x2765 = INT16_MIN;
	uint32_t x2766 = 1004079U;
	static int8_t x2767 = INT8_MIN;
	int16_t x2768 = 1;
	volatile int32_t t76 = 0;

	t76 = (x2765^((x2766==x2767)>>x2768));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2784 = 8U;
	static volatile uint32_t t77 = 77587U;

	t77 = (x2781^((x2782==x2783)>>x2784));

	if (t77 != 12615U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2805 = 456302LLU;
	static uint32_t x2806 = 100751U;
	volatile uint64_t x2807 = UINT64_MAX;
	uint8_t x2808 = 2U;
	volatile uint64_t t78 = 11442456521LLU;

	t78 = (x2805^((x2806==x2807)>>x2808));

	if (t78 != 456302LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2853 = INT64_MIN;
	int32_t x2854 = 112;
	uint32_t x2855 = 319653251U;
	volatile int64_t t79 = INT64_MIN;

	t79 = (x2853^((x2854==x2855)>>x2856));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x2885 = INT8_MAX;
	uint64_t x2886 = 528804123690718LLU;
	uint32_t x2887 = 364406U;
	static volatile int32_t t80 = 23;

	t80 = (x2885^((x2886==x2887)>>x2888));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2890 = UINT64_MAX;
	uint8_t x2891 = 5U;
	volatile int8_t x2892 = 0;
	static volatile int32_t t81 = -19;

	t81 = (x2889^((x2890==x2891)>>x2892));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x2985 = -9800055LL;
	static int8_t x2986 = 1;
	int64_t x2987 = INT64_MIN;
	int64_t t82 = 482009271498160361LL;

	t82 = (x2985^((x2986==x2987)>>x2988));

	if (t82 != -9800055LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3137 = -1;
	uint32_t x3139 = 6013366U;
	static int8_t x3140 = 0;
	volatile int32_t t83 = -1295015;

	t83 = (x3137^((x3138==x3139)>>x3140));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3165 = 45U;
	int8_t x3166 = INT8_MIN;
	volatile uint16_t x3168 = 11U;
	int32_t t84 = -20649;

	t84 = (x3165^((x3166==x3167)>>x3168));

	if (t84 != 45) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x3229 = INT64_MAX;
	static uint32_t x3230 = 2375U;
	uint8_t x3231 = 16U;
	uint8_t x3232 = 2U;
	int64_t t85 = INT64_MAX;

	t85 = (x3229^((x3230==x3231)>>x3232));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3261 = -1LL;
	volatile int64_t x3262 = INT64_MIN;
	volatile int16_t x3263 = -1;
	uint8_t x3264 = 5U;
	int64_t t86 = -300295032901LL;

	t86 = (x3261^((x3262==x3263)>>x3264));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x3273 = 579U;
	int32_t x3274 = -1296828;
	static int16_t x3275 = INT16_MIN;
	uint16_t x3276 = 14U;
	static int32_t t87 = 2622;

	t87 = (x3273^((x3274==x3275)>>x3276));

	if (t87 != 579) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x3309 = INT64_MIN;
	volatile uint8_t x3310 = 41U;
	uint16_t x3311 = 20U;
	volatile int64_t t88 = INT64_MIN;

	t88 = (x3309^((x3310==x3311)>>x3312));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x3325 = 31218U;
	int16_t x3326 = -734;
	volatile uint8_t x3327 = UINT8_MAX;
	int16_t x3328 = 15;
	volatile int32_t t89 = 7675;

	t89 = (x3325^((x3326==x3327)>>x3328));

	if (t89 != 31218) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x3357 = 5534999LLU;
	int16_t x3358 = INT16_MIN;
	static uint8_t x3360 = 15U;
	uint64_t t90 = 1315613266313807113LLU;

	t90 = (x3357^((x3358==x3359)>>x3360));

	if (t90 != 5534999LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3365 = INT64_MAX;
	volatile int32_t x3366 = INT32_MAX;
	uint32_t x3367 = 125900U;
	static uint16_t x3368 = 28U;
	int64_t t91 = INT64_MAX;

	t91 = (x3365^((x3366==x3367)>>x3368));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3377 = 1;
	static uint32_t x3378 = UINT32_MAX;

	t92 = (x3377^((x3378==x3379)>>x3380));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3417 = INT8_MIN;
	uint32_t x3418 = UINT32_MAX;
	int16_t x3419 = INT16_MIN;

	t93 = (x3417^((x3418==x3419)>>x3420));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x3421 = INT32_MIN;
	static uint8_t x3422 = UINT8_MAX;
	int16_t x3423 = -2;
	uint8_t x3424 = 0U;
	int32_t t94 = INT32_MIN;

	t94 = (x3421^((x3422==x3423)>>x3424));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3457 = 28U;
	volatile uint64_t x3458 = UINT64_MAX;
	uint8_t x3460 = 12U;
	static volatile int32_t t95 = -569;

	t95 = (x3457^((x3458==x3459)>>x3460));

	if (t95 != 28) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3461 = INT8_MAX;
	volatile int8_t x3462 = -1;
	static int64_t x3463 = 790617710LL;
	int32_t t96 = -1941720;

	t96 = (x3461^((x3462==x3463)>>x3464));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x3465 = 100U;
	static uint16_t x3466 = 1982U;
	int32_t x3467 = INT32_MIN;
	static int16_t x3468 = 1;

	t97 = (x3465^((x3466==x3467)>>x3468));

	if (t97 != 100) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3477 = -28;
	volatile uint8_t x3478 = UINT8_MAX;
	uint64_t x3480 = 3LLU;
	volatile int32_t t98 = -86444988;

	t98 = (x3477^((x3478==x3479)>>x3480));

	if (t98 != -28) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x3497 = -1;
	int16_t x3498 = -1;
	uint64_t x3499 = UINT64_MAX;
	static uint16_t x3500 = 7U;
	volatile int32_t t99 = -19680202;

	t99 = (x3497^((x3498==x3499)>>x3500));

	if (t99 != -1) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

