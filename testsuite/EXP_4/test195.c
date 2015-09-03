#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -1;
volatile int8_t x8 = INT8_MAX;
int64_t x10 = INT64_MIN;
volatile int8_t x19 = -1;
static uint8_t x21 = 3U;
int8_t x38 = 0;
uint64_t x44 = 715840880178158LLU;
volatile uint64_t t10 = 1147755216LLU;
uint8_t x51 = 3U;
uint64_t t12 = 2232209552461582LLU;
uint16_t x60 = UINT16_MAX;
volatile uint64_t t14 = 17460785305177654LLU;
int8_t x66 = INT8_MIN;
uint64_t x78 = 84707334118LLU;
uint8_t x80 = UINT8_MAX;
uint64_t t18 = 341107LLU;
uint64_t x94 = UINT64_MAX;
volatile uint64_t t19 = 3LLU;
volatile int8_t x102 = INT8_MIN;
int16_t x104 = INT16_MAX;
volatile int64_t x108 = -2131012225710718LL;
volatile int64_t t22 = 136786082038LL;
int8_t x116 = INT8_MIN;
int32_t x119 = -1;
uint64_t x130 = 5LLU;
uint64_t x132 = 82677993479LLU;
uint8_t x134 = UINT8_MAX;
uint32_t t30 = 342U;
uint32_t x143 = UINT32_MAX;
static int32_t x148 = -46460;
volatile uint32_t x156 = 1170994U;
int64_t t35 = -75142775LL;
int32_t x169 = INT32_MAX;
int64_t t40 = 351LL;
volatile int16_t x188 = INT16_MIN;
int32_t x189 = INT32_MIN;
int32_t x193 = INT32_MIN;
uint32_t x220 = UINT32_MAX;
int8_t x226 = INT8_MIN;
uint64_t t46 = 85702203700757936LLU;
uint16_t x238 = 19U;
int32_t x251 = INT32_MIN;
static int64_t t51 = 765161089028LL;
uint64_t x262 = 1113398514LLU;
uint64_t x263 = UINT64_MAX;
uint64_t x264 = 647120590286090209LLU;
static int8_t x271 = 1;
static int32_t x278 = 12699;
uint64_t x279 = 872349772909LLU;
uint32_t x292 = 8U;
int64_t x297 = -350133896480LL;
int64_t x298 = -36633218811LL;
static int64_t t59 = 1310240800054319LL;
int8_t x301 = -1;
uint8_t x302 = 45U;
volatile uint64_t x304 = 452LLU;
static int64_t x306 = -513276132492679041LL;
uint16_t x307 = 25940U;
static volatile int64_t t61 = -73436238LL;
int8_t x310 = INT8_MAX;
volatile int64_t t64 = -1248676759035LL;
int32_t x329 = -103835;
int64_t x334 = INT64_MAX;
int16_t x345 = INT16_MAX;
volatile int16_t x346 = INT16_MIN;
uint32_t x348 = 1U;
uint64_t t71 = 1211LLU;
volatile uint64_t x354 = UINT64_MAX;
int32_t x369 = INT32_MIN;
int16_t x372 = INT16_MAX;
int16_t x376 = INT16_MAX;
volatile int8_t x378 = INT8_MIN;
int16_t x385 = INT16_MIN;
uint8_t x396 = 2U;
volatile uint64_t t79 = 642298618262LLU;
int64_t x398 = -1LL;
static volatile int16_t x399 = INT16_MAX;
int16_t x411 = INT16_MIN;
int32_t x412 = INT32_MIN;
uint8_t x418 = 12U;
int32_t x429 = 1;
static uint16_t x441 = UINT16_MAX;
int8_t x442 = -1;
uint16_t x444 = 19073U;
volatile int64_t t91 = -1638314123687LL;
int16_t x450 = INT16_MIN;
int8_t x452 = -1;
uint64_t t92 = 161665699944092033LLU;
int32_t x462 = INT32_MAX;
int64_t x469 = 1LL;
static int8_t x472 = -1;
static int64_t t97 = -1132LL;
int64_t t98 = 14064149125LL;
static int64_t x481 = -1LL;


void f0(void) {
	int8_t x1 = -1;
	int16_t x2 = INT16_MIN;
	int8_t x3 = -1;
	volatile uint32_t x4 = 1U;
	uint32_t t0 = 2410U;

	t0 = (x1^(x2-(x3-x4)));

	if (t0 != 32765U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int8_t x6 = -4;
	volatile int64_t t1 = -3655878173LL;

	t1 = (x5^(x6-(x7-x8)));

	if (t1 != 9223372036854775683LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 8U;
	int8_t x11 = INT8_MAX;
	uint16_t x12 = UINT16_MAX;
	volatile int64_t t2 = 904LL;

	t2 = (x9^(x10-(x11-x12)));

	if (t2 != -9223372036854710392LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	static int16_t x14 = -467;
	int32_t x15 = -1;
	int32_t x16 = -2;
	volatile int32_t t3 = 13875;

	t3 = (x13^(x14-(x15-x16)));

	if (t3 != -32301) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	int16_t x18 = 30;
	int16_t x20 = INT16_MAX;
	int32_t t4 = -871921;

	t4 = (x17^(x18-(x19-x20)));

	if (t4 != 65505) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x22 = INT64_MIN;
	int8_t x23 = INT8_MIN;
	volatile int16_t x24 = INT16_MAX;
	volatile int64_t t5 = 231147107LL;

	t5 = (x21^(x22-(x23-x24)));

	if (t5 != -9223372036854742916LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 205110U;
	int32_t x26 = -464001839;
	uint64_t x27 = UINT64_MAX;
	volatile int32_t x28 = 107;
	uint64_t t6 = 1655LLU;

	t6 = (x25^(x26-(x27-x28)));

	if (t6 != 18446744073245344779LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	uint8_t x30 = 83U;
	static int8_t x31 = -1;
	volatile uint16_t x32 = 5U;
	int32_t t7 = -1;

	t7 = (x29^(x30-(x31-x32)));

	if (t7 != 89) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	uint16_t x34 = 21U;
	int8_t x35 = -3;
	volatile int16_t x36 = -1;
	volatile int32_t t8 = 1;

	t8 = (x33^(x34-(x35-x36)));

	if (t8 != -105) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 75;
	int32_t x39 = -1;
	uint8_t x40 = 90U;
	static int32_t t9 = 32065;

	t9 = (x37^(x38-(x39-x40)));

	if (t9 != 16) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 60422LL;
	uint8_t x42 = UINT8_MAX;
	uint32_t x43 = 515092624U;

	t10 = (x41^(x42-(x43-x44)));

	if (t10 != 715840365111387LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MIN;
	uint8_t x52 = UINT8_MAX;
	int32_t t11 = -371;

	t11 = (x49^(x50-(x51-x52)));

	if (t11 != 2147483516) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	static int8_t x54 = -1;
	uint64_t x55 = 1307297LLU;
	static uint32_t x56 = 16003783U;

	t12 = (x53^(x54-(x55-x56)));

	if (t12 != 14729178LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 5659U;
	static int16_t x58 = 1;
	uint16_t x59 = UINT16_MAX;
	static volatile int32_t t13 = -9745;

	t13 = (x57^(x58-(x59-x60)));

	if (t13 != 5658) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 1905LLU;
	static volatile uint32_t x62 = 285943U;
	int16_t x63 = INT16_MIN;
	int8_t x64 = -1;

	t14 = (x61^(x62-(x63-x64)));

	if (t14 != 318343LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	int16_t x67 = INT16_MAX;
	volatile int16_t x68 = INT16_MIN;
	static int32_t t15 = -220;

	t15 = (x65^(x66-(x67-x68)));

	if (t15 != -65538) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x77 = UINT64_MAX;
	int64_t x79 = 73714539435005LL;
	uint64_t t16 = 3409913062570996968LLU;

	t16 = (x77^(x78-(x79-x80)));

	if (t16 != 73629832100631LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MAX;
	int8_t x82 = 0;
	int32_t x83 = -1;
	int32_t x84 = -1823971;
	int32_t t17 = 551976216;

	t17 = (x81^(x82-(x83-x84)));

	if (t17 != -1823903) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x85 = 9293U;
	static int8_t x86 = INT8_MIN;
	uint64_t x87 = 158697723332482421LLU;
	int32_t x88 = INT32_MIN;

	t18 = (x85^(x86-(x87-x88)));

	if (t18 != 18288046348229578310LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = UINT8_MAX;
	int32_t x95 = 5;
	uint16_t x96 = 1472U;

	t19 = (x93^(x94-(x95-x96)));

	if (t19 != 1349LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = 18214959983202LL;
	uint16_t x98 = UINT16_MAX;
	int8_t x99 = INT8_MIN;
	volatile int16_t x100 = INT16_MAX;
	volatile int64_t t20 = -13LL;

	t20 = (x97^(x98-(x99-x100)));

	if (t20 != 18214960081436LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MIN;
	static int16_t x103 = 1;
	volatile int32_t t21 = 432;

	t21 = (x101^(x102-(x103-x104)));

	if (t21 != -2147451010) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x105 = INT64_MIN;
	uint16_t x106 = 1U;
	static int16_t x107 = 0;

	t22 = (x105^(x106-(x107-x108)));

	if (t22 != 9221241024629065091LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = INT64_MAX;
	static volatile int16_t x110 = INT16_MIN;
	uint8_t x111 = 7U;
	static int16_t x112 = 2560;
	static volatile int64_t t23 = 1LL;

	t23 = (x109^(x110-(x111-x112)));

	if (t23 != -9223372036854745594LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x113 = 38U;
	int32_t x114 = INT32_MIN;
	static uint64_t x115 = 755730087890281539LLU;
	volatile uint64_t t24 = 3308890288LLU;

	t24 = (x113^(x114-(x115-x116)));

	if (t24 != 17691013983671786267LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MAX;
	uint8_t x118 = 3U;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t25 = 71219;

	t25 = (x117^(x118-(x119-x120)));

	if (t25 != 65660) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = INT16_MAX;
	static volatile int16_t x122 = -1;
	int64_t x123 = -1LL;
	volatile uint64_t x124 = 219405669424787LLU;
	volatile uint64_t t26 = 469960892068848LLU;

	t26 = (x121^(x122-(x123-x124)));

	if (t26 != 219405669409132LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x125 = -1;
	uint64_t x126 = 1337783248223628LLU;
	volatile uint16_t x127 = 1784U;
	int64_t x128 = 10865087118799LL;
	uint64_t t27 = 242229303952977LLU;

	t27 = (x125^(x126-(x127-x128)));

	if (t27 != 18445395425374210972LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x129 = 9;
	int16_t x131 = 5;
	uint64_t t28 = 114428294039302LLU;

	t28 = (x129^(x130-(x131-x132)));

	if (t28 != 82677993486LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x133 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;
	volatile int64_t t29 = -2361716LL;

	t29 = (x133^(x134-(x135-x136)));

	if (t29 != 9223372032559808767LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = 1;
	int8_t x138 = INT8_MIN;
	int8_t x139 = 0;
	uint32_t x140 = 33870884U;

	t30 = (x137^(x138-(x139-x140)));

	if (t30 != 33870757U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MAX;
	volatile int32_t x142 = 1457;
	static int32_t x144 = -318968;
	uint32_t t31 = 389U;

	t31 = (x141^(x142-(x143-x144)));

	if (t31 != 4294649797U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x145 = INT64_MIN;
	static int16_t x146 = INT16_MIN;
	static uint8_t x147 = 3U;
	int64_t t32 = 116861302019026LL;

	t32 = (x145^(x146-(x147-x148)));

	if (t32 != 9223372036854696577LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	volatile int64_t x152 = -2491336172952457184LL;
	int64_t t33 = 1943824497512LL;

	t33 = (x149^(x150-(x151-x152)));

	if (t33 != 2491336172952481824LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = -1;
	volatile int8_t x154 = INT8_MIN;
	volatile uint64_t x155 = 131315263LLU;
	static volatile uint64_t t34 = 10301599855064816LLU;

	t34 = (x153^(x154-(x155-x156)));

	if (t34 != 130144396LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x157 = UINT16_MAX;
	int8_t x158 = 1;
	int16_t x159 = INT16_MIN;
	int64_t x160 = -3LL;

	t35 = (x157^(x158-(x159-x160)));

	if (t35 != 32769LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = -1;
	static int8_t x162 = INT8_MIN;
	int64_t x163 = -521312336251LL;
	int64_t x164 = -1LL;
	static int64_t t36 = -458152458490LL;

	t36 = (x161^(x162-(x163-x164)));

	if (t36 != -521312336123LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x170 = 102073383U;
	int32_t x171 = 24470;
	int64_t x172 = 330068293607355917LL;
	int64_t t37 = 127LL;

	t37 = (x169^(x170-(x171-x172)));

	if (t37 != 330068293502428513LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x173 = -1082714497615LL;
	int32_t x174 = 867595959;
	uint32_t x175 = 1U;
	static int64_t x176 = -70246230759098LL;
	int64_t t38 = 222309563068LL;

	t38 = (x173^(x174-(x175-x176)));

	if (t38 != 69403772912205LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	uint64_t x178 = 6903028LLU;
	int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MIN;
	static volatile uint64_t t39 = 1383684LLU;

	t39 = (x177^(x178-(x179-x180)));

	if (t39 != 9223372036861678836LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = INT64_MAX;
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MAX;

	t40 = (x181^(x182-(x183-x184)));

	if (t40 != -9223372036854743296LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = 18895044154680480LLU;
	volatile int8_t x186 = -3;
	volatile int64_t x187 = INT64_MIN;
	volatile uint64_t t41 = 3LLU;

	t41 = (x185^(x186-(x187-x188)));

	if (t41 != 9204476992700128093LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x190 = -1809;
	uint32_t x191 = 0U;
	int16_t x192 = 1444;
	volatile uint32_t t42 = 380254U;

	t42 = (x189^(x190-(x191-x192)));

	if (t42 != 2147483283U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x194 = 37931618951919869LLU;
	int32_t x195 = -1;
	int32_t x196 = 106341;
	volatile uint64_t t43 = 2221404159818241LLU;

	t43 = (x193^(x194-(x195-x196)));

	if (t43 != 18408812454804199523LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x217 = -135;
	static uint8_t x218 = 0U;
	int32_t x219 = 21658705;
	uint32_t t44 = 3048U;

	t44 = (x217^(x218-(x219-x220)));

	if (t44 != 21658839U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x225 = INT16_MAX;
	int64_t x227 = 2LL;
	static uint16_t x228 = 3U;
	volatile int64_t t45 = 21261718LL;

	t45 = (x225^(x226-(x227-x228)));

	if (t45 != -32642LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x229 = 5462522014LLU;
	uint32_t x230 = UINT32_MAX;
	uint8_t x231 = 3U;
	static volatile int32_t x232 = -38046280;

	t46 = (x229^(x230-(x231-x232)));

	if (t46 != 7384861994LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x237 = 46000;
	int32_t x239 = INT32_MIN;
	static int64_t x240 = -15419949LL;
	volatile int64_t t47 = 1255LL;

	t47 = (x237^(x238-(x239-x240)));

	if (t47 != 2132018774LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x241 = -649456495959252317LL;
	uint64_t x242 = 1574665LLU;
	static uint32_t x243 = 6177540U;
	uint16_t x244 = UINT16_MAX;
	uint64_t t48 = 4408861904616813LLU;

	t48 = (x241^(x242-(x243-x244)));

	if (t48 != 649456495963776679LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = 1;
	int8_t x246 = 3;
	static int64_t x247 = -1LL;
	volatile int32_t x248 = INT32_MAX;
	static volatile int64_t t49 = 2151405217897LL;

	t49 = (x245^(x246-(x247-x248)));

	if (t49 != 2147483650LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	int8_t x252 = -12;
	static volatile int32_t t50 = 5410;

	t50 = (x249^(x250-(x251-x252)));

	if (t50 != 2147483531) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x253 = 997294644;
	volatile uint8_t x254 = UINT8_MAX;
	int32_t x255 = 5477;
	volatile int64_t x256 = INT64_MAX;

	t51 = (x253^(x254-(x255-x256)));

	if (t51 != 9223372035857476013LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x261 = INT64_MAX;
	uint64_t t52 = 466919585LLU;

	t52 = (x261^(x262-(x263-x264)));

	if (t52 != 8576251445455287083LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x269 = 6;
	static int32_t x270 = INT32_MIN;
	int32_t x272 = INT32_MAX;
	int32_t t53 = -1;

	t53 = (x269^(x270-(x271-x272)));

	if (t53 != -8) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x273 = 17942U;
	int16_t x274 = INT16_MAX;
	volatile int32_t x275 = -1;
	static int64_t x276 = -251LL;
	int64_t t54 = 171281192LL;

	t54 = (x273^(x274-(x275-x276)));

	if (t54 != 14611LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x277 = 2319U;
	int16_t x280 = -7481;
	uint64_t t55 = 1LLU;

	t55 = (x277^(x278-(x279-x280)));

	if (t55 != 18446743201359785722LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x285 = INT64_MIN;
	volatile int8_t x286 = -1;
	uint16_t x287 = 23061U;
	uint64_t x288 = 2297042011811135585LLU;
	uint64_t t56 = 27982LLU;

	t56 = (x285^(x286-(x287-x288)));

	if (t56 != 11520414048665888331LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = INT16_MIN;
	uint32_t x291 = 5944469U;
	volatile uint32_t t57 = 3572U;

	t57 = (x289^(x290-(x291-x292)));

	if (t57 != 5977331U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x293 = 171306U;
	uint16_t x294 = 26U;
	uint32_t x295 = 26278U;
	volatile int32_t x296 = INT32_MAX;
	uint32_t t58 = 39852U;

	t58 = (x293^(x294-(x295-x296)));

	if (t58 != 2147288153U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x299 = 821;
	static int8_t x300 = INT8_MIN;

	t59 = (x297^(x298-(x299-x300)));

	if (t59 != 382287337392LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x303 = INT8_MIN;
	volatile uint64_t t60 = 305531017327295162LLU;

	t60 = (x301^(x302-(x303-x304)));

	if (t60 != 18446744073709550990LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x305 = -10861657;
	volatile uint16_t x308 = 20U;

	t61 = (x305^(x306-(x307-x308)));

	if (t61 != 513276132482367640LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x309 = -1LL;
	static volatile int32_t x311 = 63485;
	static int8_t x312 = 0;
	volatile int64_t t62 = 264436518883102LL;

	t62 = (x309^(x310-(x311-x312)));

	if (t62 != 63357LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x313 = INT8_MIN;
	uint8_t x314 = 24U;
	uint64_t x315 = 626614556626LLU;
	static int8_t x316 = 17;
	volatile uint64_t t63 = 28146438628454424LLU;

	t63 = (x313^(x314-(x315-x316)));

	if (t63 != 626614556631LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x317 = -1LL;
	int32_t x318 = INT32_MIN;
	int32_t x319 = INT32_MAX;
	static uint32_t x320 = UINT32_MAX;

	t64 = (x317^(x318-(x319-x320)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x321 = INT8_MIN;
	int32_t x322 = INT32_MIN;
	static volatile int8_t x323 = INT8_MIN;
	int16_t x324 = -1;
	int32_t t65 = INT32_MAX;

	t65 = (x321^(x322-(x323-x324)));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x330 = 6U;
	static volatile int16_t x331 = INT16_MAX;
	int64_t x332 = INT64_MAX;
	static int64_t t66 = -100052528218960LL;

	t66 = (x329^(x330-(x331-x332)));

	if (t66 != -9223372036854650269LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x333 = 41854555874LLU;
	static uint16_t x335 = UINT16_MAX;
	uint64_t x336 = 1LLU;
	uint64_t t67 = 63721081LLU;

	t67 = (x333^(x334-(x335-x336)));

	if (t67 != 9223371995000264419LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x337 = UINT64_MAX;
	volatile int32_t x338 = INT32_MAX;
	uint16_t x339 = 357U;
	static uint64_t x340 = UINT64_MAX;
	volatile uint64_t t68 = 5908952321671532822LLU;

	t68 = (x337^(x338-(x339-x340)));

	if (t68 != 18446744071562068326LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x341 = UINT64_MAX;
	uint64_t x342 = 34477LLU;
	int32_t x343 = -18;
	int16_t x344 = INT16_MIN;
	volatile uint64_t t69 = 5833826815LLU;

	t69 = (x341^(x342-(x343-x344)));

	if (t69 != 18446744073709549888LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x347 = 1U;
	uint32_t t70 = UINT32_MAX;

	t70 = (x345^(x346-(x347-x348)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x349 = UINT16_MAX;
	static volatile uint64_t x350 = 587970752LLU;
	volatile int64_t x351 = INT64_MAX;
	static volatile int16_t x352 = 529;

	t71 = (x349^(x350-(x351-x352)));

	if (t71 != 9223372037442716973LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x353 = -1;
	int16_t x355 = -1;
	static uint64_t x356 = UINT64_MAX;
	volatile uint64_t t72 = 13953336032386LLU;

	t72 = (x353^(x354-(x355-x356)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = -15429;
	static int16_t x362 = INT16_MIN;
	uint16_t x363 = UINT16_MAX;
	uint64_t x364 = 128417221836627LLU;
	volatile uint64_t t73 = 3299829713LLU;

	t73 = (x361^(x362-(x363-x364)));

	if (t73 != 18446615656487828719LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x370 = 3884LL;
	volatile uint16_t x371 = 344U;
	volatile int64_t t74 = 178LL;

	t74 = (x369^(x370-(x371-x372)));

	if (t74 != -2147447341LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x373 = -1LL;
	volatile int32_t x374 = -230924221;
	uint64_t x375 = 2115436287029LLU;
	volatile uint64_t t75 = 1255149249748LLU;

	t75 = (x373^(x374-(x375-x376)));

	if (t75 != 2115667178482LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x377 = 10459LLU;
	int8_t x379 = -1;
	int8_t x380 = INT8_MIN;
	volatile uint64_t t76 = 60191903523534798LLU;

	t76 = (x377^(x378-(x379-x380)));

	if (t76 != 18446744073709541338LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x381 = 0;
	static uint8_t x382 = UINT8_MAX;
	static volatile uint32_t x383 = 4074650U;
	int8_t x384 = -11;
	volatile uint32_t t77 = 196815U;

	t77 = (x381^(x382-(x383-x384)));

	if (t77 != 4290892890U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x386 = INT64_MAX;
	int32_t x387 = -1;
	volatile int32_t x388 = INT32_MIN;
	volatile int64_t t78 = 2LL;

	t78 = (x385^(x386-(x387-x388)));

	if (t78 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = UINT64_MAX;
	int16_t x395 = -3;

	t79 = (x393^(x394-(x395-x396)));

	if (t79 != 65531LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x397 = -1;
	int16_t x400 = -1;
	static int64_t t80 = -7119758348609085LL;

	t80 = (x397^(x398-(x399-x400)));

	if (t80 != 32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x405 = -1;
	volatile int8_t x406 = INT8_MAX;
	int8_t x407 = INT8_MAX;
	uint32_t x408 = 44343U;
	volatile uint32_t t81 = 19221U;

	t81 = (x405^(x406-(x407-x408)));

	if (t81 != 4294922952U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x409 = -2050340022214953LL;
	int16_t x410 = INT16_MIN;
	static volatile int64_t t82 = 61237118786LL;

	t82 = (x409^(x410-(x411-x412)));

	if (t82 != 2050337985699543LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x413 = 325U;
	int64_t x414 = -1097635608508176LL;
	volatile int32_t x415 = INT32_MIN;
	int8_t x416 = -45;
	int64_t t83 = 0LL;

	t83 = (x413^(x414-(x415-x416)));

	if (t83 != -1097633461024378LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x417 = 2;
	static int8_t x419 = -1;
	static int16_t x420 = -1;
	int32_t t84 = 40945;

	t84 = (x417^(x418-(x419-x420)));

	if (t84 != 14) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x421 = -1;
	static uint64_t x422 = UINT64_MAX;
	uint64_t x423 = UINT64_MAX;
	static volatile int8_t x424 = -1;
	uint64_t t85 = 330822LLU;

	t85 = (x421^(x422-(x423-x424)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x425 = 629U;
	int64_t x426 = 135816331468LL;
	volatile int32_t x427 = -1;
	static int8_t x428 = INT8_MIN;
	int64_t t86 = -264375712022LL;

	t86 = (x425^(x426-(x427-x428)));

	if (t86 != 135816331832LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x430 = INT16_MAX;
	int8_t x431 = INT8_MAX;
	static uint8_t x432 = 34U;
	static int32_t t87 = 199971538;

	t87 = (x429^(x430-(x431-x432)));

	if (t87 != 32675) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x433 = INT32_MIN;
	int32_t x434 = 7535;
	static volatile int64_t x435 = 7955LL;
	static uint8_t x436 = UINT8_MAX;
	volatile int64_t t88 = 110859092LL;

	t88 = (x433^(x434-(x435-x436)));

	if (t88 != 2147483483LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x437 = -1LL;
	int8_t x438 = INT8_MIN;
	volatile uint32_t x439 = UINT32_MAX;
	int8_t x440 = INT8_MIN;
	static int64_t t89 = 69069414836LL;

	t89 = (x437^(x438-(x439-x440)));

	if (t89 != -4294967042LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x443 = 559710174U;
	volatile uint32_t t90 = 13793894U;

	t90 = (x441^(x442-(x443-x444)));

	if (t90 != 3735237981U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x445 = -1;
	int64_t x446 = -530840533LL;
	uint16_t x447 = UINT16_MAX;
	volatile int8_t x448 = 1;

	t91 = (x445^(x446-(x447-x448)));

	if (t91 != 530906066LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x449 = 357152327LLU;
	int16_t x451 = -1;

	t92 = (x449^(x450-(x451-x452)));

	if (t92 != 18446744073352394311LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x453 = UINT8_MAX;
	int8_t x454 = INT8_MIN;
	volatile int16_t x455 = INT16_MIN;
	int8_t x456 = INT8_MAX;
	volatile int32_t t93 = -6953;

	t93 = (x453^(x454-(x455-x456)));

	if (t93 != 32512) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x461 = -1;
	uint8_t x463 = 51U;
	static uint64_t x464 = UINT64_MAX;
	uint64_t t94 = 838252LLU;

	t94 = (x461^(x462-(x463-x464)));

	if (t94 != 18446744071562068020LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x465 = UINT16_MAX;
	int8_t x466 = INT8_MIN;
	int8_t x467 = INT8_MAX;
	volatile int32_t x468 = -122208294;
	volatile int32_t t95 = -331;

	t95 = (x465^(x466-(x467-x468)));

	if (t95 != -122175196) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x470 = UINT8_MAX;
	int8_t x471 = INT8_MIN;
	volatile int64_t t96 = 1LL;

	t96 = (x469^(x470-(x471-x472)));

	if (t96 != 383LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x473 = 14U;
	int8_t x474 = -7;
	volatile int16_t x475 = -1;
	volatile int64_t x476 = 4502990638721001796LL;

	t97 = (x473^(x474-(x475-x476)));

	if (t97 != 4502990638721001776LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x477 = -485316371306527039LL;
	static volatile int16_t x478 = INT16_MIN;
	uint16_t x479 = 1237U;
	volatile uint32_t x480 = 772556U;

	t98 = (x477^(x478-(x479-x480)));

	if (t98 != -485316371306216906LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x482 = -12;
	int64_t x483 = -1LL;
	uint64_t x484 = 3455LLU;
	uint64_t t99 = 500479LLU;

	t99 = (x481^(x482-(x483-x484)));

	if (t99 != 18446744073709548171LLU) { NG(); } else { ; }
	
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

