#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x21 = -1LL;
int64_t t0 = 1LL;
static uint8_t x52 = 0U;
volatile int32_t x103 = INT32_MAX;
uint8_t x104 = 23U;
volatile uint32_t t2 = 42U;
volatile int32_t x144 = 1;
static int8_t x184 = 12;
int8_t x193 = -3;
uint8_t x244 = 11U;
int8_t x248 = 0;
volatile int32_t t10 = -25258;
uint16_t x497 = UINT16_MAX;
uint64_t x549 = 116754212496LLU;
volatile uint16_t x599 = UINT16_MAX;
static int64_t x603 = 7LL;
int64_t x635 = 4558436422910227686LL;
int64_t t16 = 272262830740450LL;
uint16_t x962 = UINT16_MAX;
static volatile int64_t t20 = 9184887659745794LL;
int16_t x1002 = -5;
int8_t x1003 = 8;
volatile int32_t t21 = 5751;
int32_t x1036 = 0;
uint64_t t22 = 1615141381322700LLU;
static volatile uint8_t x1042 = UINT8_MAX;
uint8_t x1043 = 1U;
uint8_t x1079 = UINT8_MAX;
int32_t x1222 = 312;
uint8_t x1297 = 1U;
volatile uint64_t x1335 = 332292895101LLU;
uint16_t x1498 = 464U;
volatile int32_t t30 = -15514;
int16_t x1799 = 1556;
int8_t x1801 = 15;
uint64_t x1803 = 0LLU;
uint64_t x1875 = 53523908182193LLU;
volatile int64_t x1876 = 1LL;
uint64_t t36 = 1762341795211026LLU;
static uint32_t x1899 = 5U;
uint32_t t37 = 30U;
int8_t x1976 = 1;
uint64_t t40 = 809540170136910LLU;
uint64_t x2054 = 5521LLU;
uint8_t x2110 = 58U;
int16_t x2205 = -202;
uint8_t x2207 = 0U;
int16_t x2236 = 63;
uint32_t x2270 = 11987404U;
int8_t x2441 = -1;
uint8_t x2524 = 0U;
uint64_t x2553 = 4311010523042LLU;
uint32_t x2554 = 5U;
uint8_t x2556 = 0U;
int8_t x2664 = 11;
uint64_t x2679 = 2070104327103120903LLU;
static volatile int64_t x2701 = INT64_MAX;
static uint8_t x2703 = 1U;
static int64_t t57 = 4654747871627LL;
uint32_t x2774 = 5224729U;
int32_t x2889 = -1;
int16_t x3181 = INT16_MAX;
static volatile uint64_t x3370 = 27384893103220706LLU;
volatile int32_t x3375 = INT32_MAX;
int64_t x3606 = -98691729LL;
int16_t x3608 = 1;
uint8_t x3623 = 1U;
static uint32_t x3803 = 803U;
int32_t x3804 = 1;
uint64_t x3808 = 2LLU;
volatile uint64_t t69 = 2315581LLU;
int8_t x3838 = 15;
uint32_t x3840 = 3U;
uint16_t x4003 = UINT16_MAX;
volatile uint8_t x4004 = 20U;
volatile uint64_t t73 = 1LLU;
volatile int64_t t74 = 30021LL;
int16_t x4134 = 1;
int8_t x4136 = 16;
static volatile uint64_t t76 = 38554682LLU;
uint64_t x4252 = 24LLU;
int64_t x4300 = 47LL;
uint8_t x4368 = 11U;
uint16_t x4437 = UINT16_MAX;
uint32_t x4471 = UINT32_MAX;
uint8_t x4472 = 9U;
static int64_t x4491 = INT64_MAX;
static volatile uint32_t t86 = 107527U;
volatile int64_t x4549 = -1LL;
static volatile uint8_t x4550 = 24U;
static volatile uint16_t x4552 = 7U;
volatile uint16_t x4570 = 2U;
int16_t x4612 = 25;
int16_t x4660 = 19;
static volatile uint64_t x4664 = 0LLU;
static uint32_t x4702 = 48U;
int8_t x4708 = 21;
volatile uint64_t x4777 = UINT64_MAX;
int16_t x4839 = 1;
uint64_t t97 = 5995385972995143810LLU;
volatile int8_t x4942 = -1;
uint16_t x4943 = 191U;
static volatile int32_t t99 = 224;


void f0(void) {
	static int32_t x22 = INT32_MIN;
	volatile uint16_t x23 = UINT16_MAX;
	int32_t x24 = 1;

	t0 = ((x21&x22)-(x23>>x24));

	if (t0 != -2147516415LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x49 = -2;
	int32_t x50 = -95261236;
	volatile uint32_t x51 = 20U;
	uint32_t t1 = 197852U;

	t1 = ((x49&x50)-(x51>>x52));

	if (t1 != 4199706040U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x101 = UINT16_MAX;
	uint32_t x102 = UINT32_MAX;

	t2 = ((x101&x102)-(x103>>x104));

	if (t2 != 65280U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x141 = -11;
	int16_t x142 = INT16_MIN;
	uint64_t x143 = 1229410LLU;
	static volatile uint64_t t3 = 23LLU;

	t3 = ((x141&x142)-(x143>>x144));

	if (t3 != 18446744073708904143LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x181 = -50;
	volatile uint16_t x182 = 18566U;
	uint64_t x183 = 62556514LLU;
	static volatile uint64_t t4 = 2165469LLU;

	t4 = ((x181&x182)-(x183>>x184));

	if (t4 != 3294LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x194 = INT32_MIN;
	uint32_t x195 = 4492U;
	uint8_t x196 = 4U;
	uint32_t t5 = 1U;

	t5 = ((x193&x194)-(x195>>x196));

	if (t5 != 2147483368U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x241 = 0U;
	volatile uint64_t x242 = UINT64_MAX;
	uint64_t x243 = 410321178855528LLU;
	volatile uint64_t t6 = 421283738LLU;

	t6 = ((x241&x242)-(x243>>x244));

	if (t6 != 18446743873357413503LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x245 = 3;
	int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MAX;
	volatile int32_t t7 = -664590;

	t7 = ((x245&x246)-(x247>>x248));

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x277 = 164837729332494LL;
	int16_t x278 = INT16_MAX;
	uint8_t x279 = UINT8_MAX;
	volatile int16_t x280 = 2;
	volatile int64_t t8 = 56827618LL;

	t8 = ((x277&x278)-(x279>>x280));

	if (t8 != 27855LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x377 = 24590639037LLU;
	static uint32_t x378 = UINT32_MAX;
	volatile int32_t x379 = 1273;
	static int8_t x380 = 1;
	uint64_t t9 = 1066903103LLU;

	t9 = ((x377&x378)-(x379>>x380));

	if (t9 != 3115801921LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x393 = INT8_MAX;
	int8_t x394 = INT8_MIN;
	volatile uint8_t x395 = 4U;
	uint16_t x396 = 15U;

	t10 = ((x393&x394)-(x395>>x396));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x498 = 0U;
	static uint16_t x499 = UINT16_MAX;
	uint32_t x500 = 3U;
	int32_t t11 = -147828;

	t11 = ((x497&x498)-(x499>>x500));

	if (t11 != -8191) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x550 = -1LL;
	uint8_t x551 = UINT8_MAX;
	static uint8_t x552 = 0U;
	uint64_t t12 = 3LLU;

	t12 = ((x549&x550)-(x551>>x552));

	if (t12 != 116754212241LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x597 = UINT8_MAX;
	int16_t x598 = -14987;
	static int8_t x600 = 4;
	int32_t t13 = 12710379;

	t13 = ((x597&x598)-(x599>>x600));

	if (t13 != -3978) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x601 = UINT32_MAX;
	uint32_t x602 = 216U;
	static uint16_t x604 = 10U;
	static volatile int64_t t14 = 14619LL;

	t14 = ((x601&x602)-(x603>>x604));

	if (t14 != 216LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x633 = INT8_MAX;
	uint8_t x634 = 104U;
	uint16_t x636 = 1U;
	volatile int64_t t15 = -1763022844720073446LL;

	t15 = ((x633&x634)-(x635>>x636));

	if (t15 != -2279218211455113739LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x789 = INT32_MIN;
	volatile int64_t x790 = 196LL;
	static int32_t x791 = 39681;
	uint8_t x792 = 0U;

	t16 = ((x789&x790)-(x791>>x792));

	if (t16 != -39681LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x809 = 123U;
	static int8_t x810 = INT8_MIN;
	int64_t x811 = 62318LL;
	int8_t x812 = 13;
	int64_t t17 = -39728600668842845LL;

	t17 = ((x809&x810)-(x811>>x812));

	if (t17 != -7LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x853 = -334498;
	volatile int8_t x854 = INT8_MIN;
	int64_t x855 = 286LL;
	int16_t x856 = 0;
	volatile int64_t t18 = 18422LL;

	t18 = ((x853&x854)-(x855>>x856));

	if (t18 != -334878LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x961 = -18;
	static int16_t x963 = 1;
	static int32_t x964 = 11;
	int32_t t19 = 415515638;

	t19 = ((x961&x962)-(x963>>x964));

	if (t19 != 65518) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x993 = 381386157100636LL;
	uint16_t x994 = 1U;
	uint8_t x995 = 4U;
	uint8_t x996 = 1U;

	t20 = ((x993&x994)-(x995>>x996));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1001 = 0;
	static int8_t x1004 = 2;

	t21 = ((x1001&x1002)-(x1003>>x1004));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1033 = 1096860859846073LLU;
	uint8_t x1034 = 90U;
	uint64_t x1035 = 1942608119760LLU;

	t22 = ((x1033&x1034)-(x1035>>x1036));

	if (t22 != 18446742131101431880LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1041 = -1;
	int8_t x1044 = 1;
	static volatile int32_t t23 = 0;

	t23 = ((x1041&x1042)-(x1043>>x1044));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1077 = -44;
	int32_t x1078 = INT32_MIN;
	int16_t x1080 = 11;
	static int32_t t24 = INT32_MIN;

	t24 = ((x1077&x1078)-(x1079>>x1080));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1149 = INT8_MIN;
	int32_t x1150 = INT32_MAX;
	static uint8_t x1151 = UINT8_MAX;
	int8_t x1152 = 9;
	int32_t t25 = 1328789;

	t25 = ((x1149&x1150)-(x1151>>x1152));

	if (t25 != 2147483520) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1221 = INT16_MAX;
	static volatile uint32_t x1223 = UINT32_MAX;
	uint16_t x1224 = 1U;
	uint32_t t26 = 1110U;

	t26 = ((x1221&x1222)-(x1223>>x1224));

	if (t26 != 2147483961U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1298 = -1;
	static uint64_t x1299 = 286216577LLU;
	volatile int32_t x1300 = 1;
	volatile uint64_t t27 = 5568LLU;

	t27 = ((x1297&x1298)-(x1299>>x1300));

	if (t27 != 18446744073566443329LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x1333 = 1;
	int64_t x1334 = INT64_MAX;
	uint8_t x1336 = 0U;
	volatile uint64_t t28 = 116046070881141862LLU;

	t28 = ((x1333&x1334)-(x1335>>x1336));

	if (t28 != 18446743741416656516LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1497 = -1;
	volatile int8_t x1499 = INT8_MAX;
	int8_t x1500 = 8;
	static int32_t t29 = 71;

	t29 = ((x1497&x1498)-(x1499>>x1500));

	if (t29 != 464) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1625 = -1;
	static int8_t x1626 = -10;
	volatile int16_t x1627 = INT16_MAX;
	uint32_t x1628 = 15U;

	t30 = ((x1625&x1626)-(x1627>>x1628));

	if (t30 != -10) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1729 = -1;
	int16_t x1730 = INT16_MIN;
	volatile uint64_t x1731 = UINT64_MAX;
	uint16_t x1732 = 2U;
	uint64_t t31 = 225445796310LLU;

	t31 = ((x1729&x1730)-(x1731>>x1732));

	if (t31 != 13835058055282130945LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1797 = INT8_MIN;
	uint8_t x1798 = 8U;
	volatile int32_t x1800 = 0;
	static int32_t t32 = 913296460;

	t32 = ((x1797&x1798)-(x1799>>x1800));

	if (t32 != -1556) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1802 = 485927417LL;
	int8_t x1804 = 31;
	volatile uint64_t t33 = 150235529371LLU;

	t33 = ((x1801&x1802)-(x1803>>x1804));

	if (t33 != 9LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1813 = 7824060;
	int8_t x1814 = INT8_MIN;
	uint32_t x1815 = 40U;
	volatile uint16_t x1816 = 4U;
	static volatile uint32_t t34 = 4068U;

	t34 = ((x1813&x1814)-(x1815>>x1816));

	if (t34 != 7823998U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1825 = INT16_MAX;
	static int8_t x1826 = -1;
	uint16_t x1827 = 15U;
	static uint32_t x1828 = 7U;
	volatile int32_t t35 = -1;

	t35 = ((x1825&x1826)-(x1827>>x1828));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1873 = INT32_MIN;
	volatile int8_t x1874 = 0;

	t36 = ((x1873&x1874)-(x1875>>x1876));

	if (t36 != 18446717311755460520LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1897 = 6552;
	volatile int16_t x1898 = 329;
	volatile uint8_t x1900 = 6U;

	t37 = ((x1897&x1898)-(x1899>>x1900));

	if (t37 != 264U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1937 = 0U;
	volatile int64_t x1938 = 326633584548117114LL;
	static uint8_t x1939 = UINT8_MAX;
	volatile int8_t x1940 = 1;
	int64_t t38 = -946699166005733LL;

	t38 = ((x1937&x1938)-(x1939>>x1940));

	if (t38 != -127LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1973 = INT64_MIN;
	uint64_t x1974 = 16110748LLU;
	uint64_t x1975 = 5900602830984235LLU;
	volatile uint64_t t39 = 969193053LLU;

	t39 = ((x1973&x1974)-(x1975>>x1976));

	if (t39 != 18443793772294059499LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1985 = INT8_MIN;
	static int32_t x1986 = INT32_MIN;
	uint64_t x1987 = 67427154LLU;
	volatile uint16_t x1988 = 2U;

	t40 = ((x1985&x1986)-(x1987>>x1988));

	if (t40 != 18446744071545211180LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2053 = 14134U;
	volatile uint8_t x2055 = UINT8_MAX;
	volatile uint8_t x2056 = 0U;
	volatile uint64_t t41 = 3453859841304689181LLU;

	t41 = ((x2053&x2054)-(x2055>>x2056));

	if (t41 != 5137LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2085 = INT8_MIN;
	uint32_t x2086 = UINT32_MAX;
	static int16_t x2087 = 2;
	static uint8_t x2088 = 18U;
	uint32_t t42 = 9U;

	t42 = ((x2085&x2086)-(x2087>>x2088));

	if (t42 != 4294967168U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2109 = -1;
	static uint64_t x2111 = 15LLU;
	uint8_t x2112 = 1U;
	static uint64_t t43 = 35893022073760LLU;

	t43 = ((x2109&x2110)-(x2111>>x2112));

	if (t43 != 51LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2149 = 32;
	volatile int16_t x2150 = -1819;
	int64_t x2151 = 42007921685193295LL;
	uint16_t x2152 = 50U;
	int64_t t44 = -76441LL;

	t44 = ((x2149&x2150)-(x2151>>x2152));

	if (t44 != -5LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2206 = INT8_MIN;
	uint8_t x2208 = 0U;
	volatile int32_t t45 = 523585;

	t45 = ((x2205&x2206)-(x2207>>x2208));

	if (t45 != -256) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2233 = INT32_MAX;
	static uint8_t x2234 = 17U;
	int64_t x2235 = 745314507626256LL;
	volatile int64_t t46 = -1LL;

	t46 = ((x2233&x2234)-(x2235>>x2236));

	if (t46 != 17LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2245 = 815LL;
	static int32_t x2246 = -250324;
	static int64_t x2247 = INT64_MAX;
	int16_t x2248 = 0;
	volatile int64_t t47 = 54824578LL;

	t47 = ((x2245&x2246)-(x2247>>x2248));

	if (t47 != -9223372036854775251LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2269 = 24656684LLU;
	int32_t x2271 = INT32_MAX;
	uint8_t x2272 = 3U;
	uint64_t t48 = 38199304081796029LLU;

	t48 = ((x2269&x2270)-(x2271>>x2272));

	if (t48 != 18446744073444272397LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x2377 = INT8_MAX;
	int32_t x2378 = INT32_MAX;
	uint8_t x2379 = 57U;
	uint32_t x2380 = 0U;
	int32_t t49 = 827905307;

	t49 = ((x2377&x2378)-(x2379>>x2380));

	if (t49 != 70) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2442 = 3U;
	static uint32_t x2443 = 1U;
	uint8_t x2444 = 9U;
	uint32_t t50 = 183U;

	t50 = ((x2441&x2442)-(x2443>>x2444));

	if (t50 != 3U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2521 = 5U;
	int8_t x2522 = -4;
	int16_t x2523 = 27;
	volatile int32_t t51 = -4501042;

	t51 = ((x2521&x2522)-(x2523>>x2524));

	if (t51 != -23) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2555 = INT32_MAX;
	volatile uint64_t t52 = 2789591831LLU;

	t52 = ((x2553&x2554)-(x2555>>x2556));

	if (t52 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2605 = 2U;
	volatile int64_t x2606 = -1LL;
	int64_t x2607 = INT64_MAX;
	int8_t x2608 = 6;
	int64_t t53 = -7400530034695LL;

	t53 = ((x2605&x2606)-(x2607>>x2608));

	if (t53 != -144115188075855869LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2661 = 1244127LL;
	int16_t x2662 = INT16_MIN;
	uint16_t x2663 = 777U;
	int64_t t54 = 79LL;

	t54 = ((x2661&x2662)-(x2663>>x2664));

	if (t54 != 1212416LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x2677 = 1743626U;
	volatile uint64_t x2678 = UINT64_MAX;
	volatile int8_t x2680 = 5;
	uint64_t t55 = 91104LLU;

	t55 = ((x2677&x2678)-(x2679>>x2680));

	if (t55 != 18382053313489322714LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2693 = INT64_MIN;
	int8_t x2694 = INT8_MIN;
	int16_t x2695 = INT16_MAX;
	volatile int8_t x2696 = 30;
	volatile int64_t t56 = INT64_MIN;

	t56 = ((x2693&x2694)-(x2695>>x2696));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2702 = 0;
	uint64_t x2704 = 1LLU;

	t57 = ((x2701&x2702)-(x2703>>x2704));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2773 = -434;
	static volatile uint8_t x2775 = UINT8_MAX;
	int8_t x2776 = 2;
	volatile uint32_t t58 = 75U;

	t58 = ((x2773&x2774)-(x2775>>x2776));

	if (t58 != 5224393U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2890 = 269;
	uint16_t x2891 = 691U;
	static uint32_t x2892 = 1U;
	volatile int32_t t59 = 1;

	t59 = ((x2889&x2890)-(x2891>>x2892));

	if (t59 != -76) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3069 = INT16_MAX;
	int16_t x3070 = -1;
	uint64_t x3071 = 7992729458109LLU;
	uint16_t x3072 = 3U;
	uint64_t t60 = 187115435LLU;

	t60 = ((x3069&x3070)-(x3071>>x3072));

	if (t60 != 18446743074618402120LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3182 = 14U;
	volatile uint8_t x3183 = UINT8_MAX;
	uint32_t x3184 = 0U;
	volatile int32_t t61 = 65681;

	t61 = ((x3181&x3182)-(x3183>>x3184));

	if (t61 != -241) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3369 = 1;
	static int8_t x3371 = 5;
	static uint64_t x3372 = 1LLU;
	uint64_t t62 = 184358509173LLU;

	t62 = ((x3369&x3370)-(x3371>>x3372));

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x3373 = 111088;
	uint64_t x3374 = UINT64_MAX;
	uint8_t x3376 = 2U;
	static uint64_t t63 = 7248073822LLU;

	t63 = ((x3373&x3374)-(x3375>>x3376));

	if (t63 != 18446744073172791793LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3529 = 12LLU;
	volatile uint8_t x3530 = UINT8_MAX;
	uint64_t x3531 = 484122270LLU;
	int8_t x3532 = 1;
	uint64_t t64 = 264814094LLU;

	t64 = ((x3529&x3530)-(x3531>>x3532));

	if (t64 != 18446744073467490493LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3605 = 5U;
	uint32_t x3607 = 3U;
	int64_t t65 = -286681LL;

	t65 = ((x3605&x3606)-(x3607>>x3608));

	if (t65 != 4LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3621 = UINT8_MAX;
	static volatile int64_t x3622 = -1LL;
	uint8_t x3624 = 0U;
	static volatile int64_t t66 = -1742895735LL;

	t66 = ((x3621&x3622)-(x3623>>x3624));

	if (t66 != 254LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3677 = INT32_MAX;
	int32_t x3678 = -1;
	uint64_t x3679 = UINT64_MAX;
	int16_t x3680 = 21;
	volatile uint64_t t67 = 209192LLU;

	t67 = ((x3677&x3678)-(x3679>>x3680));

	if (t67 != 18446735279764013056LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x3801 = INT64_MAX;
	int64_t x3802 = -1LL;
	volatile int64_t t68 = -36480190457812317LL;

	t68 = ((x3801&x3802)-(x3803>>x3804));

	if (t68 != 9223372036854775406LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x3805 = 203051603702544LLU;
	int16_t x3806 = -1;
	uint8_t x3807 = 57U;

	t69 = ((x3805&x3806)-(x3807>>x3808));

	if (t69 != 203051603702530LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3837 = 12;
	static int32_t x3839 = 11;
	static int32_t t70 = 686015;

	t70 = ((x3837&x3838)-(x3839>>x3840));

	if (t70 != 11) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3905 = UINT32_MAX;
	uint64_t x3906 = UINT64_MAX;
	uint64_t x3907 = 12514534511LLU;
	volatile uint8_t x3908 = 8U;
	static volatile uint64_t t71 = 9242935066112689LLU;

	t71 = ((x3905&x3906)-(x3907>>x3908));

	if (t71 != 4246082395LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x3917 = 20U;
	volatile int32_t x3918 = INT32_MAX;
	static int64_t x3919 = 1322531008028762457LL;
	int16_t x3920 = 20;
	int64_t t72 = -4496LL;

	t72 = ((x3917&x3918)-(x3919>>x3920));

	if (t72 != -1261263854987LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4001 = 103253826LLU;
	int8_t x4002 = INT8_MIN;

	t73 = ((x4001&x4002)-(x4003>>x4004));

	if (t73 != 103253760LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x4029 = -1LL;
	int8_t x4030 = INT8_MIN;
	static int16_t x4031 = 133;
	uint16_t x4032 = 0U;

	t74 = ((x4029&x4030)-(x4031>>x4032));

	if (t74 != -261LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4133 = 30U;
	volatile uint64_t x4135 = 411722LLU;
	volatile uint64_t t75 = 1469988195289576LLU;

	t75 = ((x4133&x4134)-(x4135>>x4136));

	if (t75 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4221 = 5U;
	int64_t x4222 = 1028461355LL;
	uint64_t x4223 = UINT64_MAX;
	uint8_t x4224 = 9U;

	t76 = ((x4221&x4222)-(x4223>>x4224));

	if (t76 != 18410715276690587650LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4249 = 401805LLU;
	int8_t x4250 = -1;
	uint64_t x4251 = UINT64_MAX;
	uint64_t t77 = 1634692960624522973LLU;

	t77 = ((x4249&x4250)-(x4251>>x4252));

	if (t77 != 18446742974198325646LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4269 = INT32_MIN;
	int32_t x4270 = INT32_MIN;
	volatile int16_t x4271 = 188;
	static uint16_t x4272 = 17U;
	volatile int32_t t78 = INT32_MIN;

	t78 = ((x4269&x4270)-(x4271>>x4272));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4297 = -5;
	int32_t x4298 = -1;
	uint64_t x4299 = UINT64_MAX;
	volatile uint64_t t79 = 409769893205962955LLU;

	t79 = ((x4297&x4298)-(x4299>>x4300));

	if (t79 != 18446744073709420540LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x4301 = 120047843290848LL;
	volatile int64_t x4302 = -1645391LL;
	int16_t x4303 = INT16_MAX;
	static int8_t x4304 = 31;
	int64_t t80 = -1888341LL;

	t80 = ((x4301&x4302)-(x4303>>x4304));

	if (t80 != 120047842763936LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x4365 = UINT32_MAX;
	int16_t x4366 = -1;
	int64_t x4367 = 86377584LL;
	volatile int64_t t81 = 457301933428LL;

	t81 = ((x4365&x4366)-(x4367>>x4368));

	if (t81 != 4294925119LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4438 = 842215666;
	static uint32_t x4439 = UINT32_MAX;
	int16_t x4440 = 4;
	uint32_t t82 = 48335U;

	t82 = ((x4437&x4438)-(x4439>>x4440));

	if (t82 != 4026544371U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4469 = 26U;
	static int16_t x4470 = -1;
	uint32_t t83 = 412071U;

	t83 = ((x4469&x4470)-(x4471>>x4472));

	if (t83 != 4286578715U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x4489 = 6348U;
	int16_t x4490 = -57;
	uint8_t x4492 = 17U;
	int64_t t84 = -6LL;

	t84 = ((x4489&x4490)-(x4491>>x4492));

	if (t84 != -70368744171323LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4501 = INT8_MIN;
	int32_t x4502 = 7;
	volatile uint16_t x4503 = 376U;
	uint8_t x4504 = 16U;
	volatile int32_t t85 = 13;

	t85 = ((x4501&x4502)-(x4503>>x4504));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x4509 = -1;
	int16_t x4510 = INT16_MIN;
	uint32_t x4511 = 0U;
	volatile int8_t x4512 = 0;

	t86 = ((x4509&x4510)-(x4511>>x4512));

	if (t86 != 4294934528U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4551 = 14U;
	int64_t t87 = 14088554496413LL;

	t87 = ((x4549&x4550)-(x4551>>x4552));

	if (t87 != 24LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4569 = -1;
	static uint8_t x4571 = UINT8_MAX;
	volatile uint64_t x4572 = 3LLU;
	volatile int32_t t88 = -196;

	t88 = ((x4569&x4570)-(x4571>>x4572));

	if (t88 != -29) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x4609 = 5317;
	int64_t x4610 = 400479LL;
	uint16_t x4611 = 2046U;
	int64_t t89 = -35040712016573723LL;

	t89 = ((x4609&x4610)-(x4611>>x4612));

	if (t89 != 5189LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4657 = -19;
	uint16_t x4658 = 54U;
	uint16_t x4659 = 2656U;
	volatile int32_t t90 = -29802;

	t90 = ((x4657&x4658)-(x4659>>x4660));

	if (t90 != 36) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4661 = 6734;
	int32_t x4662 = -1;
	static int64_t x4663 = 30346476322697058LL;
	volatile int64_t t91 = 842870385732LL;

	t91 = ((x4661&x4662)-(x4663>>x4664));

	if (t91 != -30346476322690324LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x4701 = UINT8_MAX;
	volatile int8_t x4703 = INT8_MAX;
	volatile int16_t x4704 = 11;
	volatile uint32_t t92 = 130511288U;

	t92 = ((x4701&x4702)-(x4703>>x4704));

	if (t92 != 48U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4705 = UINT32_MAX;
	volatile int32_t x4706 = INT32_MIN;
	int8_t x4707 = INT8_MAX;
	static volatile uint32_t t93 = 407184U;

	t93 = ((x4705&x4706)-(x4707>>x4708));

	if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x4721 = -1;
	static int32_t x4722 = 134051592;
	uint64_t x4723 = 33195424862349011LLU;
	uint32_t x4724 = 1U;
	volatile uint64_t t94 = 967066554782548863LLU;

	t94 = ((x4721&x4722)-(x4723>>x4724));

	if (t94 != 18430146361412428703LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4778 = 29973U;
	uint16_t x4779 = 402U;
	volatile uint8_t x4780 = 5U;
	uint64_t t95 = 576168676007413244LLU;

	t95 = ((x4777&x4778)-(x4779>>x4780));

	if (t95 != 29961LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4837 = -1;
	int16_t x4838 = INT16_MIN;
	int32_t x4840 = 9;
	volatile int32_t t96 = -2657;

	t96 = ((x4837&x4838)-(x4839>>x4840));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x4909 = INT8_MIN;
	int64_t x4910 = 7125LL;
	uint64_t x4911 = 386LLU;
	volatile uint16_t x4912 = 14U;

	t97 = ((x4909&x4910)-(x4911>>x4912));

	if (t97 != 7040LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x4921 = INT8_MIN;
	static int16_t x4922 = INT16_MAX;
	uint32_t x4923 = 86930U;
	static uint8_t x4924 = 0U;
	static volatile uint32_t t98 = 7135U;

	t98 = ((x4921&x4922)-(x4923>>x4924));

	if (t98 != 4294913006U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x4941 = 26;
	uint32_t x4944 = 1U;

	t99 = ((x4941&x4942)-(x4943>>x4944));

	if (t99 != -69) { NG(); } else { ; }
	
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

