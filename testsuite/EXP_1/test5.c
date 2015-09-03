#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 130;
int32_t x7 = INT32_MIN;
int64_t x10 = INT64_MIN;
uint32_t x12 = 5471U;
volatile int64_t x17 = 3LL;
int32_t x18 = -3;
int32_t x19 = INT32_MAX;
static int32_t x23 = INT32_MIN;
uint16_t x27 = UINT16_MAX;
uint8_t x29 = 9U;
int8_t x34 = -1;
volatile uint32_t t9 = 6508U;
static int32_t x44 = INT32_MIN;
int64_t x52 = 15988212280644883LL;
uint64_t x82 = 414413LLU;
int8_t x87 = INT8_MIN;
static int32_t t18 = 123624208;
uint32_t x94 = 114169U;
int8_t x95 = -1;
static int64_t x96 = -16119048721LL;
int64_t t19 = -3894947192437398219LL;
volatile int32_t x102 = -1;
int8_t x106 = INT8_MIN;
int16_t x108 = INT16_MAX;
volatile int64_t t22 = 7025970182LL;
int64_t x110 = INT64_MIN;
int16_t x112 = -1;
int16_t x113 = -1;
volatile int16_t x115 = INT16_MIN;
static int64_t x116 = INT64_MIN;
int64_t t24 = -2123749345358019637LL;
uint64_t x121 = 10711019862751417LLU;
volatile int16_t x123 = INT16_MIN;
int64_t x124 = -78264LL;
int8_t x126 = INT8_MAX;
int32_t x127 = INT32_MAX;
int64_t x133 = 21289LL;
volatile uint16_t x134 = 4U;
int64_t x148 = INT64_MAX;
volatile int64_t t30 = 1872670994LL;
uint8_t x149 = UINT8_MAX;
volatile int16_t x150 = 183;
int8_t x157 = INT8_MIN;
static int8_t x158 = INT8_MIN;
int8_t x159 = -1;
uint32_t x163 = UINT32_MAX;
volatile int32_t x167 = INT32_MAX;
static volatile uint64_t x177 = 230798LLU;
int64_t x180 = INT64_MIN;
volatile int32_t x182 = -1;
volatile int16_t x197 = -5795;
static uint16_t x198 = 1U;
int32_t x206 = INT32_MAX;
static volatile uint64_t t43 = 367LLU;
uint8_t x210 = UINT8_MAX;
int32_t x222 = INT32_MIN;
static int8_t x232 = 38;
int16_t x238 = INT16_MIN;
static int8_t x242 = -1;
int16_t x247 = INT16_MIN;
uint64_t t52 = 203506572891963LLU;
volatile int64_t t53 = 253LL;
int16_t x256 = INT16_MIN;
uint64_t t55 = 27086954LLU;
volatile int16_t x269 = INT16_MIN;
int16_t x272 = INT16_MIN;
static int32_t t56 = -14;
uint16_t x280 = 23U;
uint8_t x284 = UINT8_MAX;
int32_t x286 = INT32_MIN;
uint64_t x288 = UINT64_MAX;
int8_t x295 = 50;
volatile int32_t t61 = -13003;
uint64_t t62 = 0LLU;
int16_t x306 = -1;
uint8_t x309 = UINT8_MAX;
int64_t x310 = 4757705353LL;
int64_t t65 = 1948142719302346625LL;
static int64_t x314 = 166582LL;
int8_t x321 = -1;
int32_t t67 = -2618700;
uint8_t x328 = 57U;
volatile int64_t t69 = 35237LL;
volatile int32_t t72 = -2553;
int32_t x347 = -48;
volatile int32_t t73 = -14857316;
volatile uint16_t x349 = 10U;
static volatile int8_t x350 = -1;
volatile int8_t x356 = -1;
static uint64_t t75 = 181LLU;
volatile uint32_t t76 = 12U;
static int16_t x367 = INT16_MAX;
uint8_t x377 = UINT8_MAX;
uint64_t x383 = 1870578941297LLU;
static int16_t x387 = -1032;
uint16_t x388 = 4086U;
int16_t x395 = 3;
int32_t x405 = INT32_MAX;
int32_t x406 = -555872;
uint8_t x410 = 83U;
int32_t x411 = INT32_MIN;
volatile int64_t x412 = 88915177LL;
volatile int64_t x414 = -1LL;
static volatile int64_t t88 = 44534551649891249LL;
volatile int32_t t89 = -26451681;
int64_t t92 = 11946098559631LL;
uint64_t x448 = UINT64_MAX;
int8_t x449 = INT8_MAX;
volatile uint8_t x457 = 1U;
uint64_t x464 = 4031313LLU;
uint8_t x465 = UINT8_MAX;
static volatile int64_t x468 = -153349787312LL;
volatile int64_t t97 = -272849455718LL;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static uint64_t x2 = 7LLU;
	volatile int32_t x4 = INT32_MAX;
	static uint64_t t0 = 1563LLU;

	t0 = (((x1+x2)+x3)%x4);

	if (t0 != 138LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	int8_t x6 = -1;
	static int32_t x8 = -933541;
	static int32_t t1 = -1;

	t1 = (((x5+x6)+x7)%x8);

	if (t1 != -306582) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1U;
	uint64_t x11 = UINT64_MAX;
	volatile uint64_t t2 = 17577LLU;

	t2 = (((x9+x10)+x11)%x12);

	if (t2 != 3331LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = 157;
	uint64_t x14 = 2394285482572683LLU;
	volatile int32_t x15 = INT32_MIN;
	int16_t x16 = -1;
	static uint64_t t3 = 4418626801361214028LLU;

	t3 = (((x13+x14)+x15)%x16);

	if (t3 != 2394283335089192LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x20 = 1417U;
	int64_t t4 = -39132433209LL;

	t4 = (((x17+x18)+x19)%x20);

	if (t4 != 309LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	static int64_t x22 = -60497546195460LL;
	static int16_t x24 = INT16_MIN;
	static int64_t t5 = 5848435LL;

	t5 = (((x21+x22)+x23)%x24);

	if (t5 != -12932LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	static int8_t x26 = 0;
	uint64_t x28 = 288769843462106596LLU;
	uint64_t t6 = 1433LLU;

	t6 = (((x25+x26)+x27)%x28);

	if (t6 != 65534LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -1926898125LL;
	uint16_t x31 = 13U;
	static uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 8543240159517844LLU;

	t7 = (((x29+x30)+x31)%x32);

	if (t7 != 18446744071782653513LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	uint8_t x35 = UINT8_MAX;
	static volatile int64_t x36 = -1LL;
	int64_t t8 = -46214LL;

	t8 = (((x33+x34)+x35)%x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -331;
	uint32_t x38 = 32U;
	uint8_t x39 = 9U;
	uint16_t x40 = 111U;

	t9 = (((x37+x38)+x39)%x40);

	if (t9 != 50U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 25;
	int8_t x42 = 53;
	int32_t x43 = 50203058;
	volatile int32_t t10 = -3035;

	t10 = (((x41+x42)+x43)%x44);

	if (t10 != 50203136) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	static int16_t x50 = 15;
	int32_t x51 = -292;
	volatile int64_t t11 = 204114LL;

	t11 = (((x49+x50)+x51)%x52);

	if (t11 != -405LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -6120533LL;
	int16_t x54 = -16032;
	uint32_t x55 = 14U;
	int16_t x56 = INT16_MIN;
	volatile int64_t t12 = 13266468394785333LL;

	t12 = (((x53+x54)+x55)%x56);

	if (t12 != -8935LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MAX;
	static volatile uint64_t x62 = UINT64_MAX;
	uint64_t x63 = 17196119484696LLU;
	volatile int8_t x64 = -32;
	uint64_t t13 = 2LLU;

	t13 = (((x61+x62)+x63)%x64);

	if (t13 != 17196119517462LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x69 = INT16_MAX;
	int8_t x70 = 3;
	static uint16_t x71 = 26666U;
	int32_t x72 = 162944;
	volatile int32_t t14 = 1;

	t14 = (((x69+x70)+x71)%x72);

	if (t14 != 59436) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x73 = INT32_MAX;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = -1;
	uint32_t x76 = UINT32_MAX;
	uint32_t t15 = 438274157U;

	t15 = (((x73+x74)+x75)%x76);

	if (t15 != 2147483645U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x81 = 4;
	static int8_t x83 = INT8_MIN;
	static int8_t x84 = -1;
	uint64_t t16 = 445691087577LLU;

	t16 = (((x81+x82)+x83)%x84);

	if (t16 != 414289LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = 4219115844412604LLU;
	volatile uint16_t x86 = 5981U;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t17 = 2182415235LLU;

	t17 = (((x85+x86)+x87)%x88);

	if (t17 != 4219115844418457LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	volatile int8_t x90 = INT8_MIN;
	static int16_t x91 = -2915;
	volatile int32_t x92 = INT32_MAX;

	t18 = (((x89+x90)+x91)%x92);

	if (t18 != -35811) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MAX;

	t19 = (((x93+x94)+x95)%x96);

	if (t19 != 2147597815LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = UINT64_MAX;
	volatile uint8_t x98 = UINT8_MAX;
	uint8_t x99 = 11U;
	int16_t x100 = -1;
	volatile uint64_t t20 = 1776322193217711LLU;

	t20 = (((x97+x98)+x99)%x100);

	if (t20 != 265LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -29;
	volatile uint32_t x103 = 354715880U;
	int16_t x104 = INT16_MIN;
	uint32_t t21 = 15519U;

	t21 = (((x101+x102)+x103)%x104);

	if (t21 != 354715850U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = 15846451853LL;
	volatile int64_t x107 = -388543596452975LL;

	t22 = (((x105+x106)+x107)%x108);

	if (t22 != -3310LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = 7LL;
	int16_t x111 = INT16_MAX;
	int64_t t23 = -112LL;

	t23 = (((x109+x110)+x111)%x112);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x114 = -157326;

	t24 = (((x113+x114)+x115)%x116);

	if (t24 != -190095LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x122 = 1;
	uint64_t t25 = 16LLU;

	t25 = (((x121+x122)+x123)%x124);

	if (t25 != 10711019862718650LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x125 = 16479980U;
	int64_t x128 = INT64_MAX;
	int64_t t26 = -4213336LL;

	t26 = (((x125+x126)+x127)%x128);

	if (t26 != 2163963754LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x135 = 15026;
	int16_t x136 = INT16_MAX;
	int64_t t27 = 51083259238LL;

	t27 = (((x133+x134)+x135)%x136);

	if (t27 != 3552LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = 9918557072854LLU;
	int8_t x138 = INT8_MIN;
	uint8_t x139 = 5U;
	volatile uint8_t x140 = UINT8_MAX;
	uint64_t t28 = 77119411586338LLU;

	t28 = (((x137+x138)+x139)%x140);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x141 = UINT32_MAX;
	uint64_t x142 = 13431LLU;
	int16_t x143 = -1;
	int64_t x144 = INT64_MIN;
	volatile uint64_t t29 = 6042575442453227281LLU;

	t29 = (((x141+x142)+x143)%x144);

	if (t29 != 4294980725LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x145 = INT8_MIN;
	int16_t x146 = INT16_MIN;
	int16_t x147 = -773;

	t30 = (((x145+x146)+x147)%x148);

	if (t30 != -33669LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x151 = 34;
	int64_t x152 = INT64_MIN;
	int64_t t31 = -575564584LL;

	t31 = (((x149+x150)+x151)%x152);

	if (t31 != 472LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x160 = 154U;
	int32_t t32 = -162173;

	t32 = (((x157+x158)+x159)%x160);

	if (t32 != -103) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = 241577;
	uint16_t x162 = UINT16_MAX;
	volatile int32_t x164 = INT32_MAX;
	uint32_t t33 = 497791517U;

	t33 = (((x161+x162)+x163)%x164);

	if (t33 != 307111U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x165 = 52;
	int16_t x166 = INT16_MIN;
	static int16_t x168 = -1;
	static int32_t t34 = -6572;

	t34 = (((x165+x166)+x167)%x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x169 = 175U;
	int8_t x170 = 25;
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = -1;
	static volatile int32_t t35 = 522427;

	t35 = (((x169+x170)+x171)%x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x173 = 255U;
	int32_t x174 = 49;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = 8252975LLU;
	static uint64_t t36 = 19LLU;

	t36 = (((x173+x174)+x175)%x176);

	if (t36 != 4267747LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x178 = INT64_MAX;
	int16_t x179 = 2568;
	volatile uint64_t t37 = 88048458632636LLU;

	t37 = (((x177+x178)+x179)%x180);

	if (t37 != 233365LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x181 = -4;
	int64_t x183 = -1LL;
	uint32_t x184 = UINT32_MAX;
	int64_t t38 = -2064280963956LL;

	t38 = (((x181+x182)+x183)%x184);

	if (t38 != -6LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x185 = 18467511078903LLU;
	static uint64_t x186 = 20658565820961360LLU;
	int16_t x187 = INT16_MIN;
	int32_t x188 = -1;
	volatile uint64_t t39 = 1044885LLU;

	t39 = (((x185+x186)+x187)%x188);

	if (t39 != 20677033332007495LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x189 = 10U;
	volatile uint16_t x190 = 3U;
	static int32_t x191 = INT32_MIN;
	static int64_t x192 = 108311637LL;
	int64_t t40 = 314LL;

	t40 = (((x189+x190)+x191)%x192);

	if (t40 != 89562558LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x199 = INT16_MIN;
	int32_t x200 = -412;
	int32_t t41 = 218;

	t41 = (((x197+x198)+x199)%x200);

	if (t41 != -246) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = -1;
	int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MIN;
	static volatile int32_t t42 = -2241646;

	t42 = (((x201+x202)+x203)%x204);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = -36732079;
	int64_t x207 = INT64_MIN;
	static uint64_t x208 = UINT64_MAX;

	t43 = (((x205+x206)+x207)%x208);

	if (t43 != 9223372038965527376LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x209 = 11;
	static uint8_t x211 = 3U;
	volatile uint32_t x212 = UINT32_MAX;
	uint32_t t44 = 382618166U;

	t44 = (((x209+x210)+x211)%x212);

	if (t44 != 269U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x213 = INT16_MIN;
	int16_t x214 = 1197;
	int64_t x215 = -1LL;
	uint64_t x216 = 4081243038899343LLU;
	static uint64_t t45 = 73LLU;

	t45 = (((x213+x214)+x215)%x216);

	if (t45 != 3606780923389027LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x217 = UINT16_MAX;
	uint64_t x218 = 35194835209988277LLU;
	uint16_t x219 = UINT16_MAX;
	uint32_t x220 = 259U;
	static volatile uint64_t t46 = 3252810LLU;

	t46 = (((x217+x218)+x219)%x220);

	if (t46 != 112LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x221 = 3941306LL;
	uint64_t x223 = 797697854399759LLU;
	int32_t x224 = INT32_MIN;
	volatile uint64_t t47 = 40329LLU;

	t47 = (((x221+x222)+x223)%x224);

	if (t47 != 797695710857417LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = UINT64_MAX;
	int32_t x226 = INT32_MIN;
	static int64_t x227 = 507766580381LL;
	int32_t x228 = 51507;
	uint64_t t48 = 1190LLU;

	t48 = (((x225+x226)+x227)%x228);

	if (t48 != 13148LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x229 = INT8_MAX;
	uint16_t x230 = UINT16_MAX;
	uint16_t x231 = 1U;
	volatile int32_t t49 = 6518753;

	t49 = (((x229+x230)+x231)%x232);

	if (t49 != 37) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x237 = 40;
	int8_t x239 = INT8_MAX;
	volatile uint64_t x240 = 34134871180317LLU;
	volatile uint64_t t50 = 253733321696628LLU;

	t50 = (((x237+x238)+x239)%x240);

	if (t50 != 20743767949996LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x241 = UINT8_MAX;
	int8_t x243 = -47;
	int16_t x244 = INT16_MIN;
	int32_t t51 = -14974;

	t51 = (((x241+x242)+x243)%x244);

	if (t51 != 207) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = 115940735494609LLU;
	int64_t x246 = 111301218524918LL;
	uint32_t x248 = 221184010U;

	t52 = (((x245+x246)+x247)%x248);

	if (t52 != 156320879LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = INT16_MAX;
	int64_t x250 = INT64_MIN;
	int16_t x251 = -8192;
	int8_t x252 = -1;

	t53 = (((x249+x250)+x251)%x252);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x253 = UINT64_MAX;
	volatile int16_t x254 = INT16_MAX;
	uint16_t x255 = UINT16_MAX;
	volatile uint64_t t54 = 3996108867266770LLU;

	t54 = (((x253+x254)+x255)%x256);

	if (t54 != 98301LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x257 = UINT8_MAX;
	uint32_t x258 = UINT32_MAX;
	int8_t x259 = -1;
	static volatile uint64_t x260 = 2012518444753LLU;

	t55 = (((x257+x258)+x259)%x260);

	if (t55 != 253LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x270 = -1;
	volatile int16_t x271 = -241;

	t56 = (((x269+x270)+x271)%x272);

	if (t56 != -242) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = INT8_MIN;
	static int8_t x274 = -1;
	int8_t x275 = INT8_MAX;
	volatile uint32_t x276 = 4U;
	uint32_t t57 = 313U;

	t57 = (((x273+x274)+x275)%x276);

	if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x277 = 7LLU;
	int32_t x278 = INT32_MIN;
	int32_t x279 = 122943;
	uint64_t t58 = 14898LLU;

	t58 = (((x277+x278)+x279)%x280);

	if (t58 != 15LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x281 = UINT16_MAX;
	uint8_t x282 = UINT8_MAX;
	static int16_t x283 = INT16_MAX;
	int32_t t59 = 1316;

	t59 = (((x281+x282)+x283)%x284);

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x285 = 32019U;
	static volatile uint16_t x287 = 221U;
	uint64_t t60 = 3183516921381988325LLU;

	t60 = (((x285+x286)+x287)%x288);

	if (t60 != 2147515888LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = 14;
	int16_t x294 = -1;
	volatile int16_t x296 = -1;

	t61 = (((x293+x294)+x295)%x296);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x297 = -1;
	static uint32_t x298 = UINT32_MAX;
	uint64_t x299 = UINT64_MAX;
	static int8_t x300 = INT8_MIN;

	t62 = (((x297+x298)+x299)%x300);

	if (t62 != 4294967293LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = INT16_MIN;
	uint32_t x302 = 50U;
	int8_t x303 = -7;
	int8_t x304 = 18;
	static uint32_t t63 = 1308U;

	t63 = (((x301+x302)+x303)%x304);

	if (t63 != 3U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = -7;
	int32_t x307 = -6022;
	int8_t x308 = 1;
	static int32_t t64 = -16;

	t64 = (((x305+x306)+x307)%x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x311 = 1U;
	int8_t x312 = INT8_MIN;

	t65 = (((x309+x310)+x311)%x312);

	if (t65 != 9LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = -1;
	int8_t x315 = -1;
	int64_t x316 = INT64_MIN;
	volatile int64_t t66 = -41273316958LL;

	t66 = (((x313+x314)+x315)%x316);

	if (t66 != 166580LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x322 = UINT16_MAX;
	static volatile int32_t x323 = -1;
	int8_t x324 = INT8_MIN;

	t67 = (((x321+x322)+x323)%x324);

	if (t67 != 125) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x325 = -1LL;
	int32_t x326 = INT32_MIN;
	int8_t x327 = 1;
	static volatile int64_t t68 = 2LL;

	t68 = (((x325+x326)+x327)%x328);

	if (t68 != -41LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = -127805959905LL;
	int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MIN;
	volatile int16_t x332 = -1;

	t69 = (((x329+x330)+x331)%x332);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x333 = INT16_MIN;
	uint64_t x334 = 148688856117858LLU;
	uint32_t x335 = 135162939U;
	uint16_t x336 = 221U;
	volatile uint64_t t70 = 434679903233761LLU;

	t70 = (((x333+x334)+x335)%x336);

	if (t70 != 154LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x337 = UINT64_MAX;
	volatile int64_t x338 = -1LL;
	int32_t x339 = INT32_MAX;
	int16_t x340 = -2;
	static uint64_t t71 = 748LLU;

	t71 = (((x337+x338)+x339)%x340);

	if (t71 != 2147483645LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x341 = -1945568;
	uint16_t x342 = 8349U;
	int8_t x343 = INT8_MIN;
	volatile uint8_t x344 = 65U;

	t72 = (((x341+x342)+x343)%x344);

	if (t72 != -22) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x345 = UINT16_MAX;
	static int8_t x346 = INT8_MIN;
	static volatile uint8_t x348 = UINT8_MAX;

	t73 = (((x345+x346)+x347)%x348);

	if (t73 != 79) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x351 = UINT64_MAX;
	static int8_t x352 = INT8_MIN;
	uint64_t t74 = 1LLU;

	t74 = (((x349+x350)+x351)%x352);

	if (t74 != 8LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	static uint64_t x355 = 6951147778746686LLU;

	t75 = (((x353+x354)+x355)%x356);

	if (t75 != 6951147778681150LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x357 = 46077740U;
	int16_t x358 = INT16_MIN;
	volatile int8_t x359 = INT8_MIN;
	int32_t x360 = INT32_MAX;

	t76 = (((x357+x358)+x359)%x360);

	if (t76 != 46044844U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x361 = 395782951259LLU;
	static int32_t x362 = 49858240;
	int32_t x363 = -38945;
	volatile uint8_t x364 = 1U;
	uint64_t t77 = 48360752955041LLU;

	t77 = (((x361+x362)+x363)%x364);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x365 = 6U;
	uint32_t x366 = 25973U;
	int8_t x368 = -8;
	volatile uint32_t t78 = 62919U;

	t78 = (((x365+x366)+x367)%x368);

	if (t78 != 58746U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x369 = 12979119U;
	uint16_t x370 = UINT16_MAX;
	uint8_t x371 = 31U;
	static uint8_t x372 = UINT8_MAX;
	uint32_t t79 = 22U;

	t79 = (((x369+x370)+x371)%x372);

	if (t79 != 160U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x378 = 9629106U;
	volatile int32_t x379 = INT32_MIN;
	int32_t x380 = INT32_MIN;
	volatile uint32_t t80 = 576707U;

	t80 = (((x377+x378)+x379)%x380);

	if (t80 != 9629361U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x381 = 209072204U;
	static volatile int16_t x382 = INT16_MIN;
	static int16_t x384 = INT16_MAX;
	uint64_t t81 = 10781LLU;

	t81 = (((x381+x382)+x383)%x384);

	if (t81 != 23513LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = -1;
	uint16_t x386 = 520U;
	static volatile int32_t t82 = 3;

	t82 = (((x385+x386)+x387)%x388);

	if (t82 != -513) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x389 = 141210U;
	static int16_t x390 = -11;
	uint64_t x391 = UINT64_MAX;
	volatile int16_t x392 = INT16_MIN;
	volatile uint64_t t83 = 15806162LLU;

	t83 = (((x389+x390)+x391)%x392);

	if (t83 != 141198LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = INT8_MAX;
	uint8_t x394 = 3U;
	uint8_t x396 = 11U;
	static volatile int32_t t84 = -10274;

	t84 = (((x393+x394)+x395)%x396);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x401 = INT32_MIN;
	static uint16_t x402 = UINT16_MAX;
	uint64_t x403 = UINT64_MAX;
	int8_t x404 = INT8_MIN;
	volatile uint64_t t85 = 60838245LLU;

	t85 = (((x401+x402)+x403)%x404);

	if (t85 != 18446744071562133502LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x407 = INT32_MIN;
	uint8_t x408 = UINT8_MAX;
	static int32_t t86 = 4829678;

	t86 = (((x405+x406)+x407)%x408);

	if (t86 != -228) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x409 = -1;
	volatile int64_t t87 = -7444494822579LL;

	t87 = (((x409+x410)+x411)%x412);

	if (t87 != -13519318LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x413 = 614411107;
	int16_t x415 = INT16_MIN;
	int32_t x416 = INT32_MAX;

	t88 = (((x413+x414)+x415)%x416);

	if (t88 != 614378338LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x421 = 5U;
	uint16_t x422 = 0U;
	static volatile int16_t x423 = INT16_MIN;
	volatile int16_t x424 = INT16_MAX;

	t89 = (((x421+x422)+x423)%x424);

	if (t89 != -32763) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x425 = 9147U;
	volatile uint8_t x426 = 0U;
	int16_t x427 = -1;
	uint64_t x428 = 6LLU;
	volatile uint64_t t90 = 18172LLU;

	t90 = (((x425+x426)+x427)%x428);

	if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x429 = INT16_MIN;
	uint8_t x430 = 2U;
	volatile int32_t x431 = -1;
	uint32_t x432 = 17630U;
	uint32_t t91 = 934807U;

	t91 = (((x429+x430)+x431)%x432);

	if (t91 != 2079U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x433 = -2;
	static uint8_t x434 = 15U;
	int64_t x435 = -1LL;
	uint8_t x436 = 97U;

	t92 = (((x433+x434)+x435)%x436);

	if (t92 != 12LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x445 = 0U;
	int32_t x446 = 18;
	volatile uint16_t x447 = 4856U;
	static volatile uint64_t t93 = 4156723537147LLU;

	t93 = (((x445+x446)+x447)%x448);

	if (t93 != 4874LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x450 = INT16_MAX;
	int16_t x451 = INT16_MAX;
	uint64_t x452 = 20199169118LLU;
	static uint64_t t94 = 133366090967LLU;

	t94 = (((x449+x450)+x451)%x452);

	if (t94 != 65661LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x458 = 16U;
	uint32_t x459 = UINT32_MAX;
	volatile uint32_t x460 = UINT32_MAX;
	volatile uint32_t t95 = 498768U;

	t95 = (((x457+x458)+x459)%x460);

	if (t95 != 16U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x461 = INT16_MAX;
	static int16_t x462 = 149;
	int32_t x463 = INT32_MIN;
	static uint64_t t96 = 21724LLU;

	t96 = (((x461+x462)+x463)%x464);

	if (t96 != 1088105LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x466 = 0;
	static int32_t x467 = -1992753;

	t97 = (((x465+x466)+x467)%x468);

	if (t97 != -1992498LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x469 = 13U;
	volatile int8_t x470 = -1;
	static volatile int32_t x471 = -1;
	static uint32_t x472 = UINT32_MAX;
	volatile uint32_t t98 = 5529U;

	t98 = (((x469+x470)+x471)%x472);

	if (t98 != 11U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x473 = -37;
	uint16_t x474 = UINT16_MAX;
	uint16_t x475 = 1U;
	volatile int32_t x476 = 1;
	int32_t t99 = 8639;

	t99 = (((x473+x474)+x475)%x476);

	if (t99 != 0) { NG(); } else { ; }
	
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

