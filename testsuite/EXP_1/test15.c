#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 0U;
int8_t x3 = INT8_MIN;
volatile uint64_t t0 = 78196LLU;
static volatile uint64_t t1 = 7225639LLU;
int64_t x12 = -2800LL;
volatile int32_t x14 = 3;
static volatile int32_t x15 = INT32_MAX;
uint8_t x19 = 11U;
int64_t x22 = -1870186473295LL;
int32_t x24 = 29438329;
int8_t x36 = INT8_MIN;
static volatile int32_t t6 = -11668;
static int16_t x37 = 1582;
static int16_t x39 = 4078;
static int16_t x45 = -2266;
int32_t x46 = 444714855;
static uint8_t x47 = UINT8_MAX;
static uint16_t x48 = 64U;
uint16_t x49 = UINT16_MAX;
int8_t x58 = INT8_MAX;
static volatile uint8_t x62 = 72U;
int16_t x95 = 44;
uint64_t x102 = 882LLU;
static uint8_t x104 = 19U;
uint16_t x109 = 1U;
volatile uint8_t x130 = 57U;
uint64_t x142 = 934792618020LLU;
volatile uint64_t t23 = 4562128035LLU;
int32_t x148 = -1;
static int16_t x155 = INT16_MIN;
int32_t t25 = -2281239;
int64_t x159 = INT64_MIN;
int32_t x161 = -668;
uint32_t x164 = 13U;
uint32_t x167 = UINT32_MAX;
int32_t x174 = -1;
uint16_t x176 = UINT16_MAX;
volatile uint64_t t30 = 281367LLU;
uint8_t x180 = UINT8_MAX;
volatile int64_t t34 = 176952674114713LL;
uint16_t x201 = 26U;
uint64_t x202 = 515851623267039LLU;
volatile uint64_t t35 = 41363758959LLU;
int32_t x209 = 0;
int32_t t37 = 33;
static uint64_t x220 = UINT64_MAX;
volatile int8_t x226 = -1;
volatile int8_t x227 = INT8_MIN;
int32_t t40 = 74;
static uint64_t t41 = 18281LLU;
int32_t x234 = 29384;
static uint32_t x246 = UINT32_MAX;
volatile uint16_t x248 = 48U;
volatile int8_t x256 = -1;
int32_t x258 = -1;
int8_t x260 = 0;
int32_t x263 = INT32_MAX;
int8_t x266 = 7;
int32_t x305 = 51761;
static int64_t t50 = 2392LL;
uint8_t x310 = UINT8_MAX;
static int8_t x313 = INT8_MAX;
int32_t t52 = -677246;
uint64_t x324 = UINT64_MAX;
int8_t x334 = -9;
int32_t x343 = -1;
int32_t x344 = -1;
static int16_t x354 = INT16_MIN;
static volatile int64_t t58 = 1054151038938945LL;
int8_t x359 = -1;
uint64_t t64 = 5618224118000LLU;
uint16_t x393 = 41U;
static int16_t x394 = -16;
volatile uint64_t x395 = 414247987486218707LLU;
static volatile int64_t x398 = -1LL;
static int32_t x403 = INT32_MAX;
static uint64_t t69 = 11759688178LLU;
volatile uint64_t x414 = 138319834214308191LLU;
static uint64_t t72 = 957LLU;
int8_t x427 = INT8_MIN;
static uint32_t t73 = 337407356U;
int16_t x434 = INT16_MIN;
uint8_t x436 = 0U;
int16_t x439 = INT16_MAX;
int8_t x447 = -1;
uint32_t x449 = 1202U;
volatile int8_t x452 = 1;
int32_t x455 = -1;
int64_t t79 = -302792107027LL;
int16_t x462 = INT16_MAX;
volatile int32_t x464 = INT32_MIN;
uint32_t x465 = UINT32_MAX;
int64_t x466 = INT64_MIN;
uint16_t x472 = 143U;
int8_t x475 = INT8_MIN;
volatile uint64_t t83 = 62390858516328656LLU;
volatile uint64_t t84 = 18041438839LLU;
int8_t x482 = INT8_MAX;
static volatile uint64_t x488 = UINT64_MAX;
int8_t x499 = 1;
static uint16_t x500 = 6U;
uint32_t x503 = UINT32_MAX;
uint32_t x512 = 3567458U;
static int32_t x515 = -63;
volatile uint8_t x521 = 18U;
uint16_t x527 = 2U;
static volatile int64_t t92 = -2970LL;
volatile uint64_t t93 = 50131219LLU;
static int64_t x537 = 59753853LL;
uint32_t x538 = 1029391U;
int8_t x543 = -2;
uint16_t x548 = 469U;
uint16_t x549 = 1U;
static int16_t x550 = -27;
volatile uint8_t x565 = UINT8_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint64_t x4 = 1681LLU;

	t0 = (((x1+x2)-x3)-x4);

	if (t0 != 63982LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 466LLU;
	volatile int32_t x6 = 116746137;
	static int8_t x7 = INT8_MIN;
	static int64_t x8 = -1LL;

	t1 = (((x5+x6)-x7)-x8);

	if (t1 != 116746732LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int32_t x10 = INT32_MIN;
	int8_t x11 = 2;
	int64_t t2 = 479388352935065202LL;

	t2 = (((x9+x10)-x11)-x12);

	if (t2 != -2147480723LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = 776;

	t3 = (((x13+x14)-x15)-x16);

	if (t3 != -2147483644) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -149733LL;
	uint32_t x18 = UINT32_MAX;
	int64_t x20 = -759724456312LL;
	int64_t t4 = 3604035627LL;

	t4 = (((x17+x18)-x19)-x20);

	if (t4 != 764019273863LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	int32_t x23 = INT32_MIN;
	int64_t t5 = 1082LL;

	t5 = (((x21+x22)-x23)-x24);

	if (t5 != -1870215911624LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MAX;
	int32_t x34 = INT32_MIN;
	int32_t x35 = -31;

	t6 = (((x33+x34)-x35)-x36);

	if (t6 != -2147450722) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x38 = 178379592;
	static int64_t x40 = -1LL;
	int64_t t7 = -5323810621812LL;

	t7 = (((x37+x38)-x39)-x40);

	if (t7 != 178377097LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t t8 = -702903922;

	t8 = (((x45+x46)-x47)-x48);

	if (t8 != 444712270) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x50 = UINT64_MAX;
	int32_t x51 = INT32_MIN;
	static volatile int64_t x52 = INT64_MIN;
	uint64_t t9 = 7593LLU;

	t9 = (((x49+x50)-x51)-x52);

	if (t9 != 9223372039002324990LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = -11;
	uint8_t x54 = 5U;
	uint8_t x55 = 1U;
	int64_t x56 = -1LL;
	int64_t t10 = -825330791968228444LL;

	t10 = (((x53+x54)-x55)-x56);

	if (t10 != -6LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 0U;
	uint64_t x59 = 7388753769034LLU;
	uint8_t x60 = 51U;
	volatile uint64_t t11 = 1977728625470054LLU;

	t11 = (((x57+x58)-x59)-x60);

	if (t11 != 18446736684955782658LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x61 = -1LL;
	uint64_t x63 = UINT64_MAX;
	static int16_t x64 = -1;
	uint64_t t12 = 11LLU;

	t12 = (((x61+x62)-x63)-x64);

	if (t12 != 73LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	static volatile int8_t x68 = -39;
	volatile int32_t t13 = -9212528;

	t13 = (((x65+x66)-x67)-x68);

	if (t13 != -89) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -1;
	uint64_t x70 = 10LLU;
	uint16_t x71 = 27U;
	int32_t x72 = INT32_MIN;
	static uint64_t t14 = 2220165735005126896LLU;

	t14 = (((x69+x70)-x71)-x72);

	if (t14 != 2147483630LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x77 = 998U;
	volatile int32_t x78 = -30291;
	uint64_t x79 = 7268982604744994LLU;
	int64_t x80 = 85115LL;
	uint64_t t15 = 2003LLU;

	t15 = (((x77+x78)-x79)-x80);

	if (t15 != 18439475091104692214LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = UINT64_MAX;
	int8_t x90 = 6;
	int16_t x91 = -1;
	int64_t x92 = 489331476105LL;
	uint64_t t16 = 48365872228697LLU;

	t16 = (((x89+x90)-x91)-x92);

	if (t16 != 18446743584378075517LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = INT32_MIN;
	uint64_t x94 = 82LLU;
	static uint32_t x96 = UINT32_MAX;
	uint64_t t17 = 728969276LLU;

	t17 = (((x93+x94)-x95)-x96);

	if (t17 != 18446744067267100711LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = 222493550539LL;
	volatile uint16_t x98 = 19482U;
	int8_t x99 = INT8_MAX;
	volatile int8_t x100 = INT8_MIN;
	int64_t t18 = -3917099811752960LL;

	t18 = (((x97+x98)-x99)-x100);

	if (t18 != 222493570022LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = -609760880;
	uint32_t x103 = 6587973U;
	uint64_t t19 = 14626403LLU;

	t19 = (((x101+x102)-x103)-x104);

	if (t19 != 18446744073093203626LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x110 = 3211943642144769188LLU;
	int16_t x111 = -374;
	static volatile int8_t x112 = INT8_MIN;
	static volatile uint64_t t20 = 8745947327695113882LLU;

	t20 = (((x109+x110)-x111)-x112);

	if (t20 != 3211943642144769691LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = 7115078;
	int32_t x122 = INT32_MIN;
	uint32_t x123 = 2107254078U;
	volatile int32_t x124 = -7393163;
	static uint32_t t21 = 32105013U;

	t21 = (((x121+x122)-x123)-x124);

	if (t21 != 54737811U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x129 = 0U;
	uint8_t x131 = UINT8_MAX;
	uint16_t x132 = 4201U;
	volatile int32_t t22 = 12;

	t22 = (((x129+x130)-x131)-x132);

	if (t22 != -4399) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x141 = -6LL;
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = -1;

	t23 = (((x141+x142)-x143)-x144);

	if (t23 != 930497650720LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x145 = -40259375643047106LL;
	int16_t x146 = -1;
	int16_t x147 = -1;
	static volatile int64_t t24 = -6LL;

	t24 = (((x145+x146)-x147)-x148);

	if (t24 != -40259375643047105LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x153 = INT16_MIN;
	uint8_t x154 = UINT8_MAX;
	int16_t x156 = INT16_MIN;

	t25 = (((x153+x154)-x155)-x156);

	if (t25 != 33023) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x157 = 216U;
	static int64_t x158 = -62168611124420LL;
	volatile int64_t x160 = -213LL;
	volatile int64_t t26 = -217606137981LL;

	t26 = (((x157+x158)-x159)-x160);

	if (t26 != 9223309868243651817LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x162 = -1912681534137LL;
	uint8_t x163 = 18U;
	int64_t t27 = 4170933785104274178LL;

	t27 = (((x161+x162)-x163)-x164);

	if (t27 != -1912681534836LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x165 = 3941;
	uint32_t x166 = 231U;
	int16_t x168 = 4;
	volatile uint32_t t28 = 23332466U;

	t28 = (((x165+x166)-x167)-x168);

	if (t28 != 4169U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x169 = UINT64_MAX;
	int16_t x170 = INT16_MAX;
	uint64_t x171 = UINT64_MAX;
	static uint16_t x172 = 809U;
	uint64_t t29 = 930226682LLU;

	t29 = (((x169+x170)-x171)-x172);

	if (t29 != 31958LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x173 = 106651LLU;
	int16_t x175 = -1;

	t30 = (((x173+x174)-x175)-x176);

	if (t30 != 41116LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x177 = INT32_MIN;
	uint32_t x178 = 14U;
	static uint32_t x179 = UINT32_MAX;
	static uint32_t t31 = 333759472U;

	t31 = (((x177+x178)-x179)-x180);

	if (t31 != 2147483408U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x181 = UINT32_MAX;
	static uint16_t x182 = 929U;
	int8_t x183 = 27;
	static volatile int32_t x184 = -109498;
	uint32_t t32 = 929U;

	t32 = (((x181+x182)-x183)-x184);

	if (t32 != 110399U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x189 = INT32_MIN;
	int64_t x190 = 17936190LL;
	int16_t x191 = -183;
	uint8_t x192 = 3U;
	int64_t t33 = -96364761514895426LL;

	t33 = (((x189+x190)-x191)-x192);

	if (t33 != -2129547278LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x193 = -226LL;
	uint16_t x194 = UINT16_MAX;
	static int8_t x195 = 14;
	int64_t x196 = -1LL;

	t34 = (((x193+x194)-x195)-x196);

	if (t34 != 65296LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x203 = INT64_MIN;
	static volatile uint64_t x204 = 16207600701694LLU;

	t35 = (((x201+x202)-x203)-x204);

	if (t35 != 9223871680877341179LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x205 = INT8_MAX;
	static uint32_t x206 = 1734181281U;
	uint64_t x207 = 77257210388LLU;
	int16_t x208 = INT16_MAX;
	uint64_t t36 = 129LLU;

	t36 = (((x205+x206)-x207)-x208);

	if (t36 != 18446743998186489869LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x210 = -12;
	int32_t x211 = -718480801;
	uint16_t x212 = UINT16_MAX;

	t37 = (((x209+x210)-x211)-x212);

	if (t37 != 718415254) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x213 = 99U;
	volatile uint8_t x214 = 0U;
	volatile uint16_t x215 = 8838U;
	volatile int32_t x216 = INT32_MIN;
	volatile int32_t t38 = -6149258;

	t38 = (((x213+x214)-x215)-x216);

	if (t38 != 2147474909) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x217 = 3;
	int32_t x218 = -1;
	static uint16_t x219 = 6851U;
	uint64_t t39 = 217LLU;

	t39 = (((x217+x218)-x219)-x220);

	if (t39 != 18446744073709544768LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x225 = INT8_MAX;
	volatile int16_t x228 = INT16_MAX;

	t40 = (((x225+x226)-x227)-x228);

	if (t40 != -32513) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x229 = 108382006027LLU;
	uint8_t x230 = 7U;
	int16_t x231 = -1;
	volatile int16_t x232 = -944;

	t41 = (((x229+x230)-x231)-x232);

	if (t41 != 108382006979LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x233 = -3;
	int8_t x235 = INT8_MIN;
	volatile int8_t x236 = -1;
	int32_t t42 = -64200;

	t42 = (((x233+x234)-x235)-x236);

	if (t42 != 29510) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x237 = -1;
	static uint64_t x238 = UINT64_MAX;
	uint64_t x239 = UINT64_MAX;
	static uint64_t x240 = UINT64_MAX;
	uint64_t t43 = 59857775498930835LLU;

	t43 = (((x237+x238)-x239)-x240);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x241 = INT16_MIN;
	static uint64_t x242 = UINT64_MAX;
	static int16_t x243 = INT16_MAX;
	uint16_t x244 = UINT16_MAX;
	uint64_t t44 = 380641656302436761LLU;

	t44 = (((x241+x242)-x243)-x244);

	if (t44 != 18446744073709420545LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x245 = INT64_MIN;
	uint16_t x247 = 12047U;
	int64_t t45 = -15228170LL;

	t45 = (((x245+x246)-x247)-x248);

	if (t45 != -9223372032559820608LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x253 = 3206U;
	int16_t x254 = INT16_MAX;
	int8_t x255 = INT8_MIN;
	int32_t t46 = -2;

	t46 = (((x253+x254)-x255)-x256);

	if (t46 != 36102) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x257 = UINT64_MAX;
	static int16_t x259 = -468;
	volatile uint64_t t47 = 80LLU;

	t47 = (((x257+x258)-x259)-x260);

	if (t47 != 466LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x261 = 689U;
	int8_t x262 = INT8_MAX;
	volatile int32_t x264 = -1;
	volatile int32_t t48 = -17156961;

	t48 = (((x261+x262)-x263)-x264);

	if (t48 != -2147482830) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x265 = UINT16_MAX;
	volatile uint64_t x267 = 4461555074LLU;
	int16_t x268 = -1;
	volatile uint64_t t49 = 78303381333771LLU;

	t49 = (((x265+x266)-x267)-x268);

	if (t49 != 18446744069248062085LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x306 = 914U;
	volatile int64_t x307 = -1LL;
	static int64_t x308 = -1LL;

	t50 = (((x305+x306)-x307)-x308);

	if (t50 != 52677LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x309 = 35;
	int8_t x311 = -1;
	uint8_t x312 = 5U;
	volatile int32_t t51 = 115568986;

	t51 = (((x309+x310)-x311)-x312);

	if (t51 != 286) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x314 = UINT8_MAX;
	int8_t x315 = 1;
	static int32_t x316 = INT32_MAX;

	t52 = (((x313+x314)-x315)-x316);

	if (t52 != -2147483266) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x321 = INT8_MAX;
	int64_t x322 = INT64_MIN;
	uint16_t x323 = 37U;
	uint64_t t53 = 16LLU;

	t53 = (((x321+x322)-x323)-x324);

	if (t53 != 9223372036854775899LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x325 = -1LL;
	uint8_t x326 = 3U;
	int8_t x327 = INT8_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile int64_t t54 = -768LL;

	t54 = (((x325+x326)-x327)-x328);

	if (t54 != -65660LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x333 = 2152;
	int16_t x335 = -1;
	int16_t x336 = 0;
	volatile int32_t t55 = 163;

	t55 = (((x333+x334)-x335)-x336);

	if (t55 != 2144) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x341 = INT16_MIN;
	int32_t x342 = -92;
	static int32_t t56 = -1;

	t56 = (((x341+x342)-x343)-x344);

	if (t56 != -32858) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x349 = -15292257659155655LL;
	int8_t x350 = INT8_MIN;
	static int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MAX;
	volatile int64_t t57 = -14147857LL;

	t57 = (((x349+x350)-x351)-x352);

	if (t57 != -15292257659155782LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x353 = INT64_MAX;
	int64_t x355 = INT64_MAX;
	uint32_t x356 = UINT32_MAX;

	t58 = (((x353+x354)-x355)-x356);

	if (t58 != -4295000063LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = -25;
	int16_t x360 = INT16_MAX;
	volatile int32_t t59 = 201;

	t59 = (((x357+x358)-x359)-x360);

	if (t59 != -65559) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x361 = -7;
	int8_t x362 = INT8_MAX;
	int8_t x363 = INT8_MIN;
	int16_t x364 = -1;
	volatile int32_t t60 = -821;

	t60 = (((x361+x362)-x363)-x364);

	if (t60 != 249) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x369 = INT16_MIN;
	static uint8_t x370 = 1U;
	static uint32_t x371 = UINT32_MAX;
	int16_t x372 = INT16_MIN;
	uint32_t t61 = 488008U;

	t61 = (((x369+x370)-x371)-x372);

	if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x373 = 58;
	uint16_t x374 = 0U;
	volatile uint8_t x375 = 29U;
	int8_t x376 = -1;
	static int32_t t62 = -167663635;

	t62 = (((x373+x374)-x375)-x376);

	if (t62 != 30) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x377 = 123596899187LLU;
	int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	int8_t x380 = 36;
	static uint64_t t63 = 65031975LLU;

	t63 = (((x377+x378)-x379)-x380);

	if (t63 != 121449415631LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x381 = -6;
	static int16_t x382 = INT16_MAX;
	uint64_t x383 = UINT64_MAX;
	int8_t x384 = 58;

	t64 = (((x381+x382)-x383)-x384);

	if (t64 != 32704LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x385 = UINT16_MAX;
	int8_t x386 = INT8_MIN;
	static volatile int32_t x387 = -1;
	int64_t x388 = -42856LL;
	int64_t t65 = 4415LL;

	t65 = (((x385+x386)-x387)-x388);

	if (t65 != 108264LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x389 = -44366878316LL;
	volatile uint32_t x390 = 1U;
	uint8_t x391 = UINT8_MAX;
	static volatile int8_t x392 = 0;
	static int64_t t66 = -56520LL;

	t66 = (((x389+x390)-x391)-x392);

	if (t66 != -44366878570LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x396 = INT32_MIN;
	uint64_t t67 = 5601292704LLU;

	t67 = (((x393+x394)-x395)-x396);

	if (t67 != 18032496088370816582LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x397 = 1U;
	static volatile int32_t x399 = -1;
	static uint8_t x400 = 1U;
	static int64_t t68 = -2534475011187816LL;

	t68 = (((x397+x398)-x399)-x400);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x401 = -107;
	uint8_t x402 = UINT8_MAX;
	volatile uint64_t x404 = 14550996155LLU;

	t69 = (((x401+x402)-x403)-x404);

	if (t69 != 18446744057011071962LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x409 = 0;
	static int64_t x410 = -5439LL;
	int64_t x411 = INT64_MIN;
	int8_t x412 = INT8_MAX;
	static volatile int64_t t70 = 7579LL;

	t70 = (((x409+x410)-x411)-x412);

	if (t70 != 9223372036854770242LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x413 = 9U;
	int16_t x415 = 3;
	int64_t x416 = INT64_MIN;
	volatile uint64_t t71 = 14LLU;

	t71 = (((x413+x414)-x415)-x416);

	if (t71 != 9361691871069084005LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x417 = UINT32_MAX;
	int16_t x418 = 403;
	int16_t x419 = -1;
	uint64_t x420 = 595711799141LLU;

	t72 = (((x417+x418)-x419)-x420);

	if (t72 != 18446743477997752878LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x425 = 10U;
	uint32_t x426 = 6603U;
	volatile int32_t x428 = -1;

	t73 = (((x425+x426)-x427)-x428);

	if (t73 != 6742U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x429 = 4049628LLU;
	static volatile int64_t x430 = INT64_MIN;
	int32_t x431 = INT32_MIN;
	volatile int64_t x432 = INT64_MIN;
	uint64_t t74 = 7962885411336818056LLU;

	t74 = (((x429+x430)-x431)-x432);

	if (t74 != 2151533276LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x433 = -1;
	uint8_t x435 = UINT8_MAX;
	volatile int32_t t75 = 246;

	t75 = (((x433+x434)-x435)-x436);

	if (t75 != -33024) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x437 = INT64_MAX;
	int64_t x438 = -1LL;
	uint8_t x440 = 12U;
	static volatile int64_t t76 = 24LL;

	t76 = (((x437+x438)-x439)-x440);

	if (t76 != 9223372036854743027LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x445 = -600822;
	uint32_t x446 = 5770211U;
	int8_t x448 = INT8_MAX;
	volatile uint32_t t77 = 40U;

	t77 = (((x445+x446)-x447)-x448);

	if (t77 != 5169263U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x450 = 374U;
	static int8_t x451 = INT8_MAX;
	uint32_t t78 = 285U;

	t78 = (((x449+x450)-x451)-x452);

	if (t78 != 1448U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x453 = 18865907358037LL;
	int32_t x454 = -1;
	volatile int8_t x456 = -1;

	t79 = (((x453+x454)-x455)-x456);

	if (t79 != 18865907358038LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x461 = 28LL;
	int8_t x463 = 35;
	int64_t t80 = -70322864904114LL;

	t80 = (((x461+x462)-x463)-x464);

	if (t80 != 2147516408LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x467 = INT64_MIN;
	uint32_t x468 = 38071U;
	static int64_t t81 = 269702LL;

	t81 = (((x465+x466)-x467)-x468);

	if (t81 != 4294929224LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x469 = 30271454U;
	static volatile int64_t x470 = INT64_MIN;
	int16_t x471 = 1;
	volatile int64_t t82 = 18762282454338LL;

	t82 = (((x469+x470)-x471)-x472);

	if (t82 != -9223372036824504498LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x473 = UINT64_MAX;
	volatile int16_t x474 = INT16_MIN;
	uint8_t x476 = UINT8_MAX;

	t83 = (((x473+x474)-x475)-x476);

	if (t83 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x477 = -1LL;
	uint8_t x478 = UINT8_MAX;
	volatile uint64_t x479 = 160589085LLU;
	static volatile int16_t x480 = -1;

	t84 = (((x477+x478)-x479)-x480);

	if (t84 != 18446744073548962786LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x481 = INT16_MIN;
	uint32_t x483 = 709U;
	int16_t x484 = 4850;
	volatile uint32_t t85 = 2U;

	t85 = (((x481+x482)-x483)-x484);

	if (t85 != 4294929096U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x485 = INT8_MIN;
	volatile uint8_t x486 = 1U;
	volatile int8_t x487 = -3;
	uint64_t t86 = 437721LLU;

	t86 = (((x485+x486)-x487)-x488);

	if (t86 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x497 = -1102292747724147306LL;
	uint16_t x498 = UINT16_MAX;
	static volatile int64_t t87 = 191615202992454212LL;

	t87 = (((x497+x498)-x499)-x500);

	if (t87 != -1102292747724081778LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x501 = -1;
	int8_t x502 = INT8_MAX;
	int8_t x504 = -1;
	static uint32_t t88 = 1436197192U;

	t88 = (((x501+x502)-x503)-x504);

	if (t88 != 128U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x509 = -1;
	uint64_t x510 = 47733853644540715LLU;
	int32_t x511 = INT32_MIN;
	uint64_t t89 = 89344038256346LLU;

	t89 = (((x509+x510)-x511)-x512);

	if (t89 != 47733855788456904LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x513 = 6U;
	int16_t x514 = 15951;
	volatile int32_t x516 = -161125;
	int32_t t90 = 3572;

	t90 = (((x513+x514)-x515)-x516);

	if (t90 != 177145) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x522 = -1;
	int32_t x523 = -1;
	int32_t x524 = -1;
	int32_t t91 = -5212;

	t91 = (((x521+x522)-x523)-x524);

	if (t91 != 19) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x525 = 100889287;
	static uint16_t x526 = 107U;
	int64_t x528 = -1LL;

	t92 = (((x525+x526)-x527)-x528);

	if (t92 != 100889393LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x529 = 2093983LLU;
	int32_t x530 = INT32_MIN;
	int64_t x531 = -7176959204387649LL;
	uint32_t x532 = 557U;

	t93 = (((x529+x530)-x531)-x532);

	if (t93 != 7176957058997427LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x539 = 2U;
	volatile int8_t x540 = -1;
	static volatile int64_t t94 = 7LL;

	t94 = (((x537+x538)-x539)-x540);

	if (t94 != 60783243LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x541 = -1;
	static int8_t x542 = INT8_MAX;
	volatile int16_t x544 = -14806;
	volatile int32_t t95 = 47667401;

	t95 = (((x541+x542)-x543)-x544);

	if (t95 != 14934) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x545 = UINT64_MAX;
	int64_t x546 = INT64_MIN;
	int8_t x547 = -1;
	uint64_t t96 = 16009767708090231LLU;

	t96 = (((x545+x546)-x547)-x548);

	if (t96 != 9223372036854775339LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x551 = INT16_MIN;
	volatile int8_t x552 = -1;
	int32_t t97 = 1454869;

	t97 = (((x549+x550)-x551)-x552);

	if (t97 != 32743) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x566 = 76;
	static volatile uint32_t x567 = 5718952U;
	volatile int8_t x568 = INT8_MAX;
	volatile uint32_t t98 = 3U;

	t98 = (((x565+x566)-x567)-x568);

	if (t98 != 4289248548U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x573 = INT8_MIN;
	int32_t x574 = -439242;
	int16_t x575 = INT16_MIN;
	static int32_t x576 = -1;
	int32_t t99 = -4743076;

	t99 = (((x573+x574)-x575)-x576);

	if (t99 != -406601) { NG(); } else { ; }
	
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

