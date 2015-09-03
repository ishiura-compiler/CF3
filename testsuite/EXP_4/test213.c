#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t t0 = 1LLU;
int32_t x40 = -1;
int64_t x61 = -237551889LL;
int64_t x62 = INT64_MAX;
uint8_t x63 = UINT8_MAX;
static volatile uint64_t x94 = UINT64_MAX;
int32_t x95 = -1;
int64_t x96 = -24655LL;
volatile int64_t t6 = 56027LL;
static int32_t x142 = 1059;
static uint32_t x143 = 6U;
int16_t x172 = INT16_MIN;
uint32_t t12 = 2982323U;
int16_t x218 = INT16_MIN;
volatile uint64_t x221 = UINT64_MAX;
int16_t x224 = INT16_MIN;
uint64_t t14 = 730LLU;
static int16_t x227 = 12;
volatile int64_t x238 = 831396543777401272LL;
int8_t x249 = INT8_MIN;
volatile uint64_t x252 = UINT64_MAX;
volatile uint64_t t17 = 30443519607LLU;
int32_t x263 = 640288;
uint8_t x272 = 11U;
uint16_t x300 = 5U;
int64_t x334 = INT64_MIN;
uint64_t t29 = 1816846156880147LLU;
int8_t x360 = INT8_MAX;
int8_t x399 = INT8_MAX;
int8_t x418 = INT8_MIN;
int8_t x426 = -1;
static volatile uint64_t x427 = 230LLU;
int8_t x450 = INT8_MAX;
static uint8_t x468 = 3U;
static int64_t t43 = 566849804781530LL;
volatile uint64_t t44 = 13373915777472LLU;
int32_t x553 = INT32_MIN;
volatile uint64_t t45 = 62852795656LLU;
int32_t x617 = -1;
int64_t x618 = -1LL;
volatile int8_t x621 = INT8_MAX;
static uint64_t x633 = UINT64_MAX;
int64_t x648 = -1LL;
uint64_t t54 = 69859221634746077LLU;
int64_t t55 = -32LL;
int32_t x666 = -1;
static uint32_t x668 = UINT32_MAX;
static volatile int64_t t56 = 65240795LL;
int32_t x675 = INT32_MIN;
volatile int16_t x676 = -1;
uint64_t x683 = 485993964488391694LLU;
uint64_t t58 = 61053889922LLU;
volatile int16_t x690 = INT16_MAX;
uint64_t t59 = 560735106LLU;
int32_t x704 = -44517391;
volatile int16_t x707 = 9;
int64_t x709 = -1LL;
volatile int64_t x713 = INT64_MIN;
int64_t x714 = -1866958LL;
volatile int64_t t64 = 4502761026331826LL;
uint32_t x738 = UINT32_MAX;
int32_t x739 = 31515;
uint8_t x746 = UINT8_MAX;
volatile int8_t x756 = INT8_MIN;
int64_t x766 = -926887802729LL;
int16_t x767 = INT16_MIN;
volatile int64_t t69 = 58074714919846LL;
uint32_t x769 = 71353154U;
static int8_t x789 = -5;
volatile uint64_t t71 = 11LLU;
int32_t x794 = 32078;
volatile int64_t t72 = 258241LL;
volatile int16_t x802 = -66;
int16_t x804 = -5899;
volatile uint16_t x813 = 16060U;
int8_t x817 = INT8_MIN;
static int32_t x820 = -9;
int16_t x867 = -7;
static volatile int16_t x870 = INT16_MAX;
volatile int64_t t79 = -21209990LL;
int64_t x878 = INT64_MIN;
int32_t x886 = 7415986;
volatile int32_t t82 = 3;
int8_t x891 = -1;
static volatile int64_t t83 = -27652447287651LL;
volatile uint64_t t84 = 27173015540LLU;
uint32_t x932 = 149031488U;
static uint8_t x956 = 7U;
static uint64_t x961 = 16333745821325LLU;
volatile int64_t x962 = INT64_MIN;
static volatile int32_t t90 = -17738;
uint64_t x1043 = 604126LLU;
int32_t x1049 = 6340860;
uint32_t x1054 = UINT32_MAX;
volatile uint8_t x1056 = 57U;
static volatile int64_t t93 = 1117704916499122932LL;
uint32_t x1097 = 21935U;
int32_t x1099 = INT32_MAX;
volatile uint64_t t96 = 7128567505036LLU;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int16_t x2 = INT16_MIN;
	static int32_t x3 = -4;
	volatile int8_t x4 = INT8_MAX;

	t0 = (x1%(x2/(x3-x4)));

	if (t0 != 115LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x37 = -1;
	volatile int8_t x38 = INT8_MIN;
	static int8_t x39 = INT8_MAX;
	volatile int32_t t1 = -8798;

	t1 = (x37%(x38/(x39-x40)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x45 = 5U;
	volatile int64_t x46 = INT64_MIN;
	int32_t x47 = INT32_MIN;
	int16_t x48 = INT16_MIN;
	int64_t t2 = -926194LL;

	t2 = (x45%(x46/(x47-x48)));

	if (t2 != 5LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x64 = -1LL;
	volatile int64_t t3 = -295535LL;

	t3 = (x61%(x62/(x63-x64)));

	if (t3 != -237551889LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = 20127866U;
	uint8_t x75 = UINT8_MAX;
	int32_t x76 = -1;
	uint32_t t4 = 434681904U;

	t4 = (x73%(x74/(x75-x76)));

	if (t4 != 52544U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x93 = INT16_MAX;
	static uint64_t t5 = 23712LLU;

	t5 = (x93%(x94/(x95-x96)));

	if (t5 != 32767LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x125 = INT64_MIN;
	int32_t x126 = INT32_MIN;
	static int16_t x127 = INT16_MAX;
	volatile uint16_t x128 = 139U;

	t6 = (x125%(x126/(x127-x128)));

	if (t6 != -30464LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MIN;
	int8_t x131 = 1;
	volatile int8_t x132 = -1;
	static int64_t t7 = 791807LL;

	t7 = (x129%(x130/(x131-x132)));

	if (t7 != -2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x141 = 143005197757951181LLU;
	static uint64_t x144 = UINT64_MAX;
	uint64_t t8 = 361836407573503LLU;

	t8 = (x141%(x142/(x143-x144)));

	if (t8 != 25LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x161 = 22U;
	volatile int16_t x162 = 1612;
	int64_t x163 = 2LL;
	static uint16_t x164 = 68U;
	static int64_t t9 = 60650792155237LL;

	t9 = (x161%(x162/(x163-x164)));

	if (t9 != 22LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x169 = INT32_MIN;
	int16_t x170 = INT16_MIN;
	static uint64_t x171 = 1043291052LLU;
	uint64_t t10 = 10043069LLU;

	t10 = (x169%(x170/(x171-x172)));

	if (t10 != 16512040758LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x189 = INT64_MIN;
	int8_t x190 = INT8_MIN;
	uint32_t x191 = 695U;
	uint32_t x192 = 3459835U;
	volatile int64_t t11 = -10165LL;

	t11 = (x189%(x190/(x191-x192)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x213 = INT16_MIN;
	int32_t x214 = -40605726;
	int32_t x215 = 0;
	volatile uint32_t x216 = UINT32_MAX;

	t12 = (x213%(x214/(x215-x216)));

	if (t12 != 40572958U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x217 = UINT16_MAX;
	volatile uint16_t x219 = 11589U;
	uint64_t x220 = UINT64_MAX;
	uint64_t t13 = 45370451LLU;

	t13 = (x217%(x218/(x219-x220)));

	if (t13 != 65535LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x222 = UINT16_MAX;
	static uint64_t x223 = UINT64_MAX;

	t14 = (x221%(x222/(x223-x224)));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x225 = INT32_MAX;
	volatile int8_t x226 = INT8_MAX;
	volatile uint64_t x228 = UINT64_MAX;
	static uint64_t t15 = 15712533748338443LLU;

	t15 = (x225%(x226/(x227-x228)));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x237 = INT32_MAX;
	uint32_t x239 = 962232U;
	volatile int8_t x240 = INT8_MIN;
	volatile int64_t t16 = -1LL;

	t16 = (x237%(x238/(x239-x240)));

	if (t16 != 2147483647LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x250 = 65132628;
	uint16_t x251 = UINT16_MAX;

	t17 = (x249%(x250/(x251-x252)));

	if (t17 != 881LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x253 = UINT64_MAX;
	volatile int64_t x254 = INT64_MIN;
	int16_t x255 = INT16_MAX;
	uint32_t x256 = UINT32_MAX;
	static uint64_t t18 = 16314LLU;

	t18 = (x253%(x254/(x255-x256)));

	if (t18 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x257 = -564;
	uint32_t x258 = UINT32_MAX;
	volatile int16_t x259 = INT16_MIN;
	int8_t x260 = -45;
	volatile uint32_t t19 = 87279U;

	t19 = (x257%(x258/(x259-x260)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x261 = -1;
	volatile int16_t x262 = INT16_MIN;
	uint32_t x264 = 252418149U;
	volatile uint32_t t20 = 26U;

	t20 = (x261%(x262/(x263-x264)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x269 = 862856228665905LLU;
	uint16_t x270 = 21U;
	static int64_t x271 = -1LL;
	static volatile uint64_t t21 = 263218573LLU;

	t21 = (x269%(x270/(x271-x272)));

	if (t21 != 862856228665905LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x273 = 133105U;
	int8_t x274 = INT8_MIN;
	int32_t x275 = -1;
	uint64_t x276 = 140LLU;
	uint64_t t22 = 5LLU;

	t22 = (x273%(x274/(x275-x276)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x285 = 11961;
	int64_t x286 = INT64_MIN;
	int8_t x287 = INT8_MAX;
	volatile int32_t x288 = -2511;
	int64_t t23 = -1033208445762220365LL;

	t23 = (x285%(x286/(x287-x288)));

	if (t23 != 11961LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x293 = 62822U;
	uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 143U;
	uint64_t x296 = 371946LLU;
	volatile uint64_t t24 = 1LLU;

	t24 = (x293%(x294/(x295-x296)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x297 = INT8_MIN;
	int64_t x298 = 2611926728853896425LL;
	int32_t x299 = -1;
	int64_t t25 = 231771238662LL;

	t25 = (x297%(x298/(x299-x300)));

	if (t25 != -128LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x301 = 7U;
	int32_t x302 = -563334;
	uint16_t x303 = UINT16_MAX;
	int8_t x304 = INT8_MIN;
	static uint32_t t26 = 21U;

	t26 = (x301%(x302/(x303-x304)));

	if (t26 != 7U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x325 = 63;
	int16_t x326 = INT16_MIN;
	uint32_t x327 = 1666056U;
	int16_t x328 = INT16_MIN;
	static uint32_t t27 = 44770U;

	t27 = (x325%(x326/(x327-x328)));

	if (t27 != 63U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x329 = UINT32_MAX;
	volatile int32_t x330 = INT32_MAX;
	int16_t x331 = -353;
	int32_t x332 = -1;
	uint32_t t28 = 10U;

	t28 = (x329%(x330/(x331-x332)));

	if (t28 != 6100804U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;

	t29 = (x333%(x334/(x335-x336)));

	if (t29 != 282578800148736LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x337 = INT16_MIN;
	int64_t x338 = 990552868LL;
	int8_t x339 = INT8_MIN;
	volatile uint16_t x340 = 118U;
	static int64_t t30 = -8937328LL;

	t30 = (x337%(x338/(x339-x340)));

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x341 = 4644224U;
	int64_t x342 = -84879304778704317LL;
	int8_t x343 = INT8_MIN;
	uint8_t x344 = UINT8_MAX;
	static int64_t t31 = -25832LL;

	t31 = (x341%(x342/(x343-x344)));

	if (t31 != 4644224LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x357 = 3U;
	int8_t x358 = INT8_MIN;
	int16_t x359 = -1;
	int32_t t32 = 1691;

	t32 = (x357%(x358/(x359-x360)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x369 = 30U;
	int32_t x370 = INT32_MAX;
	int64_t x371 = -1LL;
	volatile uint8_t x372 = 60U;
	int64_t t33 = -432LL;

	t33 = (x369%(x370/(x371-x372)));

	if (t33 != 30LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x397 = INT64_MAX;
	int16_t x398 = INT16_MAX;
	uint32_t x400 = UINT32_MAX;
	int64_t t34 = -133677315LL;

	t34 = (x397%(x398/(x399-x400)));

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x417 = UINT32_MAX;
	static int8_t x419 = INT8_MAX;
	int16_t x420 = 63;
	static volatile uint32_t t35 = 34907610U;

	t35 = (x417%(x418/(x419-x420)));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x425 = 124U;
	static volatile uint64_t x428 = 57092457214LLU;
	volatile uint64_t t36 = 3676339034369LLU;

	t36 = (x425%(x426/(x427-x428)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x441 = INT16_MAX;
	int64_t x442 = INT64_MAX;
	uint8_t x443 = 43U;
	int8_t x444 = -1;
	int64_t t37 = 6018156407521742LL;

	t37 = (x441%(x442/(x443-x444)));

	if (t37 != 32767LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x449 = INT64_MIN;
	uint32_t x451 = 214U;
	static int8_t x452 = INT8_MAX;
	static int64_t t38 = -5532888LL;

	t38 = (x449%(x450/(x451-x452)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x453 = INT8_MIN;
	int32_t x454 = -1;
	static volatile uint64_t x455 = UINT64_MAX;
	uint32_t x456 = 4048U;
	static uint64_t t39 = 238734916807LLU;

	t39 = (x453%(x454/(x455-x456)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x465 = UINT8_MAX;
	int64_t x466 = INT64_MIN;
	uint16_t x467 = 19U;
	volatile int64_t t40 = 37721102023882LL;

	t40 = (x465%(x466/(x467-x468)));

	if (t40 != 255LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x485 = 337U;
	int32_t x486 = -101;
	volatile uint64_t x487 = 597966025463LLU;
	volatile uint8_t x488 = 6U;
	volatile uint64_t t41 = 188222723175040702LLU;

	t41 = (x485%(x486/(x487-x488)));

	if (t41 != 337LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x509 = UINT64_MAX;
	volatile int64_t x510 = INT64_MIN;
	static int64_t x511 = -1LL;
	int32_t x512 = INT32_MIN;
	uint64_t t42 = 1205362529342078825LLU;

	t42 = (x509%(x510/(x511-x512)));

	if (t42 != 4294967297LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x517 = -1988987;
	volatile int64_t x518 = INT64_MIN;
	int8_t x519 = INT8_MIN;
	int16_t x520 = INT16_MIN;

	t43 = (x517%(x518/(x519-x520)));

	if (t43 != -1988987LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x533 = INT8_MIN;
	int16_t x534 = INT16_MAX;
	uint16_t x535 = 3U;
	uint64_t x536 = UINT64_MAX;

	t44 = (x533%(x534/(x535-x536)));

	if (t44 != 3968LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x554 = -1;
	int64_t x555 = INT64_MAX;
	uint64_t x556 = UINT64_MAX;

	t45 = (x553%(x554/(x555-x556)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x557 = 5546LL;
	volatile int8_t x558 = -1;
	uint32_t x559 = 2926U;
	int8_t x560 = 1;
	static volatile int64_t t46 = -100215LL;

	t46 = (x557%(x558/(x559-x560)));

	if (t46 != 5546LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x593 = INT8_MIN;
	volatile int8_t x594 = INT8_MIN;
	uint64_t x595 = 329798LLU;
	uint64_t x596 = 77253289816133LLU;
	uint64_t t47 = 127LLU;

	t47 = (x593%(x594/(x595-x596)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x601 = UINT8_MAX;
	int32_t x602 = INT32_MAX;
	int8_t x603 = INT8_MIN;
	static int8_t x604 = INT8_MAX;
	static volatile int32_t t48 = -1025264583;

	t48 = (x601%(x602/(x603-x604)));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x619 = 1755021718LLU;
	int16_t x620 = -1;
	volatile uint64_t t49 = 478405954LLU;

	t49 = (x617%(x618/(x619-x620)));

	if (t49 != 594690782LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x622 = -14817;
	uint64_t x623 = 11827306343530LLU;
	int16_t x624 = INT16_MIN;
	uint64_t t50 = 871LLU;

	t50 = (x621%(x622/(x623-x624)));

	if (t50 != 127LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x634 = UINT16_MAX;
	int64_t x635 = -1LL;
	volatile uint8_t x636 = 53U;
	volatile uint64_t t51 = 3464595342611LLU;

	t51 = (x633%(x634/(x635-x636)));

	if (t51 != 1212LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x637 = 9U;
	int64_t x638 = INT64_MIN;
	static int16_t x639 = -7378;
	volatile int16_t x640 = INT16_MIN;
	volatile int64_t t52 = -376LL;

	t52 = (x637%(x638/(x639-x640)));

	if (t52 != 9LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x645 = -1;
	volatile int16_t x646 = INT16_MAX;
	static int16_t x647 = INT16_MIN;
	volatile int64_t t53 = -15104716709348924LL;

	t53 = (x645%(x646/(x647-x648)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x649 = 40483243LLU;
	uint64_t x650 = UINT64_MAX;
	int8_t x651 = 1;
	uint64_t x652 = UINT64_MAX;

	t54 = (x649%(x650/(x651-x652)));

	if (t54 != 40483243LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x657 = -1LL;
	int32_t x658 = -6139626;
	int16_t x659 = INT16_MIN;
	uint16_t x660 = UINT16_MAX;

	t55 = (x657%(x658/(x659-x660)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x665 = -1LL;
	static uint8_t x667 = 44U;

	t56 = (x665%(x666/(x667-x668)));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x673 = -4000;
	uint32_t x674 = UINT32_MAX;
	uint32_t t57 = 25027741U;

	t57 = (x673%(x674/(x675-x676)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x681 = -1;
	int8_t x682 = -1;
	int64_t x684 = 0LL;

	t58 = (x681%(x682/(x683-x684)));

	if (t58 != 11LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x689 = UINT64_MAX;
	int64_t x691 = -1LL;
	static int32_t x692 = -6325;

	t59 = (x689%(x690/(x691-x692)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x693 = 3;
	static uint16_t x694 = 21U;
	volatile int16_t x695 = -1;
	int32_t x696 = -11;
	volatile int32_t t60 = -3515366;

	t60 = (x693%(x694/(x695-x696)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x701 = UINT64_MAX;
	volatile int32_t x702 = INT32_MIN;
	uint8_t x703 = UINT8_MAX;
	volatile uint64_t t61 = 587381958341602LLU;

	t61 = (x701%(x702/(x703-x704)));

	if (t61 != 47LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x705 = 9U;
	uint64_t x706 = 105674706LLU;
	static int16_t x708 = INT16_MIN;
	volatile uint64_t t62 = 198255975472LLU;

	t62 = (x705%(x706/(x707-x708)));

	if (t62 != 9LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x710 = -91430581656LL;
	uint8_t x711 = 59U;
	uint32_t x712 = UINT32_MAX;
	static int64_t t63 = 203743LL;

	t63 = (x709%(x710/(x711-x712)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x715 = -1;
	int16_t x716 = -24;

	t64 = (x713%(x714/(x715-x716)));

	if (t64 != -78632LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x729 = -1;
	int8_t x730 = INT8_MIN;
	static int32_t x731 = -1;
	uint8_t x732 = 101U;
	volatile int32_t t65 = -15937;

	t65 = (x729%(x730/(x731-x732)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x737 = 1;
	static uint8_t x740 = 4U;
	volatile uint32_t t66 = 18400U;

	t66 = (x737%(x738/(x739-x740)));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x745 = INT32_MAX;
	int8_t x747 = INT8_MIN;
	int16_t x748 = 1;
	volatile int32_t t67 = 5;

	t67 = (x745%(x746/(x747-x748)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x753 = -1;
	int16_t x754 = INT16_MIN;
	int8_t x755 = INT8_MAX;
	int32_t t68 = -21;

	t68 = (x753%(x754/(x755-x756)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x765 = INT16_MIN;
	int8_t x768 = 0;

	t69 = (x765%(x766/(x767-x768)));

	if (t69 != -32768LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x770 = INT32_MIN;
	volatile int32_t x771 = INT32_MIN;
	int8_t x772 = -4;
	uint32_t t70 = 53U;

	t70 = (x769%(x770/(x771-x772)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x790 = INT16_MIN;
	uint64_t x791 = 1041633174342LLU;
	static int64_t x792 = INT64_MIN;

	t71 = (x789%(x790/(x791-x792)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x793 = INT64_MIN;
	volatile int16_t x795 = -1;
	uint16_t x796 = 18750U;

	t72 = (x793%(x794/(x795-x796)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x801 = UINT32_MAX;
	uint32_t x803 = 159U;
	volatile uint32_t t73 = 122U;

	t73 = (x801%(x802/(x803-x804)));

	if (t73 != 2803U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x814 = INT64_MIN;
	uint32_t x815 = 2447995U;
	uint16_t x816 = 1U;
	volatile int64_t t74 = -116LL;

	t74 = (x813%(x814/(x815-x816)));

	if (t74 != 16060LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x818 = INT16_MAX;
	int8_t x819 = 11;
	volatile int32_t t75 = -14547;

	t75 = (x817%(x818/(x819-x820)));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x821 = INT8_MIN;
	int16_t x822 = -1;
	uint32_t x823 = 1324135972U;
	int32_t x824 = INT32_MIN;
	volatile uint32_t t76 = 0U;

	t76 = (x821%(x822/(x823-x824)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x837 = 2707672074606521557LLU;
	int16_t x838 = INT16_MIN;
	volatile uint32_t x839 = 330314U;
	int16_t x840 = INT16_MAX;
	volatile uint64_t t77 = 3411632301623031159LLU;

	t77 = (x837%(x838/(x839-x840)));

	if (t77 != 2775LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x865 = INT16_MIN;
	uint16_t x866 = 102U;
	static volatile int64_t x868 = -1LL;
	int64_t t78 = -2855729422159LL;

	t78 = (x865%(x866/(x867-x868)));

	if (t78 != -9LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x869 = INT64_MIN;
	int32_t x871 = -1;
	int8_t x872 = -9;

	t79 = (x869%(x870/(x871-x872)));

	if (t79 != -8LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x877 = -1;
	int16_t x879 = 4;
	uint8_t x880 = 46U;
	volatile int64_t t80 = -11613623862LL;

	t80 = (x877%(x878/(x879-x880)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x881 = -1;
	int32_t x882 = INT32_MAX;
	uint16_t x883 = UINT16_MAX;
	int32_t x884 = INT32_MAX;
	volatile int32_t t81 = 1983056;

	t81 = (x881%(x882/(x883-x884)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x885 = -1;
	int16_t x887 = INT16_MIN;
	static int16_t x888 = -28;

	t82 = (x885%(x886/(x887-x888)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x889 = INT64_MAX;
	int32_t x890 = 1;
	uint8_t x892 = 0U;

	t83 = (x889%(x890/(x891-x892)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x897 = 455545U;
	volatile int64_t x898 = -207610797915649LL;
	static uint64_t x899 = 3611747725988483LLU;
	int16_t x900 = INT16_MIN;

	t84 = (x897%(x898/(x899-x900)));

	if (t84 != 1022LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x929 = 9U;
	int16_t x930 = INT16_MIN;
	int16_t x931 = -1;
	volatile uint32_t t85 = 14602U;

	t85 = (x929%(x930/(x931-x932)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x953 = INT64_MAX;
	int32_t x954 = INT32_MAX;
	uint16_t x955 = 1U;
	volatile int64_t t86 = 1137122LL;

	t86 = (x953%(x954/(x955-x956)));

	if (t86 != 7LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x963 = 409U;
	volatile int64_t x964 = -1LL;
	static uint64_t t87 = 523079683527646LLU;

	t87 = (x961%(x962/(x963-x964)));

	if (t87 != 16333745821325LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x969 = UINT16_MAX;
	volatile int32_t x970 = INT32_MAX;
	int16_t x971 = -1617;
	static int16_t x972 = -35;
	volatile int32_t t88 = -37;

	t88 = (x969%(x970/(x971-x972)));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x1021 = -7;
	int16_t x1022 = INT16_MAX;
	volatile int8_t x1023 = INT8_MIN;
	static volatile int64_t x1024 = 376LL;
	volatile int64_t t89 = 47499LL;

	t89 = (x1021%(x1022/(x1023-x1024)));

	if (t89 != -7LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1033 = -1;
	int32_t x1034 = INT32_MIN;
	uint8_t x1035 = 11U;
	int16_t x1036 = INT16_MIN;

	t90 = (x1033%(x1034/(x1035-x1036)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1041 = INT16_MAX;
	static uint64_t x1042 = 8538540918LLU;
	volatile int16_t x1044 = INT16_MIN;
	volatile uint64_t t91 = 621165740LLU;

	t91 = (x1041%(x1042/(x1043-x1044)));

	if (t91 != 5955LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1050 = -10;
	uint64_t x1051 = UINT64_MAX;
	int8_t x1052 = -56;
	uint64_t t92 = 8276410310847459513LLU;

	t92 = (x1049%(x1050/(x1051-x1052)));

	if (t92 != 6340860LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x1053 = INT64_MIN;
	int32_t x1055 = INT32_MAX;

	t93 = (x1053%(x1054/(x1055-x1056)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x1077 = INT8_MAX;
	int16_t x1078 = INT16_MAX;
	int64_t x1079 = -1LL;
	int8_t x1080 = 0;
	volatile int64_t t94 = 2LL;

	t94 = (x1077%(x1078/(x1079-x1080)));

	if (t94 != 127LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x1098 = UINT32_MAX;
	int32_t x1100 = 764750003;
	static uint32_t t95 = 3356340U;

	t95 = (x1097%(x1098/(x1099-x1100)));

	if (t95 != 2U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1129 = 77U;
	int16_t x1130 = -5071;
	uint64_t x1131 = 78283LLU;
	static volatile int8_t x1132 = INT8_MAX;

	t96 = (x1129%(x1130/(x1131-x1132)));

	if (t96 != 77LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1145 = INT64_MAX;
	static volatile uint16_t x1146 = 10410U;
	uint8_t x1147 = 0U;
	volatile uint16_t x1148 = 562U;
	static volatile int64_t t97 = 419957817084LL;

	t97 = (x1145%(x1146/(x1147-x1148)));

	if (t97 != 7LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1153 = 1U;
	uint64_t x1154 = 26285910284009905LLU;
	int8_t x1155 = INT8_MIN;
	static int32_t x1156 = INT32_MIN;
	uint64_t t98 = 466337392621166LLU;

	t98 = (x1153%(x1154/(x1155-x1156)));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1185 = INT32_MIN;
	int32_t x1186 = -1;
	uint32_t x1187 = UINT32_MAX;
	int16_t x1188 = -112;
	volatile uint32_t t99 = 340784535U;

	t99 = (x1185%(x1186/(x1187-x1188)));

	if (t99 != 19346703U) { NG(); } else { ; }
	
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

