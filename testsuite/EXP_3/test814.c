#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 375U;
volatile int32_t t1 = -105831;
static int64_t x9 = INT64_MIN;
int64_t x13 = 76856057703LL;
int64_t x20 = INT64_MAX;
int16_t x23 = 1744;
volatile int32_t t5 = 457450;
static uint8_t x34 = UINT8_MAX;
uint32_t x35 = UINT32_MAX;
volatile uint16_t x37 = 2U;
static int32_t t11 = -96636;
static int8_t x49 = -1;
static volatile int8_t x50 = INT8_MIN;
volatile uint8_t x53 = UINT8_MAX;
int64_t x61 = INT64_MIN;
static volatile uint8_t x66 = UINT8_MAX;
int8_t x71 = 0;
static int32_t t17 = -6941;
int8_t x76 = INT8_MIN;
int32_t x78 = INT32_MAX;
int16_t x79 = INT16_MAX;
int32_t t19 = 53380;
int16_t x93 = INT16_MIN;
int16_t x94 = INT16_MIN;
volatile int32_t t21 = -60636639;
int16_t x97 = INT16_MIN;
static int16_t x100 = INT16_MAX;
volatile int32_t t23 = 11;
int8_t x110 = INT8_MAX;
int32_t t25 = -3121;
volatile int8_t x114 = -1;
int32_t x115 = -1;
int32_t x116 = INT32_MAX;
int8_t x123 = INT8_MIN;
int32_t x126 = INT32_MIN;
volatile int8_t x136 = -1;
static volatile int32_t t31 = 1;
static int32_t x138 = INT32_MIN;
uint8_t x139 = 32U;
int64_t x145 = -9699LL;
static int8_t x147 = INT8_MIN;
static int16_t x148 = -1;
uint16_t x149 = UINT16_MAX;
int64_t x152 = 3850853942LL;
int32_t x155 = -570552233;
int64_t x159 = -1LL;
volatile int32_t t38 = -5;
volatile int64_t x171 = 362043LL;
int16_t x177 = INT16_MIN;
uint32_t x187 = 3U;
volatile int32_t t45 = -55254088;
int16_t x195 = 1578;
volatile int16_t x197 = -134;
static volatile int32_t t47 = 1051;
static volatile int32_t t48 = 30060;
static int8_t x208 = 1;
volatile int32_t t49 = 1;
int64_t x226 = -20205931LL;
uint8_t x233 = 7U;
volatile int32_t t55 = 4184;
int32_t t57 = 218769;
volatile int64_t x245 = 86443LL;
static uint32_t x247 = 1477499802U;
int16_t x249 = INT16_MIN;
int16_t x254 = INT16_MAX;
int32_t x257 = 65;
uint32_t x259 = UINT32_MAX;
int8_t x260 = INT8_MIN;
uint32_t x264 = UINT32_MAX;
uint64_t x267 = UINT64_MAX;
volatile uint32_t x272 = 11338922U;
int16_t x274 = INT16_MAX;
static uint32_t x284 = UINT32_MAX;
volatile int8_t x287 = -7;
int32_t x289 = -1;
volatile int64_t x292 = INT64_MIN;
int32_t t71 = 4849559;
volatile uint8_t x316 = 13U;
static int32_t x318 = -6312036;
static uint8_t x325 = UINT8_MAX;
static int32_t x326 = -408587322;
int64_t x331 = INT64_MAX;
int16_t x332 = -4;
int32_t t78 = 0;
int8_t x333 = 1;
static uint64_t x335 = 20963LLU;
volatile int32_t x337 = INT32_MIN;
int8_t x346 = 0;
int16_t x357 = 3;
volatile int32_t x360 = -1675;
volatile int16_t x362 = -43;
int32_t x363 = INT32_MIN;
int32_t x364 = 45;
volatile uint16_t x371 = UINT16_MAX;
static int16_t x375 = -3;
int32_t t89 = 1;
int32_t t91 = 151596;
uint32_t x387 = 121844146U;
int16_t x388 = 116;
static uint32_t x395 = UINT32_MAX;
int64_t x400 = INT64_MIN;
static uint32_t x401 = 575421U;
volatile int32_t t96 = 3;
int64_t x408 = INT64_MIN;
volatile int32_t t97 = 11;
volatile int32_t x416 = 2382;
static int32_t t99 = -96173;


void f0(void) {
	int64_t x1 = 19LL;
	static int64_t x3 = INT64_MAX;
	static int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = 0;

	t0 = ((x1&x2)==(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint16_t x6 = 1U;
	int8_t x7 = -1;
	int16_t x8 = 1;

	t1 = ((x5&x6)==(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -10938484724LL;
	uint32_t x11 = 6440U;
	int8_t x12 = 1;
	int32_t t2 = -3;

	t2 = ((x9&x10)==(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MAX;
	int8_t x15 = -1;
	uint16_t x16 = 126U;
	volatile int32_t t3 = -3945424;

	t3 = ((x13&x14)==(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	volatile uint64_t x18 = 8128523716015314833LLU;
	uint16_t x19 = 2688U;
	volatile int32_t t4 = -5829;

	t4 = ((x17&x18)==(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int64_t x22 = INT64_MAX;
	uint8_t x24 = UINT8_MAX;

	t5 = ((x21&x22)==(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 132959U;
	int8_t x26 = -14;
	static int8_t x27 = 25;
	volatile uint8_t x28 = 9U;
	int32_t t6 = -166983243;

	t6 = ((x25&x26)==(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint16_t x30 = UINT16_MAX;
	volatile uint8_t x31 = 21U;
	volatile uint32_t x32 = 111649752U;
	volatile int32_t t7 = -1;

	t7 = ((x29&x30)==(x31%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	volatile int64_t x36 = 1LL;
	volatile int32_t t8 = 2;

	t8 = ((x33&x34)==(x35%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = UINT8_MAX;
	static int32_t x39 = -1;
	int32_t x40 = INT32_MIN;
	int32_t t9 = -28;

	t9 = ((x37&x38)==(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 7U;
	uint32_t x42 = 213U;
	uint64_t x43 = UINT64_MAX;
	uint64_t x44 = 318862599997171095LLU;
	volatile int32_t t10 = 89;

	t10 = ((x41&x42)==(x43%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MAX;
	volatile int32_t x46 = INT32_MAX;
	volatile int32_t x47 = INT32_MAX;
	int64_t x48 = INT64_MIN;

	t11 = ((x45&x46)==(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x51 = INT8_MIN;
	volatile int64_t x52 = INT64_MAX;
	volatile int32_t t12 = -5;

	t12 = ((x49&x50)==(x51%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = UINT32_MAX;
	int64_t x55 = INT64_MIN;
	volatile uint32_t x56 = UINT32_MAX;
	volatile int32_t t13 = 1;

	t13 = ((x53&x54)==(x55%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MIN;
	static int16_t x58 = -1;
	int64_t x59 = INT64_MIN;
	static int32_t x60 = -1;
	volatile int32_t t14 = 718453;

	t14 = ((x57&x58)==(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x62 = INT64_MIN;
	volatile int16_t x63 = -1;
	int64_t x64 = INT64_MIN;
	static int32_t t15 = -349131;

	t15 = ((x61&x62)==(x63%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 30U;
	volatile int32_t x67 = -1;
	volatile int32_t x68 = -1;
	volatile int32_t t16 = -3805;

	t16 = ((x65&x66)==(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int16_t x70 = INT16_MAX;
	uint8_t x72 = 1U;

	t17 = ((x69&x70)==(x71%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	int32_t x74 = -1;
	volatile uint16_t x75 = 14U;
	volatile int32_t t18 = -424;

	t18 = ((x73&x74)==(x75%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x77 = UINT32_MAX;
	static uint16_t x80 = UINT16_MAX;

	t19 = ((x77&x78)==(x79%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x85 = 16804644542835940LLU;
	volatile uint64_t x86 = 11000612LLU;
	volatile int8_t x87 = INT8_MAX;
	int64_t x88 = 939196321795226069LL;
	volatile int32_t t20 = 14;

	t20 = ((x85&x86)==(x87%x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x95 = -1;
	static uint16_t x96 = 7U;

	t21 = ((x93&x94)==(x95%x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x98 = UINT32_MAX;
	volatile uint16_t x99 = 22U;
	volatile int32_t t22 = -74085;

	t22 = ((x97&x98)==(x99%x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	uint8_t x102 = 1U;
	static int32_t x103 = INT32_MAX;
	int16_t x104 = -522;

	t23 = ((x101&x102)==(x103%x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -1;
	int16_t x106 = INT16_MIN;
	volatile int32_t x107 = -1;
	int16_t x108 = INT16_MIN;
	volatile int32_t t24 = 750875;

	t24 = ((x105&x106)==(x107%x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = INT64_MIN;
	int8_t x111 = -1;
	static int8_t x112 = INT8_MIN;

	t25 = ((x109&x110)==(x111%x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MIN;
	static int32_t t26 = 7487540;

	t26 = ((x113&x114)==(x115%x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x117 = INT16_MAX;
	volatile uint32_t x118 = UINT32_MAX;
	static int8_t x119 = 29;
	static int64_t x120 = -29448646357365LL;
	static volatile int32_t t27 = -599168;

	t27 = ((x117&x118)==(x119%x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 6U;
	volatile uint64_t x122 = UINT64_MAX;
	static int16_t x124 = 92;
	int32_t t28 = 179679;

	t28 = ((x121&x122)==(x123%x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = -1;
	int32_t x127 = 3288327;
	static volatile int8_t x128 = INT8_MIN;
	volatile int32_t t29 = -106051968;

	t29 = ((x125&x126)==(x127%x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = INT8_MIN;
	uint64_t x130 = 9857632LLU;
	int32_t x131 = INT32_MAX;
	volatile int64_t x132 = INT64_MIN;
	int32_t t30 = 126;

	t30 = ((x129&x130)==(x131%x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	uint8_t x134 = 0U;
	int64_t x135 = -30308626LL;

	t31 = ((x133&x134)==(x135%x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x137 = INT16_MIN;
	volatile uint32_t x140 = UINT32_MAX;
	static volatile int32_t t32 = 14917756;

	t32 = ((x137&x138)==(x139%x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x141 = UINT32_MAX;
	static int16_t x142 = -195;
	int16_t x143 = 0;
	static int16_t x144 = -3048;
	volatile int32_t t33 = -7;

	t33 = ((x141&x142)==(x143%x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x146 = UINT16_MAX;
	int32_t t34 = 236599;

	t34 = ((x145&x146)==(x147%x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x150 = 1U;
	static int16_t x151 = -1;
	int32_t t35 = -91;

	t35 = ((x149&x150)==(x151%x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 876794878U;
	volatile int32_t x154 = INT32_MIN;
	int16_t x156 = -63;
	int32_t t36 = -6939;

	t36 = ((x153&x154)==(x155%x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MAX;
	volatile uint64_t x158 = 19161791930953LLU;
	uint32_t x160 = UINT32_MAX;
	int32_t t37 = -64;

	t37 = ((x157&x158)==(x159%x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 20291776416LLU;
	uint32_t x162 = 0U;
	static uint64_t x163 = UINT64_MAX;
	static int16_t x164 = INT16_MIN;

	t38 = ((x161&x162)==(x163%x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x165 = 62U;
	uint64_t x166 = UINT64_MAX;
	uint16_t x167 = UINT16_MAX;
	int16_t x168 = INT16_MIN;
	volatile int32_t t39 = 12;

	t39 = ((x165&x166)==(x167%x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 76U;
	int8_t x170 = -3;
	int8_t x172 = 21;
	volatile int32_t t40 = 0;

	t40 = ((x169&x170)==(x171%x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x173 = 717112708LL;
	volatile uint16_t x174 = 5254U;
	int64_t x175 = 2720478LL;
	int16_t x176 = INT16_MIN;
	volatile int32_t t41 = 4;

	t41 = ((x173&x174)==(x175%x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x178 = INT16_MIN;
	static volatile uint8_t x179 = UINT8_MAX;
	int64_t x180 = INT64_MIN;
	volatile int32_t t42 = 0;

	t42 = ((x177&x178)==(x179%x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	uint64_t x182 = 18204170085655356LLU;
	volatile uint64_t x183 = UINT64_MAX;
	volatile int64_t x184 = INT64_MIN;
	volatile int32_t t43 = -101072;

	t43 = ((x181&x182)==(x183%x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MAX;
	int8_t x186 = INT8_MIN;
	int32_t x188 = INT32_MAX;
	int32_t t44 = -404215;

	t44 = ((x185&x186)==(x187%x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MAX;
	int32_t x190 = INT32_MIN;
	static volatile int16_t x191 = 7;
	int32_t x192 = -29;

	t45 = ((x189&x190)==(x191%x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -50202988945820LL;
	int64_t x194 = -91587095434455179LL;
	int16_t x196 = -5;
	volatile int32_t t46 = 1;

	t46 = ((x193&x194)==(x195%x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x198 = 3966LLU;
	volatile uint64_t x199 = 6LLU;
	int64_t x200 = -1020052405LL;

	t47 = ((x197&x198)==(x199%x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MAX;
	uint32_t x202 = 753871U;
	static uint32_t x203 = 60688694U;
	volatile int32_t x204 = INT32_MAX;

	t48 = ((x201&x202)==(x203%x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x205 = 131905768773239LLU;
	uint32_t x206 = 3303558U;
	int8_t x207 = 0;

	t49 = ((x205&x206)==(x207%x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = INT16_MIN;
	volatile int32_t x214 = -8;
	volatile uint64_t x215 = UINT64_MAX;
	int32_t x216 = -1;
	volatile int32_t t50 = -47749;

	t50 = ((x213&x214)==(x215%x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = 3520318;
	static int32_t x218 = INT32_MAX;
	uint64_t x219 = 31LLU;
	int16_t x220 = INT16_MIN;
	int32_t t51 = -4125500;

	t51 = ((x217&x218)==(x219%x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -5LL;
	int32_t x222 = INT32_MIN;
	static int8_t x223 = -2;
	uint64_t x224 = 105LLU;
	volatile int32_t t52 = -3400615;

	t52 = ((x221&x222)==(x223%x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x225 = 119U;
	volatile int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MAX;
	int32_t t53 = -29774060;

	t53 = ((x225&x226)==(x227%x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 7U;
	volatile int8_t x230 = INT8_MIN;
	static volatile uint64_t x231 = 1068633668513LLU;
	int32_t x232 = INT32_MIN;
	int32_t t54 = 30;

	t54 = ((x229&x230)==(x231%x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x234 = INT32_MIN;
	int16_t x235 = INT16_MAX;
	int32_t x236 = INT32_MAX;

	t55 = ((x233&x234)==(x235%x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x237 = 3597206U;
	int16_t x238 = INT16_MIN;
	volatile int64_t x239 = INT64_MIN;
	int64_t x240 = -1LL;
	volatile int32_t t56 = 4;

	t56 = ((x237&x238)==(x239%x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x241 = -1;
	static int16_t x242 = -1;
	static volatile int8_t x243 = INT8_MIN;
	volatile int64_t x244 = INT64_MIN;

	t57 = ((x241&x242)==(x243%x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x246 = INT16_MIN;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t58 = -2;

	t58 = ((x245&x246)==(x247%x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x250 = 1002U;
	int16_t x251 = 357;
	int64_t x252 = INT64_MIN;
	int32_t t59 = 45379;

	t59 = ((x249&x250)==(x251%x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x253 = 212206275249251507LLU;
	static int8_t x255 = 1;
	uint32_t x256 = 369035U;
	int32_t t60 = -135399525;

	t60 = ((x253&x254)==(x255%x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x258 = UINT8_MAX;
	int32_t t61 = 18;

	t61 = ((x257&x258)==(x259%x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x261 = INT8_MIN;
	uint32_t x262 = 71120U;
	int16_t x263 = INT16_MIN;
	volatile int32_t t62 = -24243419;

	t62 = ((x261&x262)==(x263%x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x265 = 10851;
	uint64_t x266 = 2731064771738LLU;
	int32_t x268 = INT32_MAX;
	int32_t t63 = -158;

	t63 = ((x265&x266)==(x267%x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x270 = -81LL;
	uint64_t x271 = UINT64_MAX;
	volatile int32_t t64 = -1;

	t64 = ((x269&x270)==(x271%x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x273 = INT16_MIN;
	uint16_t x275 = UINT16_MAX;
	int8_t x276 = INT8_MIN;
	static volatile int32_t t65 = 2874544;

	t65 = ((x273&x274)==(x275%x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x277 = UINT8_MAX;
	int32_t x278 = INT32_MIN;
	uint32_t x279 = 2128100U;
	int8_t x280 = INT8_MIN;
	volatile int32_t t66 = -108962;

	t66 = ((x277&x278)==(x279%x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x281 = 7U;
	static int64_t x282 = 15869277902708LL;
	int64_t x283 = INT64_MAX;
	int32_t t67 = -16692904;

	t67 = ((x281&x282)==(x283%x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = INT32_MIN;
	uint32_t x286 = 249433147U;
	volatile uint64_t x288 = 1LLU;
	volatile int32_t t68 = -28;

	t68 = ((x285&x286)==(x287%x288));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x290 = INT16_MIN;
	uint32_t x291 = UINT32_MAX;
	static volatile int32_t t69 = -24450199;

	t69 = ((x289&x290)==(x291%x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x293 = INT64_MIN;
	int64_t x294 = -279141003323935791LL;
	volatile int32_t x295 = INT32_MAX;
	int32_t x296 = INT32_MIN;
	volatile int32_t t70 = 63324030;

	t70 = ((x293&x294)==(x295%x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x297 = 385U;
	static int32_t x298 = -1;
	int32_t x299 = INT32_MIN;
	int64_t x300 = 8199807514648LL;

	t71 = ((x297&x298)==(x299%x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x301 = -1;
	int8_t x302 = -1;
	volatile int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MIN;
	static int32_t t72 = -836;

	t72 = ((x301&x302)==(x303%x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = -709;
	static volatile int16_t x306 = INT16_MIN;
	int16_t x307 = -1;
	uint64_t x308 = 16634071595956897LLU;
	volatile int32_t t73 = -97744;

	t73 = ((x305&x306)==(x307%x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = -6;
	int16_t x310 = INT16_MAX;
	volatile int64_t x311 = -1LL;
	int16_t x312 = INT16_MIN;
	volatile int32_t t74 = -2;

	t74 = ((x309&x310)==(x311%x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x313 = INT32_MAX;
	int64_t x314 = INT64_MAX;
	static uint64_t x315 = 593408729646097061LLU;
	int32_t t75 = 1758;

	t75 = ((x313&x314)==(x315%x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = -84;
	volatile int32_t x319 = INT32_MAX;
	int16_t x320 = INT16_MAX;
	volatile int32_t t76 = -1905165;

	t76 = ((x317&x318)==(x319%x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MIN;
	static int32_t t77 = -25;

	t77 = ((x325&x326)==(x327%x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = 94U;
	uint32_t x330 = UINT32_MAX;

	t78 = ((x329&x330)==(x331%x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x334 = UINT16_MAX;
	uint16_t x336 = 11U;
	volatile int32_t t79 = 6;

	t79 = ((x333&x334)==(x335%x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x338 = INT16_MIN;
	uint32_t x339 = 1794616U;
	int16_t x340 = -1;
	volatile int32_t t80 = -208186;

	t80 = ((x337&x338)==(x339%x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x341 = 468079277551019LLU;
	uint8_t x342 = 27U;
	volatile int32_t x343 = -148528;
	uint16_t x344 = 107U;
	volatile int32_t t81 = 1356854;

	t81 = ((x341&x342)==(x343%x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x345 = -6;
	static uint32_t x347 = UINT32_MAX;
	static int64_t x348 = -1876203182LL;
	static volatile int32_t t82 = 22055815;

	t82 = ((x345&x346)==(x347%x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = 3U;
	static int32_t x350 = INT32_MAX;
	volatile int32_t x351 = -14;
	uint8_t x352 = 42U;
	int32_t t83 = 93585644;

	t83 = ((x349&x350)==(x351%x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x353 = 112U;
	int16_t x354 = 1;
	int16_t x355 = INT16_MIN;
	uint64_t x356 = UINT64_MAX;
	int32_t t84 = -36741305;

	t84 = ((x353&x354)==(x355%x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x358 = UINT8_MAX;
	uint32_t x359 = 248398621U;
	volatile int32_t t85 = 13714;

	t85 = ((x357&x358)==(x359%x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x361 = INT32_MIN;
	int32_t t86 = 90534090;

	t86 = ((x361&x362)==(x363%x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = -1;
	int8_t x366 = -1;
	int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MIN;
	volatile int32_t t87 = -891305;

	t87 = ((x365&x366)==(x367%x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x369 = 87U;
	static uint16_t x370 = UINT16_MAX;
	static volatile int32_t x372 = INT32_MAX;
	int32_t t88 = -6;

	t88 = ((x369&x370)==(x371%x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = 89080059971203311LL;
	int8_t x376 = -1;

	t89 = ((x373&x374)==(x375%x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x377 = 2061643U;
	uint8_t x378 = 3U;
	static int8_t x379 = INT8_MIN;
	static int32_t x380 = 2466544;
	volatile int32_t t90 = 0;

	t90 = ((x377&x378)==(x379%x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x381 = INT64_MAX;
	uint32_t x382 = UINT32_MAX;
	static volatile int64_t x383 = -1121304985149335LL;
	volatile int64_t x384 = 1417467051LL;

	t91 = ((x381&x382)==(x383%x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x385 = INT32_MAX;
	volatile uint64_t x386 = 578303378210403LLU;
	volatile int32_t t92 = -223249091;

	t92 = ((x385&x386)==(x387%x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x389 = INT8_MIN;
	static uint16_t x390 = UINT16_MAX;
	uint16_t x391 = 20U;
	volatile int8_t x392 = INT8_MIN;
	volatile int32_t t93 = -1;

	t93 = ((x389&x390)==(x391%x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = 683;
	uint16_t x394 = UINT16_MAX;
	static uint8_t x396 = 2U;
	volatile int32_t t94 = 128071;

	t94 = ((x393&x394)==(x395%x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = 153;
	volatile int32_t x398 = -18782498;
	int8_t x399 = INT8_MAX;
	int32_t t95 = -393872;

	t95 = ((x397&x398)==(x399%x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x402 = -1;
	int8_t x403 = INT8_MIN;
	static uint16_t x404 = 71U;

	t96 = ((x401&x402)==(x403%x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = 41745548865880986LL;
	static int64_t x406 = 2609355045923681LL;
	volatile int32_t x407 = -1;

	t97 = ((x405&x406)==(x407%x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x409 = 271431083U;
	static uint16_t x410 = 8U;
	uint16_t x411 = 9988U;
	static volatile int32_t x412 = INT32_MAX;
	int32_t t98 = 2079812;

	t98 = ((x409&x410)==(x411%x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = 211716U;
	int8_t x414 = -35;
	volatile int16_t x415 = INT16_MIN;

	t99 = ((x413&x414)==(x415%x416));

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
