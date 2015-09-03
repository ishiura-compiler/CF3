#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
static int8_t x7 = 7;
int64_t x8 = -1775LL;
int64_t x9 = 2372670225823781LL;
static volatile int16_t x10 = -1;
volatile int16_t x11 = INT16_MAX;
int64_t t3 = 3325578125979881LL;
volatile int64_t x19 = INT64_MIN;
volatile uint32_t x22 = 506U;
static volatile int64_t x25 = INT64_MIN;
int32_t x29 = 3;
int32_t t10 = 280337695;
int64_t x45 = INT64_MIN;
int8_t x48 = -50;
int32_t t12 = 376885399;
static int32_t t13 = 44;
int8_t x62 = INT8_MAX;
volatile int16_t x63 = -1;
int64_t x69 = -1LL;
uint8_t x74 = 54U;
uint16_t x75 = UINT16_MAX;
int32_t x77 = -116082;
volatile int32_t t19 = -1638;
volatile int32_t t21 = -1;
int32_t x90 = 11;
static uint8_t x95 = 13U;
int8_t x96 = -1;
int8_t x101 = -1;
static volatile int16_t x102 = 0;
volatile int16_t x103 = 64;
int32_t x104 = -1;
int32_t t25 = -204;
int8_t x111 = INT8_MIN;
int32_t t27 = -127765299;
int32_t t28 = 62121;
uint16_t x117 = 4310U;
int64_t x120 = -1LL;
int8_t x125 = INT8_MAX;
volatile int16_t x127 = 26;
uint32_t x128 = 12U;
static int32_t x136 = -1;
int32_t x138 = 1;
volatile uint32_t t36 = 31U;
int32_t x151 = -1754;
uint64_t x157 = 163601722333409LLU;
volatile int32_t x162 = 122599;
volatile int16_t x170 = -1;
uint16_t x174 = UINT16_MAX;
volatile int64_t x177 = -36LL;
volatile int32_t x181 = INT32_MIN;
int32_t x186 = -1;
int32_t x188 = -1;
int64_t x189 = INT64_MIN;
volatile uint8_t x190 = 9U;
uint64_t x191 = 2LLU;
uint32_t x192 = UINT32_MAX;
int8_t x198 = INT8_MAX;
int32_t t50 = -783468333;
int64_t t51 = INT64_MAX;
int32_t x228 = -1;
volatile int32_t t56 = -1;
uint64_t x235 = 23359001666LLU;
int64_t x242 = INT64_MIN;
volatile int32_t t62 = 18;
int16_t x255 = -5709;
int32_t t63 = 188;
volatile int8_t x259 = INT8_MIN;
volatile int32_t t64 = -24797268;
static uint32_t t65 = 7957264U;
uint64_t x266 = UINT64_MAX;
int32_t x276 = INT32_MAX;
static int64_t x279 = INT64_MAX;
volatile int32_t t69 = 229;
uint32_t x282 = UINT32_MAX;
volatile int32_t x283 = -1;
int64_t x291 = 11414974LL;
volatile int64_t x292 = 3774624362LL;
volatile int64_t x296 = -553890453204680LL;
volatile int16_t x300 = -1;
volatile int32_t t74 = 1431;
int64_t x312 = INT64_MIN;
static volatile int64_t t80 = INT64_MIN;
uint8_t x326 = 110U;
uint64_t x332 = 18038394834LLU;
static int32_t t84 = 995559468;
int16_t x342 = INT16_MIN;
int8_t x344 = -1;
static int8_t x345 = INT8_MAX;
volatile uint8_t x348 = 1U;
int32_t t87 = -28365035;
int32_t x357 = 227;
static uint64_t x368 = UINT64_MAX;
uint64_t x371 = 1816987990876112LLU;
int8_t x379 = INT8_MAX;
volatile uint32_t x380 = UINT32_MAX;
volatile int8_t x383 = INT8_MAX;
static int32_t x387 = INT32_MAX;
volatile int16_t x390 = -1;
static volatile int32_t x398 = 198265365;
int64_t x399 = -1LL;


void f0(void) {
	static uint16_t x1 = 79U;
	int64_t x2 = INT64_MIN;
	int32_t x3 = -4574567;
	int32_t t0 = -9953595;

	t0 = (((x1|x2)<=x3)*x4);

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 14379218LLU;
	int32_t x6 = INT32_MIN;
	volatile int64_t t1 = -732848570848565LL;

	t1 = (((x5|x6)<=x7)*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x12 = UINT32_MAX;
	static uint32_t t2 = UINT32_MAX;

	t2 = (((x9|x10)<=x11)*x12);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int8_t x14 = INT8_MAX;
	int16_t x15 = INT16_MIN;
	int64_t x16 = -1LL;

	t3 = (((x13|x14)<=x15)*x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint16_t x18 = 2U;
	int8_t x20 = 12;
	volatile int32_t t4 = -259110753;

	t4 = (((x17|x18)<=x19)*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 21U;
	volatile int16_t x23 = 132;
	int16_t x24 = -1;
	volatile int32_t t5 = -534022;

	t5 = (((x21|x22)<=x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = UINT16_MAX;
	int8_t x27 = INT8_MAX;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 13754;

	t6 = (((x25|x26)<=x27)*x28);

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x30 = 871U;
	int8_t x31 = -2;
	static int8_t x32 = -1;
	int32_t t7 = -3;

	t7 = (((x29|x30)<=x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static int64_t x34 = 97272344476966021LL;
	int32_t x35 = INT32_MAX;
	int8_t x36 = -1;
	int32_t t8 = -127623175;

	t8 = (((x33|x34)<=x35)*x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 0U;
	int64_t x38 = -77468464804562932LL;
	int16_t x39 = INT16_MIN;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 1;

	t9 = (((x37|x38)<=x39)*x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int8_t x42 = -1;
	int16_t x43 = INT16_MIN;
	static int8_t x44 = -1;

	t10 = (((x41|x42)<=x43)*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = -1;
	int8_t x47 = -1;
	volatile int32_t t11 = -55384;

	t11 = (((x45|x46)<=x47)*x48);

	if (t11 != -50) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 12578LLU;
	uint8_t x50 = 1U;
	int32_t x51 = INT32_MIN;
	int32_t x52 = 6;

	t12 = (((x49|x50)<=x51)*x52);

	if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x53 = INT64_MIN;
	uint8_t x54 = 1U;
	int64_t x55 = -707257199225632LL;
	static volatile uint16_t x56 = 278U;

	t13 = (((x53|x54)<=x55)*x56);

	if (t13 != 278) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 577899038098166LLU;
	int32_t x58 = INT32_MIN;
	int16_t x59 = -27;
	uint64_t x60 = UINT64_MAX;
	uint64_t t14 = UINT64_MAX;

	t14 = (((x57|x58)<=x59)*x60);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -1;
	int32_t x64 = INT32_MAX;
	int32_t t15 = INT32_MAX;

	t15 = (((x61|x62)<=x63)*x64);

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	static int64_t x66 = INT64_MIN;
	int8_t x67 = -1;
	static volatile int64_t x68 = INT64_MAX;
	volatile int64_t t16 = INT64_MAX;

	t16 = (((x65|x66)<=x67)*x68);

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x70 = 712513602LLU;
	uint8_t x71 = UINT8_MAX;
	volatile int32_t x72 = INT32_MIN;
	int32_t t17 = 232154044;

	t17 = (((x69|x70)<=x71)*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	int8_t x76 = INT8_MIN;
	int32_t t18 = -307;

	t18 = (((x73|x74)<=x75)*x76);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = INT16_MAX;
	volatile int16_t x79 = INT16_MIN;
	int16_t x80 = -1;

	t19 = (((x77|x78)<=x79)*x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = -538;
	uint16_t x82 = 3U;
	int8_t x83 = INT8_MAX;
	static int32_t x84 = INT32_MIN;
	int32_t t20 = INT32_MIN;

	t20 = (((x81|x82)<=x83)*x84);

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	int16_t x86 = INT16_MIN;
	int64_t x87 = INT64_MIN;
	uint8_t x88 = UINT8_MAX;

	t21 = (((x85|x86)<=x87)*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 1828LL;
	uint64_t x91 = 24211361223LLU;
	uint32_t x92 = 248U;
	volatile uint32_t t22 = 853394864U;

	t22 = (((x89|x90)<=x91)*x92);

	if (t22 != 248U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	static int32_t x94 = -612696615;
	int32_t t23 = -8;

	t23 = (((x93|x94)<=x95)*x96);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -1;
	int32_t x98 = INT32_MAX;
	static volatile uint16_t x99 = 11U;
	uint32_t x100 = 31112621U;
	uint32_t t24 = 3718144U;

	t24 = (((x97|x98)<=x99)*x100);

	if (t24 != 31112621U) { NG(); } else { ; }
	
}

void f25(void) {


	t25 = (((x101|x102)<=x103)*x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	int32_t x106 = INT32_MIN;
	volatile int64_t x107 = -268603LL;
	int8_t x108 = -14;
	volatile int32_t t26 = -214405;

	t26 = (((x105|x106)<=x107)*x108);

	if (t26 != -14) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	int16_t x110 = -12;
	static uint16_t x112 = 30120U;

	t27 = (((x109|x110)<=x111)*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	static uint8_t x114 = UINT8_MAX;
	int16_t x115 = -9265;
	int32_t x116 = 0;

	t28 = (((x113|x114)<=x115)*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x118 = 3;
	uint8_t x119 = 3U;
	static volatile int64_t t29 = 503134830353512796LL;

	t29 = (((x117|x118)<=x119)*x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 5U;
	static int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MIN;
	static int64_t x124 = -1LL;
	volatile int64_t t30 = 133989597LL;

	t30 = (((x121|x122)<=x123)*x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MAX;
	volatile uint32_t t31 = 34129579U;

	t31 = (((x125|x126)<=x127)*x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -64283901947257LL;
	volatile uint64_t x130 = UINT64_MAX;
	int32_t x131 = INT32_MAX;
	int8_t x132 = INT8_MAX;
	volatile int32_t t32 = -97864686;

	t32 = (((x129|x130)<=x131)*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	static volatile int64_t x134 = INT64_MIN;
	int32_t x135 = INT32_MAX;
	int32_t t33 = -7613;

	t33 = (((x133|x134)<=x135)*x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	uint16_t x139 = 50U;
	int32_t x140 = -1;
	static int32_t t34 = 1333863;

	t34 = (((x137|x138)<=x139)*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = UINT64_MAX;
	uint32_t x143 = 59U;
	static uint8_t x144 = 60U;
	static int32_t t35 = 394311852;

	t35 = (((x141|x142)<=x143)*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int64_t x146 = INT64_MAX;
	static volatile int32_t x147 = INT32_MAX;
	volatile uint32_t x148 = 59367U;

	t36 = (((x145|x146)<=x147)*x148);

	if (t36 != 59367U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int32_t x150 = INT32_MIN;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 203;

	t37 = (((x149|x150)<=x151)*x152);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	uint32_t x154 = UINT32_MAX;
	int8_t x155 = INT8_MIN;
	volatile uint32_t x156 = UINT32_MAX;
	uint32_t t38 = 155710903U;

	t38 = (((x153|x154)<=x155)*x156);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x158 = 1199402U;
	uint16_t x159 = UINT16_MAX;
	static int64_t x160 = INT64_MIN;
	static int64_t t39 = 1251878550235354849LL;

	t39 = (((x157|x158)<=x159)*x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	volatile int32_t x163 = INT32_MAX;
	int32_t x164 = -1;
	volatile int32_t t40 = -1820567;

	t40 = (((x161|x162)<=x163)*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -458000058800LL;
	volatile int16_t x166 = INT16_MAX;
	volatile uint8_t x167 = 5U;
	static int16_t x168 = INT16_MIN;
	int32_t t41 = -24315;

	t41 = (((x165|x166)<=x167)*x168);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x169 = UINT32_MAX;
	uint64_t x171 = UINT64_MAX;
	static uint32_t x172 = 3912U;
	uint32_t t42 = 5437U;

	t42 = (((x169|x170)<=x171)*x172);

	if (t42 != 3912U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 84U;
	int8_t x175 = 62;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 327832590;

	t43 = (((x173|x174)<=x175)*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MIN;
	volatile int64_t x179 = -1LL;
	volatile uint8_t x180 = UINT8_MAX;
	int32_t t44 = 1;

	t44 = (((x177|x178)<=x179)*x180);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = -1;
	int32_t x183 = INT32_MAX;
	static int8_t x184 = INT8_MAX;
	int32_t t45 = 1805010;

	t45 = (((x181|x182)<=x183)*x184);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -12;
	uint8_t x187 = UINT8_MAX;
	int32_t t46 = 1247460;

	t46 = (((x185|x186)<=x187)*x188);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t t47 = 59310U;

	t47 = (((x189|x190)<=x191)*x192);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 16323970U;
	int8_t x194 = INT8_MIN;
	static int32_t x195 = -79564826;
	static volatile int8_t x196 = 17;
	int32_t t48 = 15104;

	t48 = (((x193|x194)<=x195)*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	uint64_t x199 = UINT64_MAX;
	volatile int32_t x200 = -1;
	volatile int32_t t49 = -12935788;

	t49 = (((x197|x198)<=x199)*x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1;
	volatile int16_t x202 = -1;
	int8_t x203 = -1;
	uint8_t x204 = 1U;

	t50 = (((x201|x202)<=x203)*x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	static volatile int32_t x206 = INT32_MAX;
	uint8_t x207 = 110U;
	int64_t x208 = INT64_MAX;

	t51 = (((x205|x206)<=x207)*x208);

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	uint8_t x210 = 1U;
	uint64_t x211 = UINT64_MAX;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = INT32_MIN;

	t52 = (((x209|x210)<=x211)*x212);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	static volatile int8_t x214 = INT8_MIN;
	uint64_t x215 = 4115940369LLU;
	int8_t x216 = INT8_MAX;
	volatile int32_t t53 = -472328858;

	t53 = (((x213|x214)<=x215)*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	int16_t x218 = 73;
	int64_t x219 = -1LL;
	uint16_t x220 = 15063U;
	int32_t t54 = -2266417;

	t54 = (((x217|x218)<=x219)*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int32_t x222 = INT32_MAX;
	uint16_t x223 = 68U;
	uint64_t x224 = 11510736634972013LLU;
	uint64_t t55 = 379804789440176741LLU;

	t55 = (((x221|x222)<=x223)*x224);

	if (t55 != 11510736634972013LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	static int8_t x226 = 7;
	static uint64_t x227 = UINT64_MAX;

	t56 = (((x225|x226)<=x227)*x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -7590;
	int16_t x230 = -3;
	volatile int16_t x231 = 194;
	int16_t x232 = INT16_MAX;
	int32_t t57 = 61795;

	t57 = (((x229|x230)<=x231)*x232);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MIN;
	volatile int8_t x234 = INT8_MIN;
	volatile int32_t x236 = INT32_MAX;
	int32_t t58 = -792;

	t58 = (((x233|x234)<=x235)*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int8_t x238 = 3;
	int32_t x239 = 30578;
	int16_t x240 = INT16_MIN;
	volatile int32_t t59 = 520138609;

	t59 = (((x237|x238)<=x239)*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	static int64_t x243 = INT64_MIN;
	int64_t x244 = 65438790278143LL;
	volatile int64_t t60 = 658075LL;

	t60 = (((x241|x242)<=x243)*x244);

	if (t60 != 65438790278143LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = 441164773082LLU;
	volatile int8_t x246 = INT8_MIN;
	int32_t x247 = 31228;
	int16_t x248 = -803;
	int32_t t61 = -116346;

	t61 = (((x245|x246)<=x247)*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 1U;
	static int64_t x250 = -5365717LL;
	static uint64_t x251 = 7240LLU;
	uint16_t x252 = UINT16_MAX;

	t62 = (((x249|x250)<=x251)*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 608999159189LL;
	uint8_t x254 = UINT8_MAX;
	int8_t x256 = 1;

	t63 = (((x253|x254)<=x255)*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MIN;
	int64_t x258 = INT64_MIN;
	int16_t x260 = 13963;

	t64 = (((x257|x258)<=x259)*x260);

	if (t64 != 13963) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 3;
	int16_t x262 = -1;
	int8_t x263 = -1;
	uint32_t x264 = 169U;

	t65 = (((x261|x262)<=x263)*x264);

	if (t65 != 169U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	uint64_t x267 = 3054687685795247LLU;
	uint16_t x268 = 22831U;
	volatile int32_t t66 = -102;

	t66 = (((x265|x266)<=x267)*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	int8_t x270 = 5;
	static uint8_t x271 = 15U;
	static int32_t x272 = -96454;
	int32_t t67 = 55195;

	t67 = (((x269|x270)<=x271)*x272);

	if (t67 != -96454) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	int64_t x274 = -52515816498437083LL;
	uint32_t x275 = 57404U;
	int32_t t68 = INT32_MAX;

	t68 = (((x273|x274)<=x275)*x276);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	static volatile int8_t x278 = -1;
	int16_t x280 = INT16_MIN;

	t69 = (((x277|x278)<=x279)*x280);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = -17;
	volatile int32_t x284 = -11523519;
	int32_t t70 = -15887;

	t70 = (((x281|x282)<=x283)*x284);

	if (t70 != -11523519) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 107LL;
	uint32_t x286 = UINT32_MAX;
	int16_t x287 = INT16_MIN;
	uint64_t x288 = 18LLU;
	uint64_t t71 = 1528671432471724785LLU;

	t71 = (((x285|x286)<=x287)*x288);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	volatile int32_t x290 = INT32_MIN;
	static volatile int64_t t72 = 703LL;

	t72 = (((x289|x290)<=x291)*x292);

	if (t72 != 3774624362LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	uint16_t x294 = 30569U;
	volatile int16_t x295 = INT16_MIN;
	volatile int64_t t73 = -265352613608740LL;

	t73 = (((x293|x294)<=x295)*x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -7;
	int8_t x298 = INT8_MIN;
	volatile int64_t x299 = -135449357912LL;

	t74 = (((x297|x298)<=x299)*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = -106;
	int64_t x302 = -1LL;
	int8_t x303 = INT8_MIN;
	int64_t x304 = INT64_MAX;
	static volatile int64_t t75 = -132496106915432LL;

	t75 = (((x301|x302)<=x303)*x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -15133069408LL;
	static uint64_t x306 = 4573651668LLU;
	static uint8_t x307 = 0U;
	static uint64_t x308 = UINT64_MAX;
	uint64_t t76 = 3472336299LLU;

	t76 = (((x305|x306)<=x307)*x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	static volatile int64_t x310 = INT64_MIN;
	uint64_t x311 = UINT64_MAX;
	volatile int64_t t77 = INT64_MIN;

	t77 = (((x309|x310)<=x311)*x312);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x313 = UINT8_MAX;
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = INT32_MIN;
	static volatile int8_t x316 = -1;
	volatile int32_t t78 = 3;

	t78 = (((x313|x314)<=x315)*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	volatile int64_t x318 = -1LL;
	int32_t x319 = -1;
	static uint8_t x320 = UINT8_MAX;
	int32_t t79 = -492034;

	t79 = (((x317|x318)<=x319)*x320);

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -9;
	static int16_t x322 = INT16_MAX;
	uint16_t x323 = 4080U;
	int64_t x324 = INT64_MIN;

	t80 = (((x321|x322)<=x323)*x324);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MAX;
	static int64_t x327 = INT64_MAX;
	int64_t x328 = INT64_MAX;
	volatile int64_t t81 = INT64_MAX;

	t81 = (((x325|x326)<=x327)*x328);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = 4205690714LLU;
	int16_t x330 = -13014;
	int64_t x331 = 62414313LL;
	uint64_t t82 = 7737280243LLU;

	t82 = (((x329|x330)<=x331)*x332);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = -1;
	int16_t x334 = -1;
	int64_t x335 = INT64_MIN;
	int16_t x336 = 2542;
	volatile int32_t t83 = 27371977;

	t83 = (((x333|x334)<=x335)*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = -6LL;
	volatile int8_t x338 = INT8_MIN;
	int8_t x339 = INT8_MIN;
	uint8_t x340 = 5U;

	t84 = (((x337|x338)<=x339)*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = INT32_MIN;
	int8_t x343 = -1;
	int32_t t85 = -192;

	t85 = (((x341|x342)<=x343)*x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = 108LLU;
	static uint8_t x347 = 121U;
	int32_t t86 = -23;

	t86 = (((x345|x346)<=x347)*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	int64_t x350 = INT64_MIN;
	static uint8_t x351 = 5U;
	static int8_t x352 = INT8_MIN;

	t87 = (((x349|x350)<=x351)*x352);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 10517276853015LLU;
	int16_t x354 = -2987;
	static int16_t x355 = INT16_MIN;
	uint32_t x356 = 242039800U;
	uint32_t t88 = 301U;

	t88 = (((x353|x354)<=x355)*x356);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = -96LL;
	uint8_t x359 = 2U;
	int32_t x360 = -4432;
	int32_t t89 = 25;

	t89 = (((x357|x358)<=x359)*x360);

	if (t89 != -4432) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MAX;
	static int32_t x362 = INT32_MIN;
	volatile int16_t x363 = -1;
	int8_t x364 = -5;
	int32_t t90 = -3731;

	t90 = (((x361|x362)<=x363)*x364);

	if (t90 != -5) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MIN;
	static volatile int64_t x366 = 3605823352953231517LL;
	static uint8_t x367 = 1U;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (((x365|x366)<=x367)*x368);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 2;
	int32_t x370 = 14;
	int32_t x372 = INT32_MIN;
	static int32_t t92 = INT32_MIN;

	t92 = (((x369|x370)<=x371)*x372);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	volatile uint64_t x374 = UINT64_MAX;
	int16_t x375 = INT16_MAX;
	int32_t x376 = 2158;
	volatile int32_t t93 = -1566;

	t93 = (((x373|x374)<=x375)*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x377 = 8525090580475652105LLU;
	uint8_t x378 = 50U;
	uint32_t t94 = 3513U;

	t94 = (((x377|x378)<=x379)*x380);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	volatile int16_t x382 = INT16_MAX;
	int64_t x384 = -13656300810786200LL;
	static int64_t t95 = 0LL;

	t95 = (((x381|x382)<=x383)*x384);

	if (t95 != -13656300810786200LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = -1;
	int16_t x386 = 2;
	int32_t x388 = 9;
	int32_t t96 = -172;

	t96 = (((x385|x386)<=x387)*x388);

	if (t96 != 9) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	uint8_t x391 = UINT8_MAX;
	static int8_t x392 = 15;
	int32_t t97 = 174316;

	t97 = (((x389|x390)<=x391)*x392);

	if (t97 != 15) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x393 = UINT16_MAX;
	int8_t x394 = 2;
	int8_t x395 = INT8_MIN;
	int64_t x396 = -32434LL;
	int64_t t98 = 31649642LL;

	t98 = (((x393|x394)<=x395)*x396);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = INT64_MIN;
	int8_t x400 = -16;
	volatile int32_t t99 = -322955502;

	t99 = (((x397|x398)<=x399)*x400);

	if (t99 != -16) { NG(); } else { ; }
	
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

