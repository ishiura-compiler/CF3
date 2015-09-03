#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x6 = 7U;
int64_t x10 = 902LL;
int64_t x12 = INT64_MIN;
volatile int32_t x13 = 6137;
int64_t x20 = INT64_MIN;
uint32_t x21 = UINT32_MAX;
uint64_t x23 = UINT64_MAX;
static int32_t t7 = 3856651;
int32_t x36 = INT32_MIN;
int64_t x38 = -1LL;
static uint32_t x40 = 329934U;
volatile int32_t t9 = 97858764;
int16_t x46 = INT16_MIN;
volatile int32_t t11 = -93500;
int64_t x49 = INT64_MAX;
int64_t x50 = INT64_MIN;
static int32_t t12 = 59315;
static volatile uint64_t x62 = 3621838512542LLU;
static int64_t x63 = INT64_MAX;
int8_t x65 = 3;
int64_t x67 = INT64_MIN;
int8_t x68 = 0;
int32_t x69 = -1;
volatile uint8_t x75 = UINT8_MAX;
uint8_t x78 = 2U;
int32_t t19 = -843583;
int64_t x82 = -12850484LL;
int16_t x86 = INT16_MIN;
int8_t x88 = -1;
int32_t t21 = 140;
uint16_t x91 = UINT16_MAX;
uint32_t x92 = 493U;
static int8_t x95 = -1;
static uint32_t x97 = 1866825877U;
volatile int32_t t24 = -530801;
static int32_t x101 = 13635641;
int32_t t26 = -3581;
int32_t t27 = 132927;
int32_t x121 = INT32_MIN;
volatile uint64_t x123 = 63463783589214723LLU;
int8_t x127 = INT8_MAX;
int32_t t31 = -12156825;
volatile int32_t t32 = 61959;
int32_t x133 = INT32_MIN;
volatile int64_t x140 = 31415LL;
int64_t x142 = -391043737228LL;
int8_t x146 = -2;
volatile int32_t x147 = -1;
volatile uint16_t x149 = 41U;
int8_t x150 = 30;
int32_t x153 = INT32_MIN;
static int32_t t38 = 2941;
static volatile int8_t x162 = -1;
static int16_t x163 = INT16_MIN;
uint32_t x170 = 6968086U;
volatile int32_t x174 = INT32_MIN;
int32_t t45 = 237251409;
int64_t x189 = -1LL;
int64_t x192 = -7LL;
uint32_t x194 = UINT32_MAX;
int32_t x196 = 1606;
uint16_t x200 = 1U;
int16_t x209 = INT16_MIN;
uint8_t x212 = 5U;
static volatile int32_t t55 = -1;
uint8_t x226 = UINT8_MAX;
volatile uint64_t x228 = 205578491446070727LLU;
uint32_t x233 = UINT32_MAX;
volatile uint64_t x237 = 3151729419697796LLU;
int16_t x244 = -191;
volatile int16_t x246 = -1;
volatile int32_t t61 = -25899857;
volatile int32_t x249 = INT32_MIN;
int16_t x259 = INT16_MIN;
static int16_t x261 = INT16_MIN;
volatile int32_t t65 = -29803845;
int32_t x267 = -126;
volatile int32_t x268 = INT32_MIN;
int64_t x274 = 166333LL;
int32_t x284 = -1;
int32_t x286 = INT32_MAX;
int8_t x295 = INT8_MIN;
int64_t x301 = INT64_MIN;
uint32_t x302 = 475738U;
volatile uint8_t x308 = UINT8_MAX;
volatile int32_t x309 = -12;
int64_t x312 = INT64_MIN;
static int64_t x314 = INT64_MIN;
volatile int64_t x315 = -782LL;
volatile uint64_t x316 = 28848468684LLU;
uint32_t x318 = 15U;
volatile int32_t t79 = 15;
int64_t x322 = -13219034706LL;
static uint64_t x327 = UINT64_MAX;
int32_t x334 = 15;
volatile int32_t t84 = -21500909;
volatile uint64_t x345 = 2369845811551LLU;
static volatile int64_t x348 = INT64_MIN;
static uint32_t x355 = 22614U;
static int32_t x356 = INT32_MIN;
int32_t x360 = INT32_MIN;
static int32_t t89 = 55717460;
uint32_t x364 = UINT32_MAX;
int8_t x371 = 7;
uint16_t x377 = UINT16_MAX;
int32_t x392 = -130086;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	int64_t x2 = INT64_MIN;
	int64_t x3 = INT64_MIN;
	static int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 293313;

	t0 = ((x1==x2)*(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 37;
	volatile int16_t x7 = INT16_MIN;
	volatile uint16_t x8 = UINT16_MAX;
	int32_t t1 = 1432;

	t1 = ((x5==x6)*(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	static volatile int8_t x11 = -1;
	volatile int32_t t2 = 11664660;

	t2 = ((x9==x10)*(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 729U;
	int8_t x15 = -1;
	static uint64_t x16 = 25730189950616LLU;
	int32_t t3 = 2372;

	t3 = ((x13==x14)*(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 1;
	int16_t x18 = INT16_MIN;
	int16_t x19 = 3;
	int32_t t4 = 292742;

	t4 = ((x17==x18)*(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x22 = UINT16_MAX;
	volatile uint32_t x24 = 205U;
	static volatile int32_t t5 = -2784;

	t5 = ((x21==x22)*(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	int64_t x26 = 4485632352235432968LL;
	int64_t x27 = 369367LL;
	int64_t x28 = INT64_MIN;
	static int32_t t6 = -145;

	t6 = ((x25==x26)*(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 1029617LLU;
	uint32_t x30 = 641150094U;
	uint8_t x31 = 0U;
	static int16_t x32 = -1;

	t7 = ((x29==x30)*(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 1U;
	uint64_t x34 = 1031663016LLU;
	int16_t x35 = INT16_MIN;
	volatile int32_t t8 = -14411;

	t8 = ((x33==x34)*(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 150966396172739LLU;
	int64_t x39 = INT64_MAX;

	t9 = ((x37==x38)*(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MAX;
	int32_t x42 = INT32_MIN;
	uint8_t x43 = 86U;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -162230126;

	t10 = ((x41==x42)*(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int64_t x47 = INT64_MIN;
	int64_t x48 = -1LL;

	t11 = ((x45==x46)*(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x51 = UINT16_MAX;
	int32_t x52 = -852;

	t12 = ((x49==x50)*(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 894415232U;
	int8_t x54 = INT8_MAX;
	volatile int64_t x55 = INT64_MIN;
	uint64_t x56 = UINT64_MAX;
	int32_t t13 = -618497900;

	t13 = ((x53==x54)*(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	static int16_t x58 = -1;
	static int8_t x59 = -1;
	int8_t x60 = INT8_MAX;
	int32_t t14 = -2;

	t14 = ((x57==x58)*(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1416102376LL;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = 1488;

	t15 = ((x61==x62)*(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x66 = INT8_MIN;
	static int32_t t16 = 91352260;

	t16 = ((x65==x66)*(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = UINT8_MAX;
	static uint16_t x71 = UINT16_MAX;
	int64_t x72 = 4LL;
	int32_t t17 = -60232;

	t17 = ((x69==x70)*(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	int32_t x74 = 13109624;
	int64_t x76 = INT64_MIN;
	volatile int32_t t18 = 133051206;

	t18 = ((x73==x74)*(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -6;
	uint64_t x79 = 1210502802391889LLU;
	int16_t x80 = -1;

	t19 = ((x77==x78)*(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = 185440U;
	int8_t x83 = -6;
	uint8_t x84 = 62U;
	int32_t t20 = -8047224;

	t20 = ((x81==x82)*(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int64_t x87 = INT64_MIN;

	t21 = ((x85==x86)*(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int64_t x90 = -1LL;
	int32_t t22 = 105;

	t22 = ((x89==x90)*(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = 31U;
	int8_t x94 = INT8_MIN;
	int32_t x96 = -1;
	static volatile int32_t t23 = -1353;

	t23 = ((x93==x94)*(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x98 = INT16_MAX;
	uint8_t x99 = 0U;
	int32_t x100 = INT32_MIN;

	t24 = ((x97==x98)*(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x102 = -1;
	int8_t x103 = -1;
	int32_t x104 = -1;
	volatile int32_t t25 = -137;

	t25 = ((x101==x102)*(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = -1LL;
	volatile uint32_t x106 = 910U;
	int8_t x107 = -1;
	int64_t x108 = INT64_MIN;

	t26 = ((x105==x106)*(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	uint16_t x110 = 1699U;
	uint32_t x111 = 1819511U;
	int16_t x112 = INT16_MAX;

	t27 = ((x109==x110)*(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = UINT32_MAX;
	volatile int8_t x114 = 0;
	static int64_t x115 = INT64_MAX;
	volatile int64_t x116 = -196LL;
	volatile int32_t t28 = 292;

	t28 = ((x113==x114)*(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MAX;
	int16_t x118 = -1;
	int64_t x119 = -1LL;
	uint64_t x120 = UINT64_MAX;
	int32_t t29 = -2875;

	t29 = ((x117==x118)*(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x122 = UINT8_MAX;
	uint64_t x124 = UINT64_MAX;
	static volatile int32_t t30 = 1;

	t30 = ((x121==x122)*(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	static int16_t x126 = INT16_MIN;
	int8_t x128 = 8;

	t31 = ((x125==x126)*(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 12U;
	static uint8_t x130 = 0U;
	int16_t x131 = -1;
	int16_t x132 = 1;

	t32 = ((x129==x130)*(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x134 = 3U;
	int16_t x135 = 2720;
	static int64_t x136 = -1LL;
	int32_t t33 = -1975;

	t33 = ((x133==x134)*(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 2097736;
	int32_t x138 = 7;
	volatile int8_t x139 = INT8_MIN;
	volatile int32_t t34 = -13395166;

	t34 = ((x137==x138)*(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 241661524853LL;
	int16_t x143 = 0;
	static uint64_t x144 = 13573907004716736LLU;
	volatile int32_t t35 = 75320606;

	t35 = ((x141==x142)*(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	uint32_t x148 = UINT32_MAX;
	int32_t t36 = -561716321;

	t36 = ((x145==x146)*(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x151 = -1;
	static int8_t x152 = INT8_MIN;
	int32_t t37 = -592;

	t37 = ((x149==x150)*(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x154 = INT64_MIN;
	static int8_t x155 = 0;
	uint16_t x156 = 36U;

	t38 = ((x153==x154)*(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	static int16_t x158 = INT16_MIN;
	volatile uint64_t x159 = 134915602767223LLU;
	static volatile int8_t x160 = INT8_MAX;
	volatile int32_t t39 = 127151;

	t39 = ((x157==x158)*(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = 32586398LLU;
	int16_t x164 = INT16_MIN;
	int32_t t40 = 55;

	t40 = ((x161==x162)*(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int16_t x166 = INT16_MIN;
	volatile uint64_t x167 = 2748329823529474630LLU;
	uint16_t x168 = 219U;
	volatile int32_t t41 = 131513;

	t41 = ((x165==x166)*(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 11215651LLU;
	int16_t x171 = -1;
	uint16_t x172 = 5U;
	volatile int32_t t42 = -28;

	t42 = ((x169==x170)*(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MAX;
	uint32_t x175 = UINT32_MAX;
	uint8_t x176 = 3U;
	volatile int32_t t43 = 1638;

	t43 = ((x173==x174)*(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 2U;
	uint8_t x178 = 43U;
	int64_t x179 = -1088869408536LL;
	int64_t x180 = INT64_MIN;
	volatile int32_t t44 = -24908;

	t44 = ((x177==x178)*(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	uint32_t x182 = UINT32_MAX;
	uint32_t x183 = 9230U;
	int16_t x184 = INT16_MIN;

	t45 = ((x181==x182)*(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	int16_t x186 = 46;
	uint16_t x187 = 970U;
	static int8_t x188 = INT8_MIN;
	int32_t t46 = 60;

	t46 = ((x185==x186)*(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MIN;
	static int8_t x191 = 0;
	int32_t t47 = 0;

	t47 = ((x189==x190)*(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = 2;
	uint8_t x195 = UINT8_MAX;
	static int32_t t48 = -967559;

	t48 = ((x193==x194)*(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	volatile uint16_t x198 = 1U;
	uint32_t x199 = UINT32_MAX;
	static int32_t t49 = -3565990;

	t49 = ((x197==x198)*(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = -1;
	volatile int16_t x202 = -1;
	uint64_t x203 = 259285136231040LLU;
	int16_t x204 = INT16_MAX;
	int32_t t50 = 6;

	t50 = ((x201==x202)*(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MAX;
	int16_t x206 = 27;
	static int16_t x207 = INT16_MIN;
	uint32_t x208 = 1U;
	int32_t t51 = 2086089;

	t51 = ((x205==x206)*(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x210 = INT32_MIN;
	int16_t x211 = INT16_MIN;
	int32_t t52 = 241;

	t52 = ((x209==x210)*(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	volatile int64_t x214 = 770928322114498LL;
	volatile uint64_t x215 = UINT64_MAX;
	static uint16_t x216 = 29597U;
	static int32_t t53 = 472782;

	t53 = ((x213==x214)*(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	uint32_t x218 = 35448U;
	int8_t x219 = INT8_MAX;
	uint32_t x220 = 451U;
	volatile int32_t t54 = 4186758;

	t54 = ((x217==x218)*(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x221 = UINT16_MAX;
	int8_t x222 = 0;
	int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MIN;

	t55 = ((x221==x222)*(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -58;
	int32_t x227 = INT32_MIN;
	int32_t t56 = -6237;

	t56 = ((x225==x226)*(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 3LLU;
	volatile int8_t x230 = -1;
	int32_t x231 = -1;
	static int8_t x232 = 1;
	int32_t t57 = 1;

	t57 = ((x229==x230)*(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = -16;
	static int64_t x235 = -22LL;
	uint16_t x236 = 1U;
	static int32_t t58 = -558;

	t58 = ((x233==x234)*(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MAX;
	uint64_t x239 = 5468LLU;
	volatile uint8_t x240 = 48U;
	volatile int32_t t59 = -3921;

	t59 = ((x237==x238)*(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = -1;
	int16_t x242 = 6217;
	volatile uint8_t x243 = 3U;
	volatile int32_t t60 = -1537517;

	t60 = ((x241==x242)*(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 3851544251645655LLU;
	int8_t x247 = INT8_MIN;
	int64_t x248 = 0LL;

	t61 = ((x245==x246)*(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -1;
	int8_t x251 = -1;
	int64_t x252 = -2139643041LL;
	volatile int32_t t62 = -7;

	t62 = ((x249==x250)*(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 548266415835LLU;
	int8_t x254 = -1;
	static uint16_t x255 = 246U;
	uint64_t x256 = UINT64_MAX;
	volatile int32_t t63 = -33339206;

	t63 = ((x253==x254)*(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int8_t x258 = -1;
	volatile int64_t x260 = INT64_MIN;
	volatile int32_t t64 = -22668660;

	t64 = ((x257==x258)*(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x262 = UINT32_MAX;
	static int16_t x263 = 25;
	uint16_t x264 = UINT16_MAX;

	t65 = ((x261==x262)*(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = -43358;
	static volatile int32_t x266 = -1;
	static int32_t t66 = -37;

	t66 = ((x265==x266)*(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = INT16_MAX;
	int16_t x270 = 330;
	uint64_t x271 = 17601LLU;
	static int8_t x272 = -3;
	volatile int32_t t67 = 0;

	t67 = ((x269==x270)*(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = INT32_MIN;
	uint8_t x275 = 3U;
	static volatile uint64_t x276 = 202210627779118331LLU;
	volatile int32_t t68 = -110492829;

	t68 = ((x273==x274)*(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = 400U;
	volatile int16_t x280 = -1;
	int32_t t69 = -18044401;

	t69 = ((x277==x278)*(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x281 = -1;
	static int64_t x282 = INT64_MIN;
	volatile int64_t x283 = INT64_MIN;
	int32_t t70 = 312519;

	t70 = ((x281==x282)*(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x285 = UINT16_MAX;
	static int64_t x287 = INT64_MAX;
	int8_t x288 = INT8_MAX;
	volatile int32_t t71 = 183444444;

	t71 = ((x285==x286)*(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	uint8_t x290 = UINT8_MAX;
	volatile int32_t x291 = INT32_MIN;
	uint16_t x292 = 17298U;
	int32_t t72 = -298;

	t72 = ((x289==x290)*(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MAX;
	int64_t x294 = INT64_MIN;
	volatile int64_t x296 = INT64_MIN;
	static volatile int32_t t73 = -23692182;

	t73 = ((x293==x294)*(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -4174;
	volatile int32_t x298 = INT32_MIN;
	int64_t x299 = 224826470683627934LL;
	static uint32_t x300 = 8993015U;
	static int32_t t74 = 39;

	t74 = ((x297==x298)*(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x303 = INT64_MAX;
	int32_t x304 = INT32_MIN;
	int32_t t75 = -4;

	t75 = ((x301==x302)*(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 228U;
	static uint8_t x306 = 3U;
	int8_t x307 = INT8_MIN;
	volatile int32_t t76 = -6952;

	t76 = ((x305==x306)*(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 824885039U;
	volatile int8_t x311 = -6;
	int32_t t77 = -3443577;

	t77 = ((x309==x310)*(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 3U;
	static int32_t t78 = 9;

	t78 = ((x313==x314)*(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = 841U;
	static int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;

	t79 = ((x317==x318)*(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	int64_t x323 = INT64_MIN;
	int8_t x324 = -1;
	volatile int32_t t80 = 802379;

	t80 = ((x321==x322)*(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = -15;
	uint32_t x326 = 230173820U;
	uint32_t x328 = UINT32_MAX;
	int32_t t81 = 18176369;

	t81 = ((x325==x326)*(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = -1LL;
	static int64_t x330 = 620LL;
	int64_t x331 = 3582LL;
	uint32_t x332 = 31442660U;
	int32_t t82 = 7;

	t82 = ((x329==x330)*(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x333 = UINT8_MAX;
	int64_t x335 = -1LL;
	uint32_t x336 = UINT32_MAX;
	static volatile int32_t t83 = -443999447;

	t83 = ((x333==x334)*(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x337 = INT16_MAX;
	int32_t x338 = INT32_MAX;
	uint8_t x339 = 1U;
	static volatile int64_t x340 = INT64_MIN;

	t84 = ((x337==x338)*(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	static uint32_t x342 = UINT32_MAX;
	int64_t x343 = INT64_MAX;
	int8_t x344 = -1;
	static int32_t t85 = 15256;

	t85 = ((x341==x342)*(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x346 = 0U;
	int64_t x347 = -700192800121568LL;
	volatile int32_t t86 = 1;

	t86 = ((x345==x346)*(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	uint32_t x350 = UINT32_MAX;
	static int32_t x351 = INT32_MIN;
	int8_t x352 = -8;
	volatile int32_t t87 = 703;

	t87 = ((x349==x350)*(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 11U;
	volatile int16_t x354 = -5;
	volatile int32_t t88 = 1329920;

	t88 = ((x353==x354)*(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = 278562411810598LL;
	volatile int64_t x359 = -893LL;

	t89 = ((x357==x358)*(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = 42;
	int32_t x362 = INT32_MAX;
	uint8_t x363 = 13U;
	volatile int32_t t90 = 0;

	t90 = ((x361==x362)*(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = 3527241U;
	int32_t x366 = -2022;
	uint8_t x367 = 0U;
	int32_t x368 = INT32_MAX;
	int32_t t91 = 806237365;

	t91 = ((x365==x366)*(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = -1;
	int64_t x370 = -1LL;
	int8_t x372 = INT8_MAX;
	int32_t t92 = -15382;

	t92 = ((x369==x370)*(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = -1LL;
	int32_t x375 = INT32_MIN;
	int8_t x376 = -1;
	int32_t t93 = -4;

	t93 = ((x373==x374)*(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x378 = 0U;
	uint16_t x379 = 2469U;
	int32_t x380 = 19839;
	volatile int32_t t94 = -8954;

	t94 = ((x377==x378)*(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = INT64_MIN;
	static int32_t x382 = INT32_MIN;
	static volatile int16_t x383 = -5481;
	uint64_t x384 = UINT64_MAX;
	int32_t t95 = 24;

	t95 = ((x381==x382)*(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MIN;
	volatile int8_t x386 = INT8_MIN;
	static volatile int8_t x387 = -1;
	static uint8_t x388 = 21U;
	int32_t t96 = 1045660;

	t96 = ((x385==x386)*(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -2135LL;
	static int64_t x390 = INT64_MIN;
	static uint64_t x391 = 1290028939LLU;
	int32_t t97 = -70582;

	t97 = ((x389==x390)*(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MAX;
	int8_t x395 = INT8_MIN;
	int64_t x396 = 12278398033LL;
	int32_t t98 = 222072291;

	t98 = ((x393==x394)*(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 6;
	volatile uint8_t x398 = 7U;
	static uint16_t x399 = 3U;
	int64_t x400 = -1LL;
	int32_t t99 = -2309539;

	t99 = ((x397==x398)*(x399<x400));

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

