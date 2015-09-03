#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 3853953950118180LLU;
volatile uint64_t t2 = 113647446LLU;
static int32_t x25 = 6005;
int64_t x26 = -778077830LL;
static uint64_t x30 = UINT64_MAX;
uint64_t x35 = UINT64_MAX;
int8_t x41 = -22;
uint8_t x42 = 12U;
uint16_t x43 = 20U;
static volatile int16_t x56 = INT16_MIN;
uint8_t x80 = 1U;
uint64_t t13 = 141LLU;
int8_t x96 = -1;
uint64_t x98 = 3907964538243652454LLU;
static uint32_t t19 = 15280U;
static volatile int32_t x116 = -41;
int32_t x120 = 122791165;
uint8_t x127 = UINT8_MAX;
uint32_t x128 = 245482683U;
int16_t x135 = INT16_MIN;
int64_t t24 = -1684989275LL;
volatile int64_t t25 = -5387492200863218LL;
int64_t x152 = -3907875485383566909LL;
volatile int16_t x153 = INT16_MAX;
int8_t x154 = INT8_MIN;
volatile int8_t x156 = -1;
static volatile uint64_t t30 = 2354650897698LLU;
volatile int16_t x175 = INT16_MIN;
volatile int64_t t34 = 602783877796666LL;
volatile int32_t x177 = 126;
int64_t x180 = -3297LL;
volatile int16_t x186 = 3;
int32_t x210 = 2122853;
uint64_t x217 = UINT64_MAX;
volatile uint64_t t43 = UINT64_MAX;
int16_t x229 = 206;
volatile uint32_t x241 = 24077U;
volatile int64_t x244 = -1LL;
uint64_t x249 = 126897729765LLU;
int64_t x251 = -1LL;
uint64_t t48 = 46632761568114224LLU;
uint64_t x257 = 15921517913550LLU;
static volatile int16_t x262 = INT16_MIN;
static int8_t x265 = -1;
static int8_t x266 = INT8_MIN;
static int32_t x267 = -1;
uint16_t x270 = UINT16_MAX;
volatile uint64_t t54 = 2404755395182LLU;
int8_t x315 = INT8_MIN;
int32_t x316 = INT32_MIN;
volatile int16_t x324 = -432;
volatile int8_t x326 = INT8_MAX;
int64_t x328 = 12505973173LL;
volatile int64_t t62 = -5687LL;
volatile uint64_t x335 = UINT64_MAX;
volatile uint8_t x339 = 9U;
volatile uint32_t x341 = 29020523U;
int8_t x381 = 0;
int16_t x391 = -7;
uint32_t x393 = UINT32_MAX;
volatile uint64_t x405 = UINT64_MAX;
uint32_t x407 = UINT32_MAX;
volatile uint64_t t74 = 72LLU;
volatile uint64_t t75 = 187675610484LLU;
int64_t x425 = INT64_MIN;
uint16_t x426 = 7463U;
int32_t x427 = -1;
int8_t x433 = 6;
int8_t x434 = INT8_MAX;
int64_t x437 = -1LL;
int8_t x441 = 48;
int16_t x444 = 0;
int16_t x447 = INT16_MIN;
int32_t t82 = -77311;
static volatile uint64_t t83 = 5848500334790109411LLU;
uint64_t x489 = 5295152923320LLU;
volatile int64_t t86 = -2315606134382313LL;
uint8_t x502 = UINT8_MAX;
static int64_t x504 = -1LL;
int8_t x511 = 19;
uint8_t x514 = UINT8_MAX;
int64_t x516 = -72045959829LL;
volatile uint8_t x525 = UINT8_MAX;
int8_t x526 = INT8_MAX;
uint8_t x527 = 15U;
int8_t x546 = INT8_MIN;
int8_t x547 = INT8_MIN;
static volatile int32_t x559 = 167051;
static int8_t x572 = 41;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int32_t x2 = INT32_MIN;
	int16_t x4 = INT16_MAX;
	volatile uint64_t t0 = 5LLU;

	t0 = (x1-((x2*x3)^x4));

	if (t0 != 5338657343351521281LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 0;
	static uint16_t x6 = UINT16_MAX;
	int16_t x7 = 617;
	int64_t x8 = -1773872996454LL;
	int64_t t1 = -3264LL;

	t1 = (x5-((x6*x7)^x8));

	if (t1 != 1773846207987LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 777018945240LLU;
	uint64_t x10 = 23232284788LLU;
	static int32_t x11 = -1;
	int32_t x12 = INT32_MIN;

	t2 = (x9-((x10*x11)^x12));

	if (t2 != 755154073420LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 6U;
	uint16_t x14 = 17894U;
	int8_t x15 = INT8_MIN;
	volatile uint32_t x16 = UINT32_MAX;
	uint32_t t3 = 1860413U;

	t3 = (x13-((x14*x15)^x16));

	if (t3 != 4292676871U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	int8_t x23 = INT8_MIN;
	int64_t x24 = INT64_MAX;
	uint64_t t4 = 5467234206865192026LLU;

	t4 = (x21-((x22*x23)^x24));

	if (t4 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x27 = -1LL;
	static int32_t x28 = 1041023;
	volatile int64_t t5 = -650615028LL;

	t5 = (x25-((x26*x27)^x28));

	if (t5 != -779046276LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 781166619362098604LLU;
	uint8_t x31 = 11U;
	int16_t x32 = -52;
	volatile uint64_t t6 = 353645879162002LLU;

	t6 = (x29-((x30*x31)^x32));

	if (t6 != 781166619362098547LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = -1;
	int64_t x34 = 0LL;
	uint8_t x36 = 48U;
	uint64_t t7 = 7LLU;

	t7 = (x33-((x34*x35)^x36));

	if (t7 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x44 = INT8_MIN;
	static int32_t t8 = -20582;

	t8 = (x41-((x42*x43)^x44));

	if (t8 != 122) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = 0U;
	int64_t x50 = -34LL;
	static uint64_t x51 = 121508086512LLU;
	uint64_t x52 = UINT64_MAX;
	uint64_t t9 = 482LLU;

	t9 = (x49-((x50*x51)^x52));

	if (t9 != 18446739942434610209LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = -10018;
	volatile uint8_t x54 = 3U;
	int32_t x55 = -1;
	int32_t t10 = -80661373;

	t10 = (x53-((x54*x55)^x56));

	if (t10 != -42783) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = INT32_MIN;
	static int64_t x62 = -1LL;
	int32_t x63 = INT32_MIN;
	int32_t x64 = INT32_MIN;
	volatile int64_t t11 = 354LL;

	t11 = (x61-((x62*x63)^x64));

	if (t11 != 2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -1;
	int8_t x66 = INT8_MIN;
	int8_t x67 = -4;
	int64_t x68 = -1LL;
	volatile int64_t t12 = 15LL;

	t12 = (x65-((x66*x67)^x68));

	if (t12 != 512LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x77 = INT8_MIN;
	uint32_t x78 = 72915997U;
	static uint64_t x79 = UINT64_MAX;

	t13 = (x77-((x78*x79)^x80));

	if (t13 != 72915870LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x89 = -1;
	static int8_t x90 = INT8_MIN;
	int32_t x91 = -2;
	static int64_t x92 = 44LL;
	int64_t t14 = -573415440581737LL;

	t14 = (x89-((x90*x91)^x92));

	if (t14 != -301LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x93 = UINT8_MAX;
	int64_t x94 = -269685457097534LL;
	uint64_t x95 = 1893575384711310025LLU;
	volatile uint64_t t15 = 38199002LLU;

	t15 = (x93-((x94*x95)^x96));

	if (t15 != 3090815077687343442LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x97 = 124LLU;
	static int64_t x99 = -7LL;
	int16_t x100 = -1;
	volatile uint64_t t16 = 133971927952946106LLU;

	t16 = (x97-((x98*x99)^x100));

	if (t16 != 9537736379713536179LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x101 = 72;
	static uint32_t x102 = UINT32_MAX;
	uint16_t x103 = 31513U;
	uint16_t x104 = UINT16_MAX;
	static uint32_t t17 = 10199751U;

	t17 = (x101-((x102*x103)^x104));

	if (t17 != 34096U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = 0;
	int32_t x106 = -8166932;
	int8_t x107 = INT8_MAX;
	static uint32_t x108 = UINT32_MAX;
	uint32_t t18 = 20859628U;

	t18 = (x105-((x106*x107)^x108));

	if (t18 != 3257766933U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x109 = -42;
	uint32_t x110 = UINT32_MAX;
	static uint16_t x111 = 5359U;
	int16_t x112 = -1;

	t19 = (x109-((x110*x111)^x112));

	if (t19 != 4294961896U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x113 = INT8_MIN;
	int64_t x114 = -1LL;
	uint64_t x115 = 27561LLU;
	uint64_t t20 = 1097782LLU;

	t20 = (x113-((x114*x115)^x116));

	if (t20 != 18446744073709523968LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x117 = UINT8_MAX;
	static volatile int8_t x118 = 0;
	static int64_t x119 = -1LL;
	volatile int64_t t21 = 15246717LL;

	t21 = (x117-((x118*x119)^x120));

	if (t21 != -122790910LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MIN;
	int16_t x123 = 9;
	static int64_t x124 = INT64_MAX;
	static int64_t t22 = 355538LL;

	t22 = (x121-((x122*x123)^x124));

	if (t22 != 9223372034707291009LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x125 = INT32_MIN;
	uint64_t x126 = 87732962404717629LLU;
	uint64_t t23 = 1972382477LLU;

	t23 = (x125-((x126*x127)^x128));

	if (t23 != 14521582732309713800LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x133 = -5;
	uint8_t x134 = 4U;
	int64_t x136 = -1LL;

	t24 = (x133-((x134*x135)^x136));

	if (t24 != -131076LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x137 = 51279297U;
	int16_t x138 = INT16_MAX;
	int32_t x139 = -1;
	int64_t x140 = INT64_MIN;

	t25 = (x137-((x138*x139)^x140));

	if (t25 != -9223372036803463744LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x141 = -1LL;
	int8_t x142 = INT8_MIN;
	int64_t x143 = -1LL;
	int16_t x144 = INT16_MIN;
	static int64_t t26 = 1990195250548502LL;

	t26 = (x141-((x142*x143)^x144));

	if (t26 != 32639LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = INT16_MIN;
	int64_t x146 = 523290313LL;
	uint64_t x147 = 1467664447LLU;
	int64_t x148 = -1LL;
	uint64_t t27 = 3038284919448LLU;

	t27 = (x145-((x146*x147)^x148));

	if (t27 != 768014587849569144LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x149 = UINT8_MAX;
	uint8_t x150 = 12U;
	int16_t x151 = INT16_MIN;
	static volatile int64_t t28 = -224131567LL;

	t28 = (x149-((x150*x151)^x152));

	if (t28 != -3907875485383350468LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x155 = -1;
	int32_t t29 = 7251556;

	t29 = (x153-((x154*x155)^x156));

	if (t29 != 32896) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = 62LLU;
	int8_t x158 = 0;
	int8_t x159 = INT8_MIN;
	static volatile int8_t x160 = INT8_MIN;

	t30 = (x157-((x158*x159)^x160));

	if (t30 != 190LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x161 = UINT8_MAX;
	static int16_t x162 = 0;
	int64_t x163 = INT64_MIN;
	volatile int32_t x164 = -1;
	static int64_t t31 = 581687556764552734LL;

	t31 = (x161-((x162*x163)^x164));

	if (t31 != 256LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x165 = 2;
	uint8_t x166 = 92U;
	int8_t x167 = INT8_MIN;
	int32_t x168 = -1;
	int32_t t32 = -19894874;

	t32 = (x165-((x166*x167)^x168));

	if (t32 != -11773) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x169 = UINT64_MAX;
	static volatile uint64_t x170 = UINT64_MAX;
	static uint8_t x171 = 15U;
	uint8_t x172 = UINT8_MAX;
	uint64_t t33 = 734555886LLU;

	t33 = (x169-((x170*x171)^x172));

	if (t33 != 241LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = -3253996405481642994LL;
	uint8_t x174 = 30U;
	int16_t x176 = INT16_MAX;

	t34 = (x173-((x174*x175)^x176));

	if (t34 != -3253996405480692721LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x178 = -1;
	volatile uint16_t x179 = 1U;
	int64_t t35 = 1LL;

	t35 = (x177-((x178*x179)^x180));

	if (t35 != -3170LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x181 = 0U;
	uint64_t x182 = 449062699727346LLU;
	static volatile int64_t x183 = -48305623LL;
	int16_t x184 = 6275;
	uint64_t t36 = 929448741324972LLU;

	t36 = (x181-((x182*x183)^x184));

	if (t36 != 17329189782655524031LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x185 = 2U;
	uint32_t x187 = 72328U;
	int8_t x188 = -1;
	uint32_t t37 = 677876519U;

	t37 = (x185-((x186*x187)^x188));

	if (t37 != 216987U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x189 = -102;
	volatile uint32_t x190 = 15U;
	volatile int8_t x191 = -20;
	int16_t x192 = -1;
	volatile uint32_t t38 = 0U;

	t38 = (x189-((x190*x191)^x192));

	if (t38 != 4294966895U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x197 = 9U;
	int8_t x198 = INT8_MIN;
	uint16_t x199 = 13007U;
	uint32_t x200 = UINT32_MAX;
	static uint32_t t39 = 715U;

	t39 = (x197-((x198*x199)^x200));

	if (t39 != 4293302410U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x201 = INT8_MAX;
	static volatile int64_t x202 = INT64_MIN;
	uint64_t x203 = 1056953364766117136LLU;
	int16_t x204 = -1;
	static uint64_t t40 = 61235029570033LLU;

	t40 = (x201-((x202*x203)^x204));

	if (t40 != 128LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x205 = -1LL;
	static uint16_t x206 = UINT16_MAX;
	int16_t x207 = INT16_MAX;
	int64_t x208 = -1LL;
	volatile int64_t t41 = 0LL;

	t41 = (x205-((x206*x207)^x208));

	if (t41 != 2147385345LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = -2;
	int32_t x211 = 145;
	int16_t x212 = INT16_MIN;
	volatile int32_t t42 = 128619;

	t42 = (x209-((x210*x211)^x212));

	if (t42 != 307798729) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x218 = 1;
	int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MIN;

	t43 = (x217-((x218*x219)^x220));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x230 = INT64_MAX;
	uint64_t x231 = UINT64_MAX;
	uint32_t x232 = 490922102U;
	volatile uint64_t t44 = 127237LLU;

	t44 = (x229-((x230*x231)^x232));

	if (t44 != 9223372036363853911LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x233 = 1816LLU;
	uint32_t x234 = UINT32_MAX;
	static volatile int32_t x235 = INT32_MIN;
	static uint16_t x236 = 924U;
	uint64_t t45 = 207778808637629533LLU;

	t45 = (x233-((x234*x235)^x236));

	if (t45 != 18446744071562068860LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x242 = -1;
	static int32_t x243 = INT32_MAX;
	int64_t t46 = -47LL;

	t46 = (x241-((x242*x243)^x244));

	if (t46 != -2147459569LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x245 = -1LL;
	volatile int8_t x246 = INT8_MIN;
	static uint8_t x247 = UINT8_MAX;
	int32_t x248 = -1;
	int64_t t47 = 28352456LL;

	t47 = (x245-((x246*x247)^x248));

	if (t47 != -32640LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x250 = -772;
	int16_t x252 = -1;

	t48 = (x249-((x250*x251)^x252));

	if (t48 != 126897730538LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x258 = 1232247;
	int8_t x259 = INT8_MIN;
	volatile int32_t x260 = 7;
	uint64_t t49 = 10863LLU;

	t49 = (x257-((x258*x259)^x260));

	if (t49 != 15921675641159LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x261 = 490U;
	int8_t x263 = -1;
	volatile int16_t x264 = INT16_MIN;
	int32_t t50 = 19651;

	t50 = (x261-((x262*x263)^x264));

	if (t50 != 66026) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x268 = -1;
	static int32_t t51 = 6731;

	t51 = (x265-((x266*x267)^x268));

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x269 = 27529061659LLU;
	int32_t x271 = -3435;
	int8_t x272 = -1;
	uint64_t t52 = 33916211355258117LLU;

	t52 = (x269-((x270*x271)^x272));

	if (t52 != 27303948935LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x277 = INT16_MAX;
	int64_t x278 = INT64_MIN;
	static uint8_t x279 = 0U;
	int8_t x280 = 21;
	volatile int64_t t53 = 0LL;

	t53 = (x277-((x278*x279)^x280));

	if (t53 != 32746LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x285 = INT64_MAX;
	uint64_t x286 = 16020346315921LLU;
	volatile int8_t x287 = -56;
	int64_t x288 = INT64_MIN;

	t54 = (x285-((x286*x287)^x288));

	if (t54 != 897139393691575LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x293 = 674384237LLU;
	static int64_t x294 = -1LL;
	uint32_t x295 = 10901078U;
	int16_t x296 = -151;
	static uint64_t t55 = 8917518254325336444LLU;

	t55 = (x293-((x294*x295)^x296));

	if (t55 != 663483050LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x297 = 839;
	uint64_t x298 = 1128LLU;
	int16_t x299 = -28;
	uint32_t x300 = 261944U;
	uint64_t t56 = 611714399031LLU;

	t56 = (x297-((x298*x299)^x300));

	if (t56 != 231343LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x301 = -1;
	int32_t x302 = -656597;
	int64_t x303 = 7729481585LL;
	static int8_t x304 = INT8_MIN;
	static int64_t t57 = -30108686582662LL;

	t57 = (x301-((x302*x303)^x304));

	if (t57 != -5075154420266364LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x305 = 40329982LL;
	volatile int8_t x306 = 7;
	static volatile int16_t x307 = INT16_MIN;
	volatile int32_t x308 = -1;
	volatile int64_t t58 = 15117928856LL;

	t58 = (x305-((x306*x307)^x308));

	if (t58 != 40100607LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x309 = INT8_MIN;
	int32_t x310 = -1284;
	uint16_t x311 = 3883U;
	int8_t x312 = INT8_MIN;
	volatile int32_t t59 = -126530;

	t59 = (x309-((x310*x311)^x312));

	if (t59 != -4985940) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x313 = -1;
	volatile uint32_t x314 = 153808U;
	static volatile uint32_t t60 = 91340U;

	t60 = (x313-((x314*x315)^x316));

	if (t60 != 2167171071U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x321 = -1;
	volatile int8_t x322 = -1;
	uint16_t x323 = UINT16_MAX;
	volatile int32_t t61 = 593;

	t61 = (x321-((x322*x323)^x324));

	if (t61 != -65106) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x325 = -1;
	int16_t x327 = 1911;

	t62 = (x325-((x326*x327)^x328));

	if (t62 != -12505953725LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x333 = INT32_MAX;
	volatile int64_t x334 = -1LL;
	static int32_t x336 = INT32_MIN;
	volatile uint64_t t63 = 7583907392138192LLU;

	t63 = (x333-((x334*x335)^x336));

	if (t63 != 4294967294LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x337 = 4;
	int16_t x338 = INT16_MIN;
	volatile uint32_t x340 = UINT32_MAX;
	static uint32_t t64 = 34438U;

	t64 = (x337-((x338*x339)^x340));

	if (t64 != 4294672389U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x342 = UINT8_MAX;
	uint16_t x343 = 1U;
	static uint16_t x344 = 334U;
	volatile uint32_t t65 = 240962606U;

	t65 = (x341-((x342*x343)^x344));

	if (t65 != 29020090U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x345 = 0U;
	volatile uint32_t x346 = UINT32_MAX;
	volatile int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MAX;
	volatile uint32_t t66 = 504U;

	t66 = (x345-((x346*x347)^x348));

	if (t66 != 2147483777U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x353 = 2161780399520574LLU;
	volatile uint32_t x354 = UINT32_MAX;
	static uint16_t x355 = UINT16_MAX;
	volatile uint16_t x356 = UINT16_MAX;
	static uint64_t t67 = 115436338962249776LLU;

	t67 = (x353-((x354*x355)^x356));

	if (t67 != 2161776104553280LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x365 = 61U;
	uint8_t x366 = 0U;
	uint32_t x367 = 155020682U;
	int32_t x368 = INT32_MIN;
	static volatile uint32_t t68 = 2U;

	t68 = (x365-((x366*x367)^x368));

	if (t68 != 2147483709U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x369 = -417;
	static volatile uint64_t x370 = 480087406LLU;
	static int32_t x371 = INT32_MAX;
	int16_t x372 = INT16_MIN;
	uint64_t t69 = 21613741286887400LLU;

	t69 = (x369-((x370*x371)^x372));

	if (t69 != 1030979853515623373LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x373 = INT32_MIN;
	volatile int64_t x374 = -206985960432561762LL;
	volatile int8_t x375 = 24;
	int16_t x376 = -1;
	volatile int64_t t70 = -44029817782LL;

	t70 = (x373-((x374*x375)^x376));

	if (t70 != -4967663052528965935LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x382 = -11293;
	static uint16_t x383 = 3736U;
	int32_t x384 = INT32_MIN;
	static int32_t t71 = -14;

	t71 = (x381-((x382*x383)^x384));

	if (t71 != -2105293000) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x389 = 1;
	volatile int64_t x390 = -1422546373LL;
	int8_t x392 = -1;
	int64_t t72 = 38779062967LL;

	t72 = (x389-((x390*x391)^x392));

	if (t72 != 9957824613LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x394 = 109;
	static int16_t x395 = INT16_MIN;
	volatile int32_t x396 = 13200814;
	volatile uint32_t t73 = 269U;

	t73 = (x393-((x394*x395)^x396));

	if (t73 != 16716369U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x406 = -94;
	uint16_t x408 = 1U;

	t74 = (x405-((x406*x407)^x408));

	if (t74 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int32_t x418 = INT32_MAX;
	uint64_t x419 = 3105868LLU;
	static volatile int64_t x420 = INT64_MIN;

	t75 = (x417-((x418*x419)^x420));

	if (t75 != 9216702236115035211LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x421 = 5U;
	uint16_t x422 = 0U;
	int32_t x423 = INT32_MAX;
	static uint32_t x424 = 113880979U;
	uint32_t t76 = 215U;

	t76 = (x421-((x422*x423)^x424));

	if (t76 != 4181086322U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x428 = INT16_MAX;
	volatile int64_t t77 = -30040543727372LL;

	t77 = (x425-((x426*x427)^x428));

	if (t77 != -9223372036854750502LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x429 = INT8_MIN;
	volatile int8_t x430 = INT8_MIN;
	uint8_t x431 = UINT8_MAX;
	uint32_t x432 = 28352639U;
	volatile uint32_t t78 = 826U;

	t78 = (x429-((x430*x431)^x432));

	if (t78 != 28368513U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x435 = 1787519304U;
	static uint8_t x436 = 3U;
	uint32_t t79 = 12509U;

	t79 = (x433-((x434*x435)^x436));

	if (t79 != 618315083U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x438 = -1;
	uint8_t x439 = 99U;
	int32_t x440 = INT32_MIN;
	volatile int64_t t80 = -4129603321747LL;

	t80 = (x437-((x438*x439)^x440));

	if (t80 != -2147483550LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x442 = 16183U;
	int8_t x443 = INT8_MIN;
	volatile int32_t t81 = 179549675;

	t81 = (x441-((x442*x443)^x444));

	if (t81 != 2071472) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x445 = INT16_MAX;
	volatile int16_t x446 = INT16_MIN;
	volatile int16_t x448 = INT16_MIN;

	t82 = (x445-((x446*x447)^x448));

	if (t82 != 1073807359) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x453 = UINT64_MAX;
	int32_t x454 = INT32_MAX;
	volatile int32_t x455 = -1;
	uint16_t x456 = UINT16_MAX;

	t83 = (x453-((x454*x455)^x456));

	if (t83 != 2147418113LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x473 = -7;
	int32_t x474 = INT32_MIN;
	int64_t x475 = -1LL;
	int16_t x476 = INT16_MIN;
	static volatile int64_t t84 = -1304058916477LL;

	t84 = (x473-((x474*x475)^x476));

	if (t84 != 2147516409LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x490 = 26557U;
	int16_t x491 = -1601;
	static int8_t x492 = INT8_MIN;
	volatile uint64_t t85 = 4313066547717542662LLU;

	t85 = (x489-((x490*x491)^x492));

	if (t85 != 5295110405685LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x493 = INT64_MIN;
	int8_t x494 = INT8_MIN;
	int16_t x495 = -6729;
	int64_t x496 = INT64_MIN;

	t86 = (x493-((x494*x495)^x496));

	if (t86 != -861312LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x501 = 60785973597773LL;
	volatile int16_t x503 = -1;
	volatile int64_t t87 = -4LL;

	t87 = (x501-((x502*x503)^x504));

	if (t87 != 60785973597519LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x505 = 39U;
	uint64_t x506 = UINT64_MAX;
	volatile uint8_t x507 = UINT8_MAX;
	int64_t x508 = INT64_MIN;
	uint64_t t88 = 178383741555864LLU;

	t88 = (x505-((x506*x507)^x508));

	if (t88 != 9223372036854776102LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x509 = INT16_MIN;
	int8_t x510 = INT8_MIN;
	uint8_t x512 = 15U;
	static volatile int32_t t89 = 116;

	t89 = (x509-((x510*x511)^x512));

	if (t89 != -30351) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x513 = -1;
	static uint32_t x515 = 3U;
	volatile int64_t t90 = -402LL;

	t90 = (x513-((x514*x515)^x516));

	if (t90 != 72045959273LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x528 = INT64_MIN;
	volatile int64_t t91 = -12633478LL;

	t91 = (x525-((x526*x527)^x528));

	if (t91 != 9223372036854774158LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x533 = 13U;
	volatile int32_t x534 = -1879244;
	volatile int8_t x535 = INT8_MAX;
	static uint8_t x536 = 0U;
	static int32_t t92 = 5;

	t92 = (x533-((x534*x535)^x536));

	if (t92 != 238664001) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x537 = 14;
	int32_t x538 = 1171029;
	volatile uint64_t x539 = 1906884847969LLU;
	volatile int32_t x540 = -1;
	volatile uint64_t t93 = 197127LLU;

	t93 = (x537-((x538*x539)^x540));

	if (t93 != 2233017456632290116LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x545 = 0;
	static volatile uint8_t x548 = UINT8_MAX;
	volatile int32_t t94 = -616694177;

	t94 = (x545-((x546*x547)^x548));

	if (t94 != -16639) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x549 = 4925824485224466LLU;
	int16_t x550 = INT16_MIN;
	volatile int8_t x551 = 0;
	uint16_t x552 = 3414U;
	static uint64_t t95 = 81997299LLU;

	t95 = (x549-((x550*x551)^x552));

	if (t95 != 4925824485221052LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x553 = -1;
	int8_t x554 = -22;
	static volatile int16_t x555 = INT16_MIN;
	int32_t x556 = -1;
	volatile int32_t t96 = -7510155;

	t96 = (x553-((x554*x555)^x556));

	if (t96 != 720896) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x557 = INT8_MIN;
	int16_t x558 = -1;
	volatile int16_t x560 = INT16_MAX;
	static volatile int32_t t97 = 135347;

	t97 = (x557-((x558*x559)^x560));

	if (t97 != 193270) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x561 = 0U;
	int8_t x562 = INT8_MAX;
	uint64_t x563 = UINT64_MAX;
	static int8_t x564 = -1;
	uint64_t t98 = 27LLU;

	t98 = (x561-((x562*x563)^x564));

	if (t98 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x569 = INT8_MIN;
	int64_t x570 = -1LL;
	uint8_t x571 = UINT8_MAX;
	volatile int64_t t99 = 7336487536LL;

	t99 = (x569-((x570*x571)^x572));

	if (t99 != 88LL) { NG(); } else { ; }
	
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

