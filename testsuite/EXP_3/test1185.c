#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = -1;
int64_t x14 = 147916620696854LL;
int64_t t3 = -16563384611520LL;
int16_t x21 = INT16_MAX;
int8_t x26 = -3;
static volatile int32_t t6 = -1;
volatile int16_t x31 = INT16_MIN;
volatile int32_t x33 = INT32_MAX;
static int64_t x35 = -1LL;
static int64_t x38 = 550218LL;
static uint16_t x40 = UINT16_MAX;
volatile int64_t t9 = -3837358256224LL;
volatile int16_t x50 = 17;
int16_t x58 = INT16_MAX;
volatile uint32_t x61 = UINT32_MAX;
volatile uint8_t x62 = 1U;
int64_t x70 = -1LL;
static int8_t x72 = INT8_MAX;
int8_t x73 = INT8_MIN;
uint16_t x75 = UINT16_MAX;
uint64_t x82 = 4534012108985LLU;
int16_t x87 = -27;
int8_t x98 = INT8_MIN;
volatile int8_t x99 = INT8_MAX;
static int32_t t23 = 67;
volatile uint16_t x109 = 1U;
uint16_t x111 = 207U;
static volatile uint32_t x116 = 671298610U;
static volatile int64_t x119 = 15681004307LL;
int64_t x129 = -38653LL;
static int32_t t31 = 3231336;
int8_t x137 = 0;
uint16_t x145 = 4U;
static int32_t x151 = 16854239;
int8_t x158 = INT8_MIN;
uint8_t x159 = 13U;
uint16_t x164 = UINT16_MAX;
volatile int32_t t38 = 31332;
int8_t x168 = 0;
volatile int32_t t41 = -2913;
int32_t x178 = INT32_MIN;
static volatile int64_t t42 = -3617LL;
static volatile int32_t t43 = -8153;
static uint32_t x191 = 3036398U;
int32_t x192 = INT32_MAX;
int8_t x197 = -1;
int64_t x199 = -1LL;
volatile uint64_t x200 = 193309212LLU;
uint64_t x203 = UINT64_MAX;
uint32_t x206 = 4310340U;
static int16_t x207 = -463;
static volatile int64_t t49 = -789480843LL;
static volatile int16_t x218 = INT16_MAX;
volatile int8_t x237 = INT8_MIN;
static int32_t x240 = 121807;
volatile int32_t t54 = -807150392;
int32_t x244 = INT32_MAX;
int32_t x246 = -1839;
static int32_t t56 = -5147;
volatile int16_t x249 = 68;
int16_t x251 = 2337;
int8_t x258 = -1;
int8_t x260 = INT8_MIN;
int8_t x281 = 2;
int64_t x293 = 58508545344633LL;
static volatile uint64_t x296 = UINT64_MAX;
int64_t t67 = -93541404109849LL;
volatile uint32_t t74 = UINT32_MAX;
uint32_t x337 = 107U;
int32_t x344 = INT32_MIN;
int32_t x345 = -1;
static int32_t x347 = INT32_MIN;
int64_t x348 = INT64_MIN;
int32_t x352 = INT32_MAX;
uint64_t t79 = 1593LLU;
static uint32_t x358 = UINT32_MAX;
static volatile int64_t x360 = -258416710632271252LL;
int8_t x363 = -1;
uint64_t x368 = 3611LLU;
static uint64_t x369 = UINT64_MAX;
uint64_t t83 = 4LLU;
uint32_t x375 = 416413056U;
int64_t x376 = INT64_MIN;
static volatile int64_t t84 = 1303568LL;
int32_t t85 = 14621;
volatile int32_t t87 = 4732;
volatile int32_t t88 = -373915111;
volatile int8_t x399 = INT8_MIN;
static volatile int32_t t90 = -30;
volatile uint64_t x409 = 143257053088843536LLU;
volatile int16_t x413 = 13;
volatile int8_t x417 = INT8_MAX;
static int16_t x422 = INT16_MIN;
int32_t x423 = 9;
static int32_t x429 = INT32_MIN;
static int32_t x434 = -737;
volatile int32_t x453 = -1;


void f0(void) {
	static int8_t x1 = 0;
	uint8_t x2 = 1U;
	volatile int32_t x3 = INT32_MAX;
	int32_t x4 = INT32_MAX;
	int32_t t0 = 7957;

	t0 = ((x1+x2)-(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static uint16_t x6 = 1U;
	volatile int32_t x7 = -1;
	volatile int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 11249837;

	t1 = ((x5+x6)-(x7==x8));

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = -1;
	volatile uint16_t x11 = 0U;
	volatile int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = 3;

	t2 = ((x9+x10)-(x11==x12));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static int8_t x15 = 5;
	volatile int64_t x16 = INT64_MIN;

	t3 = ((x13+x14)-(x15==x16));

	if (t3 != -9223224120234078954LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 0;
	int8_t x18 = 1;
	int8_t x19 = 59;
	volatile uint16_t x20 = UINT16_MAX;
	static int32_t t4 = -389368990;

	t4 = ((x17+x18)-(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;
	int8_t x23 = INT8_MIN;
	int8_t x24 = -7;
	int32_t t5 = -1;

	t5 = ((x21+x22)-(x23==x24));

	if (t5 != 32766) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -20;
	uint16_t x27 = UINT16_MAX;
	int8_t x28 = -1;

	t6 = ((x25+x26)-(x27==x28));

	if (t6 != -23) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static int64_t x30 = -187898153390243362LL;
	uint32_t x32 = 86U;
	volatile int64_t t7 = -7896908222LL;

	t7 = ((x29+x30)-(x31==x32));

	if (t7 != -187898153390243490LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	uint32_t x36 = 24U;
	volatile int32_t t8 = 59256190;

	t8 = ((x33+x34)-(x35==x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = -1;
	int8_t x39 = INT8_MIN;

	t9 = ((x37+x38)-(x39==x40));

	if (t9 != 550217LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x45 = -238;
	uint16_t x46 = UINT16_MAX;
	volatile int64_t x47 = -2LL;
	int32_t x48 = -219;
	int32_t t10 = -284;

	t10 = ((x45+x46)-(x47==x48));

	if (t10 != 65297) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = -1;
	volatile int64_t x51 = 162967805677019770LL;
	uint32_t x52 = UINT32_MAX;
	int32_t t11 = 393062;

	t11 = ((x49+x50)-(x51==x52));

	if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	uint64_t x54 = 76LLU;
	volatile int32_t x55 = INT32_MAX;
	volatile int8_t x56 = 16;
	volatile uint64_t t12 = 13040748218016283LLU;

	t12 = ((x53+x54)-(x55==x56));

	if (t12 != 75LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	int64_t x59 = -684491331LL;
	int8_t x60 = 11;
	static int32_t t13 = 1342;

	t13 = ((x57+x58)-(x59==x60));

	if (t13 != 32766) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x63 = 1U;
	int16_t x64 = -12;
	volatile uint32_t t14 = 0U;

	t14 = ((x61+x62)-(x63==x64));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 36491LLU;
	int16_t x66 = INT16_MIN;
	int8_t x67 = -1;
	int32_t x68 = -1;
	uint64_t t15 = 11313892162LLU;

	t15 = ((x65+x66)-(x67==x68));

	if (t15 != 3722LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	static int16_t x71 = INT16_MIN;
	int64_t t16 = 225799LL;

	t16 = ((x69+x70)-(x71==x72));

	if (t16 != 4294967294LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x74 = 109U;
	uint64_t x76 = 877LLU;
	volatile int32_t t17 = -19;

	t17 = ((x73+x74)-(x75==x76));

	if (t17 != -19) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	volatile int64_t x78 = INT64_MAX;
	int16_t x79 = 0;
	volatile int16_t x80 = INT16_MIN;
	static volatile int64_t t18 = 5139LL;

	t18 = ((x77+x78)-(x79==x80));

	if (t18 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = INT64_MIN;
	volatile int16_t x83 = -1;
	int32_t x84 = INT32_MAX;
	volatile uint64_t t19 = 4845LLU;

	t19 = ((x81+x82)-(x83==x84));

	if (t19 != 9223376570866884793LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x85 = 6U;
	uint32_t x86 = UINT32_MAX;
	volatile int32_t x88 = -1;
	uint32_t t20 = 20U;

	t20 = ((x85+x86)-(x87==x88));

	if (t20 != 5U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x89 = 2630LLU;
	static int64_t x90 = -1LL;
	static volatile int8_t x91 = INT8_MIN;
	uint32_t x92 = 192361U;
	volatile uint64_t t21 = 3LLU;

	t21 = ((x89+x90)-(x91==x92));

	if (t21 != 2629LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = UINT32_MAX;
	static int8_t x100 = INT8_MIN;
	uint32_t t22 = 678907U;

	t22 = ((x97+x98)-(x99==x100));

	if (t22 != 4294967167U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = -1;
	int8_t x102 = -30;
	int64_t x103 = -976353212540985730LL;
	int64_t x104 = INT64_MIN;

	t23 = ((x101+x102)-(x103==x104));

	if (t23 != -31) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = UINT8_MAX;
	int8_t x106 = INT8_MIN;
	uint8_t x107 = 6U;
	static int8_t x108 = INT8_MIN;
	volatile int32_t t24 = 1;

	t24 = ((x105+x106)-(x107==x108));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x110 = 18227868LL;
	int64_t x112 = INT64_MIN;
	volatile int64_t t25 = 407131784428LL;

	t25 = ((x109+x110)-(x111==x112));

	if (t25 != 18227869LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 61U;
	int16_t x114 = INT16_MAX;
	uint16_t x115 = 996U;
	volatile int32_t t26 = -2;

	t26 = ((x113+x114)-(x115==x116));

	if (t26 != 32828) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = -1;
	uint32_t x118 = 40348U;
	volatile int32_t x120 = -1;
	uint32_t t27 = 31667U;

	t27 = ((x117+x118)-(x119==x120));

	if (t27 != 40347U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x121 = -1;
	int64_t x122 = -8646169232036105LL;
	int8_t x123 = -1;
	static int16_t x124 = 10;
	volatile int64_t t28 = 8189192547906LL;

	t28 = ((x121+x122)-(x123==x124));

	if (t28 != -8646169232036106LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x125 = 6629912655LLU;
	static volatile int32_t x126 = -65286;
	volatile uint16_t x127 = 32071U;
	uint64_t x128 = 262LLU;
	uint64_t t29 = 0LLU;

	t29 = ((x125+x126)-(x127==x128));

	if (t29 != 6629847369LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x130 = 116096139640418868LL;
	uint64_t x131 = 44LLU;
	uint64_t x132 = 6LLU;
	int64_t t30 = -16159LL;

	t30 = ((x129+x130)-(x131==x132));

	if (t30 != 116096139640380215LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = 1;
	volatile int8_t x134 = -61;
	static int64_t x135 = -1LL;
	volatile uint8_t x136 = 73U;

	t31 = ((x133+x134)-(x135==x136));

	if (t31 != -60) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x138 = 115007U;
	uint64_t x139 = UINT64_MAX;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t32 = 5377U;

	t32 = ((x137+x138)-(x139==x140));

	if (t32 != 115007U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MAX;
	int32_t x142 = INT32_MIN;
	int64_t x143 = 13261LL;
	static int8_t x144 = -1;
	volatile int64_t t33 = -6602460754627LL;

	t33 = ((x141+x142)-(x143==x144));

	if (t33 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x146 = INT8_MIN;
	volatile int16_t x147 = 123;
	int8_t x148 = 1;
	int32_t t34 = 1280440;

	t34 = ((x145+x146)-(x147==x148));

	if (t34 != -124) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x149 = 308U;
	int8_t x150 = INT8_MIN;
	int8_t x152 = INT8_MAX;
	int32_t t35 = 411270974;

	t35 = ((x149+x150)-(x151==x152));

	if (t35 != 180) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -1;
	uint64_t x154 = 6949037LLU;
	int8_t x155 = INT8_MIN;
	uint16_t x156 = UINT16_MAX;
	volatile uint64_t t36 = 926672353790LLU;

	t36 = ((x153+x154)-(x155==x156));

	if (t36 != 6949036LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x157 = INT32_MAX;
	int64_t x160 = INT64_MAX;
	volatile int32_t t37 = -32018198;

	t37 = ((x157+x158)-(x159==x160));

	if (t37 != 2147483519) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MAX;
	int8_t x162 = INT8_MIN;
	int16_t x163 = -1;

	t38 = ((x161+x162)-(x163==x164));

	if (t38 != 2147483519) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MAX;
	uint64_t x166 = 1613642531353333863LLU;
	volatile uint16_t x167 = UINT16_MAX;
	uint64_t t39 = 106216985457432381LLU;

	t39 = ((x165+x166)-(x167==x168));

	if (t39 != 1613642533500817510LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = UINT8_MAX;
	uint16_t x170 = 91U;
	int32_t x171 = -1;
	int8_t x172 = INT8_MAX;
	volatile int32_t t40 = -7056372;

	t40 = ((x169+x170)-(x171==x172));

	if (t40 != 346) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 1U;
	volatile int16_t x174 = INT16_MAX;
	volatile int32_t x175 = 2250;
	int8_t x176 = INT8_MIN;

	t41 = ((x173+x174)-(x175==x176));

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = 4459278447631802819LL;
	volatile uint64_t x179 = 17640LLU;
	int16_t x180 = INT16_MIN;

	t42 = ((x177+x178)-(x179==x180));

	if (t42 != 4459278445484319171LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	volatile int16_t x182 = -1;
	int8_t x183 = -2;
	int8_t x184 = INT8_MAX;

	t43 = ((x181+x182)-(x183==x184));

	if (t43 != -32769) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x185 = -1LL;
	int32_t x186 = -6426383;
	int16_t x187 = 0;
	int64_t x188 = INT64_MIN;
	int64_t t44 = -122243LL;

	t44 = ((x185+x186)-(x187==x188));

	if (t44 != -6426384LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = 121212LL;
	static uint8_t x190 = UINT8_MAX;
	int64_t t45 = -803LL;

	t45 = ((x189+x190)-(x191==x192));

	if (t45 != 121467LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = INT8_MIN;
	uint32_t x194 = UINT32_MAX;
	uint16_t x195 = 169U;
	int8_t x196 = INT8_MIN;
	uint32_t t46 = 0U;

	t46 = ((x193+x194)-(x195==x196));

	if (t46 != 4294967167U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x198 = 109U;
	volatile int32_t t47 = 29435;

	t47 = ((x197+x198)-(x199==x200));

	if (t47 != 108) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x201 = 119540;
	int16_t x202 = INT16_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t48 = 0;

	t48 = ((x201+x202)-(x203==x204));

	if (t48 != 152307) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = 351593185962023LL;
	int16_t x208 = INT16_MIN;

	t49 = ((x205+x206)-(x207==x208));

	if (t49 != 351593190272363LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x209 = INT16_MIN;
	int32_t x210 = -9000497;
	int16_t x211 = -7660;
	int16_t x212 = 3099;
	int32_t t50 = -10845;

	t50 = ((x209+x210)-(x211==x212));

	if (t50 != -9033265) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 73LLU;
	int16_t x214 = -2;
	static int64_t x215 = INT64_MIN;
	int16_t x216 = -1;
	volatile uint64_t t51 = 3LLU;

	t51 = ((x213+x214)-(x215==x216));

	if (t51 != 71LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = -1;
	static int16_t x219 = INT16_MIN;
	int8_t x220 = -1;
	volatile int32_t t52 = 297583058;

	t52 = ((x217+x218)-(x219==x220));

	if (t52 != 32766) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x229 = 2U;
	static uint64_t x230 = 6397264LLU;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = 7LLU;
	volatile uint64_t t53 = 6966639186216462073LLU;

	t53 = ((x229+x230)-(x231==x232));

	if (t53 != 6397266LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x238 = 20U;
	int16_t x239 = INT16_MIN;

	t54 = ((x237+x238)-(x239==x240));

	if (t54 != -108) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = UINT8_MAX;
	static uint8_t x242 = UINT8_MAX;
	int8_t x243 = -1;
	volatile int32_t t55 = 43;

	t55 = ((x241+x242)-(x243==x244));

	if (t55 != 510) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x245 = 477U;
	int16_t x247 = INT16_MIN;
	int8_t x248 = -1;

	t56 = ((x245+x246)-(x247==x248));

	if (t56 != -1362) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x250 = 178LLU;
	static uint64_t x252 = 63432LLU;
	volatile uint64_t t57 = 142860818470009231LLU;

	t57 = ((x249+x250)-(x251==x252));

	if (t57 != 246LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x253 = INT32_MIN;
	uint32_t x254 = 20U;
	int64_t x255 = -395130284802LL;
	int64_t x256 = -3539262354851290LL;
	static volatile uint32_t t58 = 48U;

	t58 = ((x253+x254)-(x255==x256));

	if (t58 != 2147483668U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = INT16_MIN;
	int32_t x259 = -1;
	static volatile int32_t t59 = 24;

	t59 = ((x257+x258)-(x259==x260));

	if (t59 != -32769) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MAX;
	static volatile uint64_t x262 = UINT64_MAX;
	uint16_t x263 = UINT16_MAX;
	static uint16_t x264 = UINT16_MAX;
	uint64_t t60 = 92699956311340538LLU;

	t60 = ((x261+x262)-(x263==x264));

	if (t60 != 32765LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x269 = UINT32_MAX;
	int8_t x270 = 21;
	static int16_t x271 = -1;
	static int16_t x272 = INT16_MIN;
	uint32_t t61 = 45U;

	t61 = ((x269+x270)-(x271==x272));

	if (t61 != 20U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x273 = 3;
	volatile int64_t x274 = 31179LL;
	int32_t x275 = INT32_MIN;
	volatile uint16_t x276 = 25U;
	int64_t t62 = 7001352109LL;

	t62 = ((x273+x274)-(x275==x276));

	if (t62 != 31182LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x277 = INT16_MIN;
	static int8_t x278 = 2;
	int64_t x279 = INT64_MIN;
	static volatile uint64_t x280 = UINT64_MAX;
	volatile int32_t t63 = 6661;

	t63 = ((x277+x278)-(x279==x280));

	if (t63 != -32766) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x282 = 319U;
	static uint16_t x283 = 31U;
	int32_t x284 = INT32_MIN;
	volatile int32_t t64 = 32;

	t64 = ((x281+x282)-(x283==x284));

	if (t64 != 321) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x285 = -2402054959573LL;
	uint64_t x286 = 471851163LLU;
	uint16_t x287 = UINT16_MAX;
	int8_t x288 = -1;
	volatile uint64_t t65 = 188272419819033454LLU;

	t65 = ((x285+x286)-(x287==x288));

	if (t65 != 18446741672126443206LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x289 = INT64_MIN;
	int8_t x290 = 2;
	volatile uint8_t x291 = UINT8_MAX;
	int16_t x292 = 0;
	volatile int64_t t66 = 828286142948222439LL;

	t66 = ((x289+x290)-(x291==x292));

	if (t66 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x294 = INT32_MIN;
	volatile uint8_t x295 = 0U;

	t67 = ((x293+x294)-(x295==x296));

	if (t67 != 58506397860985LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x301 = INT8_MIN;
	uint32_t x302 = 170912U;
	volatile int16_t x303 = 339;
	uint64_t x304 = UINT64_MAX;
	uint32_t t68 = 107473796U;

	t68 = ((x301+x302)-(x303==x304));

	if (t68 != 170784U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = 112691748488LLU;
	int8_t x310 = -1;
	static int32_t x311 = -1;
	uint64_t x312 = 126469789119415LLU;
	static volatile uint64_t t69 = 1209277796928216322LLU;

	t69 = ((x309+x310)-(x311==x312));

	if (t69 != 112691748487LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x313 = 4U;
	volatile uint16_t x314 = 7257U;
	int8_t x315 = INT8_MIN;
	volatile uint8_t x316 = 1U;
	int32_t t70 = -10;

	t70 = ((x313+x314)-(x315==x316));

	if (t70 != 7261) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x317 = INT32_MIN;
	uint16_t x318 = 28241U;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = 115270U;
	volatile int32_t t71 = -10919;

	t71 = ((x317+x318)-(x319==x320));

	if (t71 != -2147455407) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = INT32_MIN;
	volatile uint64_t x322 = 60801813871326LLU;
	int32_t x323 = -258;
	static uint8_t x324 = UINT8_MAX;
	uint64_t t72 = 494363LLU;

	t72 = ((x321+x322)-(x323==x324));

	if (t72 != 60799666387678LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x325 = 9989641648271871LLU;
	volatile int8_t x326 = INT8_MIN;
	uint64_t x327 = 808432427LLU;
	static int64_t x328 = INT64_MIN;
	uint64_t t73 = 1331191121878773004LLU;

	t73 = ((x325+x326)-(x327==x328));

	if (t73 != 9989641648271743LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x329 = 0U;
	int16_t x330 = -1;
	int32_t x331 = INT32_MIN;
	uint16_t x332 = UINT16_MAX;

	t74 = ((x329+x330)-(x331==x332));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x338 = 5753U;
	int32_t x339 = 87;
	int64_t x340 = -1LL;
	uint32_t t75 = 31U;

	t75 = ((x337+x338)-(x339==x340));

	if (t75 != 5860U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x341 = 886227718039791121LL;
	static int32_t x342 = INT32_MAX;
	int64_t x343 = -1602582LL;
	volatile int64_t t76 = 97026LL;

	t76 = ((x341+x342)-(x343==x344));

	if (t76 != 886227720187274768LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x346 = 40;
	volatile int32_t t77 = 31701;

	t77 = ((x345+x346)-(x347==x348));

	if (t77 != 39) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x349 = 11091863342122LLU;
	int8_t x350 = INT8_MAX;
	int8_t x351 = INT8_MAX;
	uint64_t t78 = 9311780441462LLU;

	t78 = ((x349+x350)-(x351==x352));

	if (t78 != 11091863342249LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x353 = 892120065759302167LLU;
	static int32_t x354 = 2401;
	int16_t x355 = 3;
	uint8_t x356 = UINT8_MAX;

	t79 = ((x353+x354)-(x355==x356));

	if (t79 != 892120065759304568LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x357 = 0;
	int64_t x359 = 12193LL;
	volatile uint32_t t80 = UINT32_MAX;

	t80 = ((x357+x358)-(x359==x360));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x361 = 116U;
	int8_t x362 = INT8_MIN;
	int16_t x364 = INT16_MIN;
	uint32_t t81 = 175U;

	t81 = ((x361+x362)-(x363==x364));

	if (t81 != 4294967284U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = INT64_MAX;
	int32_t x366 = 0;
	volatile int8_t x367 = INT8_MIN;
	int64_t t82 = INT64_MAX;

	t82 = ((x365+x366)-(x367==x368));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x370 = -1LL;
	volatile uint16_t x371 = 28138U;
	int8_t x372 = -1;

	t83 = ((x369+x370)-(x371==x372));

	if (t83 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x373 = INT64_MIN;
	static uint16_t x374 = UINT16_MAX;

	t84 = ((x373+x374)-(x375==x376));

	if (t84 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x377 = 1332U;
	uint16_t x378 = 1U;
	volatile int64_t x379 = 438300133139430187LL;
	static int16_t x380 = -1;

	t85 = ((x377+x378)-(x379==x380));

	if (t85 != 1333) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = INT32_MIN;
	volatile uint8_t x382 = 66U;
	volatile uint8_t x383 = 13U;
	int32_t x384 = INT32_MIN;
	volatile int32_t t86 = -2;

	t86 = ((x381+x382)-(x383==x384));

	if (t86 != -2147483582) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x385 = 0U;
	volatile int16_t x386 = INT16_MIN;
	uint16_t x387 = 1U;
	uint8_t x388 = UINT8_MAX;

	t87 = ((x385+x386)-(x387==x388));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x393 = INT32_MAX;
	int16_t x394 = -1;
	int64_t x395 = INT64_MAX;
	int16_t x396 = -1;

	t88 = ((x393+x394)-(x395==x396));

	if (t88 != 2147483646) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x397 = -12;
	int32_t x398 = 1;
	int8_t x400 = -1;
	int32_t t89 = 28054537;

	t89 = ((x397+x398)-(x399==x400));

	if (t89 != -11) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = INT16_MIN;
	static int8_t x402 = INT8_MIN;
	volatile int32_t x403 = INT32_MIN;
	int8_t x404 = 9;

	t90 = ((x401+x402)-(x403==x404));

	if (t90 != -32896) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x410 = 262394127808244LL;
	static uint8_t x411 = 6U;
	int64_t x412 = 444862585798794LL;
	static uint64_t t91 = 176839LLU;

	t91 = ((x409+x410)-(x411==x412));

	if (t91 != 143519447216651780LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x414 = -29544356023385LL;
	int8_t x415 = -1;
	static int16_t x416 = -49;
	volatile int64_t t92 = 99LL;

	t92 = ((x413+x414)-(x415==x416));

	if (t92 != -29544356023372LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x418 = 0;
	volatile int64_t x419 = 1399962113923248500LL;
	volatile int8_t x420 = 3;
	volatile int32_t t93 = -471590206;

	t93 = ((x417+x418)-(x419==x420));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x421 = -159291;
	uint32_t x424 = 41U;
	volatile int32_t t94 = 843272945;

	t94 = ((x421+x422)-(x423==x424));

	if (t94 != -192059) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x425 = -1LL;
	int32_t x426 = 186063076;
	int32_t x427 = 7318;
	int32_t x428 = INT32_MIN;
	int64_t t95 = -241346344LL;

	t95 = ((x425+x426)-(x427==x428));

	if (t95 != 186063075LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x430 = -1926053685817752LL;
	static int32_t x431 = INT32_MIN;
	int8_t x432 = INT8_MIN;
	volatile int64_t t96 = -27596LL;

	t96 = ((x429+x430)-(x431==x432));

	if (t96 != -1926055833301400LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x433 = 731466512U;
	volatile int32_t x435 = -1;
	volatile int16_t x436 = 1;
	uint32_t t97 = 1U;

	t97 = ((x433+x434)-(x435==x436));

	if (t97 != 731465775U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x437 = INT8_MIN;
	static int64_t x438 = 1726LL;
	uint8_t x439 = 2U;
	uint64_t x440 = 10684527379771LLU;
	int64_t t98 = -14364LL;

	t98 = ((x437+x438)-(x439==x440));

	if (t98 != 1598LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x454 = 21;
	int8_t x455 = -1;
	int16_t x456 = INT16_MIN;
	volatile int32_t t99 = 1;

	t99 = ((x453+x454)-(x455==x456));

	if (t99 != 20) { NG(); } else { ; }
	
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

