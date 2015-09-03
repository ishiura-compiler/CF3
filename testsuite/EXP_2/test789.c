#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -170277;
volatile int64_t x8 = INT64_MAX;
int16_t x12 = INT16_MIN;
int32_t t2 = 229224398;
static volatile int8_t x16 = -1;
static uint64_t x17 = UINT64_MAX;
uint32_t x20 = 5970U;
int16_t x23 = 5454;
int8_t x31 = -1;
static int32_t x42 = INT32_MAX;
uint64_t x51 = 1641708LLU;
int32_t t14 = 2666;
volatile int16_t x66 = -108;
int8_t x67 = INT8_MAX;
static volatile uint32_t x70 = 4U;
int32_t t20 = 0;
int64_t x92 = -68262121LL;
static uint32_t x93 = 187005391U;
static int8_t x98 = -14;
int32_t t23 = -1;
int8_t x101 = -2;
int64_t x104 = 793LL;
int8_t x105 = 2;
int32_t t25 = 3674480;
uint64_t x113 = UINT64_MAX;
volatile uint16_t x117 = UINT16_MAX;
volatile int8_t x119 = INT8_MIN;
volatile int64_t x135 = -703725231LL;
static uint32_t x139 = UINT32_MAX;
volatile int8_t x145 = INT8_MAX;
static int8_t x162 = -1;
static int64_t x163 = INT64_MAX;
static int16_t x166 = 11908;
volatile int32_t x167 = INT32_MIN;
volatile uint16_t x170 = UINT16_MAX;
volatile int32_t t42 = -9062;
int32_t x182 = INT32_MIN;
static volatile int32_t x190 = INT32_MAX;
int8_t x201 = INT8_MIN;
volatile int32_t t49 = -1314;
static volatile uint64_t x211 = 17406539094789LLU;
int8_t x217 = INT8_MIN;
int32_t x220 = -1;
volatile int8_t x226 = INT8_MIN;
int16_t x228 = -1;
uint64_t x237 = 744596263403162223LLU;
static int32_t x243 = -18;
int64_t x244 = -1LL;
static int8_t x249 = INT8_MIN;
int32_t t63 = 45;
volatile uint64_t x268 = 51326766599973LLU;
int8_t x270 = -1;
volatile uint16_t x271 = UINT16_MAX;
int8_t x272 = -13;
int8_t x276 = INT8_MIN;
volatile uint16_t x279 = UINT16_MAX;
volatile uint16_t x280 = 35U;
static volatile uint64_t x284 = 238726337690LLU;
int32_t t69 = -2120;
volatile int32_t t70 = -12;
static int64_t x293 = -1LL;
int32_t x303 = -1;
uint16_t x308 = 8526U;
int32_t x311 = 3126;
int16_t x312 = -1;
static volatile int16_t x315 = INT16_MIN;
volatile int16_t x328 = -20;
int32_t t79 = -1032885;
int32_t x342 = INT32_MAX;
int32_t t83 = 654730;
volatile int16_t x345 = INT16_MIN;
int64_t x353 = 38344263LL;
volatile int32_t t86 = 161171;
uint64_t x373 = 11027408207605996LLU;
int16_t x381 = INT16_MIN;
volatile int16_t x384 = INT16_MAX;
int8_t x394 = INT8_MAX;
volatile int32_t t95 = 0;
static int16_t x398 = -1;
int8_t x406 = INT8_MIN;
volatile int32_t t98 = 2448;
volatile uint32_t x412 = 10U;


void f0(void) {
	uint64_t x1 = 25024LLU;
	int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = UINT8_MAX;
	uint32_t x4 = 22567U;

	t0 = ((x1<(x2%x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 3U;
	volatile int32_t x6 = INT32_MAX;
	static int64_t x7 = INT64_MIN;
	int32_t t1 = -7;

	t1 = ((x5<(x6%x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint16_t x10 = 580U;
	static int16_t x11 = 3;

	t2 = ((x9<(x10%x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1760U;
	int8_t x14 = INT8_MIN;
	int32_t x15 = INT32_MIN;
	volatile int32_t t3 = 884;

	t3 = ((x13<(x14%x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x18 = UINT8_MAX;
	int64_t x19 = INT64_MIN;
	volatile int32_t t4 = -199;

	t4 = ((x17<(x18%x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static volatile uint16_t x22 = 59U;
	uint64_t x24 = 46131715619LLU;
	static volatile int32_t t5 = -23241840;

	t5 = ((x21<(x22%x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	static volatile int16_t x26 = INT16_MIN;
	int8_t x27 = INT8_MAX;
	int32_t x28 = INT32_MAX;
	static int32_t t6 = -4814;

	t6 = ((x25<(x26%x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int64_t x30 = -576614903954657658LL;
	int32_t x32 = -352286584;
	int32_t t7 = 2533;

	t7 = ((x29<(x30%x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MAX;
	volatile uint16_t x34 = 2U;
	static int32_t x35 = -1;
	uint8_t x36 = 0U;
	int32_t t8 = -98259856;

	t8 = ((x33<(x34%x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int32_t x38 = -16042;
	uint8_t x39 = 4U;
	static int32_t x40 = INT32_MIN;
	static volatile int32_t t9 = 1;

	t9 = ((x37<(x38%x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	static uint16_t x43 = 257U;
	static int64_t x44 = 549761694017825LL;
	volatile int32_t t10 = -18;

	t10 = ((x41<(x42%x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 1U;
	static int32_t x46 = INT32_MIN;
	uint64_t x47 = UINT64_MAX;
	volatile uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = -96917048;

	t11 = ((x45<(x46%x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 570161203U;
	int32_t x50 = 2048329;
	uint8_t x52 = 114U;
	int32_t t12 = -36494;

	t12 = ((x49<(x50%x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	int64_t x54 = INT64_MIN;
	int8_t x55 = -1;
	volatile int32_t x56 = -6;
	int32_t t13 = 1;

	t13 = ((x53<(x54%x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	volatile int32_t x58 = 143178525;
	static int8_t x59 = -5;
	int8_t x60 = INT8_MAX;

	t14 = ((x57<(x58%x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	volatile int64_t x62 = INT64_MIN;
	int8_t x63 = INT8_MAX;
	int64_t x64 = INT64_MIN;
	int32_t t15 = 60126;

	t15 = ((x61<(x62%x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	static int64_t x68 = 840219LL;
	static int32_t t16 = -1721;

	t16 = ((x65<(x66%x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	int8_t x71 = -40;
	volatile uint16_t x72 = 4039U;
	volatile int32_t t17 = -1;

	t17 = ((x69<(x70%x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	volatile uint8_t x75 = 52U;
	volatile uint64_t x76 = 463257126068686932LLU;
	static volatile int32_t t18 = -75518217;

	t18 = ((x73<(x74%x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x81 = 27U;
	static int32_t x82 = INT32_MAX;
	static int32_t x83 = INT32_MIN;
	volatile int8_t x84 = -30;
	volatile int32_t t19 = -23891382;

	t19 = ((x81<(x82%x83))<x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 7U;
	static int32_t x86 = -5165770;
	static int32_t x87 = INT32_MIN;
	int8_t x88 = -3;

	t20 = ((x85<(x86%x87))<x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MAX;
	static int16_t x90 = INT16_MAX;
	int8_t x91 = INT8_MIN;
	volatile int32_t t21 = 1;

	t21 = ((x89<(x90%x91))<x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x94 = -1LL;
	static int64_t x95 = INT64_MIN;
	int32_t x96 = 5;
	int32_t t22 = 21;

	t22 = ((x93<(x94%x95))<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = INT8_MIN;
	static volatile uint16_t x99 = UINT16_MAX;
	static int32_t x100 = -27556116;

	t23 = ((x97<(x98%x99))<x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x102 = 2U;
	static uint64_t x103 = UINT64_MAX;
	volatile int32_t t24 = 259869967;

	t24 = ((x101<(x102%x103))<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x106 = INT32_MIN;
	uint32_t x107 = 101U;
	int32_t x108 = 627;

	t25 = ((x105<(x106%x107))<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x109 = UINT64_MAX;
	volatile int8_t x110 = INT8_MIN;
	volatile int64_t x111 = INT64_MAX;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t26 = -206253;

	t26 = ((x109<(x110%x111))<x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x114 = INT32_MAX;
	static uint16_t x115 = UINT16_MAX;
	int32_t x116 = -440;
	int32_t t27 = -211245533;

	t27 = ((x113<(x114%x115))<x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = INT64_MAX;
	int32_t x120 = INT32_MAX;
	int32_t t28 = 1567;

	t28 = ((x117<(x118%x119))<x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MAX;
	static int8_t x124 = -1;
	volatile int32_t t29 = 0;

	t29 = ((x121<(x122%x123))<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = 1LL;
	volatile int16_t x126 = -183;
	uint32_t x127 = 14307U;
	int64_t x128 = INT64_MIN;
	volatile int32_t t30 = 242377;

	t30 = ((x125<(x126%x127))<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -92;
	static uint32_t x130 = 2916U;
	static int32_t x131 = -1;
	int32_t x132 = INT32_MAX;
	volatile int32_t t31 = -1005903296;

	t31 = ((x129<(x130%x131))<x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 1U;
	int64_t x134 = INT64_MIN;
	static int64_t x136 = INT64_MIN;
	volatile int32_t t32 = -7104;

	t32 = ((x133<(x134%x135))<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	int16_t x138 = 1;
	int8_t x140 = INT8_MAX;
	static volatile int32_t t33 = -39608166;

	t33 = ((x137<(x138%x139))<x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1198;
	volatile int32_t x142 = -1;
	int32_t x143 = INT32_MAX;
	volatile int32_t x144 = INT32_MIN;
	volatile int32_t t34 = -1578677;

	t34 = ((x141<(x142%x143))<x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x146 = 12U;
	uint64_t x147 = 120547003LLU;
	int32_t x148 = INT32_MAX;
	int32_t t35 = 378;

	t35 = ((x145<(x146%x147))<x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x149 = 3U;
	uint64_t x150 = 34706035404100387LLU;
	int32_t x151 = INT32_MAX;
	int16_t x152 = INT16_MAX;
	volatile int32_t t36 = -27560;

	t36 = ((x149<(x150%x151))<x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MIN;
	uint32_t x154 = 388368U;
	uint64_t x155 = UINT64_MAX;
	int32_t x156 = 492438308;
	int32_t t37 = 15926;

	t37 = ((x153<(x154%x155))<x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MAX;
	int8_t x158 = 3;
	uint8_t x159 = UINT8_MAX;
	uint64_t x160 = 3011613404822LLU;
	int32_t t38 = 148152217;

	t38 = ((x157<(x158%x159))<x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x161 = 22U;
	int8_t x164 = -1;
	int32_t t39 = 228;

	t39 = ((x161<(x162%x163))<x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = 0U;
	uint32_t x168 = UINT32_MAX;
	int32_t t40 = 18687;

	t40 = ((x165<(x166%x167))<x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x169 = INT64_MIN;
	volatile int16_t x171 = INT16_MAX;
	uint32_t x172 = 452008518U;
	int32_t t41 = 1908;

	t41 = ((x169<(x170%x171))<x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -234475;
	int16_t x174 = INT16_MAX;
	static uint16_t x175 = 911U;
	uint64_t x176 = 2375324770248LLU;

	t42 = ((x173<(x174%x175))<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x177 = UINT32_MAX;
	int64_t x178 = -2074520179750890LL;
	uint8_t x179 = UINT8_MAX;
	static int32_t x180 = -96685;
	volatile int32_t t43 = 0;

	t43 = ((x177<(x178%x179))<x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x181 = -1LL;
	int16_t x183 = 4011;
	static int8_t x184 = INT8_MIN;
	volatile int32_t t44 = 132520;

	t44 = ((x181<(x182%x183))<x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 0;
	uint16_t x186 = 31438U;
	int64_t x187 = -456335341LL;
	int8_t x188 = 0;
	volatile int32_t t45 = -963871295;

	t45 = ((x185<(x186%x187))<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 1347232000U;
	int8_t x191 = -1;
	uint32_t x192 = 678925U;
	volatile int32_t t46 = -14;

	t46 = ((x189<(x190%x191))<x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MIN;
	static int32_t x194 = INT32_MAX;
	static int64_t x195 = INT64_MIN;
	uint8_t x196 = UINT8_MAX;
	static volatile int32_t t47 = -341258;

	t47 = ((x193<(x194%x195))<x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x197 = 27U;
	static uint16_t x198 = 872U;
	uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MAX;
	volatile int32_t t48 = -2242;

	t48 = ((x197<(x198%x199))<x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MAX;
	volatile int32_t x204 = 4;

	t49 = ((x201<(x202%x203))<x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = INT64_MIN;
	volatile uint16_t x210 = UINT16_MAX;
	int16_t x212 = 6767;
	int32_t t50 = -779;

	t50 = ((x209<(x210%x211))<x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MIN;
	int8_t x214 = 4;
	int64_t x215 = INT64_MIN;
	int32_t x216 = INT32_MIN;
	int32_t t51 = 1;

	t51 = ((x213<(x214%x215))<x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x218 = 51;
	static int64_t x219 = INT64_MAX;
	volatile int32_t t52 = -90817974;

	t52 = ((x217<(x218%x219))<x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x221 = -18;
	int16_t x222 = INT16_MIN;
	volatile int16_t x223 = INT16_MIN;
	volatile int16_t x224 = -183;
	int32_t t53 = 791074;

	t53 = ((x221<(x222%x223))<x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MIN;
	uint32_t x227 = UINT32_MAX;
	volatile int32_t t54 = 506609352;

	t54 = ((x225<(x226%x227))<x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MIN;
	uint16_t x231 = UINT16_MAX;
	uint32_t x232 = 1888U;
	volatile int32_t t55 = -60;

	t55 = ((x229<(x230%x231))<x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = 11185U;
	volatile int16_t x234 = INT16_MIN;
	static int64_t x235 = -1LL;
	static volatile uint32_t x236 = UINT32_MAX;
	int32_t t56 = -1;

	t56 = ((x233<(x234%x235))<x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x238 = INT32_MIN;
	uint32_t x239 = 247804U;
	volatile int64_t x240 = INT64_MIN;
	static int32_t t57 = 953105;

	t57 = ((x237<(x238%x239))<x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x241 = 12058822U;
	uint16_t x242 = 15489U;
	int32_t t58 = 1;

	t58 = ((x241<(x242%x243))<x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	uint64_t x246 = 1859960LLU;
	int32_t x247 = 237720;
	int64_t x248 = -38LL;
	volatile int32_t t59 = 839;

	t59 = ((x245<(x246%x247))<x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x250 = INT64_MIN;
	int16_t x251 = -1;
	int16_t x252 = 19;
	int32_t t60 = 3401;

	t60 = ((x249<(x250%x251))<x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x253 = -1;
	uint32_t x254 = UINT32_MAX;
	int16_t x255 = -1;
	int8_t x256 = INT8_MIN;
	int32_t t61 = -14080980;

	t61 = ((x253<(x254%x255))<x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 106873415LLU;
	static int8_t x258 = 1;
	uint8_t x259 = UINT8_MAX;
	volatile int64_t x260 = INT64_MIN;
	int32_t t62 = -65715225;

	t62 = ((x257<(x258%x259))<x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x261 = INT16_MIN;
	uint16_t x262 = UINT16_MAX;
	int16_t x263 = 93;
	int8_t x264 = INT8_MAX;

	t63 = ((x261<(x262%x263))<x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = -1;
	int32_t x266 = -1;
	volatile int64_t x267 = -74993358LL;
	int32_t t64 = 1265033;

	t64 = ((x265<(x266%x267))<x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = UINT32_MAX;
	int32_t t65 = -108119;

	t65 = ((x269<(x270%x271))<x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MIN;
	int64_t x274 = -178190268643LL;
	volatile int32_t x275 = INT32_MIN;
	int32_t t66 = -17294;

	t66 = ((x273<(x274%x275))<x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MIN;
	uint8_t x278 = 0U;
	static int32_t t67 = 736857;

	t67 = ((x277<(x278%x279))<x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = -20;
	uint64_t x282 = UINT64_MAX;
	volatile int32_t x283 = -1;
	volatile int32_t t68 = 3459403;

	t68 = ((x281<(x282%x283))<x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x285 = UINT8_MAX;
	volatile int16_t x286 = INT16_MIN;
	volatile int8_t x287 = -1;
	uint16_t x288 = 8436U;

	t69 = ((x285<(x286%x287))<x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = INT64_MIN;
	uint64_t x290 = UINT64_MAX;
	volatile int32_t x291 = INT32_MAX;
	uint32_t x292 = 32516999U;

	t70 = ((x289<(x290%x291))<x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x294 = 2106902602U;
	int32_t x295 = -147;
	static int16_t x296 = 0;
	static volatile int32_t t71 = 4;

	t71 = ((x293<(x294%x295))<x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x297 = 37078535LLU;
	uint16_t x298 = UINT16_MAX;
	int32_t x299 = 6539044;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t72 = -8;

	t72 = ((x297<(x298%x299))<x300);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x301 = UINT8_MAX;
	int8_t x302 = INT8_MAX;
	static uint32_t x304 = 6U;
	int32_t t73 = -110;

	t73 = ((x301<(x302%x303))<x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x305 = INT16_MIN;
	int32_t x306 = -22;
	uint64_t x307 = 14487338095396LLU;
	static volatile int32_t t74 = 18897882;

	t74 = ((x305<(x306%x307))<x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	int64_t x310 = 14478074LL;
	static int32_t t75 = -129;

	t75 = ((x309<(x310%x311))<x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = 4891999LLU;
	int64_t x314 = INT64_MAX;
	int64_t x316 = 356913137610972LL;
	static volatile int32_t t76 = -39;

	t76 = ((x313<(x314%x315))<x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = 332334922;
	int8_t x318 = -63;
	volatile int64_t x319 = -1LL;
	volatile int8_t x320 = 0;
	int32_t t77 = 237;

	t77 = ((x317<(x318%x319))<x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x321 = 140U;
	uint64_t x322 = UINT64_MAX;
	int16_t x323 = -2;
	uint32_t x324 = 157261U;
	volatile int32_t t78 = 47745412;

	t78 = ((x321<(x322%x323))<x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MAX;
	uint64_t x327 = 810486373106968LLU;

	t79 = ((x325<(x326%x327))<x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = INT16_MIN;
	int32_t x330 = INT32_MAX;
	volatile int16_t x331 = INT16_MAX;
	volatile int8_t x332 = -1;
	int32_t t80 = -676;

	t80 = ((x329<(x330%x331))<x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x333 = -1405LL;
	static uint16_t x334 = 0U;
	int32_t x335 = -38393860;
	int64_t x336 = -2240496LL;
	int32_t t81 = 91272443;

	t81 = ((x333<(x334%x335))<x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x337 = 0LLU;
	int16_t x338 = -1446;
	uint16_t x339 = UINT16_MAX;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t82 = 1;

	t82 = ((x337<(x338%x339))<x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x341 = 64637084074745176LLU;
	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = 82U;

	t83 = ((x341<(x342%x343))<x344);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x346 = -83223522614333989LL;
	static int16_t x347 = INT16_MAX;
	int64_t x348 = -1LL;
	int32_t t84 = -11;

	t84 = ((x345<(x346%x347))<x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x349 = INT16_MIN;
	int64_t x350 = INT64_MAX;
	int16_t x351 = INT16_MIN;
	static volatile uint32_t x352 = UINT32_MAX;
	int32_t t85 = -10196;

	t85 = ((x349<(x350%x351))<x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x354 = 26U;
	int16_t x355 = 4532;
	uint32_t x356 = UINT32_MAX;

	t86 = ((x353<(x354%x355))<x356);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = 99672755;
	static uint16_t x358 = UINT16_MAX;
	static int16_t x359 = INT16_MAX;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t87 = 1;

	t87 = ((x357<(x358%x359))<x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x361 = -1LL;
	int8_t x362 = -1;
	int64_t x363 = 331568508009555LL;
	int8_t x364 = 5;
	int32_t t88 = 1;

	t88 = ((x361<(x362%x363))<x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = INT64_MAX;
	static uint32_t x366 = 8U;
	static int16_t x367 = -31;
	volatile int16_t x368 = INT16_MAX;
	static volatile int32_t t89 = -64622;

	t89 = ((x365<(x366%x367))<x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x369 = 21;
	int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = UINT16_MAX;
	int32_t t90 = -223562;

	t90 = ((x369<(x370%x371))<x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x374 = INT64_MIN;
	int32_t x375 = -1;
	volatile int16_t x376 = INT16_MIN;
	volatile int32_t t91 = 0;

	t91 = ((x373<(x374%x375))<x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x377 = INT16_MIN;
	int64_t x378 = 14376937LL;
	static int32_t x379 = -1;
	volatile int32_t x380 = INT32_MIN;
	volatile int32_t t92 = -38852452;

	t92 = ((x377<(x378%x379))<x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x382 = 0U;
	int32_t x383 = INT32_MIN;
	int32_t t93 = -43678;

	t93 = ((x381<(x382%x383))<x384);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -1;
	volatile uint64_t x390 = 237LLU;
	int16_t x391 = INT16_MAX;
	volatile int8_t x392 = -3;
	volatile int32_t t94 = -95;

	t94 = ((x389<(x390%x391))<x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = INT8_MIN;
	int16_t x395 = -1;
	int32_t x396 = -1;

	t95 = ((x393<(x394%x395))<x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = 18;
	int64_t x399 = INT64_MAX;
	int16_t x400 = -1;
	int32_t t96 = 0;

	t96 = ((x397<(x398%x399))<x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = -1;
	int64_t x402 = INT64_MIN;
	static uint16_t x403 = 1183U;
	int16_t x404 = INT16_MIN;
	int32_t t97 = -2321185;

	t97 = ((x401<(x402%x403))<x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = 40442632938209LLU;
	int16_t x407 = INT16_MAX;
	uint64_t x408 = UINT64_MAX;

	t98 = ((x405<(x406%x407))<x408);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x409 = INT32_MAX;
	int64_t x410 = 14042469256LL;
	uint64_t x411 = 116730LLU;
	int32_t t99 = 390125;

	t99 = ((x409<(x410%x411))<x412);

	if (t99 != 1) { NG(); } else { ; }
	
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

