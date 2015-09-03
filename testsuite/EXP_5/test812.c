#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x24 = 2539U;
volatile int32_t t0 = -9379990;
static uint8_t x40 = 22U;
int8_t x79 = -1;
uint8_t x85 = 19U;
uint64_t x103 = 95081214LLU;
volatile int32_t t7 = 376327;
volatile uint8_t x153 = 85U;
int8_t x183 = INT8_MIN;
int8_t x190 = 12;
uint16_t x216 = 13415U;
int8_t x218 = INT8_MIN;
uint8_t x220 = 3U;
uint64_t x257 = UINT64_MAX;
int8_t x259 = INT8_MAX;
volatile int64_t t16 = INT64_MAX;
uint64_t x289 = UINT64_MAX;
uint16_t x292 = 3U;
static int32_t x302 = -1;
static int64_t x303 = -1LL;
static volatile int64_t x339 = INT64_MIN;
static volatile uint8_t x340 = 2U;
int64_t x347 = -1LL;
static int8_t x362 = INT8_MIN;
static uint16_t x397 = 1U;
uint64_t x408 = 8894984281LLU;
int32_t x428 = INT32_MIN;
uint32_t t26 = 71299637U;
volatile uint16_t x467 = 9U;
uint8_t x468 = 1U;
int32_t t27 = -5617044;
uint64_t t28 = 108079067LLU;
uint32_t x509 = 7U;
volatile uint16_t x593 = UINT16_MAX;
int32_t x594 = -1;
int8_t x597 = 1;
volatile int8_t x598 = 1;
static int32_t t33 = -301473;
volatile uint32_t x601 = 115U;
uint8_t x605 = 0U;
uint64_t x617 = UINT64_MAX;
int64_t x620 = INT64_MAX;
int64_t x622 = INT64_MAX;
int16_t x624 = INT16_MIN;
volatile int32_t t39 = 599;
static uint16_t x649 = 23U;
static uint32_t x665 = 13187498U;
uint32_t t41 = 221170U;
int8_t x693 = 1;
int16_t x726 = 1;
uint8_t x742 = 36U;
int64_t x816 = INT64_MIN;
volatile int32_t t50 = -686;
int8_t x871 = -1;
int32_t x900 = INT32_MAX;
volatile uint32_t x910 = 1U;
int16_t x911 = INT16_MIN;
volatile uint32_t t57 = 3U;
int64_t x927 = -1LL;
volatile int32_t t58 = -200;
uint32_t x950 = UINT32_MAX;
static uint8_t x961 = 10U;
int32_t x963 = INT32_MAX;
volatile int32_t t62 = 107366;
static volatile uint8_t x1033 = 14U;
volatile uint8_t x1034 = 0U;
volatile int32_t t66 = -14936500;
uint32_t x1049 = 1149915142U;
volatile int8_t x1054 = 1;
volatile int32_t t68 = -648483;
uint32_t x1064 = 144669U;
static int8_t x1071 = 27;
volatile uint8_t x1077 = 2U;
int32_t x1079 = 96181218;
static volatile int8_t x1080 = INT8_MIN;
int16_t x1106 = 6181;
volatile int64_t x1108 = 351047271895808969LL;
uint8_t x1109 = UINT8_MAX;
int16_t x1112 = -1849;
int32_t t79 = 0;
int8_t x1166 = -1;
static int32_t t80 = 45;
uint8_t x1180 = 3U;
int32_t x1188 = INT32_MIN;
uint64_t t83 = 2647551649303756344LLU;
int32_t x1225 = INT32_MAX;
uint16_t x1261 = 101U;
volatile int32_t t87 = 1;
int32_t x1286 = INT32_MAX;
int64_t x1287 = INT64_MIN;
uint32_t x1288 = 2U;
static int8_t x1332 = INT8_MAX;
static volatile uint64_t t90 = 69172132924915179LLU;
volatile int32_t x1352 = INT32_MIN;
int64_t x1376 = INT64_MAX;
static uint64_t x1381 = 287495932183947LLU;
uint64_t x1382 = 50882039LLU;
int16_t x1385 = INT16_MAX;
int8_t x1401 = 14;
static int32_t t97 = -961;
uint16_t x1410 = 19866U;


void f0(void) {
	volatile int32_t x21 = 20;
	static int32_t x22 = INT32_MAX;
	volatile uint32_t x23 = 2U;

	t0 = (x21<<((x22%x23)&x24));

	if (t0 != 40) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x37 = UINT32_MAX;
	uint8_t x38 = UINT8_MAX;
	uint16_t x39 = 2U;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x37<<((x38%x39)&x40));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x49 = 4184911523469LLU;
	static uint64_t x50 = 511816819LLU;
	uint32_t x51 = 212U;
	int8_t x52 = INT8_MIN;
	volatile uint64_t t2 = 439743778701LLU;

	t2 = (x49<<((x50%x51)&x52));

	if (t2 != 4184911523469LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x53 = 60217139139LLU;
	uint32_t x54 = UINT32_MAX;
	int32_t x55 = INT32_MAX;
	static volatile uint8_t x56 = 59U;
	volatile uint64_t t3 = 249LLU;

	t3 = (x53<<((x54%x55)&x56));

	if (t3 != 120434278278LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x77 = INT16_MAX;
	static uint32_t x78 = 1U;
	int32_t x80 = -1;
	static int32_t t4 = 3;

	t4 = (x77<<((x78%x79)&x80));

	if (t4 != 65534) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x86 = INT8_MIN;
	volatile int8_t x87 = -2;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t5 = -23058;

	t5 = (x85<<((x86%x87)&x88));

	if (t5 != 19) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x101 = UINT8_MAX;
	uint16_t x102 = 1U;
	int64_t x104 = INT64_MIN;
	int32_t t6 = -23911946;

	t6 = (x101<<((x102%x103)&x104));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x121 = UINT8_MAX;
	int64_t x122 = 1LL;
	volatile uint8_t x123 = UINT8_MAX;
	static volatile int64_t x124 = -1LL;

	t7 = (x121<<((x122%x123)&x124));

	if (t7 != 510) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x154 = INT16_MIN;
	uint32_t x155 = UINT32_MAX;
	uint8_t x156 = 57U;
	int32_t t8 = -9;

	t8 = (x153<<((x154%x155)&x156));

	if (t8 != 85) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x181 = 10U;
	int32_t x182 = INT32_MAX;
	int8_t x184 = INT8_MIN;
	volatile int32_t t9 = -143;

	t9 = (x181<<((x182%x183)&x184));

	if (t9 != 10) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x185 = UINT8_MAX;
	uint16_t x186 = UINT16_MAX;
	static uint8_t x187 = 6U;
	int16_t x188 = -1;
	static int32_t t10 = -1431032;

	t10 = (x185<<((x186%x187)&x188));

	if (t10 != 2040) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x189 = 25;
	static int64_t x191 = INT64_MIN;
	uint8_t x192 = 7U;
	static volatile int32_t t11 = 1;

	t11 = (x189<<((x190%x191)&x192));

	if (t11 != 400) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x213 = 406U;
	volatile int64_t x214 = INT64_MIN;
	static volatile int32_t x215 = -1;
	uint32_t t12 = 769U;

	t12 = (x213<<((x214%x215)&x216));

	if (t12 != 406U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x217 = 0;
	uint16_t x219 = 1U;
	static volatile int32_t t13 = -221;

	t13 = (x217<<((x218%x219)&x220));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x241 = UINT64_MAX;
	volatile uint32_t x242 = 16056742U;
	volatile int16_t x243 = 22;
	static uint8_t x244 = 30U;
	uint64_t t14 = 14LLU;

	t14 = (x241<<((x242%x243)&x244));

	if (t14 != 18446744073708503040LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x258 = INT32_MIN;
	volatile int8_t x260 = 3;
	uint64_t t15 = UINT64_MAX;

	t15 = (x257<<((x258%x259)&x260));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x265 = INT64_MAX;
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = 12;
	volatile int8_t x268 = INT8_MIN;

	t16 = (x265<<((x266%x267)&x268));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x290 = INT16_MIN;
	int64_t x291 = INT64_MIN;
	uint64_t t17 = UINT64_MAX;

	t17 = (x289<<((x290%x291)&x292));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x301 = 199759941U;
	uint64_t x304 = UINT64_MAX;
	uint32_t t18 = 33612U;

	t18 = (x301<<((x302%x303)&x304));

	if (t18 != 199759941U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x321 = UINT16_MAX;
	int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	int8_t x324 = -30;
	int32_t t19 = -1;

	t19 = (x321<<((x322%x323)&x324));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x337 = UINT32_MAX;
	int64_t x338 = -407500114747880337LL;
	uint32_t t20 = 576779U;

	t20 = (x337<<((x338%x339)&x340));

	if (t20 != 4294967292U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x345 = INT8_MAX;
	static volatile int64_t x346 = INT64_MIN;
	int16_t x348 = -1;
	static volatile int32_t t21 = 0;

	t21 = (x345<<((x346%x347)&x348));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x361 = 53U;
	int16_t x363 = INT16_MAX;
	int8_t x364 = 1;
	int32_t t22 = -104601377;

	t22 = (x361<<((x362%x363)&x364));

	if (t22 != 53) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x398 = INT16_MIN;
	static int32_t x399 = -1;
	uint16_t x400 = 495U;
	volatile int32_t t23 = 25373;

	t23 = (x397<<((x398%x399)&x400));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x405 = 658957731668LLU;
	volatile int32_t x406 = -488849045;
	int32_t x407 = -1;
	volatile uint64_t t24 = 8305305872658LLU;

	t24 = (x405<<((x406%x407)&x408));

	if (t24 != 658957731668LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x421 = INT64_MAX;
	volatile uint8_t x422 = 14U;
	uint32_t x423 = 6865U;
	int32_t x424 = INT32_MIN;
	static int64_t t25 = INT64_MAX;

	t25 = (x421<<((x422%x423)&x424));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x425 = 878068459U;
	uint16_t x426 = UINT16_MAX;
	volatile int32_t x427 = 7488;

	t26 = (x425<<((x426%x427)&x428));

	if (t26 != 878068459U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x465 = INT16_MAX;
	static int32_t x466 = -1;

	t27 = (x465<<((x466%x467)&x468));

	if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x501 = 96382LLU;
	uint16_t x502 = UINT16_MAX;
	int64_t x503 = INT64_MIN;
	volatile int8_t x504 = 0;

	t28 = (x501<<((x502%x503)&x504));

	if (t28 != 96382LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x510 = UINT64_MAX;
	int8_t x511 = INT8_MAX;
	int8_t x512 = -1;
	uint32_t t29 = 13U;

	t29 = (x509<<((x510%x511)&x512));

	if (t29 != 14U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x561 = INT16_MAX;
	int32_t x562 = INT32_MIN;
	int64_t x563 = 934668722031898LL;
	int16_t x564 = 28;
	static volatile int32_t t30 = -14;

	t30 = (x561<<((x562%x563)&x564));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x577 = 1213U;
	static int32_t x578 = 1;
	static int16_t x579 = INT16_MIN;
	int16_t x580 = INT16_MAX;
	volatile int32_t t31 = -12;

	t31 = (x577<<((x578%x579)&x580));

	if (t31 != 2426) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x595 = 1487LL;
	uint8_t x596 = 5U;
	int32_t t32 = 1;

	t32 = (x593<<((x594%x595)&x596));

	if (t32 != 2097120) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x599 = -1;
	static int64_t x600 = 78253329586427293LL;

	t33 = (x597<<((x598%x599)&x600));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x602 = 1071731529381160526LL;
	int8_t x603 = -1;
	volatile uint8_t x604 = 19U;
	volatile uint32_t t34 = 1U;

	t34 = (x601<<((x602%x603)&x604));

	if (t34 != 115U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x606 = 32U;
	int32_t x607 = INT32_MIN;
	int16_t x608 = 23;
	volatile int32_t t35 = -132;

	t35 = (x605<<((x606%x607)&x608));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x618 = -17;
	int8_t x619 = -1;
	uint64_t t36 = UINT64_MAX;

	t36 = (x617<<((x618%x619)&x620));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x621 = 21930465LL;
	int16_t x623 = -1;
	static volatile int64_t t37 = 13176814LL;

	t37 = (x621<<((x622%x623)&x624));

	if (t37 != 21930465LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x629 = 4503LL;
	volatile int8_t x630 = INT8_MIN;
	static volatile int64_t x631 = INT64_MIN;
	int8_t x632 = INT8_MAX;
	volatile int64_t t38 = -1910LL;

	t38 = (x629<<((x630%x631)&x632));

	if (t38 != 4503LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x641 = UINT16_MAX;
	volatile uint8_t x642 = 1U;
	int16_t x643 = INT16_MIN;
	uint16_t x644 = 200U;

	t39 = (x641<<((x642%x643)&x644));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x650 = 23235U;
	int64_t x651 = -6LL;
	int32_t x652 = -100;
	int32_t t40 = -626405343;

	t40 = (x649<<((x650%x651)&x652));

	if (t40 != 23) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x666 = 79U;
	int8_t x667 = INT8_MAX;
	static int64_t x668 = INT64_MIN;

	t41 = (x665<<((x666%x667)&x668));

	if (t41 != 13187498U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x694 = -1;
	volatile uint64_t x695 = 16414313369648LLU;
	static int64_t x696 = INT64_MIN;
	static volatile int32_t t42 = -86720;

	t42 = (x693<<((x694%x695)&x696));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x697 = 93340U;
	int64_t x698 = INT64_MIN;
	int32_t x699 = -1;
	static int64_t x700 = INT64_MAX;
	volatile uint32_t t43 = 110150343U;

	t43 = (x697<<((x698%x699)&x700));

	if (t43 != 93340U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x725 = 714352204910816993LLU;
	uint64_t x727 = 2671302807050276LLU;
	int16_t x728 = 1;
	volatile uint64_t t44 = 36237LLU;

	t44 = (x725<<((x726%x727)&x728));

	if (t44 != 1428704409821633986LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x741 = 400LLU;
	uint16_t x743 = 30846U;
	uint16_t x744 = 10953U;
	volatile uint64_t t45 = 3978756223316916LLU;

	t45 = (x741<<((x742%x743)&x744));

	if (t45 != 400LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x757 = 27518755;
	volatile int32_t x758 = INT32_MIN;
	int64_t x759 = -1LL;
	uint8_t x760 = 1U;
	int32_t t46 = 22;

	t46 = (x757<<((x758%x759)&x760));

	if (t46 != 27518755) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x761 = 126U;
	int16_t x762 = -1;
	int64_t x763 = 16496146991LL;
	int16_t x764 = 1;
	volatile int32_t t47 = -333691017;

	t47 = (x761<<((x762%x763)&x764));

	if (t47 != 252) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x789 = 1701U;
	static int32_t x790 = INT32_MAX;
	static int8_t x791 = INT8_MAX;
	uint32_t x792 = UINT32_MAX;
	volatile int32_t t48 = -228745960;

	t48 = (x789<<((x790%x791)&x792));

	if (t48 != 217728) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x813 = INT32_MAX;
	static int8_t x814 = INT8_MIN;
	volatile int16_t x815 = -1;
	int32_t t49 = INT32_MAX;

	t49 = (x813<<((x814%x815)&x816));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x825 = 1U;
	uint8_t x826 = UINT8_MAX;
	uint16_t x827 = 2946U;
	static int32_t x828 = INT32_MIN;

	t50 = (x825<<((x826%x827)&x828));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x829 = 1U;
	int8_t x830 = INT8_MAX;
	static uint64_t x831 = 36278291450202LLU;
	static uint64_t x832 = 9827896549539719LLU;
	volatile int32_t t51 = -12119975;

	t51 = (x829<<((x830%x831)&x832));

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x853 = UINT64_MAX;
	volatile int64_t x854 = 6040252LL;
	uint16_t x855 = 1406U;
	int16_t x856 = 3220;
	uint64_t t52 = 327864618LLU;

	t52 = (x853<<((x854%x855)&x856));

	if (t52 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x869 = 1;
	uint64_t x870 = UINT64_MAX;
	static int8_t x872 = 0;
	volatile int32_t t53 = 93;

	t53 = (x869<<((x870%x871)&x872));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x889 = 30U;
	uint32_t x890 = UINT32_MAX;
	int64_t x891 = 1205173LL;
	static uint8_t x892 = 48U;
	int32_t t54 = -1581;

	t54 = (x889<<((x890%x891)&x892));

	if (t54 != 1966080) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x897 = INT16_MAX;
	int64_t x898 = -1LL;
	static int16_t x899 = -1;
	static volatile int32_t t55 = 98;

	t55 = (x897<<((x898%x899)&x900));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x909 = UINT64_MAX;
	int32_t x912 = -1;
	static uint64_t t56 = 6733913083531672870LLU;

	t56 = (x909<<((x910%x911)&x912));

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x913 = 6654465U;
	volatile int64_t x914 = 507923190039505LL;
	int16_t x915 = INT16_MIN;
	static volatile int8_t x916 = 0;

	t57 = (x913<<((x914%x915)&x916));

	if (t57 != 6654465U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x925 = 762U;
	static uint8_t x926 = 1U;
	static int64_t x928 = -1LL;

	t58 = (x925<<((x926%x927)&x928));

	if (t58 != 762) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x949 = 105U;
	static uint16_t x951 = UINT16_MAX;
	int64_t x952 = 3626814LL;
	int32_t t59 = 1;

	t59 = (x949<<((x950%x951)&x952));

	if (t59 != 105) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x957 = 7U;
	uint64_t x958 = UINT64_MAX;
	int32_t x959 = -1;
	static int32_t x960 = 121510171;
	volatile int32_t t60 = 19;

	t60 = (x957<<((x958%x959)&x960));

	if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x962 = 0U;
	static int8_t x964 = INT8_MAX;
	static int32_t t61 = -30628;

	t61 = (x961<<((x962%x963)&x964));

	if (t61 != 10) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x969 = 117U;
	static int8_t x970 = 0;
	static int32_t x971 = -28;
	volatile int64_t x972 = INT64_MIN;

	t62 = (x969<<((x970%x971)&x972));

	if (t62 != 117) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x973 = 8537696U;
	static uint16_t x974 = UINT16_MAX;
	int16_t x975 = INT16_MAX;
	int32_t x976 = INT32_MIN;
	uint32_t t63 = 88250748U;

	t63 = (x973<<((x974%x975)&x976));

	if (t63 != 8537696U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1001 = 6U;
	volatile int8_t x1002 = INT8_MIN;
	int32_t x1003 = -1;
	int8_t x1004 = INT8_MIN;
	static volatile int32_t t64 = -18;

	t64 = (x1001<<((x1002%x1003)&x1004));

	if (t64 != 6) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1005 = 1U;
	volatile int8_t x1006 = 39;
	int16_t x1007 = -1;
	volatile uint16_t x1008 = UINT16_MAX;
	static int32_t t65 = -185567;

	t65 = (x1005<<((x1006%x1007)&x1008));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1035 = -183143951668LL;
	static int64_t x1036 = INT64_MIN;

	t66 = (x1033<<((x1034%x1035)&x1036));

	if (t66 != 14) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1050 = INT8_MAX;
	int32_t x1051 = 649782;
	int16_t x1052 = INT16_MIN;
	uint32_t t67 = 604823U;

	t67 = (x1049<<((x1050%x1051)&x1052));

	if (t67 != 1149915142U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1053 = 1U;
	int32_t x1055 = 1255011;
	int32_t x1056 = INT32_MIN;

	t68 = (x1053<<((x1054%x1055)&x1056));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x1061 = UINT64_MAX;
	uint16_t x1062 = 118U;
	int64_t x1063 = -1LL;
	uint64_t t69 = UINT64_MAX;

	t69 = (x1061<<((x1062%x1063)&x1064));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x1069 = 7U;
	int16_t x1070 = 92;
	uint16_t x1072 = UINT16_MAX;
	volatile int32_t t70 = 1;

	t70 = (x1069<<((x1070%x1071)&x1072));

	if (t70 != 14336) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x1078 = INT8_MAX;
	static int32_t t71 = 1843;

	t71 = (x1077<<((x1078%x1079)&x1080));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1081 = 59446182U;
	static int32_t x1082 = INT32_MIN;
	volatile uint64_t x1083 = 1LLU;
	static uint16_t x1084 = UINT16_MAX;
	uint32_t t72 = 17U;

	t72 = (x1081<<((x1082%x1083)&x1084));

	if (t72 != 59446182U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1089 = 0U;
	int8_t x1090 = 7;
	volatile int8_t x1091 = INT8_MIN;
	uint8_t x1092 = UINT8_MAX;
	int32_t t73 = -48314;

	t73 = (x1089<<((x1090%x1091)&x1092));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x1093 = UINT8_MAX;
	int8_t x1094 = 0;
	int16_t x1095 = INT16_MIN;
	static uint64_t x1096 = 1479LLU;
	static volatile int32_t t74 = -4568;

	t74 = (x1093<<((x1094%x1095)&x1096));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1105 = UINT64_MAX;
	static uint8_t x1107 = 11U;
	static uint64_t t75 = 51465158200LLU;

	t75 = (x1105<<((x1106%x1107)&x1108));

	if (t75 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1110 = 237658LL;
	int32_t x1111 = -1;
	volatile int32_t t76 = -2178;

	t76 = (x1109<<((x1110%x1111)&x1112));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1121 = 20118U;
	int64_t x1122 = INT64_MIN;
	int32_t x1123 = -1;
	int8_t x1124 = INT8_MIN;
	volatile int32_t t77 = -124618;

	t77 = (x1121<<((x1122%x1123)&x1124));

	if (t77 != 20118) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x1125 = INT8_MAX;
	int8_t x1126 = INT8_MIN;
	int8_t x1127 = INT8_MIN;
	int16_t x1128 = INT16_MAX;
	static int32_t t78 = -1054164709;

	t78 = (x1125<<((x1126%x1127)&x1128));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1161 = 126;
	volatile int8_t x1162 = 0;
	volatile int32_t x1163 = 2;
	int8_t x1164 = 0;

	t79 = (x1161<<((x1162%x1163)&x1164));

	if (t79 != 126) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1165 = 174748958;
	int16_t x1167 = -1;
	uint64_t x1168 = UINT64_MAX;

	t80 = (x1165<<((x1166%x1167)&x1168));

	if (t80 != 174748958) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1177 = 92U;
	static int8_t x1178 = 11;
	volatile int64_t x1179 = INT64_MIN;
	static int32_t t81 = 3129199;

	t81 = (x1177<<((x1178%x1179)&x1180));

	if (t81 != 736) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x1185 = UINT32_MAX;
	static int32_t x1186 = 1;
	static int16_t x1187 = -1;
	uint32_t t82 = UINT32_MAX;

	t82 = (x1185<<((x1186%x1187)&x1188));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x1201 = 220271283309964195LLU;
	uint64_t x1202 = UINT64_MAX;
	volatile int8_t x1203 = INT8_MAX;
	uint32_t x1204 = UINT32_MAX;

	t83 = (x1201<<((x1202%x1203)&x1204));

	if (t83 != 440542566619928390LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x1221 = 6U;
	volatile uint8_t x1222 = 8U;
	static int32_t x1223 = -3381393;
	int8_t x1224 = INT8_MIN;
	volatile int32_t t84 = 4066;

	t84 = (x1221<<((x1222%x1223)&x1224));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1226 = 3106;
	uint16_t x1227 = 26936U;
	volatile int32_t x1228 = INT32_MIN;
	static int32_t t85 = INT32_MAX;

	t85 = (x1225<<((x1226%x1227)&x1228));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1249 = INT16_MAX;
	static int8_t x1250 = -1;
	static int8_t x1251 = 1;
	uint8_t x1252 = UINT8_MAX;
	int32_t t86 = -920350546;

	t86 = (x1249<<((x1250%x1251)&x1252));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1262 = 98U;
	int8_t x1263 = -1;
	static uint64_t x1264 = 489335752713LLU;

	t87 = (x1261<<((x1262%x1263)&x1264));

	if (t87 != 101) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x1285 = 233U;
	volatile uint32_t t88 = 2145474U;

	t88 = (x1285<<((x1286%x1287)&x1288));

	if (t88 != 932U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x1321 = UINT16_MAX;
	int32_t x1322 = -1;
	int16_t x1323 = 1;
	int16_t x1324 = INT16_MAX;
	static int32_t t89 = 252306485;

	t89 = (x1321<<((x1322%x1323)&x1324));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x1329 = 363416579103LLU;
	uint8_t x1330 = UINT8_MAX;
	volatile int32_t x1331 = -1;

	t90 = (x1329<<((x1330%x1331)&x1332));

	if (t90 != 363416579103LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x1337 = 207743U;
	int8_t x1338 = INT8_MIN;
	int8_t x1339 = -1;
	uint8_t x1340 = UINT8_MAX;
	uint32_t t91 = 213U;

	t91 = (x1337<<((x1338%x1339)&x1340));

	if (t91 != 207743U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x1349 = 3686;
	int8_t x1350 = -1;
	int8_t x1351 = 1;
	int32_t t92 = 3;

	t92 = (x1349<<((x1350%x1351)&x1352));

	if (t92 != 3686) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x1353 = 918928930994341LLU;
	uint8_t x1354 = 58U;
	static uint32_t x1355 = 5U;
	volatile uint16_t x1356 = 72U;
	volatile uint64_t t93 = 836LLU;

	t93 = (x1353<<((x1354%x1355)&x1356));

	if (t93 != 918928930994341LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1373 = 8U;
	static int64_t x1374 = INT64_MIN;
	static volatile int32_t x1375 = INT32_MIN;
	volatile int32_t t94 = -3791563;

	t94 = (x1373<<((x1374%x1375)&x1376));

	if (t94 != 8) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1383 = INT64_MIN;
	int32_t x1384 = 2;
	volatile uint64_t t95 = 4483364870176336LLU;

	t95 = (x1381<<((x1382%x1383)&x1384));

	if (t95 != 1149983728735788LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1386 = 7U;
	int64_t x1387 = -464647844794345870LL;
	volatile int16_t x1388 = 7;
	static volatile int32_t t96 = 9;

	t96 = (x1385<<((x1386%x1387)&x1388));

	if (t96 != 4194176) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x1402 = -96920815900892483LL;
	volatile int8_t x1403 = INT8_MIN;
	uint8_t x1404 = 0U;

	t97 = (x1401<<((x1402%x1403)&x1404));

	if (t97 != 14) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1409 = 6;
	uint16_t x1411 = 742U;
	volatile int32_t x1412 = INT32_MIN;
	int32_t t98 = -7;

	t98 = (x1409<<((x1410%x1411)&x1412));

	if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1433 = 21U;
	uint32_t x1434 = 894817799U;
	volatile uint32_t x1435 = 5U;
	volatile int16_t x1436 = 1665;
	int32_t t99 = 24;

	t99 = (x1433<<((x1434%x1435)&x1436));

	if (t99 != 21) { NG(); } else { ; }
	
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

