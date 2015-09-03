#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t0 = -50417LL;
uint8_t x40 = 18U;
uint8_t x250 = 13U;
int64_t x278 = -701LL;
volatile uint16_t x350 = 8376U;
static int64_t x447 = INT64_MAX;
static uint32_t x460 = 7U;
static volatile int64_t x509 = 22609998104822998LL;
int8_t x514 = INT8_MIN;
uint16_t x600 = 0U;
int32_t x781 = -1;
static uint64_t t14 = 24951315300LLU;
uint32_t x789 = 3U;
uint8_t x936 = 9U;
static uint64_t t20 = 24LLU;
static int32_t x942 = -15383231;
uint64_t t23 = 495750LLU;
int32_t x1169 = INT32_MAX;
volatile uint16_t x1171 = 16U;
volatile int64_t t25 = -2030357998720681009LL;
static int8_t x1246 = -8;
int64_t x1248 = 1LL;
int8_t x1329 = -16;
uint64_t x1511 = 3303859438LLU;
volatile uint64_t t34 = 10LLU;
volatile int32_t x1798 = INT32_MIN;
uint8_t x1799 = UINT8_MAX;
volatile int16_t x1809 = INT16_MIN;
volatile int8_t x1810 = -58;
volatile uint32_t x1811 = 43761499U;
uint8_t x1852 = 8U;
volatile uint16_t x1877 = 2559U;
volatile uint32_t x1913 = 1U;
int64_t t44 = 1LL;
volatile uint64_t x2113 = 7LLU;
uint16_t x2115 = 62U;
int16_t x2116 = 9;
volatile int32_t t46 = 613968;
static int64_t x2185 = INT64_MIN;
static int32_t x2187 = 1;
volatile int8_t x2205 = INT8_MIN;
int32_t x2206 = -122667148;
uint8_t x2213 = UINT8_MAX;
uint64_t t52 = 4363779LLU;
uint8_t x2526 = 12U;
volatile uint16_t x2528 = 1U;
int64_t x2625 = INT64_MAX;
int64_t x2749 = INT64_MIN;
static volatile uint64_t t59 = 4833026035LLU;
int32_t x2870 = -1082;
int64_t t62 = -62204166LL;
static volatile uint64_t t63 = 5671006LLU;
static uint64_t t64 = 60593801733232946LLU;
int8_t x3030 = -1;
static int32_t x3061 = -1;
uint32_t x3063 = 369U;
int32_t x3124 = 0;
volatile int32_t x3222 = INT32_MIN;
static int8_t x3317 = INT8_MIN;
static int16_t x3381 = -5923;
uint32_t x3383 = 533622U;
int8_t x3661 = INT8_MAX;
static uint16_t x3915 = UINT16_MAX;
int64_t x3941 = INT64_MIN;
uint16_t x3944 = 2U;
int8_t x3952 = 11;
uint16_t x4045 = 132U;
int16_t x4067 = INT16_MAX;
int8_t x4137 = INT8_MIN;
uint32_t x4138 = 30817075U;
uint8_t x4139 = UINT8_MAX;
static int16_t x4167 = INT16_MAX;
int8_t x4185 = -2;
uint32_t x4201 = 4U;
int16_t x4321 = -13655;
static uint16_t x4323 = 2U;
static uint8_t x4324 = 11U;
int32_t t88 = 490224;
int32_t x4365 = INT32_MAX;
volatile int64_t t90 = -8536393443267LL;
int32_t t91 = 375835;
volatile uint64_t x4525 = 29785363606LLU;
volatile int8_t x4645 = INT8_MIN;
static volatile int64_t t97 = -2161252LL;
static int8_t x4762 = -1;
int32_t t98 = -142;
int32_t x4821 = INT32_MIN;
uint32_t x4823 = UINT32_MAX;


void f0(void) {
	int64_t x1 = 77475009LL;
	uint8_t x2 = 1U;
	uint8_t x3 = 21U;
	int16_t x4 = 0;

	t0 = ((x1^x2)+(x3>>x4));

	if (t0 != 77475029LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x37 = INT16_MAX;
	uint64_t x38 = 511858440645543131LLU;
	int8_t x39 = INT8_MAX;
	uint64_t t1 = 357441970710LLU;

	t1 = ((x37^x38)+(x39>>x40));

	if (t1 != 511858440645573412LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x125 = -112252802;
	volatile int64_t x126 = 45404776103486LL;
	uint8_t x127 = 1U;
	uint16_t x128 = 21U;
	static int64_t t2 = -9LL;

	t2 = ((x125^x126)+(x127>>x128));

	if (t2 != -45404670142912LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x249 = INT16_MAX;
	static volatile int32_t x251 = 3;
	int8_t x252 = 1;
	volatile int32_t t3 = 31;

	t3 = ((x249^x250)+(x251>>x252));

	if (t3 != 32755) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x277 = INT8_MIN;
	uint32_t x279 = 0U;
	int32_t x280 = 9;
	volatile int64_t t4 = -72557250343LL;

	t4 = ((x277^x278)+(x279>>x280));

	if (t4 != 707LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x305 = -1;
	uint32_t x306 = UINT32_MAX;
	int64_t x307 = 651842853571403453LL;
	uint8_t x308 = 12U;
	static volatile int64_t t5 = 153985LL;

	t5 = ((x305^x306)+(x307>>x308));

	if (t5 != 159141321672705LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x349 = INT8_MAX;
	static volatile uint64_t x351 = 3645444183348393249LLU;
	uint8_t x352 = 2U;
	static volatile uint64_t t6 = 119022LLU;

	t6 = ((x349^x350)+(x351>>x352));

	if (t6 != 911361045837106703LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x421 = INT32_MAX;
	static int16_t x422 = INT16_MIN;
	static int8_t x423 = 2;
	volatile uint8_t x424 = 15U;
	int32_t t7 = -1936699;

	t7 = ((x421^x422)+(x423>>x424));

	if (t7 != -2147450881) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x445 = INT64_MIN;
	static uint64_t x446 = UINT64_MAX;
	uint16_t x448 = 2U;
	volatile uint64_t t8 = 65347LLU;

	t8 = ((x445^x446)+(x447>>x448));

	if (t8 != 11529215046068469758LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x457 = 2U;
	int8_t x458 = -1;
	volatile int16_t x459 = INT16_MAX;
	volatile int32_t t9 = 751909379;

	t9 = ((x457^x458)+(x459>>x460));

	if (t9 != 252) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x510 = INT8_MIN;
	uint64_t x511 = 17930007581376479LLU;
	volatile uint64_t x512 = 2LLU;
	volatile uint64_t t10 = 2294033902LLU;

	t10 = ((x509^x510)+(x511>>x512));

	if (t10 != 18428616577500072781LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x513 = 4U;
	int16_t x515 = 6206;
	volatile uint8_t x516 = 1U;
	int32_t t11 = -61114;

	t11 = ((x513^x514)+(x515>>x516));

	if (t11 != 2979) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x597 = UINT32_MAX;
	uint32_t x598 = 1020U;
	int32_t x599 = INT32_MAX;
	volatile uint32_t t12 = 86926U;

	t12 = ((x597^x598)+(x599>>x600));

	if (t12 != 2147482626U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x741 = -1;
	int32_t x742 = 12;
	uint16_t x743 = UINT16_MAX;
	int8_t x744 = 3;
	int32_t t13 = -122072595;

	t13 = ((x741^x742)+(x743>>x744));

	if (t13 != 8178) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x782 = UINT64_MAX;
	uint16_t x783 = 3U;
	volatile uint16_t x784 = 1U;

	t14 = ((x781^x782)+(x783>>x784));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x790 = 18232LLU;
	static uint32_t x791 = 862888716U;
	static volatile int16_t x792 = 1;
	volatile uint64_t t15 = 370941974LLU;

	t15 = ((x789^x790)+(x791>>x792));

	if (t15 != 431462593LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x861 = -28;
	int16_t x862 = 1;
	uint64_t x863 = UINT64_MAX;
	uint64_t x864 = 18LLU;
	volatile uint64_t t16 = 2577583725318372LLU;

	t16 = ((x861^x862)+(x863>>x864));

	if (t16 != 70368744177636LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x913 = 18U;
	uint8_t x914 = 0U;
	volatile int32_t x915 = INT32_MAX;
	volatile uint8_t x916 = 2U;
	volatile uint32_t t17 = 82024U;

	t17 = ((x913^x914)+(x915>>x916));

	if (t17 != 536870929U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x921 = UINT16_MAX;
	uint32_t x922 = 502601U;
	uint32_t x923 = 42U;
	int8_t x924 = 3;
	uint32_t t18 = 3188U;

	t18 = ((x921^x922)+(x923>>x924));

	if (t18 != 480443U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x929 = -1;
	int64_t x930 = 25109LL;
	static uint16_t x931 = UINT16_MAX;
	volatile uint16_t x932 = 3U;
	volatile int64_t t19 = 3792LL;

	t19 = ((x929^x930)+(x931>>x932));

	if (t19 != -16919LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x933 = 1022513;
	static uint64_t x934 = UINT64_MAX;
	uint16_t x935 = UINT16_MAX;

	t20 = ((x933^x934)+(x935>>x936));

	if (t20 != 18446744073708529229LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x941 = INT64_MIN;
	static volatile uint64_t x943 = 112372434284448984LLU;
	int8_t x944 = 1;
	uint64_t t21 = 1358108771LLU;

	t21 = ((x941^x942)+(x943>>x944));

	if (t21 != 9279558253981617069LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1061 = INT32_MIN;
	int32_t x1062 = -1;
	int64_t x1063 = INT64_MAX;
	static int8_t x1064 = 3;
	volatile int64_t t22 = -32LL;

	t22 = ((x1061^x1062)+(x1063>>x1064));

	if (t22 != 1152921506754330622LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1153 = -10;
	int64_t x1154 = -1LL;
	volatile uint64_t x1155 = 1806497LLU;
	volatile uint8_t x1156 = 0U;

	t23 = ((x1153^x1154)+(x1155>>x1156));

	if (t23 != 1806506LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1170 = UINT32_MAX;
	volatile uint16_t x1172 = 4U;
	volatile uint32_t t24 = 449304U;

	t24 = ((x1169^x1170)+(x1171>>x1172));

	if (t24 != 2147483649U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1185 = 195152U;
	int16_t x1186 = INT16_MIN;
	int64_t x1187 = 20118950473581LL;
	int64_t x1188 = 0LL;

	t25 = ((x1185^x1186)+(x1187>>x1188));

	if (t25 != 20123245275581LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1221 = INT16_MIN;
	volatile int8_t x1222 = 8;
	int32_t x1223 = INT32_MAX;
	static uint16_t x1224 = 30U;
	static volatile int32_t t26 = -193470954;

	t26 = ((x1221^x1222)+(x1223>>x1224));

	if (t26 != -32759) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1241 = UINT32_MAX;
	int32_t x1242 = 1593;
	volatile uint8_t x1243 = 11U;
	uint32_t x1244 = 1U;
	uint32_t t27 = 51538U;

	t27 = ((x1241^x1242)+(x1243>>x1244));

	if (t27 != 4294965707U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1245 = 650086740444113355LLU;
	uint16_t x1247 = UINT16_MAX;
	volatile uint64_t t28 = 5LLU;

	t28 = ((x1245^x1246)+(x1247>>x1248));

	if (t28 != 17796657333265471026LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1289 = UINT64_MAX;
	int32_t x1290 = 280916;
	uint16_t x1291 = UINT16_MAX;
	static volatile int16_t x1292 = 7;
	static uint64_t t29 = 459749954321LLU;

	t29 = ((x1289^x1290)+(x1291>>x1292));

	if (t29 != 18446744073709271210LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1297 = INT8_MAX;
	int32_t x1298 = -1;
	static uint64_t x1299 = 15162LLU;
	int8_t x1300 = 0;
	uint64_t t30 = 131451298895LLU;

	t30 = ((x1297^x1298)+(x1299>>x1300));

	if (t30 != 15034LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1330 = UINT8_MAX;
	int32_t x1331 = 30866;
	static uint64_t x1332 = 20LLU;
	volatile int32_t t31 = 116;

	t31 = ((x1329^x1330)+(x1331>>x1332));

	if (t31 != -241) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1377 = INT32_MAX;
	uint32_t x1378 = UINT32_MAX;
	uint32_t x1379 = 49471U;
	int64_t x1380 = 0LL;
	volatile uint32_t t32 = 40U;

	t32 = ((x1377^x1378)+(x1379>>x1380));

	if (t32 != 2147533119U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1509 = -112;
	uint64_t x1510 = 16801241661460026LLU;
	uint8_t x1512 = 1U;
	volatile uint64_t t33 = 47419LLU;

	t33 = ((x1509^x1510)+(x1511>>x1512));

	if (t33 != 18429942833700021281LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x1621 = 99119294;
	uint64_t x1622 = 77875LLU;
	uint8_t x1623 = UINT8_MAX;
	uint16_t x1624 = 2U;

	t34 = ((x1621^x1622)+(x1623>>x1624));

	if (t34 != 99172556LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x1665 = 245244861LLU;
	int32_t x1666 = 5856;
	static uint32_t x1667 = 0U;
	uint32_t x1668 = 3U;
	volatile uint64_t t35 = 0LLU;

	t35 = ((x1665^x1666)+(x1667>>x1668));

	if (t35 != 245249373LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1745 = UINT64_MAX;
	int8_t x1746 = 0;
	uint16_t x1747 = 24617U;
	volatile int8_t x1748 = 2;
	uint64_t t36 = 60613562476486LLU;

	t36 = ((x1745^x1746)+(x1747>>x1748));

	if (t36 != 6153LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1797 = INT64_MAX;
	uint8_t x1800 = 3U;
	volatile int64_t t37 = -888LL;

	t37 = ((x1797^x1798)+(x1799>>x1800));

	if (t37 != -9223372034707292130LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1812 = 5U;
	volatile uint32_t t38 = 186U;

	t38 = ((x1809^x1810)+(x1811>>x1812));

	if (t38 != 1400256U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x1829 = 91;
	int8_t x1830 = INT8_MAX;
	int8_t x1831 = 2;
	uint8_t x1832 = 1U;
	static volatile int32_t t39 = -403;

	t39 = ((x1829^x1830)+(x1831>>x1832));

	if (t39 != 37) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1849 = INT32_MIN;
	static int64_t x1850 = 30LL;
	int64_t x1851 = INT64_MAX;
	int64_t t40 = 279889LL;

	t40 = ((x1849^x1850)+(x1851>>x1852));

	if (t40 != 36028794871480349LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x1878 = 19966306U;
	static uint64_t x1879 = UINT64_MAX;
	static int8_t x1880 = 1;
	uint64_t t41 = 190487943307LLU;

	t41 = ((x1877^x1878)+(x1879>>x1880));

	if (t41 != 9223372036874739868LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1914 = -1187853;
	uint32_t x1915 = 258978U;
	static uint16_t x1916 = 13U;
	volatile uint32_t t42 = 535353575U;

	t42 = ((x1913^x1914)+(x1915>>x1916));

	if (t42 != 4293779473U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1945 = INT64_MAX;
	int64_t x1946 = -1LL;
	int8_t x1947 = 4;
	uint8_t x1948 = 1U;
	int64_t t43 = 2083571LL;

	t43 = ((x1945^x1946)+(x1947>>x1948));

	if (t43 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2053 = 190420566777LL;
	volatile uint8_t x2054 = 1U;
	volatile uint16_t x2055 = UINT16_MAX;
	uint8_t x2056 = 1U;

	t44 = ((x2053^x2054)+(x2055>>x2056));

	if (t44 != 190420599543LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2114 = 303LLU;
	volatile uint64_t t45 = 4895750LLU;

	t45 = ((x2113^x2114)+(x2115>>x2116));

	if (t45 != 296LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x2153 = 1;
	uint16_t x2154 = UINT16_MAX;
	static uint16_t x2155 = 27U;
	int8_t x2156 = 6;

	t46 = ((x2153^x2154)+(x2155>>x2156));

	if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2186 = 1444U;
	static int16_t x2188 = 1;
	volatile int64_t t47 = -5146836872840936LL;

	t47 = ((x2185^x2186)+(x2187>>x2188));

	if (t47 != -9223372036854774364LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2207 = UINT16_MAX;
	uint8_t x2208 = 2U;
	int32_t t48 = 459;

	t48 = ((x2205^x2206)+(x2207>>x2208));

	if (t48 != 122683635) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2214 = 38170U;
	static uint16_t x2215 = 9516U;
	uint8_t x2216 = 1U;
	static uint32_t t49 = 447009579U;

	t49 = ((x2213^x2214)+(x2215>>x2216));

	if (t49 != 43131U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2241 = -67128651128956574LL;
	static uint32_t x2242 = 34500U;
	uint16_t x2243 = 7U;
	uint32_t x2244 = 3U;
	int64_t t50 = 42808LL;

	t50 = ((x2241^x2242)+(x2243>>x2244));

	if (t50 != -67128651128922202LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2337 = UINT64_MAX;
	int32_t x2338 = INT32_MIN;
	uint64_t x2339 = UINT64_MAX;
	uint16_t x2340 = 5U;
	uint64_t t51 = 7288935LLU;

	t51 = ((x2337^x2338)+(x2339>>x2340));

	if (t51 != 576460754450907134LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x2341 = UINT32_MAX;
	int64_t x2342 = INT64_MAX;
	uint64_t x2343 = 0LLU;
	volatile int8_t x2344 = 7;

	t52 = ((x2341^x2342)+(x2343>>x2344));

	if (t52 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2449 = INT32_MIN;
	static int32_t x2450 = INT32_MAX;
	int8_t x2451 = INT8_MAX;
	uint8_t x2452 = 10U;
	volatile int32_t t53 = -111;

	t53 = ((x2449^x2450)+(x2451>>x2452));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2525 = INT32_MIN;
	int16_t x2527 = INT16_MAX;
	volatile int32_t t54 = -4;

	t54 = ((x2525^x2526)+(x2527>>x2528));

	if (t54 != -2147467253) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2589 = INT32_MIN;
	int64_t x2590 = -1LL;
	volatile uint8_t x2591 = UINT8_MAX;
	uint8_t x2592 = 0U;
	volatile int64_t t55 = -28910548147789LL;

	t55 = ((x2589^x2590)+(x2591>>x2592));

	if (t55 != 2147483902LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x2626 = 16U;
	static uint8_t x2627 = 0U;
	int16_t x2628 = 0;
	volatile int64_t t56 = 279LL;

	t56 = ((x2625^x2626)+(x2627>>x2628));

	if (t56 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2645 = INT16_MIN;
	int16_t x2646 = INT16_MAX;
	volatile int16_t x2647 = 4;
	volatile int8_t x2648 = 2;
	int32_t t57 = 11950;

	t57 = ((x2645^x2646)+(x2647>>x2648));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x2750 = 3863;
	volatile uint8_t x2751 = 8U;
	int32_t x2752 = 28;
	static int64_t t58 = 109518980469713LL;

	t58 = ((x2749^x2750)+(x2751>>x2752));

	if (t58 != -9223372036854771945LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x2793 = INT64_MIN;
	int16_t x2794 = -1;
	uint64_t x2795 = 6304196LLU;
	static volatile int8_t x2796 = 0;

	t59 = ((x2793^x2794)+(x2795>>x2796));

	if (t59 != 9223372036861080003LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x2809 = 59U;
	uint32_t x2810 = 1U;
	int64_t x2811 = INT64_MAX;
	volatile uint16_t x2812 = 5U;
	volatile int64_t t60 = -3700799LL;

	t60 = ((x2809^x2810)+(x2811>>x2812));

	if (t60 != 288230376151711801LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x2833 = INT16_MIN;
	static int32_t x2834 = -1;
	int16_t x2835 = INT16_MAX;
	volatile uint8_t x2836 = 18U;
	static volatile int32_t t61 = -1;

	t61 = ((x2833^x2834)+(x2835>>x2836));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x2869 = INT64_MIN;
	static uint8_t x2871 = 1U;
	int16_t x2872 = 3;

	t62 = ((x2869^x2870)+(x2871>>x2872));

	if (t62 != 9223372036854774726LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2957 = 28805U;
	uint64_t x2958 = UINT64_MAX;
	volatile int8_t x2959 = 34;
	volatile uint8_t x2960 = 11U;

	t63 = ((x2957^x2958)+(x2959>>x2960));

	if (t63 != 18446744073709522810LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2961 = 362275437LLU;
	uint8_t x2962 = UINT8_MAX;
	static int16_t x2963 = 1496;
	int8_t x2964 = 1;

	t64 = ((x2961^x2962)+(x2963>>x2964));

	if (t64 != 362276222LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x3029 = -3865258482592961LL;
	uint8_t x3031 = 60U;
	int8_t x3032 = 1;
	int64_t t65 = -1605886941999LL;

	t65 = ((x3029^x3030)+(x3031>>x3032));

	if (t65 != 3865258482592990LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3037 = 246;
	int32_t x3038 = INT32_MIN;
	int16_t x3039 = INT16_MAX;
	uint8_t x3040 = 11U;
	static volatile int32_t t66 = 22261;

	t66 = ((x3037^x3038)+(x3039>>x3040));

	if (t66 != -2147483387) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x3062 = 0;
	int32_t x3064 = 0;
	static uint32_t t67 = 1556190U;

	t67 = ((x3061^x3062)+(x3063>>x3064));

	if (t67 != 368U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3073 = -3765184LL;
	int64_t x3074 = -1LL;
	volatile uint32_t x3075 = UINT32_MAX;
	int16_t x3076 = 30;
	int64_t t68 = 175978550LL;

	t68 = ((x3073^x3074)+(x3075>>x3076));

	if (t68 != 3765186LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3121 = INT8_MIN;
	static uint16_t x3122 = UINT16_MAX;
	static int8_t x3123 = INT8_MAX;
	volatile int32_t t69 = 72160;

	t69 = ((x3121^x3122)+(x3123>>x3124));

	if (t69 != -65282) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3141 = -2604;
	int8_t x3142 = -5;
	uint64_t x3143 = UINT64_MAX;
	static int16_t x3144 = 1;
	static uint64_t t70 = 1438496016LLU;

	t70 = ((x3141^x3142)+(x3143>>x3144));

	if (t70 != 9223372036854778414LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3221 = INT64_MAX;
	int64_t x3223 = 229056580834753395LL;
	int8_t x3224 = 1;
	int64_t t71 = 538961379LL;

	t71 = ((x3221^x3222)+(x3223>>x3224));

	if (t71 != -9108843744289915464LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x3318 = -3LL;
	int16_t x3319 = 0;
	int16_t x3320 = 1;
	int64_t t72 = -2568LL;

	t72 = ((x3317^x3318)+(x3319>>x3320));

	if (t72 != 125LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3382 = INT32_MAX;
	uint8_t x3384 = 30U;
	volatile uint32_t t73 = 1001301U;

	t73 = ((x3381^x3382)+(x3383>>x3384));

	if (t73 != 2147489570U) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x3553 = -1238740627218571LL;
	int16_t x3554 = INT16_MIN;
	uint64_t x3555 = 388845768697LLU;
	volatile uint16_t x3556 = 9U;
	static uint64_t t74 = 3965509LLU;

	t74 = ((x3553^x3554)+(x3555>>x3556));

	if (t74 != 1238741386666300LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3662 = -1LL;
	uint64_t x3663 = UINT64_MAX;
	uint8_t x3664 = 58U;
	volatile uint64_t t75 = 531027800LLU;

	t75 = ((x3661^x3662)+(x3663>>x3664));

	if (t75 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x3701 = 0;
	int64_t x3702 = INT64_MIN;
	uint32_t x3703 = UINT32_MAX;
	volatile uint8_t x3704 = 3U;
	int64_t t76 = -8153007LL;

	t76 = ((x3701^x3702)+(x3703>>x3704));

	if (t76 != -9223372036317904897LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x3913 = -253261LL;
	uint64_t x3914 = 146061LLU;
	uint64_t x3916 = 4LLU;
	static volatile uint64_t t77 = 44148762LLU;

	t77 = ((x3913^x3914)+(x3915>>x3916));

	if (t77 != 18446744073709430845LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3942 = 273174U;
	volatile uint8_t x3943 = 69U;
	static volatile int64_t t78 = 3795013517938838LL;

	t78 = ((x3941^x3942)+(x3943>>x3944));

	if (t78 != -9223372036854502617LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3949 = -1LL;
	int16_t x3950 = 1745;
	uint16_t x3951 = 77U;
	int64_t t79 = 22352367097095LL;

	t79 = ((x3949^x3950)+(x3951>>x3952));

	if (t79 != -1746LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4046 = 334LLU;
	int64_t x4047 = INT64_MAX;
	static volatile int8_t x4048 = 24;
	uint64_t t80 = 4404135506LLU;

	t80 = ((x4045^x4046)+(x4047>>x4048));

	if (t80 != 549755814345LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x4065 = INT32_MAX;
	int8_t x4066 = -1;
	uint32_t x4068 = 0U;
	volatile int32_t t81 = -994;

	t81 = ((x4065^x4066)+(x4067>>x4068));

	if (t81 != -2147450881) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x4140 = 0;
	uint32_t t82 = 1969U;

	t82 = ((x4137^x4138)+(x4139>>x4140));

	if (t82 != 4264150450U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4165 = INT16_MIN;
	volatile int32_t x4166 = INT32_MIN;
	static uint8_t x4168 = 1U;
	int32_t t83 = -39615;

	t83 = ((x4165^x4166)+(x4167>>x4168));

	if (t83 != 2147467263) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x4186 = INT64_MIN;
	static int8_t x4187 = 0;
	int8_t x4188 = 0;
	volatile int64_t t84 = 20671015377LL;

	t84 = ((x4185^x4186)+(x4187>>x4188));

	if (t84 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4202 = 1;
	uint16_t x4203 = UINT16_MAX;
	uint8_t x4204 = 15U;
	uint32_t t85 = 3U;

	t85 = ((x4201^x4202)+(x4203>>x4204));

	if (t85 != 6U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4205 = 37U;
	static volatile uint8_t x4206 = 7U;
	int64_t x4207 = 541036LL;
	static volatile uint8_t x4208 = 14U;
	int64_t t86 = -124371545754LL;

	t86 = ((x4205^x4206)+(x4207>>x4208));

	if (t86 != 67LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4229 = 29344U;
	int16_t x4230 = -1;
	volatile uint8_t x4231 = 10U;
	uint8_t x4232 = 17U;
	volatile uint32_t t87 = 486024485U;

	t87 = ((x4229^x4230)+(x4231>>x4232));

	if (t87 != 4294937951U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x4322 = -123;

	t88 = ((x4321^x4322)+(x4323>>x4324));

	if (t88 != 13612) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4366 = -1;
	int8_t x4367 = 5;
	int8_t x4368 = 0;
	volatile int32_t t89 = -43;

	t89 = ((x4365^x4366)+(x4367>>x4368));

	if (t89 != -2147483643) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x4389 = 100138997U;
	int64_t x4390 = INT64_MIN;
	int16_t x4391 = 1;
	int16_t x4392 = 9;

	t90 = ((x4389^x4390)+(x4391>>x4392));

	if (t90 != -9223372036754636811LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4397 = 30195U;
	static int8_t x4398 = 1;
	volatile int8_t x4399 = 2;
	int16_t x4400 = 0;

	t91 = ((x4397^x4398)+(x4399>>x4400));

	if (t91 != 30196) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4497 = 119614U;
	volatile int16_t x4498 = -1;
	uint16_t x4499 = UINT16_MAX;
	static int16_t x4500 = 30;
	volatile uint32_t t92 = 9269374U;

	t92 = ((x4497^x4498)+(x4499>>x4500));

	if (t92 != 4294847681U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4526 = INT16_MIN;
	static uint32_t x4527 = 60U;
	static volatile int8_t x4528 = 1;
	volatile uint64_t t93 = 25250898724257LLU;

	t93 = ((x4525^x4526)+(x4527>>x4528));

	if (t93 != 18446744043924165812LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4561 = INT8_MAX;
	static int32_t x4562 = 33204;
	int64_t x4563 = INT64_MAX;
	int8_t x4564 = 1;
	int64_t t94 = 10878021665LL;

	t94 = ((x4561^x4562)+(x4563>>x4564));

	if (t94 != 4611686018427421130LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4625 = 24633U;
	static int16_t x4626 = -1629;
	int8_t x4627 = INT8_MAX;
	uint64_t x4628 = 15LLU;
	int32_t t95 = -400;

	t95 = ((x4625^x4626)+(x4627>>x4628));

	if (t95 != -26214) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4646 = 199078LLU;
	volatile uint16_t x4647 = 0U;
	volatile int8_t x4648 = 0;
	uint64_t t96 = 104269837LLU;

	t96 = ((x4645^x4646)+(x4647>>x4648));

	if (t96 != 18446744073709352486LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x4757 = INT64_MIN;
	uint32_t x4758 = 21869U;
	int16_t x4759 = INT16_MAX;
	int8_t x4760 = 1;

	t97 = ((x4757^x4758)+(x4759>>x4760));

	if (t97 != -9223372036854737556LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4761 = 2U;
	int16_t x4763 = INT16_MAX;
	int16_t x4764 = 1;

	t98 = ((x4761^x4762)+(x4763>>x4764));

	if (t98 != 16380) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4822 = 7587U;
	uint8_t x4824 = 1U;
	static uint32_t t99 = 392U;

	t99 = ((x4821^x4822)+(x4823>>x4824));

	if (t99 != 7586U) { NG(); } else { ; }
	
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

