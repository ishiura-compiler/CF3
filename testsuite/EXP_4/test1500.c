#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t2 = 815746;
int32_t x18 = INT32_MIN;
int8_t x19 = -1;
int16_t x31 = -1;
uint32_t t6 = 492032U;
uint64_t x38 = UINT64_MAX;
static uint32_t x44 = 1765700U;
int32_t x46 = INT32_MAX;
int8_t x49 = INT8_MIN;
volatile int8_t x52 = INT8_MIN;
int8_t x55 = INT8_MAX;
volatile uint64_t t13 = 400326639924004290LLU;
static int32_t x61 = INT32_MIN;
uint8_t x62 = UINT8_MAX;
int64_t t15 = -2968146LL;
uint32_t x88 = 210885U;
static int32_t t20 = 25045644;
int32_t x90 = INT32_MAX;
static int8_t x91 = -1;
int32_t x92 = INT32_MIN;
uint8_t x98 = 5U;
volatile int32_t x99 = INT32_MIN;
int32_t x103 = INT32_MIN;
int16_t x104 = -106;
volatile int16_t x109 = INT16_MAX;
static uint64_t x112 = UINT64_MAX;
int8_t x120 = INT8_MIN;
int16_t x127 = 113;
volatile int8_t x129 = INT8_MIN;
int16_t x135 = INT16_MAX;
static volatile uint32_t t31 = 1U;
volatile int32_t x140 = 53064;
int64_t t32 = -3174885128581730773LL;
int16_t x146 = -2882;
uint64_t t35 = 61800502LLU;
volatile uint8_t x155 = 11U;
uint64_t t36 = 31LLU;
uint64_t x160 = UINT64_MAX;
int32_t x161 = INT32_MAX;
int64_t x174 = -1LL;
static int8_t x179 = INT8_MAX;
int64_t x190 = -7LL;
volatile int64_t t45 = -2079LL;
static int16_t x198 = INT16_MAX;
int8_t x201 = INT8_MIN;
int32_t t48 = -76;
static int32_t x207 = -1;
int16_t x208 = 4;
int64_t x210 = INT64_MAX;
static volatile int64_t x212 = -13285498408283LL;
int32_t t52 = 24;
static uint32_t x230 = UINT32_MAX;
uint64_t x239 = 1180379853579LLU;
volatile int64_t t57 = -1563220LL;
uint64_t x241 = 31227238109670LLU;
int16_t x242 = INT16_MAX;
int8_t x244 = INT8_MIN;
int8_t x245 = -10;
int16_t x249 = INT16_MIN;
static int16_t x251 = -1;
int64_t x254 = 1415691318LL;
static int16_t x258 = -1;
int64_t x261 = INT64_MIN;
int16_t x263 = 11589;
int8_t x265 = 0;
uint8_t x268 = 0U;
volatile int32_t t64 = 8116;
uint16_t x270 = UINT16_MAX;
static int8_t x284 = INT8_MIN;
static uint16_t x287 = 29U;
volatile int64_t t69 = -38658152LL;
static int8_t x292 = -1;
static int64_t x302 = 18220646LL;
int32_t x309 = INT32_MAX;
int16_t x312 = INT16_MAX;
int64_t x314 = INT64_MIN;
int64_t x330 = INT64_MIN;
uint64_t x332 = UINT64_MAX;
uint64_t x345 = 13193815LLU;
uint64_t x350 = UINT64_MAX;
uint64_t x351 = 4025476LLU;
static volatile uint64_t t85 = 682409466019LLU;
static int64_t x353 = 492444487812341275LL;
uint32_t x362 = UINT32_MAX;
static volatile uint16_t x367 = 9355U;
int8_t x368 = -20;
static uint64_t x377 = UINT64_MAX;
static int16_t x378 = INT16_MIN;
int32_t x379 = -1;
int16_t x383 = 1675;
volatile uint32_t t99 = 1051228505U;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	int8_t x2 = -1;
	static uint64_t x3 = UINT64_MAX;
	int16_t x4 = -16;
	volatile int32_t t0 = -1;

	t0 = (x1%(x2|(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MIN;
	int8_t x7 = -35;
	volatile uint16_t x8 = 1U;
	int32_t t1 = -168196;

	t1 = (x5%(x6|(x7<x8)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = INT32_MIN;
	uint32_t x15 = 3208826U;
	volatile uint64_t x16 = UINT64_MAX;

	t2 = (x13%(x14|(x15<x16)));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = INT32_MIN;
	int64_t x20 = 8614978048217582LL;
	volatile int32_t t3 = 4520514;

	t3 = (x17%(x18|(x19<x20)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	uint64_t x22 = 462337094939LLU;
	int16_t x23 = -5;
	static uint16_t x24 = 61U;
	volatile uint64_t t4 = 868LLU;

	t4 = (x21%(x22|(x23<x24)));

	if (t4 != 244762409693LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	uint8_t x26 = 1U;
	volatile int8_t x27 = 29;
	int32_t x28 = INT32_MIN;
	volatile int64_t t5 = -4612686LL;

	t5 = (x25%(x26|(x27<x28)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = 1;
	uint32_t x30 = UINT32_MAX;
	static int16_t x32 = INT16_MIN;

	t6 = (x29%(x30|(x31<x32)));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	volatile int32_t x34 = -97;
	volatile int64_t x35 = INT64_MAX;
	static int16_t x36 = -1;
	volatile int32_t t7 = -490741555;

	t7 = (x33%(x34|(x35<x36)));

	if (t7 != -79) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = 118;
	int8_t x39 = -1;
	int32_t x40 = -1;
	volatile uint64_t t8 = 1152LLU;

	t8 = (x37%(x38|(x39<x40)));

	if (t8 != 118LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x41 = UINT32_MAX;
	int16_t x42 = INT16_MIN;
	int16_t x43 = -7915;
	uint32_t t9 = 2756U;

	t9 = (x41%(x42|(x43<x44)));

	if (t9 != 32767U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x45 = UINT32_MAX;
	volatile int64_t x47 = -27LL;
	int64_t x48 = INT64_MIN;
	uint32_t t10 = 843194U;

	t10 = (x45%(x46|(x47<x48)));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = -1;
	volatile int64_t x51 = INT64_MIN;
	static volatile int32_t t11 = -907;

	t11 = (x49%(x50|(x51<x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = INT8_MIN;
	volatile int16_t x54 = INT16_MIN;
	uint8_t x56 = 1U;
	volatile int32_t t12 = 50188084;

	t12 = (x53%(x54|(x55<x56)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 0U;
	uint64_t x58 = UINT64_MAX;
	volatile uint16_t x59 = UINT16_MAX;
	int8_t x60 = 0;

	t13 = (x57%(x58|(x59<x60)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x63 = -61;
	volatile int16_t x64 = -26;
	volatile int32_t t14 = -455924492;

	t14 = (x61%(x62|(x63<x64)));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = INT8_MAX;
	int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MIN;
	uint32_t x68 = 2U;

	t15 = (x65%(x66|(x67<x68)));

	if (t15 != 127LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 341229788;
	int32_t x70 = INT32_MIN;
	volatile int32_t x71 = -1;
	int64_t x72 = INT64_MIN;
	int32_t t16 = 29445;

	t16 = (x69%(x70|(x71<x72)));

	if (t16 != 341229788) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = INT32_MAX;
	int8_t x74 = 4;
	static int16_t x75 = INT16_MIN;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t17 = -4900;

	t17 = (x73%(x74|(x75<x76)));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	int16_t x78 = 2134;
	volatile uint16_t x79 = 7U;
	static int64_t x80 = 0LL;
	volatile int32_t t18 = 5158;

	t18 = (x77%(x78|(x79<x80)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = INT64_MIN;
	int32_t x82 = 746;
	int32_t x83 = INT32_MIN;
	static int64_t x84 = -1LL;
	volatile int64_t t19 = 5062614164924LL;

	t19 = (x81%(x82|(x83<x84)));

	if (t19 != -350LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x85 = 123U;
	int16_t x86 = 1890;
	uint64_t x87 = UINT64_MAX;

	t20 = (x85%(x86|(x87<x88)));

	if (t20 != 123) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	volatile int64_t t21 = -236437853875430467LL;

	t21 = (x89%(x90|(x91<x92)));

	if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x93 = -1LL;
	static int16_t x94 = INT16_MAX;
	static volatile int64_t x95 = -14LL;
	int16_t x96 = INT16_MIN;
	volatile int64_t t22 = 21371437LL;

	t22 = (x93%(x94|(x95<x96)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = -1;
	volatile uint16_t x100 = UINT16_MAX;
	int32_t t23 = -23852;

	t23 = (x97%(x98|(x99<x100)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = 0LL;
	int64_t x102 = INT64_MIN;
	volatile int64_t t24 = 496259018LL;

	t24 = (x101%(x102|(x103<x104)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 0U;
	int64_t x106 = INT64_MIN;
	static uint64_t x107 = 622455722931LLU;
	int8_t x108 = INT8_MAX;
	int64_t t25 = -243644LL;

	t25 = (x105%(x106|(x107<x108)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x110 = UINT64_MAX;
	uint16_t x111 = 1610U;
	uint64_t t26 = 385603659525LLU;

	t26 = (x109%(x110|(x111<x112)));

	if (t26 != 32767LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MAX;
	uint32_t x114 = 113U;
	int8_t x115 = -24;
	volatile int8_t x116 = -5;
	int64_t t27 = -2745LL;

	t27 = (x113%(x114|(x115<x116)));

	if (t27 != 14LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x117 = 2U;
	static int64_t x118 = 6146984827494LL;
	int32_t x119 = INT32_MIN;
	int64_t t28 = 112419736022505838LL;

	t28 = (x117%(x118|(x119<x120)));

	if (t28 != 2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = INT32_MIN;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t29 = 1625;

	t29 = (x125%(x126|(x127<x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x130 = -1;
	volatile uint64_t x131 = 2LLU;
	uint8_t x132 = 69U;
	volatile int32_t t30 = -8743908;

	t30 = (x129%(x130|(x131<x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x133 = 3973U;
	uint32_t x134 = UINT32_MAX;
	uint16_t x136 = 2799U;

	t31 = (x133%(x134|(x135<x136)));

	if (t31 != 3973U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x137 = UINT8_MAX;
	volatile int64_t x138 = INT64_MAX;
	int16_t x139 = -3;

	t32 = (x137%(x138|(x139<x140)));

	if (t32 != 255LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 15LLU;
	int32_t x142 = INT32_MAX;
	static int16_t x143 = INT16_MIN;
	volatile int32_t x144 = -7327;
	uint64_t t33 = 700LLU;

	t33 = (x141%(x142|(x143<x144)));

	if (t33 != 15LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MAX;
	static int16_t x147 = -35;
	static volatile uint8_t x148 = 12U;
	volatile int32_t t34 = -4028;

	t34 = (x145%(x146|(x147<x148)));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	uint64_t x150 = 1597422242456824720LLU;
	int8_t x151 = INT8_MIN;
	int8_t x152 = -1;

	t35 = (x149%(x150|(x151<x152)));

	if (t35 != 875099404536996037LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	uint64_t x154 = 26103629898539LLU;
	volatile int64_t x156 = INT64_MIN;

	t36 = (x153%(x154|(x155<x156)));

	if (t36 != 19863024599704LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 1U;
	volatile int32_t x158 = 130870062;
	uint64_t x159 = 42318962998353LLU;
	int32_t t37 = -64195;

	t37 = (x157%(x158|(x159<x160)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x162 = INT32_MIN;
	static int64_t x163 = INT64_MIN;
	int16_t x164 = INT16_MAX;
	volatile int32_t t38 = -28308;

	t38 = (x161%(x162|(x163<x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 2U;
	int64_t x166 = -68415702297044LL;
	int16_t x167 = -86;
	uint64_t x168 = UINT64_MAX;
	int64_t t39 = -844LL;

	t39 = (x165%(x166|(x167<x168)));

	if (t39 != 2LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x169 = UINT16_MAX;
	static volatile int64_t x170 = 106137203909LL;
	volatile int64_t x171 = 23352642104LL;
	static uint64_t x172 = 7192697029LLU;
	volatile int64_t t40 = -7244501186121LL;

	t40 = (x169%(x170|(x171<x172)));

	if (t40 != 65535LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x173 = 3U;
	static int8_t x175 = INT8_MAX;
	volatile int16_t x176 = -2840;
	static int64_t t41 = -6716137LL;

	t41 = (x173%(x174|(x175<x176)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 1001949904U;
	volatile int32_t x178 = -1;
	int64_t x180 = 28817994748LL;
	volatile uint32_t t42 = 8097863U;

	t42 = (x177%(x178|(x179<x180)));

	if (t42 != 1001949904U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x181 = UINT16_MAX;
	uint16_t x182 = 22706U;
	int8_t x183 = 1;
	uint64_t x184 = 1780772832308798966LLU;
	int32_t t43 = -10806632;

	t43 = (x181%(x182|(x183<x184)));

	if (t43 != 20121) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = UINT8_MAX;
	int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MIN;
	volatile uint16_t x188 = 3633U;
	int32_t t44 = -147919110;

	t44 = (x185%(x186|(x187<x188)));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	uint16_t x191 = 27059U;
	int64_t x192 = -1LL;

	t45 = (x189%(x190|(x191<x192)));

	if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x193 = UINT8_MAX;
	static volatile int64_t x194 = INT64_MIN;
	int8_t x195 = 0;
	int64_t x196 = -1070776255985314369LL;
	volatile int64_t t46 = 61426513658612613LL;

	t46 = (x193%(x194|(x195<x196)));

	if (t46 != 255LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x197 = -191147;
	uint32_t x199 = UINT32_MAX;
	volatile uint16_t x200 = UINT16_MAX;
	int32_t t47 = 436103288;

	t47 = (x197%(x198|(x199<x200)));

	if (t47 != -27312) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x202 = INT8_MAX;
	uint8_t x203 = 61U;
	int32_t x204 = INT32_MAX;

	t48 = (x201%(x202|(x203<x204)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = UINT16_MAX;
	static volatile uint8_t x206 = 126U;
	int32_t t49 = 21317;

	t49 = (x205%(x206|(x207<x208)));

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = 285U;
	uint32_t x211 = 3U;
	volatile int64_t t50 = -62945432LL;

	t50 = (x209%(x210|(x211<x212)));

	if (t50 != 285LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = 30;
	int64_t x214 = INT64_MAX;
	uint32_t x215 = 192760U;
	int8_t x216 = -1;
	volatile int64_t t51 = -2067457937222861937LL;

	t51 = (x213%(x214|(x215<x216)));

	if (t51 != 30LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = 34;
	volatile int32_t x218 = -11708288;
	volatile int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MAX;

	t52 = (x217%(x218|(x219<x220)));

	if (t52 != 34) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = 151881844U;
	volatile int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MIN;
	int32_t x224 = -5390519;
	volatile uint32_t t53 = 0U;

	t53 = (x221%(x222|(x223<x224)));

	if (t53 != 151881844U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = 0;
	volatile uint8_t x226 = UINT8_MAX;
	int32_t x227 = -1;
	static int8_t x228 = -1;
	int32_t t54 = -80714;

	t54 = (x225%(x226|(x227<x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = 844LLU;
	volatile uint32_t x231 = 15U;
	uint16_t x232 = UINT16_MAX;
	uint64_t t55 = 6721365210322186LLU;

	t55 = (x229%(x230|(x231<x232)));

	if (t55 != 844LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x233 = 0LLU;
	int64_t x234 = 41966426042LL;
	int16_t x235 = -24;
	static int64_t x236 = INT64_MIN;
	volatile uint64_t t56 = 20014934777LLU;

	t56 = (x233%(x234|(x235<x236)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = UINT16_MAX;
	static int64_t x238 = 3535267369600LL;
	int8_t x240 = -1;

	t57 = (x237%(x238|(x239<x240)));

	if (t57 != 65535LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x243 = -1;
	volatile uint64_t t58 = 509788212646222606LLU;

	t58 = (x241%(x242|(x243<x244)));

	if (t58 != 5216LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x246 = INT16_MIN;
	int8_t x247 = -22;
	volatile int32_t x248 = -1;
	int32_t t59 = -3720;

	t59 = (x245%(x246|(x247<x248)));

	if (t59 != -10) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x250 = INT32_MIN;
	volatile int16_t x252 = INT16_MIN;
	int32_t t60 = 5;

	t60 = (x249%(x250|(x251<x252)));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 60U;
	int32_t x255 = -6238;
	volatile int64_t x256 = 31891692259113LL;
	int64_t t61 = -1919741LL;

	t61 = (x253%(x254|(x255<x256)));

	if (t61 != 60LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -1;
	int16_t x259 = -1;
	static volatile uint16_t x260 = UINT16_MAX;
	volatile int32_t t62 = 29;

	t62 = (x257%(x258|(x259<x260)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x262 = 54U;
	static uint8_t x264 = UINT8_MAX;
	static volatile int64_t t63 = 1LL;

	t63 = (x261%(x262|(x263<x264)));

	if (t63 != -26LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x266 = 13U;
	static int32_t x267 = INT32_MAX;

	t64 = (x265%(x266|(x267<x268)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x269 = INT32_MIN;
	int64_t x271 = INT64_MAX;
	int32_t x272 = INT32_MIN;
	int32_t t65 = 1;

	t65 = (x269%(x270|(x271<x272)));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x273 = -11;
	uint32_t x274 = 11815U;
	int32_t x275 = INT32_MIN;
	int16_t x276 = -1;
	static uint32_t t66 = 412745U;

	t66 = (x273%(x274|(x275<x276)));

	if (t66 != 2115U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = 2728664U;
	static int64_t x278 = -829631LL;
	uint32_t x279 = 16473621U;
	int64_t x280 = INT64_MAX;
	int64_t t67 = -91531607161LL;

	t67 = (x277%(x278|(x279<x280)));

	if (t67 != 239771LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MIN;
	uint32_t x283 = 7U;
	int32_t t68 = 1519;

	t68 = (x281%(x282|(x283<x284)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	static int64_t x286 = -1LL;
	static int8_t x288 = INT8_MIN;

	t69 = (x285%(x286|(x287<x288)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x289 = INT32_MIN;
	static int8_t x290 = 1;
	static int8_t x291 = INT8_MIN;
	volatile int32_t t70 = 133;

	t70 = (x289%(x290|(x291<x292)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MIN;
	static uint8_t x295 = 2U;
	int8_t x296 = 1;
	int64_t t71 = -130494440322267572LL;

	t71 = (x293%(x294|(x295<x296)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x297 = 16298060037LLU;
	uint64_t x298 = UINT64_MAX;
	static int64_t x299 = -1LL;
	int32_t x300 = INT32_MIN;
	static volatile uint64_t t72 = 15089169484141925LLU;

	t72 = (x297%(x298|(x299<x300)));

	if (t72 != 16298060037LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 60U;
	uint64_t x303 = 1684899152660844385LLU;
	int16_t x304 = INT16_MAX;
	static int64_t t73 = 25932145177311597LL;

	t73 = (x301%(x302|(x303<x304)));

	if (t73 != 60LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x305 = INT16_MIN;
	int8_t x306 = 0;
	int16_t x307 = INT16_MIN;
	int8_t x308 = -1;
	int32_t t74 = 2;

	t74 = (x305%(x306|(x307<x308)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x310 = INT16_MIN;
	int64_t x311 = INT64_MIN;
	static int32_t t75 = -437;

	t75 = (x309%(x310|(x311<x312)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x313 = 7260LLU;
	volatile int32_t x315 = 14203;
	int64_t x316 = -76836LL;
	uint64_t t76 = 7585453943505165LLU;

	t76 = (x313%(x314|(x315<x316)));

	if (t76 != 7260LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = -1;
	static int32_t x318 = INT32_MIN;
	volatile int16_t x319 = -81;
	int32_t x320 = INT32_MAX;
	volatile int32_t t77 = -587;

	t77 = (x317%(x318|(x319<x320)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x321 = INT64_MIN;
	uint64_t x322 = UINT64_MAX;
	volatile uint32_t x323 = UINT32_MAX;
	uint64_t x324 = UINT64_MAX;
	static volatile uint64_t t78 = 469287519401LLU;

	t78 = (x321%(x322|(x323<x324)));

	if (t78 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = -1;
	static int8_t x326 = INT8_MIN;
	volatile int8_t x327 = INT8_MAX;
	int8_t x328 = 2;
	int32_t t79 = -919;

	t79 = (x325%(x326|(x327<x328)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = INT8_MAX;
	int32_t x331 = -87903424;
	volatile int64_t t80 = 47180898094LL;

	t80 = (x329%(x330|(x331<x332)));

	if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MAX;
	int8_t x335 = INT8_MIN;
	int8_t x336 = -11;
	volatile int32_t t81 = -19760638;

	t81 = (x333%(x334|(x335<x336)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x337 = 49214621501LLU;
	static int64_t x338 = -1LL;
	volatile uint8_t x339 = UINT8_MAX;
	static int16_t x340 = -1;
	uint64_t t82 = 150875909911540405LLU;

	t82 = (x337%(x338|(x339<x340)));

	if (t82 != 49214621501LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x341 = UINT16_MAX;
	uint32_t x342 = 476400U;
	static int32_t x343 = 123226;
	int32_t x344 = INT32_MIN;
	uint32_t t83 = 10U;

	t83 = (x341%(x342|(x343<x344)));

	if (t83 != 65535U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x346 = INT64_MIN;
	int32_t x347 = 127;
	int8_t x348 = -17;
	volatile uint64_t t84 = 15511735515LLU;

	t84 = (x345%(x346|(x347<x348)));

	if (t84 != 13193815LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x349 = UINT32_MAX;
	volatile int32_t x352 = 3;

	t85 = (x349%(x350|(x351<x352)));

	if (t85 != 4294967295LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	int8_t x356 = -1;
	static int64_t t86 = -18517575990LL;

	t86 = (x353%(x354|(x355<x356)));

	if (t86 != 17074LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 94U;
	int16_t x358 = -1;
	int16_t x359 = INT16_MIN;
	int32_t x360 = 812945;
	int32_t t87 = 15115;

	t87 = (x357%(x358|(x359<x360)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x361 = UINT64_MAX;
	static int8_t x363 = -1;
	uint64_t x364 = UINT64_MAX;
	uint64_t t88 = 2601662LLU;

	t88 = (x361%(x362|(x363<x364)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MAX;
	volatile int32_t t89 = -7420404;

	t89 = (x365%(x366|(x367<x368)));

	if (t89 != -8) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x369 = UINT64_MAX;
	int64_t x370 = INT64_MIN;
	int32_t x371 = INT32_MIN;
	volatile int16_t x372 = INT16_MAX;
	volatile uint64_t t90 = 109385966216LLU;

	t90 = (x369%(x370|(x371<x372)));

	if (t90 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MAX;
	int16_t x375 = 1;
	int16_t x376 = INT16_MIN;
	volatile int32_t t91 = -302019;

	t91 = (x373%(x374|(x375<x376)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x380 = UINT32_MAX;
	volatile uint64_t t92 = 13LLU;

	t92 = (x377%(x378|(x379<x380)));

	if (t92 != 32767LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = -4257689913821LL;
	volatile int64_t x382 = 3LL;
	uint8_t x384 = 25U;
	volatile int64_t t93 = -71936222378757792LL;

	t93 = (x381%(x382|(x383<x384)));

	if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x385 = 12U;
	int8_t x386 = INT8_MIN;
	int16_t x387 = 1790;
	int64_t x388 = INT64_MAX;
	int32_t t94 = -3827;

	t94 = (x385%(x386|(x387<x388)));

	if (t94 != 12) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x389 = -11;
	static uint32_t x390 = UINT32_MAX;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 104U;
	uint32_t t95 = 154037U;

	t95 = (x389%(x390|(x391<x392)));

	if (t95 != 4294967285U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x393 = 19U;
	int64_t x394 = INT64_MIN;
	uint32_t x395 = 807549U;
	static int32_t x396 = 126;
	int64_t t96 = -213520145803419LL;

	t96 = (x393%(x394|(x395<x396)));

	if (t96 != 19LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = -1;
	static volatile uint8_t x398 = 47U;
	uint32_t x399 = 38381559U;
	static int64_t x400 = -51997856LL;
	volatile int32_t t97 = 422;

	t97 = (x397%(x398|(x399<x400)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x401 = 1U;
	int16_t x402 = INT16_MAX;
	static uint32_t x403 = UINT32_MAX;
	int8_t x404 = INT8_MAX;
	int32_t t98 = 0;

	t98 = (x401%(x402|(x403<x404)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x405 = UINT8_MAX;
	uint32_t x406 = 38735218U;
	int32_t x407 = -18145147;
	uint8_t x408 = UINT8_MAX;

	t99 = (x405%(x406|(x407<x408)));

	if (t99 != 255U) { NG(); } else { ; }
	
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

