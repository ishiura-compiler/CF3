#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = 3257800LL;
static uint16_t x8 = 6U;
uint32_t t2 = 142U;
int64_t x19 = 15687855715LL;
int8_t x20 = INT8_MIN;
uint64_t t4 = 4550014678948496896LLU;
int32_t x25 = -1;
int16_t x28 = 12794;
volatile uint16_t x30 = UINT16_MAX;
int32_t x35 = -1;
uint64_t t7 = 79004680LLU;
int64_t t8 = -2LL;
int8_t x42 = INT8_MIN;
uint16_t x75 = 1311U;
uint32_t x78 = 236823U;
static volatile int32_t t20 = 73462120;
volatile int64_t x89 = -1LL;
int64_t t21 = -1LL;
static volatile int8_t x94 = 0;
uint8_t x98 = 74U;
int64_t x101 = -14901LL;
uint32_t x103 = 1397394664U;
int64_t x104 = -3946235372470LL;
uint32_t x105 = 8023442U;
static volatile uint16_t x108 = UINT16_MAX;
static volatile int32_t t26 = INT32_MIN;
uint64_t x113 = 78483503758649LLU;
volatile uint16_t x124 = UINT16_MAX;
volatile int64_t t30 = -5278LL;
uint32_t t31 = 150906U;
int16_t x135 = -12670;
volatile int8_t x137 = INT8_MIN;
static uint64_t x138 = UINT64_MAX;
volatile uint16_t x143 = UINT16_MAX;
uint32_t x146 = 92U;
static int16_t x149 = INT16_MIN;
uint16_t x152 = 6U;
int32_t x154 = 13681384;
static uint64_t t38 = 766197LLU;
int16_t x170 = -34;
uint8_t x171 = 92U;
volatile int64_t x172 = INT64_MAX;
int16_t x176 = INT16_MAX;
volatile int64_t t43 = -236612597LL;
uint64_t t44 = 1123425275910053LLU;
volatile int16_t x190 = -1;
static volatile int64_t t45 = -454LL;
uint64_t x195 = 131198307LLU;
int32_t x197 = 527570350;
uint64_t x199 = UINT64_MAX;
static volatile uint64_t t47 = 768LLU;
int8_t x201 = INT8_MIN;
volatile uint64_t t48 = 3313833460917744LLU;
uint32_t x207 = 55894U;
static uint32_t x210 = 391466U;
volatile int64_t t51 = 1152168161756031900LL;
int32_t x217 = INT32_MAX;
int32_t x219 = INT32_MIN;
uint16_t x224 = 164U;
int16_t x230 = 6;
static int32_t x232 = -1;
int64_t t55 = 22840346343LL;
int32_t x233 = INT32_MAX;
int64_t x235 = INT64_MIN;
int8_t x240 = INT8_MIN;
volatile uint64_t t58 = 545LLU;
uint32_t t60 = 670U;
uint64_t t63 = 3197589498183915603LLU;
uint64_t x269 = 300812LLU;
int8_t x270 = INT8_MIN;
volatile int64_t x288 = INT64_MAX;
static int8_t x291 = -28;
int64_t x296 = 203465LL;
volatile uint16_t x299 = 11938U;
uint64_t x304 = UINT64_MAX;
int8_t x311 = -1;
uint8_t x314 = 7U;
volatile int64_t x334 = -1LL;
int64_t x337 = INT64_MIN;
static int64_t x338 = INT64_MIN;
volatile int64_t t80 = INT64_MIN;
uint16_t x347 = UINT16_MAX;
int16_t x349 = 1;
int32_t x359 = 230;
int32_t t85 = 85408436;
int16_t x361 = INT16_MAX;
uint32_t x364 = UINT32_MAX;
volatile int64_t t87 = -81323004911119758LL;
int8_t x370 = -7;
int8_t x376 = 41;
volatile int32_t t89 = -992613;
volatile uint16_t x377 = 296U;
static volatile int16_t x378 = INT16_MIN;
uint8_t x388 = 90U;
int16_t x392 = INT16_MIN;
int16_t x400 = 1;
int16_t x406 = -1;
volatile uint64_t x414 = 75047876209114513LLU;
uint8_t x419 = UINT8_MAX;
uint16_t x420 = UINT16_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x2 = UINT8_MAX;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MAX;

	t0 = ((x1&x2)+(x3/x4));

	if (t0 != 2LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint16_t x6 = UINT16_MAX;
	volatile uint32_t x7 = 0U;
	uint32_t t1 = 13705659U;

	t1 = ((x5&x6)+(x7/x8));

	if (t1 != 32768U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	uint32_t x10 = 0U;
	uint8_t x11 = 3U;
	int8_t x12 = INT8_MIN;

	t2 = ((x9&x10)+(x11/x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 0U;
	int8_t x14 = INT8_MIN;
	volatile int8_t x15 = -1;
	static int16_t x16 = -1;
	static uint32_t t3 = 61738U;

	t3 = ((x13&x14)+(x15/x16));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 832LLU;
	uint8_t x18 = UINT8_MAX;

	t4 = ((x17&x18)+(x19/x20));

	if (t4 != 18446744073586990308LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MIN;
	int64_t x27 = -1LL;
	volatile int64_t t5 = 7LL;

	t5 = ((x25&x26)+(x27/x28));

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -6;
	int8_t x31 = 27;
	static int32_t x32 = INT32_MIN;
	volatile int32_t t6 = 108639831;

	t6 = ((x29&x30)+(x31/x32));

	if (t6 != 65530) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 4260843700902987823LLU;
	uint64_t x34 = 5LLU;
	uint16_t x36 = UINT16_MAX;

	t7 = ((x33&x34)+(x35/x36));

	if (t7 != 5LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	uint32_t x38 = UINT32_MAX;
	static volatile int8_t x39 = -25;
	int32_t x40 = INT32_MIN;

	t8 = ((x37&x38)+(x39/x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = -26401455797433LL;
	uint16_t x43 = 2U;
	int8_t x44 = INT8_MAX;
	volatile int64_t t9 = -6478338954716970LL;

	t9 = ((x41&x42)+(x43/x44));

	if (t9 != -26401455797504LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = INT8_MIN;
	static volatile int32_t x46 = -1;
	int64_t x47 = -113182588525LL;
	static volatile int8_t x48 = INT8_MIN;
	int64_t t10 = 73630211LL;

	t10 = ((x45&x46)+(x47/x48));

	if (t10 != 884238844LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = -785715503;
	int32_t x50 = INT32_MIN;
	int16_t x51 = 49;
	static uint8_t x52 = UINT8_MAX;
	int32_t t11 = INT32_MIN;

	t11 = ((x49&x50)+(x51/x52));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int64_t x54 = 400166711927246LL;
	int64_t x55 = -1LL;
	int16_t x56 = -1;
	int64_t t12 = 1486799352915483LL;

	t12 = ((x53&x54)+(x55/x56));

	if (t12 != 8655LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = -1;
	uint16_t x58 = UINT16_MAX;
	uint64_t x59 = 2LLU;
	int64_t x60 = INT64_MIN;
	volatile uint64_t t13 = 1164509LLU;

	t13 = ((x57&x58)+(x59/x60));

	if (t13 != 65535LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 1401U;
	volatile int16_t x62 = -1;
	uint16_t x63 = 117U;
	uint8_t x64 = UINT8_MAX;
	int32_t t14 = 208256;

	t14 = ((x61&x62)+(x63/x64));

	if (t14 != 1401) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	static uint64_t x66 = 62899372943043LLU;
	int64_t x67 = -1LL;
	int8_t x68 = -4;
	volatile uint64_t t15 = 840957178533570LLU;

	t15 = ((x65&x66)+(x67/x68));

	if (t15 != 62897648566272LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	volatile int32_t x70 = 1035922;
	int8_t x71 = INT8_MIN;
	int64_t x72 = -4093491868588109554LL;
	volatile int64_t t16 = 2852223316781687LL;

	t16 = ((x69&x70)+(x71/x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	uint8_t x74 = UINT8_MAX;
	static uint64_t x76 = 4LLU;
	uint64_t t17 = 30LLU;

	t17 = ((x73&x74)+(x75/x76));

	if (t17 != 327LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -1038537;
	int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MAX;
	static volatile int64_t t18 = -634LL;

	t18 = ((x77&x78)+(x79/x80));

	if (t18 != -4294965995LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x81 = UINT32_MAX;
	int16_t x82 = INT16_MIN;
	int64_t x83 = INT64_MAX;
	static int16_t x84 = INT16_MIN;
	static volatile int64_t t19 = 619817070178346LL;

	t19 = ((x81&x82)+(x83/x84));

	if (t19 != -281470681776127LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x85 = -1;
	static int8_t x86 = -1;
	static volatile int8_t x87 = -39;
	int16_t x88 = -9826;

	t20 = ((x85&x86)+(x87/x88));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MIN;
	static int8_t x92 = -1;

	t21 = ((x89&x90)+(x91/x92));

	if (t21 != -2147450880LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	uint16_t x95 = 3800U;
	volatile int16_t x96 = INT16_MIN;
	int32_t t22 = 0;

	t22 = ((x93&x94)+(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MAX;
	int16_t x99 = INT16_MIN;
	int64_t x100 = -3LL;
	static int64_t t23 = -6669296112658557LL;

	t23 = ((x97&x98)+(x99/x100));

	if (t23 != 10996LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x102 = 0;
	static int64_t t24 = 691419LL;

	t24 = ((x101&x102)+(x103/x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x106 = 42;
	uint16_t x107 = 22U;
	uint32_t t25 = 70894233U;

	t25 = ((x105&x106)+(x107/x108));

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	static int32_t x110 = INT32_MIN;
	volatile uint16_t x111 = 4U;
	static int16_t x112 = -800;

	t26 = ((x109&x110)+(x111/x112));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x114 = INT16_MIN;
	uint8_t x115 = 62U;
	volatile uint8_t x116 = UINT8_MAX;
	static uint64_t t27 = 0LLU;

	t27 = ((x113&x114)+(x115/x116));

	if (t27 != 78483503742976LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 1U;
	int32_t x118 = INT32_MIN;
	static volatile int8_t x119 = INT8_MIN;
	int8_t x120 = -42;
	static uint32_t t28 = 195U;

	t28 = ((x117&x118)+(x119/x120));

	if (t28 != 3U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x121 = 549U;
	int16_t x122 = INT16_MIN;
	uint8_t x123 = UINT8_MAX;
	volatile int32_t t29 = 28221;

	t29 = ((x121&x122)+(x123/x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = 499288LL;
	static int8_t x126 = -1;
	int32_t x127 = INT32_MIN;
	int64_t x128 = INT64_MAX;

	t30 = ((x125&x126)+(x127/x128));

	if (t30 != 499288LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	uint8_t x130 = 5U;
	volatile uint32_t x131 = 1112170709U;
	int8_t x132 = INT8_MAX;

	t31 = ((x129&x130)+(x131/x132));

	if (t31 != 8757249U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x133 = 53U;
	uint8_t x134 = 43U;
	int32_t x136 = -1;
	int32_t t32 = -3148;

	t32 = ((x133&x134)+(x135/x136));

	if (t32 != 12703) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x139 = INT64_MAX;
	int16_t x140 = INT16_MAX;
	static volatile uint64_t t33 = 8LLU;

	t33 = ((x137&x138)+(x139/x140));

	if (t33 != 281483566907272LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	static int8_t x142 = INT8_MAX;
	int16_t x144 = -1;
	volatile int32_t t34 = 16221469;

	t34 = ((x141&x142)+(x143/x144));

	if (t34 != -65408) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = 670532336;
	volatile uint16_t x147 = UINT16_MAX;
	int16_t x148 = INT16_MIN;
	uint32_t t35 = 29U;

	t35 = ((x145&x146)+(x147/x148));

	if (t35 != 79U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x150 = 4260225374551073813LLU;
	int16_t x151 = 79;
	volatile uint64_t t36 = 3986LLU;

	t36 = ((x149&x150)+(x151/x152));

	if (t36 != 4260225374551048205LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = 4860;
	int32_t x155 = INT32_MAX;
	int16_t x156 = -1;
	volatile int32_t t37 = 354776825;

	t37 = ((x153&x154)+(x155/x156));

	if (t37 != -2147482903) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x157 = 134U;
	int8_t x158 = 0;
	uint64_t x159 = UINT64_MAX;
	int64_t x160 = INT64_MIN;

	t38 = ((x157&x158)+(x159/x160));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -12564884413481006LL;
	static int8_t x162 = INT8_MAX;
	uint32_t x163 = 295311334U;
	uint16_t x164 = 1U;
	volatile int64_t t39 = 118LL;

	t39 = ((x161&x162)+(x163/x164));

	if (t39 != 295311416LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x165 = UINT8_MAX;
	int32_t x166 = INT32_MIN;
	static uint64_t x167 = 42891856572665LLU;
	int64_t x168 = INT64_MIN;
	static volatile uint64_t t40 = 390834633960826825LLU;

	t40 = ((x165&x166)+(x167/x168));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = INT32_MIN;
	volatile int64_t t41 = -14375LL;

	t41 = ((x169&x170)+(x171/x172));

	if (t41 != -2147483648LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x173 = 276991166U;
	int16_t x174 = 1;
	int32_t x175 = 6;
	volatile uint32_t t42 = 4U;

	t42 = ((x173&x174)+(x175/x176));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	static int16_t x182 = INT16_MAX;
	int8_t x183 = -1;
	volatile int16_t x184 = INT16_MIN;

	t43 = ((x181&x182)+(x183/x184));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = UINT64_MAX;
	int8_t x186 = 19;
	uint8_t x187 = 1U;
	int16_t x188 = -1135;

	t44 = ((x185&x186)+(x187/x188));

	if (t44 != 19LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = 1458330LL;
	int16_t x191 = INT16_MAX;
	volatile uint32_t x192 = 7094960U;

	t45 = ((x189&x190)+(x191/x192));

	if (t45 != 1458330LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = -2050;
	static uint64_t x196 = UINT64_MAX;
	uint64_t t46 = 118558897167579LLU;

	t46 = ((x193&x194)+(x195/x196));

	if (t46 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x198 = UINT16_MAX;
	static uint32_t x200 = 74U;

	t47 = ((x197&x198)+(x199/x200));

	if (t47 != 249280325320404896LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x202 = 1U;
	uint64_t x203 = UINT64_MAX;
	uint64_t x204 = 3766LLU;

	t48 = ((x201&x202)+(x203/x204));

	if (t48 != 4898232627113529LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x205 = 1935U;
	volatile int64_t x206 = -2179667447238763346LL;
	int8_t x208 = INT8_MIN;
	volatile int64_t t49 = 3326147598364LL;

	t49 = ((x205&x206)+(x207/x208));

	if (t49 != 1166LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x209 = INT8_MIN;
	uint32_t x211 = 1U;
	uint8_t x212 = UINT8_MAX;
	static uint32_t t50 = 9501674U;

	t50 = ((x209&x210)+(x211/x212));

	if (t50 != 391424U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 121U;
	int64_t x214 = 1307472LL;
	int32_t x215 = INT32_MAX;
	volatile uint16_t x216 = 1568U;

	t51 = ((x213&x214)+(x215/x216));

	if (t51 != 1369648LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x218 = INT8_MIN;
	uint64_t x220 = 6363880601LLU;
	volatile uint64_t t52 = 100788096LLU;

	t52 = ((x217&x218)+(x219/x220));

	if (t52 != 5046146337LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x221 = INT32_MAX;
	int8_t x222 = INT8_MIN;
	uint64_t x223 = 1LLU;
	volatile uint64_t t53 = 254836792615652126LLU;

	t53 = ((x221&x222)+(x223/x224));

	if (t53 != 2147483520LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = -1;
	int16_t x226 = INT16_MAX;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = INT8_MIN;
	volatile uint64_t t54 = 8988681157076LLU;

	t54 = ((x225&x226)+(x227/x228));

	if (t54 != 32768LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = -1;
	int64_t x231 = 2571402754321LL;

	t55 = ((x229&x230)+(x231/x232));

	if (t55 != -2571402754315LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x234 = 130U;
	static int64_t x236 = INT64_MIN;
	int64_t t56 = -205LL;

	t56 = ((x233&x234)+(x235/x236));

	if (t56 != 131LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = 174707034LLU;
	int8_t x238 = INT8_MAX;
	static uint32_t x239 = 46722681U;
	volatile uint64_t t57 = 13LLU;

	t57 = ((x237&x238)+(x239/x240));

	if (t57 != 90LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x241 = INT64_MIN;
	uint64_t x242 = 782848LLU;
	int32_t x243 = INT32_MIN;
	uint8_t x244 = UINT8_MAX;

	t58 = ((x241&x242)+(x243/x244));

	if (t58 != 18446744073701130112LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MAX;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t x248 = -114198442;
	uint32_t t59 = 0U;

	t59 = ((x245&x246)+(x247/x248));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = -8197;
	int32_t x250 = -1;
	uint8_t x251 = 1U;
	volatile uint32_t x252 = 18139068U;

	t60 = ((x249&x250)+(x251/x252));

	if (t60 != 4294959099U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = 0;
	int8_t x258 = INT8_MIN;
	static uint64_t x259 = 10612517LLU;
	volatile int32_t x260 = INT32_MIN;
	uint64_t t61 = 7156874031587LLU;

	t61 = ((x257&x258)+(x259/x260));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MIN;
	uint32_t x262 = 809U;
	volatile int8_t x263 = -1;
	uint16_t x264 = 6U;
	uint32_t t62 = 32700U;

	t62 = ((x261&x262)+(x263/x264));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x265 = -1;
	volatile uint16_t x266 = 2U;
	volatile uint64_t x267 = 152426415502187523LLU;
	int32_t x268 = INT32_MAX;

	t63 = ((x265&x266)+(x267/x268));

	if (t63 != 70979082LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x271 = INT64_MIN;
	int64_t x272 = 31760447524206307LL;
	uint64_t t64 = 6421943028341582331LLU;

	t64 = ((x269&x270)+(x271/x272));

	if (t64 != 300510LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = INT8_MIN;
	int64_t x278 = INT64_MIN;
	int64_t x279 = -1LL;
	int64_t x280 = -4486LL;
	volatile int64_t t65 = INT64_MIN;

	t65 = ((x277&x278)+(x279/x280));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = 4087;
	uint16_t x282 = 409U;
	volatile int64_t x283 = INT64_MAX;
	int16_t x284 = 1948;
	int64_t t66 = 8LL;

	t66 = ((x281&x282)+(x283/x284));

	if (t66 != 4734790573334474LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x285 = -48;
	uint64_t x286 = 1063989LLU;
	static int16_t x287 = INT16_MIN;
	volatile uint64_t t67 = 1528LLU;

	t67 = ((x285&x286)+(x287/x288));

	if (t67 != 1063952LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x289 = 1U;
	uint64_t x290 = 1726580LLU;
	volatile int16_t x292 = -1;
	uint64_t t68 = 220LLU;

	t68 = ((x289&x290)+(x291/x292));

	if (t68 != 28LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MIN;
	uint64_t x294 = UINT64_MAX;
	uint8_t x295 = UINT8_MAX;
	volatile uint64_t t69 = 725379678361826720LLU;

	t69 = ((x293&x294)+(x295/x296));

	if (t69 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = 142003594966149092LL;
	uint8_t x298 = 61U;
	static int64_t x300 = 8053070862LL;
	volatile int64_t t70 = 0LL;

	t70 = ((x297&x298)+(x299/x300));

	if (t70 != 36LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x301 = INT8_MIN;
	int64_t x302 = INT64_MIN;
	int64_t x303 = -4485713491LL;
	volatile uint64_t t71 = 1874404077823850123LLU;

	t71 = ((x301&x302)+(x303/x304));

	if (t71 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = 90021144;
	int32_t x306 = 244670562;
	uint32_t x307 = 34019625U;
	int8_t x308 = INT8_MAX;
	uint32_t t72 = 53U;

	t72 = ((x305&x306)+(x307/x308));

	if (t72 != 68752991U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x309 = INT8_MAX;
	uint64_t x310 = 3LLU;
	volatile int64_t x312 = INT64_MIN;
	uint64_t t73 = 188LLU;

	t73 = ((x309&x310)+(x311/x312));

	if (t73 != 3LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x313 = UINT16_MAX;
	static int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MAX;
	int64_t t74 = 1974540889032901LL;

	t74 = ((x313&x314)+(x315/x316));

	if (t74 != 7LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x317 = 3443811315LLU;
	int8_t x318 = -1;
	static uint16_t x319 = 32U;
	volatile uint8_t x320 = 22U;
	volatile uint64_t t75 = 239210599379386LLU;

	t75 = ((x317&x318)+(x319/x320));

	if (t75 != 3443811316LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x321 = 19U;
	static int64_t x322 = -1LL;
	volatile int64_t x323 = -257020LL;
	volatile uint32_t x324 = 17U;
	static volatile int64_t t76 = -7609651LL;

	t76 = ((x321&x322)+(x323/x324));

	if (t76 != -15099LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = -2;
	uint8_t x326 = 58U;
	static int16_t x327 = INT16_MIN;
	int64_t x328 = -9157605354645LL;
	static volatile int64_t t77 = 1072509597176733967LL;

	t77 = ((x325&x326)+(x327/x328));

	if (t77 != 58LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x329 = INT8_MIN;
	uint8_t x330 = UINT8_MAX;
	int32_t x331 = INT32_MIN;
	volatile int64_t x332 = 17411995022946LL;
	static volatile int64_t t78 = 121629795091LL;

	t78 = ((x329&x330)+(x331/x332));

	if (t78 != 128LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x333 = -124;
	int64_t x335 = INT64_MIN;
	int32_t x336 = INT32_MIN;
	int64_t t79 = 53942LL;

	t79 = ((x333&x334)+(x335/x336));

	if (t79 != 4294967172LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x339 = INT16_MIN;
	uint16_t x340 = UINT16_MAX;

	t80 = ((x337&x338)+(x339/x340));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = -1898;
	volatile int32_t x342 = INT32_MIN;
	uint8_t x343 = UINT8_MAX;
	int32_t x344 = INT32_MAX;
	int32_t t81 = INT32_MIN;

	t81 = ((x341&x342)+(x343/x344));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 8070U;
	int8_t x346 = INT8_MIN;
	int8_t x348 = -1;
	volatile uint32_t t82 = 23U;

	t82 = ((x345&x346)+(x347/x348));

	if (t82 != 4294909825U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x350 = -951;
	static int64_t x351 = -1LL;
	static int16_t x352 = INT16_MAX;
	volatile int64_t t83 = -2508506LL;

	t83 = ((x349&x350)+(x351/x352));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = INT16_MIN;
	uint16_t x354 = UINT16_MAX;
	int16_t x355 = 81;
	static int8_t x356 = -1;
	int32_t t84 = 3375;

	t84 = ((x353&x354)+(x355/x356));

	if (t84 != 32687) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = 1384;
	volatile uint8_t x358 = 2U;
	int8_t x360 = -1;

	t85 = ((x357&x358)+(x359/x360));

	if (t85 != -230) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x362 = -1;
	static volatile int64_t x363 = -39931734129911379LL;
	volatile int64_t t86 = -925378817497593168LL;

	t86 = ((x361&x362)+(x363/x364));

	if (t86 != -9264564LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = -2323;
	uint8_t x367 = 69U;
	int64_t x368 = -1LL;

	t87 = ((x365&x366)+(x367/x368));

	if (t87 != -32837LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = 901114034732179102LL;
	uint64_t x371 = UINT64_MAX;
	uint64_t x372 = 1348LLU;
	volatile uint64_t t88 = 1073813613408475LLU;

	t88 = ((x369&x370)+(x371/x372));

	if (t88 != 914798562976770751LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = 286U;
	uint16_t x374 = UINT16_MAX;
	int32_t x375 = -56;

	t89 = ((x373&x374)+(x375/x376));

	if (t89 != 285) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x379 = -1;
	static int64_t x380 = -1LL;
	volatile int64_t t90 = -150624LL;

	t90 = ((x377&x378)+(x379/x380));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x381 = 5423484;
	int32_t x382 = INT32_MAX;
	static int8_t x383 = -1;
	static int32_t x384 = INT32_MIN;
	static int32_t t91 = -7602625;

	t91 = ((x381&x382)+(x383/x384));

	if (t91 != 5423484) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = INT32_MIN;
	static int64_t x386 = INT64_MIN;
	int64_t x387 = -1LL;
	int64_t t92 = INT64_MIN;

	t92 = ((x385&x386)+(x387/x388));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = 16;
	static int8_t x390 = INT8_MAX;
	volatile int64_t x391 = -1LL;
	volatile int64_t t93 = -43222583423LL;

	t93 = ((x389&x390)+(x391/x392));

	if (t93 != 16LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = INT64_MIN;
	int16_t x394 = -1;
	int64_t x395 = -1850103022816LL;
	int16_t x396 = INT16_MIN;
	volatile int64_t t94 = -1637268194784850944LL;

	t94 = ((x393&x394)+(x395/x396));

	if (t94 != -9223372036798315145LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x397 = 6U;
	volatile uint8_t x398 = 30U;
	int8_t x399 = INT8_MIN;
	int32_t t95 = -331289630;

	t95 = ((x397&x398)+(x399/x400));

	if (t95 != -122) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x401 = 592U;
	volatile int16_t x402 = INT16_MAX;
	uint16_t x403 = UINT16_MAX;
	int64_t x404 = 1846701LL;
	volatile int64_t t96 = 1120LL;

	t96 = ((x401&x402)+(x403/x404));

	if (t96 != 592LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = 12;
	static int16_t x407 = -1;
	int8_t x408 = -6;
	int32_t t97 = -1994;

	t97 = ((x405&x406)+(x407/x408));

	if (t97 != 12) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = INT64_MIN;
	int16_t x415 = INT16_MIN;
	int8_t x416 = INT8_MAX;
	volatile uint64_t t98 = 15674756LLU;

	t98 = ((x413&x414)+(x415/x416));

	if (t98 != 18446744073709551358LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x417 = 9U;
	int16_t x418 = INT16_MAX;
	int32_t t99 = -20242035;

	t99 = ((x417&x418)+(x419/x420));

	if (t99 != 9) { NG(); } else { ; }
	
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

