#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x19 = 26U;
int32_t t3 = 2;
int64_t x26 = INT64_MIN;
static volatile int32_t x33 = -319;
uint64_t x35 = UINT64_MAX;
static uint8_t x36 = 115U;
uint64_t t6 = 237388812LLU;
static volatile uint32_t x47 = 323980422U;
int8_t x50 = -1;
int32_t x55 = -1;
static uint32_t x65 = UINT32_MAX;
int64_t x66 = INT64_MIN;
static volatile int32_t x70 = INT32_MIN;
int64_t x71 = -1LL;
int8_t x74 = -1;
int64_t t16 = 1965530966LL;
static int8_t x81 = -1;
int32_t x88 = 725;
static int64_t t20 = -3308062LL;
volatile int64_t x94 = INT64_MAX;
uint64_t x99 = 1LLU;
uint64_t t22 = 27LLU;
volatile uint64_t x107 = UINT64_MAX;
static int16_t x108 = 0;
uint64_t x114 = UINT64_MAX;
uint8_t x115 = 1U;
static uint8_t x121 = UINT8_MAX;
int16_t x124 = -2501;
uint32_t x136 = 1577787646U;
uint64_t x140 = 4569254373009LLU;
int16_t x147 = 4753;
uint32_t x152 = 473495U;
volatile uint32_t x156 = UINT32_MAX;
int32_t x158 = 79;
volatile int64_t x159 = -4028323993563320LL;
volatile int64_t t35 = -821114321200240LL;
uint16_t x166 = 16195U;
static int8_t x169 = -29;
static int16_t x183 = -111;
int16_t x190 = INT16_MAX;
static volatile uint64_t t44 = 1LLU;
uint64_t x201 = 1070449928092LLU;
uint32_t x206 = 195U;
volatile int32_t x208 = INT32_MIN;
int32_t x211 = INT32_MAX;
volatile int64_t x213 = -1LL;
int32_t x215 = INT32_MAX;
int16_t x217 = -1;
int32_t x221 = INT32_MIN;
uint64_t x227 = UINT64_MAX;
uint64_t t51 = 285LLU;
volatile int16_t x230 = INT16_MIN;
int32_t x240 = -1;
volatile int64_t t55 = -415417387840320LL;
int64_t x259 = INT64_MIN;
static uint32_t x264 = 2825U;
int32_t x268 = -1;
int8_t x270 = 0;
volatile int8_t x280 = INT8_MAX;
static uint8_t x282 = 1U;
int32_t t65 = 610236650;
uint8_t x293 = 28U;
uint64_t x295 = 7388862403LLU;
static int16_t x296 = -1;
volatile int64_t x305 = -2441601748862840LL;
int64_t t71 = -98427055471LL;
int64_t x318 = INT64_MIN;
static int16_t x320 = INT16_MAX;
static int8_t x322 = -29;
int32_t x323 = 14;
int8_t x333 = INT8_MIN;
int16_t x344 = -1;
volatile int16_t x345 = INT16_MIN;
int16_t x347 = INT16_MIN;
static volatile uint64_t t79 = 455LLU;
static volatile int32_t t80 = 44801889;
volatile int16_t x368 = -79;
int32_t t81 = -706;
int16_t x370 = -3085;
int64_t x371 = -436132297799460LL;
int64_t t82 = 1986403826829185LL;
int16_t x373 = INT16_MIN;
uint64_t x379 = 73171LLU;
uint32_t x381 = 3509U;
volatile uint32_t t85 = 937U;
int32_t x385 = INT32_MIN;
int8_t x386 = INT8_MIN;
uint64_t x389 = 7LLU;
uint32_t x392 = 1560537U;
volatile uint64_t t87 = 189892673143970LLU;
static volatile int16_t x398 = 2936;
int8_t x402 = -2;
volatile int16_t x403 = 277;
int32_t t90 = 624;
int32_t t92 = 154973611;
int32_t x414 = -10;
int8_t x415 = 3;
int64_t x416 = -1LL;
volatile uint8_t x418 = 33U;
uint8_t x421 = 11U;
volatile int64_t x428 = 250447901986689LL;
int8_t x429 = -1;
static volatile int64_t x431 = INT64_MIN;
uint64_t x433 = 5710776638LLU;
int64_t t99 = 13LL;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	static int64_t x2 = 60569564627LL;
	volatile int32_t x3 = INT32_MIN;
	int8_t x4 = INT8_MIN;
	int64_t t0 = 1LL;

	t0 = ((x1^(x2|x3))-x4);

	if (t0 != 1707456083LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	int16_t x6 = INT16_MAX;
	int32_t x7 = -1;
	int16_t x8 = -1;
	int32_t t1 = -51853035;

	t1 = ((x5^(x6|x7))-x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static int8_t x10 = INT8_MIN;
	int64_t x11 = -1LL;
	volatile int8_t x12 = -1;
	int64_t t2 = 0LL;

	t2 = ((x9^(x10|x11))-x12);

	if (t2 != -127LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = 16;
	int16_t x18 = -79;
	static uint8_t x20 = UINT8_MAX;

	t3 = ((x17^(x18|x19))-x20);

	if (t3 != -340) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = INT8_MIN;
	uint32_t x22 = 16515940U;
	int8_t x23 = INT8_MIN;
	uint16_t x24 = 1U;
	volatile uint32_t t4 = 12U;

	t4 = ((x21^(x22|x23))-x24);

	if (t4 != 99U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 276U;
	int64_t x27 = INT64_MIN;
	int32_t x28 = INT32_MIN;
	volatile int64_t t5 = 224273LL;

	t5 = ((x25^(x26|x27))-x28);

	if (t5 != -9223372034707291884LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x34 = -40;

	t6 = ((x33^(x34|x35))-x36);

	if (t6 != 203LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = UINT8_MAX;
	volatile uint64_t x38 = UINT64_MAX;
	int8_t x39 = INT8_MIN;
	volatile int8_t x40 = -2;
	uint64_t t7 = 19272LLU;

	t7 = ((x37^(x38|x39))-x40);

	if (t7 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MIN;
	uint16_t x42 = 31731U;
	int32_t x43 = -15;
	int16_t x44 = INT16_MAX;
	volatile int32_t t8 = 187422291;

	t8 = ((x41^(x42|x43))-x44);

	if (t8 != -32652) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	int8_t x46 = INT8_MIN;
	volatile uint32_t x48 = 25564U;
	volatile uint32_t t9 = 1U;

	t9 = ((x45^(x46|x47))-x48);

	if (t9 != 4294941853U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -23;
	volatile uint64_t x51 = 374987LLU;
	volatile int8_t x52 = -1;
	static uint64_t t10 = 219808925533LLU;

	t10 = ((x49^(x50|x51))-x52);

	if (t10 != 23LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	int64_t x54 = INT64_MIN;
	int8_t x56 = INT8_MAX;
	int64_t t11 = 54106LL;

	t11 = ((x53^(x54|x55))-x56);

	if (t11 != -127LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = INT32_MIN;
	int8_t x58 = -6;
	int32_t x59 = INT32_MIN;
	uint8_t x60 = 53U;
	int32_t t12 = 9891;

	t12 = ((x57^(x58|x59))-x60);

	if (t12 != 2147483589) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = INT8_MAX;
	int32_t x62 = -1;
	static int64_t x63 = INT64_MAX;
	static int32_t x64 = -2829373;
	int64_t t13 = -1LL;

	t13 = ((x61^(x62|x63))-x64);

	if (t13 != 2829245LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x67 = INT32_MIN;
	int16_t x68 = INT16_MIN;
	static int64_t t14 = 1666883LL;

	t14 = ((x65^(x66|x67))-x68);

	if (t14 != -2147450881LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x69 = UINT16_MAX;
	int16_t x72 = INT16_MIN;
	volatile int64_t t15 = 10644825775895LL;

	t15 = ((x69^(x70|x71))-x72);

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -204715414726LL;
	int64_t x75 = -160183808195LL;
	static int16_t x76 = -1;

	t16 = ((x73^(x74|x75))-x76);

	if (t16 != 204715414726LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -1;
	int8_t x78 = -1;
	int8_t x79 = INT8_MIN;
	uint64_t x80 = UINT64_MAX;
	uint64_t t17 = 11251742388397LLU;

	t17 = ((x77^(x78|x79))-x80);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x82 = INT16_MIN;
	uint32_t x83 = 25656325U;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t18 = 2675288345102540573LLU;

	t18 = ((x81^(x82|x83))-x84);

	if (t18 != 1019LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = INT8_MAX;
	int16_t x86 = -5865;
	int32_t x87 = -2;
	volatile int32_t t19 = 42424;

	t19 = ((x85^(x86|x87))-x88);

	if (t19 != -853) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	int64_t x90 = -1LL;
	uint32_t x91 = 3U;
	static int32_t x92 = 88;

	t20 = ((x89^(x90|x91))-x92);

	if (t20 != 9223372036854775719LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = INT16_MIN;
	static uint16_t x95 = 7498U;
	static int32_t x96 = 20;
	volatile int64_t t21 = 10229146796051319LL;

	t21 = ((x93^(x94|x95))-x96);

	if (t21 != -9223372036854743061LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = 11;
	int64_t x98 = INT64_MIN;
	int32_t x100 = -2;

	t22 = ((x97^(x98|x99))-x100);

	if (t22 != 9223372036854775820LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = -106LL;
	volatile int32_t x106 = 1;
	volatile uint64_t t23 = 47426991584384200LLU;

	t23 = ((x105^(x106|x107))-x108);

	if (t23 != 105LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x109 = 3215922368261847LLU;
	int32_t x110 = INT32_MIN;
	uint32_t x111 = 645380U;
	static uint32_t x112 = 2U;
	volatile uint64_t t24 = 21LLU;

	t24 = ((x109^(x110|x111))-x112);

	if (t24 != 3215924516321233LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -1;
	uint16_t x116 = 2422U;
	volatile uint64_t t25 = 258415472287003LLU;

	t25 = ((x113^(x114|x115))-x116);

	if (t25 != 18446744073709549194LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 1439486491LLU;
	int64_t x118 = INT64_MAX;
	volatile int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MIN;
	volatile uint64_t t26 = 94839094LLU;

	t26 = ((x117^(x118|x119))-x120);

	if (t26 != 18446744072270065252LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x122 = INT8_MIN;
	static int8_t x123 = -34;
	int32_t t27 = 700163010;

	t27 = ((x121^(x122|x123))-x124);

	if (t27 != 2278) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x125 = UINT32_MAX;
	volatile uint64_t x126 = UINT64_MAX;
	int32_t x127 = INT32_MIN;
	volatile int8_t x128 = INT8_MIN;
	uint64_t t28 = 2120831438780818LLU;

	t28 = ((x125^(x126|x127))-x128);

	if (t28 != 18446744069414584448LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = 26;
	uint8_t x135 = 1U;
	uint32_t t29 = 1286U;

	t29 = ((x133^(x134|x135))-x136);

	if (t29 != 569696029U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MIN;
	static int32_t x138 = -1;
	static int64_t x139 = -8361228090966442LL;
	volatile uint64_t t30 = 4526376657LLU;

	t30 = ((x137^(x138|x139))-x140);

	if (t30 != 9223367467600402798LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x145 = 5U;
	int16_t x146 = INT16_MIN;
	static int16_t x148 = -2352;
	int32_t t31 = 805226;

	t31 = ((x145^(x146|x147))-x148);

	if (t31 != -25660) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = -9991;
	volatile int32_t x151 = -1;
	volatile uint32_t t32 = 4373539U;

	t32 = ((x149^(x150|x151))-x152);

	if (t32 != 4294493928U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = UINT8_MAX;
	volatile uint32_t x154 = 24940U;
	static int64_t x155 = 24752339594966LL;
	volatile int64_t t33 = -24820232711LL;

	t33 = ((x153^(x154|x155))-x156);

	if (t33 != 24748044644098LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = -14;
	uint32_t x160 = 369U;
	int64_t t34 = -46416436408317LL;

	t34 = ((x157^(x158|x159))-x160);

	if (t34 != 4028323993562956LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = -1LL;
	int16_t x162 = INT16_MAX;
	volatile int64_t x163 = INT64_MIN;
	uint32_t x164 = 49240U;

	t35 = ((x161^(x162|x163))-x164);

	if (t35 != 9223372036854693800LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 1U;
	int64_t x167 = -1LL;
	int16_t x168 = 44;
	static volatile int64_t t36 = -27446265159521LL;

	t36 = ((x165^(x166|x167))-x168);

	if (t36 != -46LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x170 = UINT64_MAX;
	int16_t x171 = INT16_MAX;
	volatile uint8_t x172 = 19U;
	volatile uint64_t t37 = 114255890780659LLU;

	t37 = ((x169^(x170|x171))-x172);

	if (t37 != 9LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = 1804015672324LLU;
	int8_t x174 = INT8_MIN;
	static int64_t x175 = 561182054LL;
	volatile uint16_t x176 = UINT16_MAX;
	volatile uint64_t t38 = 3586244LLU;

	t38 = ((x173^(x174|x175))-x176);

	if (t38 != 18446742269693813731LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = -1;
	static uint16_t x178 = 22U;
	volatile int16_t x179 = 771;
	static int32_t x180 = INT32_MIN;
	volatile int32_t t39 = 246;

	t39 = ((x177^(x178|x179))-x180);

	if (t39 != 2147482856) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = INT8_MAX;
	volatile int64_t x182 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	volatile int64_t t40 = -30LL;

	t40 = ((x181^(x182|x183))-x184);

	if (t40 != 2147483630LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = 671434;
	volatile uint32_t x186 = UINT32_MAX;
	int64_t x187 = INT64_MIN;
	int16_t x188 = 1;
	int64_t t41 = 3674990327394098LL;

	t41 = ((x185^(x186|x187))-x188);

	if (t41 != -9223372032560479948LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = 11U;
	uint16_t x191 = 8U;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t42 = -3385520;

	t42 = ((x189^(x190|x191))-x192);

	if (t42 != 32884) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = -1;
	int8_t x194 = -1;
	int32_t x195 = INT32_MAX;
	volatile int64_t x196 = 651LL;
	static int64_t t43 = -101466220450LL;

	t43 = ((x193^(x194|x195))-x196);

	if (t43 != -651LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = 108U;
	uint64_t x198 = UINT64_MAX;
	int32_t x199 = -1;
	static uint64_t x200 = 19883069962LLU;

	t44 = ((x197^(x198|x199))-x200);

	if (t44 != 18446744053826481545LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x202 = -1;
	volatile int16_t x203 = INT16_MIN;
	static volatile int64_t x204 = INT64_MIN;
	volatile uint64_t t45 = 1262632414017577LLU;

	t45 = ((x201^(x202|x203))-x204);

	if (t45 != 9223370966404847715LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -1LL;
	int16_t x207 = -1;
	static int64_t t46 = -4468352660713820LL;

	t46 = ((x205^(x206|x207))-x208);

	if (t46 != -2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x209 = UINT32_MAX;
	volatile int16_t x210 = 2;
	int16_t x212 = -23;
	volatile uint32_t t47 = 569U;

	t47 = ((x209^(x210|x211))-x212);

	if (t47 != 2147483671U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x214 = INT32_MIN;
	volatile uint8_t x216 = 0U;
	static int64_t t48 = -36LL;

	t48 = ((x213^(x214|x215))-x216);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x218 = -1;
	volatile uint16_t x219 = UINT16_MAX;
	static uint8_t x220 = 0U;
	int32_t t49 = -209;

	t49 = ((x217^(x218|x219))-x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x222 = 14332926690LLU;
	int32_t x223 = -1;
	int32_t x224 = INT32_MIN;
	uint64_t t50 = 4974791351LLU;

	t50 = ((x221^(x222|x223))-x224);

	if (t50 != 4294967295LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x225 = INT16_MAX;
	static int32_t x226 = INT32_MAX;
	uint16_t x228 = 11U;

	t51 = ((x225^(x226|x227))-x228);

	if (t51 != 18446744073709518837LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x229 = 284365093820166696LLU;
	static int64_t x231 = -20113048LL;
	static int32_t x232 = -1;
	uint64_t t52 = 1014944486LLU;

	t52 = ((x229^(x230|x231))-x232);

	if (t52 != 18162378979889408833LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x233 = 1;
	static int32_t x234 = -942097021;
	static volatile int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	int32_t t53 = 227396;

	t53 = ((x233^(x234|x235))-x236);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x237 = UINT8_MAX;
	volatile int16_t x238 = -1;
	static int64_t x239 = 12LL;
	volatile int64_t t54 = -191LL;

	t54 = ((x237^(x238|x239))-x240);

	if (t54 != -255LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x241 = UINT32_MAX;
	volatile int64_t x242 = INT64_MIN;
	uint32_t x243 = 47568U;
	int32_t x244 = 7;

	t55 = ((x241^(x242|x243))-x244);

	if (t55 != -9223372032559856088LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = INT64_MIN;
	int8_t x246 = INT8_MAX;
	volatile int32_t x247 = 552;
	int16_t x248 = INT16_MIN;
	int64_t t56 = 32011LL;

	t56 = ((x245^(x246|x247))-x248);

	if (t56 != -9223372036854742401LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x249 = 2677378734179LLU;
	int16_t x250 = INT16_MAX;
	static uint64_t x251 = 8327281663740LLU;
	uint16_t x252 = UINT16_MAX;
	volatile uint64_t t57 = 14374LLU;

	t57 = ((x249^(x250|x251))-x252);

	if (t57 != 6587282237341LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x253 = INT16_MAX;
	uint8_t x254 = 0U;
	volatile int64_t x255 = 585868868215LL;
	int8_t x256 = 1;
	int64_t t58 = -3382435LL;

	t58 = ((x253^(x254|x255))-x256);

	if (t58 != 585868838279LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x257 = 466636033LLU;
	uint16_t x258 = 20U;
	int64_t x260 = INT64_MIN;
	volatile uint64_t t59 = 57LLU;

	t59 = ((x257^(x258|x259))-x260);

	if (t59 != 466636053LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x261 = UINT16_MAX;
	static int8_t x262 = -15;
	uint32_t x263 = 0U;
	volatile uint32_t t60 = 99U;

	t60 = ((x261^(x262|x263))-x264);

	if (t60 != 4294898949U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = 0;
	int32_t x266 = 24190;
	int64_t x267 = INT64_MIN;
	volatile int64_t t61 = 34183967308580640LL;

	t61 = ((x265^(x266|x267))-x268);

	if (t61 != -9223372036854751617LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x269 = 246328LLU;
	int32_t x271 = INT32_MIN;
	uint16_t x272 = UINT16_MAX;
	volatile uint64_t t62 = 10LLU;

	t62 = ((x269^(x270|x271))-x272);

	if (t62 != 18446744071562248761LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MIN;
	volatile uint32_t x274 = 221086U;
	static int32_t x275 = -16;
	uint16_t x276 = UINT16_MAX;
	uint32_t t63 = 3U;

	t63 = ((x273^(x274|x275))-x276);

	if (t63 != 4294934527U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = INT32_MIN;
	uint16_t x278 = 6U;
	uint16_t x279 = 11785U;
	int32_t t64 = -692492829;

	t64 = ((x277^(x278|x279))-x280);

	if (t64 != -2147471984) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x281 = 28U;
	volatile int8_t x283 = INT8_MAX;
	int8_t x284 = INT8_MAX;

	t65 = ((x281^(x282|x283))-x284);

	if (t65 != -28) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x285 = INT8_MIN;
	volatile int8_t x286 = INT8_MIN;
	int32_t x287 = 4855985;
	int16_t x288 = -1;
	static volatile int32_t t66 = 52;

	t66 = ((x285^(x286|x287))-x288);

	if (t66 != 50) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x294 = 629513LLU;
	volatile uint64_t t67 = 6435526LLU;

	t67 = ((x293^(x294|x295))-x296);

	if (t67 != 7388897240LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x297 = 57418909633830309LL;
	int16_t x298 = INT16_MIN;
	static int32_t x299 = -9274163;
	uint32_t x300 = 6916U;
	static volatile int64_t t68 = -1064070571973096LL;

	t68 = ((x297^(x298|x299))-x300);

	if (t68 != -57418909633837468LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x301 = INT64_MIN;
	uint32_t x302 = 420U;
	int64_t x303 = -1LL;
	volatile uint64_t x304 = 6LLU;
	volatile uint64_t t69 = 371261639475891230LLU;

	t69 = ((x301^(x302|x303))-x304);

	if (t69 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x306 = 84U;
	static uint16_t x307 = UINT16_MAX;
	uint8_t x308 = UINT8_MAX;
	static int64_t t70 = 57893033124496532LL;

	t70 = ((x305^(x306|x307))-x308);

	if (t70 != -2441601748859272LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x309 = 47U;
	int64_t x310 = 730572735LL;
	volatile uint32_t x311 = 3602322U;
	static int32_t x312 = 0;

	t71 = ((x309^(x310|x311))-x312);

	if (t71 != 734001040LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x317 = INT8_MAX;
	int64_t x319 = -1LL;
	static int64_t t72 = -7292940408LL;

	t72 = ((x317^(x318|x319))-x320);

	if (t72 != -32895LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x321 = -25;
	int16_t x324 = -1;
	int32_t t73 = 934146284;

	t73 = ((x321^(x322|x323))-x324);

	if (t73 != 9) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x325 = 4U;
	int16_t x326 = 9;
	uint8_t x327 = 3U;
	volatile uint16_t x328 = 22458U;
	int32_t t74 = 8214;

	t74 = ((x325^(x326|x327))-x328);

	if (t74 != -22443) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x329 = 303U;
	volatile int8_t x330 = 29;
	int8_t x331 = INT8_MIN;
	int64_t x332 = -1LL;
	int64_t t75 = -8172354073070118LL;

	t75 = ((x329^(x330|x331))-x332);

	if (t75 != -333LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x334 = 63469696;
	volatile int64_t x335 = INT64_MIN;
	int8_t x336 = 2;
	int64_t t76 = -6806879779118LL;

	t76 = ((x333^(x334|x335))-x336);

	if (t76 != 9223372036791305982LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MIN;
	int32_t x343 = -1;
	int64_t t77 = -13948526LL;

	t77 = ((x341^(x342|x343))-x344);

	if (t77 != 128LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x346 = INT16_MIN;
	uint32_t x348 = 9U;
	volatile uint32_t t78 = 5056U;

	t78 = ((x345^(x346|x347))-x348);

	if (t78 != 4294967287U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = -1;
	int64_t x358 = INT64_MIN;
	volatile int64_t x359 = -95LL;
	volatile uint64_t x360 = 392080077076576518LLU;

	t79 = ((x357^(x358|x359))-x360);

	if (t79 != 18054663996632975192LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x361 = 519;
	static int8_t x362 = 2;
	int8_t x363 = INT8_MAX;
	uint16_t x364 = UINT16_MAX;

	t80 = ((x361^(x362|x363))-x364);

	if (t80 != -64903) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = -20;
	int32_t x367 = -1;

	t81 = ((x365^(x366|x367))-x368);

	if (t81 != 206) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = -17;
	uint8_t x372 = 15U;

	t82 = ((x369^(x370|x371))-x372);

	if (t82 != 1025LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x374 = 681247U;
	uint16_t x375 = 19U;
	uint64_t x376 = 2522833834987147619LLU;
	volatile uint64_t t83 = 8692LLU;

	t83 = ((x373^(x374|x375))-x376);

	if (t83 != 15923910243016709052LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x377 = INT64_MIN;
	static int16_t x378 = INT16_MIN;
	volatile int64_t x380 = 11610596949102445LL;
	uint64_t t84 = 150LLU;

	t84 = ((x377^(x378|x379))-x380);

	if (t84 != 9211761439905648230LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x382 = 14959U;
	uint8_t x383 = 0U;
	static int8_t x384 = INT8_MIN;

	t85 = ((x381^(x382|x383))-x384);

	if (t85 != 14426U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x387 = UINT32_MAX;
	volatile int8_t x388 = 2;
	uint32_t t86 = 13528U;

	t86 = ((x385^(x386|x387))-x388);

	if (t86 != 2147483645U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x390 = -1;
	int8_t x391 = 0;

	t87 = ((x389^(x390|x391))-x392);

	if (t87 != 18446744073707991071LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x393 = 1409608013LLU;
	int64_t x394 = -251537011349778LL;
	int8_t x395 = 0;
	static int32_t x396 = -1;
	volatile uint64_t t88 = 22LLU;

	t88 = ((x393^(x394|x395))-x396);

	if (t88 != 18446492535423405988LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = INT8_MIN;
	static int32_t x399 = -470456213;
	static uint16_t x400 = 1U;
	int32_t t89 = -2634088;

	t89 = ((x397^(x398|x399))-x400);

	if (t89 != 470455546) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = INT16_MIN;
	int32_t x404 = INT32_MAX;

	t90 = ((x401^(x402|x403))-x404);

	if (t90 != -2147450880) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = -1LL;
	static int32_t x406 = -1;
	static int8_t x407 = -1;
	static int32_t x408 = -15502;
	int64_t t91 = 1447408147529067LL;

	t91 = ((x405^(x406|x407))-x408);

	if (t91 != 15502LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x409 = 596;
	int32_t x410 = INT32_MIN;
	uint8_t x411 = UINT8_MAX;
	volatile int8_t x412 = INT8_MIN;

	t92 = ((x409^(x410|x411))-x412);

	if (t92 != -2147482837) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = INT8_MIN;
	volatile int64_t t93 = 65210192502385243LL;

	t93 = ((x413^(x414|x415))-x416);

	if (t93 != 120LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x417 = INT64_MIN;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = 1U;
	int64_t t94 = 945LL;

	t94 = ((x417^(x418|x419))-x420);

	if (t94 != 9223372036854775712LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x422 = -403343382432LL;
	volatile int8_t x423 = 3;
	static uint8_t x424 = 39U;
	int64_t t95 = 6042567LL;

	t95 = ((x421^(x422|x423))-x424);

	if (t95 != -403343382463LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = INT16_MIN;
	static volatile uint16_t x426 = UINT16_MAX;
	static volatile uint16_t x427 = 5U;
	static volatile int64_t t96 = 29658275732404LL;

	t96 = ((x425^(x426|x427))-x428);

	if (t96 != -250447902019458LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x430 = INT32_MIN;
	static int8_t x432 = 0;
	static volatile int64_t t97 = -4115498784467026215LL;

	t97 = ((x429^(x430|x431))-x432);

	if (t97 != 2147483647LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x434 = 1U;
	int32_t x435 = -5;
	int16_t x436 = INT16_MIN;
	static volatile uint64_t t98 = 196304527105699LLU;

	t98 = ((x433^(x434|x435))-x436);

	if (t98 != 18446744067998807749LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x437 = -1;
	int64_t x438 = -1LL;
	uint8_t x439 = 6U;
	static int8_t x440 = 0;

	t99 = ((x437^(x438|x439))-x440);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

