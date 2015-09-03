#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
int16_t x3 = INT16_MIN;
int16_t x12 = INT16_MIN;
int32_t x15 = -28470;
int64_t x16 = -22891803LL;
static uint16_t x19 = UINT16_MAX;
int32_t x24 = 10;
static int32_t x29 = 1;
volatile uint64_t t7 = 3603749LLU;
static uint16_t x35 = 3U;
static int32_t x37 = -1;
int32_t x38 = INT32_MIN;
int32_t t10 = -3;
int16_t x48 = -1;
volatile int32_t x51 = INT32_MIN;
uint32_t t12 = 1435388112U;
static int32_t x57 = -1;
int32_t x60 = -181170;
static int32_t t14 = 35821;
int32_t x63 = -7728968;
int32_t x64 = INT32_MAX;
int8_t x71 = INT8_MIN;
int8_t x81 = -2;
static int64_t x86 = INT64_MAX;
volatile int32_t x87 = INT32_MAX;
int64_t x89 = 70LL;
volatile int64_t t22 = -2721978LL;
int32_t t24 = 82;
int8_t x101 = INT8_MIN;
uint32_t x102 = UINT32_MAX;
volatile uint32_t t25 = 283561U;
volatile int8_t x107 = INT8_MAX;
volatile uint32_t t26 = 28499U;
int64_t x113 = -1LL;
uint8_t x114 = 22U;
int32_t x116 = INT32_MIN;
int16_t x121 = -3087;
static int8_t x122 = INT8_MIN;
int32_t t32 = -50;
uint64_t x144 = 1227647071530649LLU;
uint16_t x145 = UINT16_MAX;
int32_t x148 = 624510;
volatile int64_t x156 = INT64_MIN;
volatile int64_t t38 = 1LL;
volatile int64_t x162 = INT64_MIN;
volatile int64_t t40 = -1LL;
volatile int64_t x172 = INT64_MAX;
int32_t x177 = -1;
int64_t t45 = -1LL;
static uint64_t t46 = 1043736503556450LLU;
int64_t x197 = 25429535465LL;
static int32_t x209 = INT32_MIN;
int32_t t55 = 1814;
uint8_t x229 = UINT8_MAX;
int32_t x232 = INT32_MIN;
uint8_t x237 = UINT8_MAX;
int16_t x238 = INT16_MAX;
int64_t x242 = -531044844279LL;
static int64_t x244 = INT64_MAX;
int64_t x245 = INT64_MIN;
volatile int32_t x252 = -1;
static uint8_t x254 = UINT8_MAX;
uint16_t x259 = UINT16_MAX;
uint8_t x264 = 54U;
int8_t x269 = INT8_MIN;
static int32_t t68 = -1;
volatile int8_t x278 = INT8_MIN;
volatile int8_t x290 = INT8_MIN;
int64_t x291 = INT64_MAX;
int32_t t72 = 369950974;
int32_t x293 = INT32_MAX;
static volatile uint8_t x297 = 1U;
int64_t x303 = -1LL;
volatile int32_t t75 = -77466747;
static volatile int32_t t79 = 1;
uint8_t x326 = 12U;
int8_t x329 = INT8_MIN;
static int64_t x330 = INT64_MAX;
int64_t x331 = INT64_MIN;
int16_t x333 = INT16_MIN;
static volatile int8_t x335 = 13;
int32_t x348 = INT32_MAX;
volatile int64_t t87 = -1670670031872506LL;
volatile int32_t t88 = -903;
volatile int16_t x359 = -753;
uint32_t x360 = 126517936U;
int32_t x362 = INT32_MIN;
static volatile int64_t x367 = INT64_MIN;
static int16_t x371 = INT16_MIN;
uint64_t t92 = 275034393190288051LLU;
volatile int64_t t94 = -2557348313784702009LL;
volatile int64_t t96 = 5825547280LL;
int16_t x390 = -1;
int64_t t98 = -11443559759074278LL;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 0;

	t0 = ((x1&x2)+(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 1915400LLU;
	volatile uint16_t x6 = UINT16_MAX;
	int8_t x7 = -3;
	int16_t x8 = INT16_MAX;
	volatile uint64_t t1 = 2650573LLU;

	t1 = ((x5&x6)+(x7<=x8));

	if (t1 != 14857LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = 104;
	int32_t x10 = -79343;
	int16_t x11 = 0;
	static int32_t t2 = -995266;

	t2 = ((x9&x10)+(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int8_t x14 = INT8_MAX;
	static volatile int32_t t3 = -77341195;

	t3 = ((x13&x14)+(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 113U;
	volatile int32_t x18 = 60666858;
	int8_t x20 = -40;
	int32_t t4 = -8913;

	t4 = ((x17&x18)+(x19<=x20));

	if (t4 != 96) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	static int32_t x22 = INT32_MIN;
	int32_t x23 = -1;
	volatile int64_t t5 = 51951041983034961LL;

	t5 = ((x21&x22)+(x23<=x24));

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 93817483;
	int16_t x26 = -1;
	uint8_t x27 = UINT8_MAX;
	uint16_t x28 = UINT16_MAX;
	int32_t t6 = 223118;

	t6 = ((x25&x26)+(x27<=x28));

	if (t6 != 93817484) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x30 = UINT64_MAX;
	int64_t x31 = -1461815007LL;
	int32_t x32 = INT32_MIN;

	t7 = ((x29&x30)+(x31<=x32));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 540;
	static uint64_t x34 = 819446751LLU;
	uint8_t x36 = UINT8_MAX;
	static uint64_t t8 = 906LLU;

	t8 = ((x33&x34)+(x35<=x36));

	if (t8 != 541LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x39 = INT16_MIN;
	int8_t x40 = -1;
	int32_t t9 = -52;

	t9 = ((x37&x38)+(x39<=x40));

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = -1;
	int64_t x43 = INT64_MAX;
	static uint8_t x44 = 0U;

	t10 = ((x41&x42)+(x43<=x44));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MIN;
	int64_t t11 = 1674174LL;

	t11 = ((x45&x46)+(x47<=x48));

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -177;
	uint32_t x50 = 4U;
	uint8_t x52 = 0U;

	t12 = ((x49&x50)+(x51<=x52));

	if (t12 != 5U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	volatile uint8_t x54 = 0U;
	volatile int8_t x55 = INT8_MAX;
	volatile int8_t x56 = INT8_MIN;
	uint32_t t13 = 1U;

	t13 = ((x53&x54)+(x55<=x56));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	static int32_t x59 = 1097;

	t14 = ((x57&x58)+(x59<=x60));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 2892168LLU;
	volatile uint32_t x62 = 326U;
	uint64_t t15 = 123604629356LLU;

	t15 = ((x61&x62)+(x63<=x64));

	if (t15 != 257LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	uint8_t x66 = 5U;
	static volatile int16_t x67 = -1;
	volatile uint64_t x68 = 1786298LLU;
	int32_t t16 = -7551;

	t16 = ((x65&x66)+(x67<=x68));

	if (t16 != 5) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 5U;
	uint16_t x70 = UINT16_MAX;
	int8_t x72 = -1;
	volatile int32_t t17 = -9;

	t17 = ((x69&x70)+(x71<=x72));

	if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 5368;
	int8_t x74 = 0;
	int16_t x75 = INT16_MIN;
	int8_t x76 = INT8_MIN;
	int32_t t18 = 578849468;

	t18 = ((x73&x74)+(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MIN;
	uint8_t x78 = UINT8_MAX;
	volatile uint8_t x79 = UINT8_MAX;
	int8_t x80 = -1;
	static volatile int64_t t19 = -3558601188LL;

	t19 = ((x77&x78)+(x79<=x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MIN;
	static uint64_t x83 = 136938LLU;
	int16_t x84 = INT16_MIN;
	int32_t t20 = -5993873;

	t20 = ((x81&x82)+(x83<=x84));

	if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	int8_t x88 = -1;
	int64_t t21 = -2540787211406160114LL;

	t21 = ((x85&x86)+(x87<=x88));

	if (t21 != 4294967295LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = 576U;
	int32_t x91 = -1;
	int16_t x92 = INT16_MAX;

	t22 = ((x89&x90)+(x91<=x92));

	if (t22 != 65LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int16_t x94 = INT16_MIN;
	uint8_t x95 = 3U;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = 3610490;

	t23 = ((x93&x94)+(x95<=x96));

	if (t23 != 32769) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	static int8_t x98 = -31;
	volatile uint8_t x99 = 8U;
	volatile int64_t x100 = -52365LL;

	t24 = ((x97&x98)+(x99<=x100));

	if (t24 != 2147483617) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x103 = 61U;
	int64_t x104 = INT64_MIN;

	t25 = ((x101&x102)+(x103<=x104));

	if (t25 != 4294967168U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	volatile int8_t x106 = 60;
	int8_t x108 = INT8_MIN;

	t26 = ((x105&x106)+(x107<=x108));

	if (t26 != 60U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 6;
	static uint32_t x110 = 2147914U;
	volatile int32_t x111 = INT32_MIN;
	uint16_t x112 = 0U;
	volatile uint32_t t27 = 395U;

	t27 = ((x109&x110)+(x111<=x112));

	if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x115 = INT8_MAX;
	int64_t t28 = -50132462952LL;

	t28 = ((x113&x114)+(x115<=x116));

	if (t28 != 22LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 5233;
	volatile int8_t x118 = INT8_MAX;
	uint32_t x119 = 461U;
	volatile int64_t x120 = INT64_MIN;
	static int32_t t29 = 3;

	t29 = ((x117&x118)+(x119<=x120));

	if (t29 != 113) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x123 = INT16_MAX;
	volatile int16_t x124 = -112;
	int32_t t30 = 3;

	t30 = ((x121&x122)+(x123<=x124));

	if (t30 != -3200) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 6675LL;
	int16_t x126 = -1;
	static int64_t x127 = INT64_MIN;
	uint32_t x128 = UINT32_MAX;
	volatile int64_t t31 = 262710861812715749LL;

	t31 = ((x125&x126)+(x127<=x128));

	if (t31 != 6676LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = 860639;
	static volatile int16_t x130 = -1;
	volatile int16_t x131 = 5;
	int32_t x132 = INT32_MIN;

	t32 = ((x129&x130)+(x131<=x132));

	if (t32 != 860639) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint16_t x134 = 3U;
	int32_t x135 = -1;
	uint32_t x136 = UINT32_MAX;
	int32_t t33 = 65950662;

	t33 = ((x133&x134)+(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 100U;
	int16_t x138 = INT16_MIN;
	int64_t x139 = INT64_MIN;
	volatile uint64_t x140 = UINT64_MAX;
	volatile int32_t t34 = 16561229;

	t34 = ((x137&x138)+(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 2U;
	uint8_t x142 = UINT8_MAX;
	int16_t x143 = -1;
	volatile int32_t t35 = 695247513;

	t35 = ((x141&x142)+(x143<=x144));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = INT8_MIN;
	uint64_t t36 = 871LLU;

	t36 = ((x145&x146)+(x147<=x148));

	if (t36 != 65536LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = UINT32_MAX;
	volatile int32_t x150 = INT32_MIN;
	int32_t x151 = INT32_MAX;
	static volatile int64_t x152 = -252LL;
	volatile uint32_t t37 = 521U;

	t37 = ((x149&x150)+(x151<=x152));

	if (t37 != 2147483648U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = -1;
	int64_t x154 = -1LL;
	static int64_t x155 = -6623LL;

	t38 = ((x153&x154)+(x155<=x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 936951LLU;
	int32_t x158 = INT32_MAX;
	uint64_t x159 = 2390099906542859LLU;
	int16_t x160 = INT16_MIN;
	uint64_t t39 = 356450LLU;

	t39 = ((x157&x158)+(x159<=x160));

	if (t39 != 936952LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int16_t x163 = INT16_MIN;
	int8_t x164 = 1;

	t40 = ((x161&x162)+(x163<=x164));

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = 203594184U;
	static int32_t x166 = INT32_MIN;
	int8_t x167 = 42;
	int32_t x168 = -1;
	volatile uint32_t t41 = 29728864U;

	t41 = ((x165&x166)+(x167<=x168));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = INT16_MIN;
	static int32_t x170 = INT32_MAX;
	uint64_t x171 = UINT64_MAX;
	int32_t t42 = 79366569;

	t42 = ((x169&x170)+(x171<=x172));

	if (t42 != 2147450880) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 3305LLU;
	uint8_t x174 = 25U;
	volatile uint8_t x175 = UINT8_MAX;
	uint32_t x176 = UINT32_MAX;
	volatile uint64_t t43 = 10LLU;

	t43 = ((x173&x174)+(x175<=x176));

	if (t43 != 10LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = -1LL;
	int16_t x179 = INT16_MAX;
	int8_t x180 = -6;
	volatile int64_t t44 = 190200LL;

	t44 = ((x177&x178)+(x179<=x180));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x182 = -1LL;
	static int32_t x183 = INT32_MIN;
	int8_t x184 = 1;

	t45 = ((x181&x182)+(x183<=x184));

	if (t45 != 4294967296LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = UINT64_MAX;
	int16_t x186 = INT16_MAX;
	volatile int64_t x187 = INT64_MIN;
	static int16_t x188 = -1;

	t46 = ((x185&x186)+(x187<=x188));

	if (t46 != 32768LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MIN;
	uint16_t x190 = UINT16_MAX;
	int8_t x191 = -1;
	int64_t x192 = INT64_MAX;
	static int32_t t47 = -1;

	t47 = ((x189&x190)+(x191<=x192));

	if (t47 != 32769) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	int64_t x194 = -1LL;
	int16_t x195 = INT16_MIN;
	int16_t x196 = 23;
	int64_t t48 = 26190960705LL;

	t48 = ((x193&x194)+(x195<=x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x198 = UINT8_MAX;
	volatile uint64_t x199 = UINT64_MAX;
	uint16_t x200 = 1U;
	static volatile int64_t t49 = -6869512LL;

	t49 = ((x197&x198)+(x199<=x200));

	if (t49 != 233LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 7292;
	int32_t x202 = INT32_MIN;
	volatile int32_t x203 = -656664;
	static int16_t x204 = -1;
	int32_t t50 = -2;

	t50 = ((x201&x202)+(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 367345192U;
	volatile uint8_t x206 = 7U;
	int16_t x207 = -1;
	uint16_t x208 = 29606U;
	static volatile uint32_t t51 = 199973U;

	t51 = ((x205&x206)+(x207<=x208));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 26120859472923LLU;
	int64_t x211 = INT64_MAX;
	int8_t x212 = INT8_MIN;
	volatile uint64_t t52 = 352LLU;

	t52 = ((x209&x210)+(x211<=x212));

	if (t52 != 26119843610624LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -138673957;
	int8_t x214 = INT8_MIN;
	uint64_t x215 = 6176337280660742908LLU;
	int32_t x216 = INT32_MAX;
	static int32_t t53 = -1350;

	t53 = ((x213&x214)+(x215<=x216));

	if (t53 != -138674048) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 6U;
	uint8_t x218 = 78U;
	int16_t x219 = 28;
	int8_t x220 = INT8_MIN;
	int32_t t54 = 119184513;

	t54 = ((x217&x218)+(x219<=x220));

	if (t54 != 6) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	static uint16_t x222 = 0U;
	static uint8_t x223 = 120U;
	static volatile int16_t x224 = INT16_MIN;

	t55 = ((x221&x222)+(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = -1LL;
	int8_t x226 = INT8_MIN;
	uint8_t x227 = UINT8_MAX;
	uint16_t x228 = 50U;
	static int64_t t56 = -488LL;

	t56 = ((x225&x226)+(x227<=x228));

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = UINT16_MAX;
	int32_t x231 = 2;
	int32_t t57 = -173929;

	t57 = ((x229&x230)+(x231<=x232));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 1602U;
	volatile int64_t x234 = -1LL;
	int32_t x235 = -176;
	volatile uint32_t x236 = 195560728U;
	volatile int64_t t58 = -1030913LL;

	t58 = ((x233&x234)+(x235<=x236));

	if (t58 != 1602LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x239 = -1;
	int64_t x240 = INT64_MAX;
	static volatile int32_t t59 = -5294;

	t59 = ((x237&x238)+(x239<=x240));

	if (t59 != 256) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x241 = 222042591U;
	uint8_t x243 = 11U;
	int64_t t60 = 844504LL;

	t60 = ((x241&x242)+(x243<=x244));

	if (t60 != 151001354LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = 51;
	int16_t x247 = -1;
	volatile int64_t x248 = -1LL;
	int64_t t61 = 100057986532839171LL;

	t61 = ((x245&x246)+(x247<=x248));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MIN;
	volatile uint64_t x250 = UINT64_MAX;
	int8_t x251 = INT8_MIN;
	volatile uint64_t t62 = 1026191538364LLU;

	t62 = ((x249&x250)+(x251<=x252));

	if (t62 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	static int16_t x255 = INT16_MIN;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t63 = -84786059;

	t63 = ((x253&x254)+(x255<=x256));

	if (t63 != 256) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = 14459801138046748LL;
	int32_t x258 = -47356;
	int64_t x260 = -1LL;
	static volatile int64_t t64 = 14869258LL;

	t64 = ((x257&x258)+(x259<=x260));

	if (t64 != 14459801138038532LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	static uint16_t x262 = 1229U;
	int32_t x263 = -1;
	volatile uint64_t t65 = 4899277LLU;

	t65 = ((x261&x262)+(x263<=x264));

	if (t65 != 1230LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = UINT32_MAX;
	volatile int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MIN;
	uint32_t x268 = 3529U;
	static volatile uint32_t t66 = 1327275U;

	t66 = ((x265&x266)+(x267<=x268));

	if (t66 != 4294967168U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MAX;
	int32_t x271 = 7032559;
	uint32_t x272 = 40U;
	int32_t t67 = 3489;

	t67 = ((x269&x270)+(x271<=x272));

	if (t67 != 32640) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	uint16_t x274 = UINT16_MAX;
	static uint64_t x275 = UINT64_MAX;
	int64_t x276 = INT64_MAX;

	t68 = ((x273&x274)+(x275<=x276));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int64_t x279 = 335527924572682LL;
	volatile int8_t x280 = INT8_MIN;
	int32_t t69 = INT32_MIN;

	t69 = ((x277&x278)+(x279<=x280));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	volatile int32_t x282 = 13;
	static int8_t x283 = -1;
	volatile int32_t x284 = INT32_MAX;
	volatile int32_t t70 = -2656;

	t70 = ((x281&x282)+(x283<=x284));

	if (t70 != 14) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = 3173539977LLU;
	int32_t x286 = -1;
	int8_t x287 = 60;
	uint32_t x288 = 1267U;
	uint64_t t71 = 1097292516486478LLU;

	t71 = ((x285&x286)+(x287<=x288));

	if (t71 != 3173539978LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	int64_t x292 = -41LL;

	t72 = ((x289&x290)+(x291<=x292));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x294 = 0;
	uint16_t x295 = UINT16_MAX;
	int16_t x296 = INT16_MIN;
	int32_t t73 = -7743904;

	t73 = ((x293&x294)+(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x298 = -1;
	static volatile int8_t x299 = INT8_MIN;
	int8_t x300 = -1;
	int32_t t74 = -386671;

	t74 = ((x297&x298)+(x299<=x300));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = 2929U;
	static int32_t x302 = 718624847;
	uint16_t x304 = 21097U;

	t75 = ((x301&x302)+(x303<=x304));

	if (t75 != 2114) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	static uint8_t x306 = 4U;
	static uint8_t x307 = 10U;
	int64_t x308 = 1281010939LL;
	volatile int32_t t76 = -2090;

	t76 = ((x305&x306)+(x307<=x308));

	if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 7;
	int64_t x310 = INT64_MAX;
	static int64_t x311 = INT64_MIN;
	uint16_t x312 = UINT16_MAX;
	int64_t t77 = 0LL;

	t77 = ((x309&x310)+(x311<=x312));

	if (t77 != 8LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MAX;
	int64_t x315 = INT64_MIN;
	int32_t x316 = INT32_MIN;
	static int64_t t78 = 4132140LL;

	t78 = ((x313&x314)+(x315<=x316));

	if (t78 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = 55U;
	int16_t x318 = -23;
	uint8_t x319 = UINT8_MAX;
	uint16_t x320 = 1578U;

	t79 = ((x317&x318)+(x319<=x320));

	if (t79 != 34) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = 1264;
	int32_t x323 = INT32_MAX;
	int8_t x324 = INT8_MIN;
	static int32_t t80 = 29852054;

	t80 = ((x321&x322)+(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = UINT8_MAX;
	uint16_t x327 = 10635U;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = -989;

	t81 = ((x325&x326)+(x327<=x328));

	if (t81 != 12) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x332 = UINT8_MAX;
	volatile int64_t t82 = -25LL;

	t82 = ((x329&x330)+(x331<=x332));

	if (t82 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x334 = 29396779LLU;
	static uint8_t x336 = 12U;
	volatile uint64_t t83 = 3726970681804860435LLU;

	t83 = ((x333&x334)+(x335<=x336));

	if (t83 != 29392896LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	volatile int16_t x338 = -21;
	int16_t x339 = 727;
	static int16_t x340 = INT16_MAX;
	int64_t t84 = 1537515192304941LL;

	t84 = ((x337&x338)+(x339<=x340));

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = 11922LLU;
	int16_t x342 = -1;
	uint16_t x343 = 1575U;
	int64_t x344 = INT64_MIN;
	uint64_t t85 = 2666469608LLU;

	t85 = ((x341&x342)+(x343<=x344));

	if (t85 != 11922LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int32_t x346 = 11;
	volatile uint64_t x347 = UINT64_MAX;
	int64_t t86 = -76830LL;

	t86 = ((x345&x346)+(x347<=x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 527839579522LL;
	int64_t x350 = 754388506065661172LL;
	static int64_t x351 = 1880172609033866LL;
	int32_t x352 = INT32_MIN;

	t87 = ((x349&x350)+(x351<=x352));

	if (t87 != 379645348992LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	int16_t x354 = -1;
	int8_t x355 = INT8_MIN;
	volatile int8_t x356 = -1;

	t88 = ((x353&x354)+(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MIN;
	int32_t t89 = 839;

	t89 = ((x357&x358)+(x359<=x360));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	int32_t x363 = -1;
	static volatile uint64_t x364 = 41243768024LLU;
	int32_t t90 = INT32_MIN;

	t90 = ((x361&x362)+(x363<=x364));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 54U;
	int8_t x366 = INT8_MAX;
	volatile int16_t x368 = -1;
	volatile int32_t t91 = 40;

	t91 = ((x365&x366)+(x367<=x368));

	if (t91 != 55) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 2U;
	uint64_t x370 = 146320LLU;
	uint16_t x372 = UINT16_MAX;

	t92 = ((x369&x370)+(x371<=x372));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	static uint64_t x374 = UINT64_MAX;
	int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MIN;
	static uint64_t t93 = 1082LLU;

	t93 = ((x373&x374)+(x375<=x376));

	if (t93 != 2147483648LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = -31199LL;
	static volatile uint8_t x378 = 2U;
	int64_t x379 = -1LL;
	int64_t x380 = INT64_MIN;

	t94 = ((x377&x378)+(x379<=x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 0U;
	int32_t x382 = 35;
	static int16_t x383 = INT16_MAX;
	int8_t x384 = INT8_MIN;
	static volatile int32_t t95 = -8938922;

	t95 = ((x381&x382)+(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 399U;
	int64_t x386 = 1584LL;
	uint32_t x387 = 70009U;
	int32_t x388 = -324658;

	t96 = ((x385&x386)+(x387<=x388));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x389 = 983U;
	int32_t x391 = -1;
	int64_t x392 = -1LL;
	int32_t t97 = 3;

	t97 = ((x389&x390)+(x391<=x392));

	if (t97 != 984) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 2;
	int64_t x394 = 616265LL;
	int32_t x395 = INT32_MIN;
	int64_t x396 = -1LL;

	t98 = ((x393&x394)+(x395<=x396));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	int32_t x398 = 854427;
	int8_t x399 = 6;
	volatile uint64_t x400 = 498981871LLU;
	int64_t t99 = 28837LL;

	t99 = ((x397&x398)+(x399<=x400));

	if (t99 != 854428LL) { NG(); } else { ; }
	
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

