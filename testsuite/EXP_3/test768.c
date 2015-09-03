#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 799533156LLU;
uint64_t x3 = 2973465245848214LLU;
int64_t x5 = INT64_MIN;
uint64_t x9 = 158LLU;
int64_t x22 = 1809310993426LL;
int8_t x24 = 1;
int32_t x27 = -1;
uint32_t x28 = UINT32_MAX;
uint16_t x30 = 1010U;
int8_t x33 = 46;
int32_t x38 = INT32_MAX;
int8_t x43 = INT8_MIN;
uint8_t x49 = 15U;
uint64_t t12 = 114841LLU;
int64_t x56 = -1LL;
int16_t x57 = -5972;
static int8_t x66 = 0;
int64_t t16 = -123356LL;
static volatile int32_t t19 = -10;
volatile uint32_t x88 = UINT32_MAX;
uint32_t t20 = 1U;
int64_t x90 = INT64_MIN;
int64_t x95 = INT64_MAX;
volatile uint16_t x96 = UINT16_MAX;
uint8_t x104 = 1U;
int64_t x115 = INT64_MIN;
uint32_t x117 = UINT32_MAX;
int64_t x126 = -52LL;
volatile int64_t t29 = -1807LL;
static volatile int32_t x133 = INT32_MAX;
static uint64_t t31 = 5088970LLU;
int16_t x144 = INT16_MIN;
int8_t x149 = -22;
int8_t x162 = -18;
int8_t x166 = INT8_MAX;
int64_t x173 = 2556397616LL;
int64_t x174 = INT64_MIN;
uint64_t x177 = 9623426311917875LLU;
int8_t x180 = INT8_MIN;
int32_t t40 = 11261;
int32_t x183 = -1;
int8_t x185 = -1;
int16_t x188 = INT16_MAX;
uint64_t x191 = UINT64_MAX;
volatile uint32_t t46 = 64236132U;
static int32_t x209 = INT32_MIN;
int8_t x211 = INT8_MIN;
int32_t t48 = -62273735;
static uint32_t x218 = 52049U;
uint8_t x222 = 54U;
int32_t x225 = INT32_MAX;
int64_t t53 = 31588620667LL;
int8_t x244 = INT8_MAX;
int16_t x247 = INT16_MIN;
int32_t x248 = 124;
uint16_t x259 = UINT16_MAX;
static int8_t x271 = INT8_MIN;
static int32_t x274 = -1;
volatile int64_t t63 = -59843448407021843LL;
static int16_t x285 = INT16_MIN;
int32_t x295 = INT32_MAX;
volatile int32_t t67 = 2026494;
int32_t x298 = INT32_MAX;
int8_t x300 = INT8_MIN;
int16_t x301 = -1;
uint32_t x305 = UINT32_MAX;
uint32_t x311 = UINT32_MAX;
int8_t x312 = 9;
volatile int16_t x318 = INT16_MAX;
int32_t t74 = -8;
volatile int32_t t75 = 3589;
int16_t x331 = -1;
static volatile uint8_t x335 = UINT8_MAX;
uint32_t x340 = UINT32_MAX;
int64_t x351 = -127LL;
int8_t x353 = INT8_MIN;
int16_t x361 = INT16_MAX;
int16_t x364 = INT16_MAX;
int64_t x369 = INT64_MAX;
int64_t x378 = -78LL;
uint8_t x379 = UINT8_MAX;
int8_t x380 = INT8_MIN;
int8_t x384 = -22;
static int8_t x399 = 30;
int32_t t93 = -7;
static uint32_t x401 = UINT32_MAX;
int64_t t94 = 445577LL;
int64_t x408 = -5556902660LL;
uint8_t x409 = 49U;


void f0(void) {
	int64_t x2 = INT64_MIN;
	uint32_t x4 = 2107971U;
	volatile uint64_t t0 = 5951LLU;

	t0 = ((x1==x2)+(x3%x4));

	if (t0 != 788528LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -325573133;
	int8_t x7 = -1;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -218096;

	t1 = ((x5==x6)+(x7%x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	int16_t x11 = INT16_MIN;
	uint64_t x12 = 87LLU;
	static uint64_t t2 = 3794116003119891LLU;

	t2 = ((x9==x10)+(x11%x12));

	if (t2 != 26LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 8U;
	static int64_t x14 = INT64_MIN;
	int16_t x15 = -1;
	static volatile int64_t x16 = INT64_MAX;
	volatile int64_t t3 = -316633822024LL;

	t3 = ((x13==x14)+(x15%x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -108896;
	uint64_t x18 = 13LLU;
	uint16_t x19 = 36U;
	static int64_t x20 = INT64_MIN;
	int64_t t4 = -428368084840352LL;

	t4 = ((x17==x18)+(x19%x20));

	if (t4 != 36LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1287;
	int32_t x23 = 5;
	static int32_t t5 = 0;

	t5 = ((x21==x22)+(x23%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	uint64_t x26 = 606671470LLU;
	static volatile uint32_t t6 = 1630U;

	t6 = ((x25==x26)+(x27%x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	int16_t x31 = 127;
	int16_t x32 = -2965;
	volatile int32_t t7 = 10624904;

	t7 = ((x29==x30)+(x31%x32));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MAX;
	int16_t x35 = -3571;
	int32_t x36 = INT32_MAX;
	volatile int32_t t8 = 23159;

	t8 = ((x33==x34)+(x35%x36));

	if (t8 != -3571) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	int16_t x39 = INT16_MIN;
	uint8_t x40 = 65U;
	static volatile int32_t t9 = -1;

	t9 = ((x37==x38)+(x39%x40));

	if (t9 != -8) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	uint32_t x42 = 29298U;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t10 = 29229LLU;

	t10 = ((x41==x42)+(x43%x44));

	if (t10 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 32747596U;
	static int16_t x46 = -34;
	static int16_t x47 = -4;
	static uint8_t x48 = UINT8_MAX;
	static int32_t t11 = -506118531;

	t11 = ((x45==x46)+(x47%x48));

	if (t11 != -4) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	static volatile uint64_t x51 = UINT64_MAX;
	static int32_t x52 = -81007964;

	t12 = ((x49==x50)+(x51%x52));

	if (t12 != 81007963LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int64_t x54 = 786064933434463LL;
	volatile int64_t x55 = -1LL;
	volatile int64_t t13 = -656542770992408LL;

	t13 = ((x53==x54)+(x55%x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = 301194LLU;
	static int8_t x59 = 2;
	int8_t x60 = -1;
	volatile int32_t t14 = 3892;

	t14 = ((x57==x58)+(x59%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = 13286U;
	int32_t x62 = -1;
	int8_t x63 = INT8_MIN;
	static uint16_t x64 = UINT16_MAX;
	static int32_t t15 = -1;

	t15 = ((x61==x62)+(x63%x64));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x65 = 494956568U;
	int64_t x67 = -1LL;
	int32_t x68 = INT32_MIN;

	t16 = ((x65==x66)+(x67%x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	int8_t x74 = 0;
	int32_t x75 = -1;
	int8_t x76 = -9;
	volatile int32_t t17 = -117271;

	t17 = ((x73==x74)+(x75%x76));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = INT64_MAX;
	static uint16_t x78 = UINT16_MAX;
	int8_t x79 = -1;
	int16_t x80 = INT16_MAX;
	volatile int32_t t18 = -2;

	t18 = ((x77==x78)+(x79%x80));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	volatile int64_t x82 = 7564269197LL;
	volatile int8_t x83 = -41;
	volatile int32_t x84 = 2851;

	t19 = ((x81==x82)+(x83%x84));

	if (t19 != -41) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = INT16_MIN;
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = INT16_MAX;

	t20 = ((x85==x86)+(x87%x88));

	if (t20 != 32767U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = INT16_MIN;
	int64_t x91 = INT64_MIN;
	uint64_t x92 = 27589820028404132LLU;
	uint64_t t21 = 20500LLU;

	t21 = ((x89==x90)+(x91%x92));

	if (t21 != 8372147367795720LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = UINT8_MAX;
	int32_t x94 = INT32_MAX;
	int64_t t22 = 23543682574894518LL;

	t22 = ((x93==x94)+(x95%x96));

	if (t22 != 32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x101 = 13U;
	static int32_t x102 = 2131;
	volatile uint16_t x103 = 25779U;
	int32_t t23 = -1602154;

	t23 = ((x101==x102)+(x103%x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 1U;
	int16_t x106 = INT16_MIN;
	volatile int16_t x107 = INT16_MIN;
	int16_t x108 = -1;
	int32_t t24 = 1;

	t24 = ((x105==x106)+(x107%x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = 5343785U;
	volatile int16_t x114 = INT16_MIN;
	int64_t x116 = INT64_MIN;
	int64_t t25 = -34174004682LL;

	t25 = ((x113==x114)+(x115%x116));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = INT8_MAX;
	uint32_t x120 = 325218085U;
	volatile uint32_t t26 = 1900548U;

	t26 = ((x117==x118)+(x119%x120));

	if (t26 != 128U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = 15U;
	int64_t x122 = -1LL;
	volatile int64_t x123 = -1LL;
	uint8_t x124 = 20U;
	static volatile int64_t t27 = -1854190132864292717LL;

	t27 = ((x121==x122)+(x123%x124));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 127729LLU;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MAX;
	static volatile int32_t t28 = -42489;

	t28 = ((x125==x126)+(x127%x128));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = 0U;
	uint64_t x130 = 8LLU;
	int32_t x131 = INT32_MAX;
	int64_t x132 = -1LL;

	t29 = ((x129==x130)+(x131%x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x134 = UINT32_MAX;
	uint64_t x135 = UINT64_MAX;
	uint32_t x136 = 2189U;
	static uint64_t t30 = 1054318294730487LLU;

	t30 = ((x133==x134)+(x135%x136));

	if (t30 != 125LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = 1473863U;
	volatile uint8_t x138 = UINT8_MAX;
	volatile uint64_t x139 = 22420145854416LLU;
	int32_t x140 = INT32_MIN;

	t31 = ((x137==x138)+(x139%x140));

	if (t31 != 22420145854416LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = UINT8_MAX;
	int32_t x142 = INT32_MIN;
	static uint16_t x143 = UINT16_MAX;
	volatile int32_t t32 = -200751;

	t32 = ((x141==x142)+(x143%x144));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x150 = INT32_MAX;
	static volatile int32_t x151 = INT32_MAX;
	volatile uint16_t x152 = UINT16_MAX;
	volatile int32_t t33 = 107518299;

	t33 = ((x149==x150)+(x151%x152));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = -1;
	static int8_t x155 = -6;
	int32_t x156 = 75421999;
	volatile int32_t t34 = 482558395;

	t34 = ((x153==x154)+(x155%x156));

	if (t34 != -6) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x157 = INT8_MIN;
	static uint8_t x158 = 15U;
	uint8_t x159 = UINT8_MAX;
	static volatile int16_t x160 = INT16_MIN;
	int32_t t35 = 67065874;

	t35 = ((x157==x158)+(x159%x160));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = -28;
	int64_t x163 = INT64_MAX;
	int64_t x164 = INT64_MAX;
	volatile int64_t t36 = 688093998114LL;

	t36 = ((x161==x162)+(x163%x164));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = 1;
	static volatile int32_t x167 = INT32_MIN;
	int64_t x168 = -3664738736LL;
	volatile int64_t t37 = 1074756652107800819LL;

	t37 = ((x165==x166)+(x167%x168));

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	static int64_t x170 = INT64_MIN;
	uint64_t x171 = 5LLU;
	int8_t x172 = INT8_MIN;
	volatile uint64_t t38 = 3247938897409LLU;

	t38 = ((x169==x170)+(x171%x172));

	if (t38 != 5LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x175 = 13U;
	volatile uint8_t x176 = 1U;
	volatile uint32_t t39 = 185U;

	t39 = ((x173==x174)+(x175%x176));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MIN;

	t40 = ((x177==x178)+(x179%x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = INT16_MAX;
	static int32_t x182 = INT32_MIN;
	volatile int64_t x184 = 5LL;
	int64_t t41 = 4306047754LL;

	t41 = ((x181==x182)+(x183%x184));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x186 = INT8_MIN;
	int16_t x187 = 3947;
	volatile int32_t t42 = 1756717;

	t42 = ((x185==x186)+(x187%x188));

	if (t42 != 3947) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -130326;
	volatile int32_t x190 = INT32_MIN;
	uint8_t x192 = UINT8_MAX;
	volatile uint64_t t43 = 314996866320556966LLU;

	t43 = ((x189==x190)+(x191%x192));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = -1;
	uint8_t x194 = 7U;
	uint32_t x195 = 20U;
	uint16_t x196 = UINT16_MAX;
	uint32_t t44 = 117U;

	t44 = ((x193==x194)+(x195%x196));

	if (t44 != 20U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = 49;
	int64_t x198 = -1LL;
	int8_t x199 = -1;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t45 = 18;

	t45 = ((x197==x198)+(x199%x200));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = UINT64_MAX;
	uint32_t x202 = 563U;
	int16_t x203 = INT16_MAX;
	uint32_t x204 = 3120800U;

	t46 = ((x201==x202)+(x203%x204));

	if (t46 != 32767U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x205 = 101U;
	uint16_t x206 = UINT16_MAX;
	volatile int8_t x207 = INT8_MIN;
	static int16_t x208 = -1;
	volatile int32_t t47 = -93721495;

	t47 = ((x205==x206)+(x207%x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x210 = INT64_MAX;
	int16_t x212 = INT16_MIN;

	t48 = ((x209==x210)+(x211%x212));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x213 = INT8_MAX;
	int32_t x214 = INT32_MIN;
	int16_t x215 = -1;
	uint16_t x216 = UINT16_MAX;
	static int32_t t49 = -68;

	t49 = ((x213==x214)+(x215%x216));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x217 = INT32_MIN;
	volatile uint64_t x219 = 23724LLU;
	int8_t x220 = -1;
	uint64_t t50 = 132297682574LLU;

	t50 = ((x217==x218)+(x219%x220));

	if (t50 != 23724LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MAX;
	int16_t x223 = -1;
	int8_t x224 = 4;
	static volatile int32_t t51 = -152031067;

	t51 = ((x221==x222)+(x223%x224));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x226 = 6;
	int32_t x227 = -1;
	int32_t x228 = -1;
	volatile int32_t t52 = 179573258;

	t52 = ((x225==x226)+(x227%x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = INT16_MIN;
	uint32_t x234 = 125036022U;
	static int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MIN;

	t53 = ((x233==x234)+(x235%x236));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = 1054;
	int8_t x238 = INT8_MIN;
	int8_t x239 = -1;
	int8_t x240 = INT8_MIN;
	static volatile int32_t t54 = 648;

	t54 = ((x237==x238)+(x239%x240));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = -1;
	int64_t x242 = INT64_MAX;
	int16_t x243 = INT16_MIN;
	volatile int32_t t55 = -25712343;

	t55 = ((x241==x242)+(x243%x244));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x245 = 58U;
	uint32_t x246 = 76U;
	static volatile int32_t t56 = -897072684;

	t56 = ((x245==x246)+(x247%x248));

	if (t56 != -32) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = 245LLU;
	int8_t x250 = INT8_MAX;
	static int64_t x251 = INT64_MIN;
	int32_t x252 = -1;
	static volatile int64_t t57 = 1576882704685453055LL;

	t57 = ((x249==x250)+(x251%x252));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x253 = -1;
	static int8_t x254 = INT8_MIN;
	uint16_t x255 = 0U;
	int32_t x256 = INT32_MAX;
	int32_t t58 = 1;

	t58 = ((x253==x254)+(x255%x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = INT16_MAX;
	uint8_t x258 = 4U;
	uint8_t x260 = UINT8_MAX;
	int32_t t59 = -901;

	t59 = ((x257==x258)+(x259%x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = 7;
	int16_t x266 = 2;
	int16_t x267 = 10;
	int8_t x268 = INT8_MIN;
	int32_t t60 = -3555;

	t60 = ((x265==x266)+(x267%x268));

	if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x269 = -3;
	int16_t x270 = INT16_MAX;
	static int8_t x272 = -3;
	volatile int32_t t61 = 48514;

	t61 = ((x269==x270)+(x271%x272));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x273 = INT32_MIN;
	uint8_t x275 = UINT8_MAX;
	uint8_t x276 = 18U;
	int32_t t62 = 0;

	t62 = ((x273==x274)+(x275%x276));

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MIN;
	int64_t x279 = -1LL;
	int8_t x280 = INT8_MAX;

	t63 = ((x277==x278)+(x279%x280));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x281 = INT32_MAX;
	static uint32_t x282 = 58U;
	int16_t x283 = INT16_MIN;
	static int64_t x284 = INT64_MIN;
	int64_t t64 = 34528LL;

	t64 = ((x281==x282)+(x283%x284));

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x286 = UINT64_MAX;
	volatile int64_t x287 = -1LL;
	int8_t x288 = -11;
	int64_t t65 = 3915LL;

	t65 = ((x285==x286)+(x287%x288));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = INT64_MIN;
	volatile uint16_t x290 = UINT16_MAX;
	volatile int32_t x291 = 27;
	int64_t x292 = -41LL;
	volatile int64_t t66 = -1574767LL;

	t66 = ((x289==x290)+(x291%x292));

	if (t66 != 27LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = INT16_MAX;
	uint64_t x294 = 327221068130242735LLU;
	volatile int8_t x296 = INT8_MIN;

	t67 = ((x293==x294)+(x295%x296));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x297 = INT16_MAX;
	uint64_t x299 = 270833LLU;
	static volatile uint64_t t68 = 83129117LLU;

	t68 = ((x297==x298)+(x299%x300));

	if (t68 != 270833LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x302 = INT16_MIN;
	static int16_t x303 = INT16_MIN;
	static int16_t x304 = INT16_MIN;
	volatile int32_t t69 = 40092077;

	t69 = ((x301==x302)+(x303%x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x306 = INT64_MIN;
	volatile int64_t x307 = INT64_MIN;
	int64_t x308 = 563311968432233434LL;
	volatile int64_t t70 = 6036251LL;

	t70 = ((x305==x306)+(x307%x308));

	if (t70 != -210380541939040864LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x309 = 320693LLU;
	volatile int16_t x310 = INT16_MIN;
	uint32_t t71 = 108094148U;

	t71 = ((x309==x310)+(x311%x312));

	if (t71 != 3U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x313 = 11549909322LLU;
	int32_t x314 = INT32_MIN;
	static int64_t x315 = -88730901825521071LL;
	int32_t x316 = -1;
	int64_t t72 = -27434547332893022LL;

	t72 = ((x313==x314)+(x315%x316));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = -2;
	uint32_t x319 = UINT32_MAX;
	int8_t x320 = INT8_MIN;
	uint32_t t73 = 1303739091U;

	t73 = ((x317==x318)+(x319%x320));

	if (t73 != 127U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = INT8_MAX;
	int32_t x322 = INT32_MAX;
	uint8_t x323 = 15U;
	static uint8_t x324 = 50U;

	t74 = ((x321==x322)+(x323%x324));

	if (t74 != 15) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x325 = INT64_MAX;
	int16_t x326 = -1;
	static int16_t x327 = INT16_MAX;
	uint16_t x328 = UINT16_MAX;

	t75 = ((x325==x326)+(x327%x328));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x329 = -1189382392LL;
	static int64_t x330 = INT64_MAX;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t76 = 689U;

	t76 = ((x329==x330)+(x331%x332));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x333 = -1;
	int32_t x334 = -297;
	uint16_t x336 = 3857U;
	int32_t t77 = -852434920;

	t77 = ((x333==x334)+(x335%x336));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x337 = -1LL;
	int32_t x338 = -1;
	static int32_t x339 = INT32_MIN;
	uint32_t t78 = 351448689U;

	t78 = ((x337==x338)+(x339%x340));

	if (t78 != 2147483649U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = INT16_MIN;
	volatile uint16_t x342 = UINT16_MAX;
	volatile uint64_t x343 = 4490351465152302LLU;
	volatile int8_t x344 = -11;
	static volatile uint64_t t79 = 1542LLU;

	t79 = ((x341==x342)+(x343%x344));

	if (t79 != 4490351465152302LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x345 = 763;
	volatile int64_t x346 = INT64_MIN;
	volatile uint64_t x347 = 32050840046406516LLU;
	static int64_t x348 = -1LL;
	uint64_t t80 = 19LLU;

	t80 = ((x345==x346)+(x347%x348));

	if (t80 != 32050840046406516LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x349 = -1;
	int8_t x350 = INT8_MIN;
	int16_t x352 = 163;
	int64_t t81 = -206946576983LL;

	t81 = ((x349==x350)+(x351%x352));

	if (t81 != -127LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x354 = INT32_MAX;
	static int16_t x355 = INT16_MIN;
	static int64_t x356 = INT64_MAX;
	int64_t t82 = 439586LL;

	t82 = ((x353==x354)+(x355%x356));

	if (t82 != -32768LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x357 = INT32_MIN;
	volatile uint8_t x358 = UINT8_MAX;
	uint8_t x359 = UINT8_MAX;
	int32_t x360 = INT32_MAX;
	int32_t t83 = 124007578;

	t83 = ((x357==x358)+(x359%x360));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x362 = 833;
	uint64_t x363 = 2743580389699070LLU;
	volatile uint64_t t84 = 81030863900809925LLU;

	t84 = ((x361==x362)+(x363%x364));

	if (t84 != 6263LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x365 = UINT16_MAX;
	volatile int16_t x366 = INT16_MAX;
	uint64_t x367 = 7LLU;
	uint8_t x368 = UINT8_MAX;
	volatile uint64_t t85 = 25904579696233321LLU;

	t85 = ((x365==x366)+(x367%x368));

	if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x370 = 313628878339897LLU;
	int32_t x371 = INT32_MIN;
	volatile int16_t x372 = -1;
	int32_t t86 = -1604;

	t86 = ((x369==x370)+(x371%x372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x373 = UINT64_MAX;
	int32_t x374 = -131326;
	int16_t x375 = INT16_MAX;
	volatile int8_t x376 = -15;
	static int32_t t87 = -397733;

	t87 = ((x373==x374)+(x375%x376));

	if (t87 != 7) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x377 = 461U;
	volatile int32_t t88 = -110;

	t88 = ((x377==x378)+(x379%x380));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x381 = 2961U;
	volatile int64_t x382 = INT64_MAX;
	uint64_t x383 = 216301119033297LLU;
	volatile uint64_t t89 = 66044422LLU;

	t89 = ((x381==x382)+(x383%x384));

	if (t89 != 216301119033297LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x385 = 37U;
	uint16_t x386 = 16125U;
	int64_t x387 = 382871975914189315LL;
	int16_t x388 = -2003;
	int64_t t90 = 32684524726LL;

	t90 = ((x385==x386)+(x387%x388));

	if (t90 != 306LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x389 = 1811575563294207LLU;
	volatile uint8_t x390 = 120U;
	int16_t x391 = -24;
	volatile int64_t x392 = -373116779202LL;
	volatile int64_t t91 = -4150685LL;

	t91 = ((x389==x390)+(x391%x392));

	if (t91 != -24LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x393 = UINT16_MAX;
	int32_t x394 = INT32_MAX;
	static int8_t x395 = 36;
	static int32_t x396 = -1;
	static volatile int32_t t92 = 12;

	t92 = ((x393==x394)+(x395%x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x397 = 2LLU;
	uint16_t x398 = 1508U;
	static int32_t x400 = INT32_MAX;

	t93 = ((x397==x398)+(x399%x400));

	if (t93 != 30) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x402 = INT8_MIN;
	volatile int64_t x403 = INT64_MIN;
	int32_t x404 = INT32_MIN;

	t94 = ((x401==x402)+(x403%x404));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = INT8_MIN;
	int32_t x406 = 25958364;
	int32_t x407 = -1;
	int64_t t95 = 1428LL;

	t95 = ((x405==x406)+(x407%x408));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x410 = INT8_MAX;
	static int16_t x411 = 59;
	volatile int64_t x412 = 663725982LL;
	int64_t t96 = 72670693994LL;

	t96 = ((x409==x410)+(x411%x412));

	if (t96 != 59LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = INT64_MIN;
	uint8_t x414 = 19U;
	int64_t x415 = INT64_MIN;
	int64_t x416 = 7391LL;
	int64_t t97 = 16817395750310464LL;

	t97 = ((x413==x414)+(x415%x416));

	if (t97 != -3780LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x417 = INT16_MIN;
	int8_t x418 = -1;
	int16_t x419 = INT16_MAX;
	static int32_t x420 = -1;
	int32_t t98 = 18747392;

	t98 = ((x417==x418)+(x419%x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x421 = -1;
	static uint16_t x422 = 86U;
	int8_t x423 = INT8_MIN;
	static int64_t x424 = INT64_MIN;
	volatile int64_t t99 = 5335LL;

	t99 = ((x421==x422)+(x423%x424));

	if (t99 != -128LL) { NG(); } else { ; }
	
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

