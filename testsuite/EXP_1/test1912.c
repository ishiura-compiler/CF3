#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x11 = 3U;
static volatile int8_t x17 = INT8_MAX;
int16_t x18 = 10;
uint8_t x20 = 0U;
int64_t x21 = INT64_MIN;
static int64_t t5 = 2064128092LL;
volatile int32_t x25 = INT32_MIN;
volatile uint16_t x30 = 6U;
uint32_t x34 = 71770029U;
volatile uint32_t t8 = 16822U;
uint32_t t9 = 188U;
volatile uint8_t x47 = 31U;
uint64_t t10 = 1LLU;
uint32_t x64 = UINT32_MAX;
int16_t x66 = 516;
uint32_t x72 = 2507161U;
volatile int64_t t16 = 11673895378261LL;
volatile int16_t x73 = INT16_MIN;
volatile int64_t x79 = INT64_MAX;
static uint16_t x86 = 3U;
volatile int32_t t20 = 0;
int64_t x95 = INT64_MAX;
volatile uint16_t x96 = 15588U;
int8_t x107 = INT8_MIN;
int8_t x111 = INT8_MIN;
int16_t x115 = INT16_MIN;
volatile uint64_t x116 = 34690713685267328LLU;
volatile uint64_t t26 = 16229LLU;
static int8_t x123 = INT8_MIN;
int64_t x124 = -66627604LL;
int64_t t28 = 127516LL;
volatile int64_t x125 = INT64_MAX;
uint64_t t29 = 27LLU;
int8_t x137 = 57;
uint32_t x142 = 7U;
static uint32_t x144 = 198U;
volatile int32_t x145 = INT32_MIN;
int8_t x146 = INT8_MAX;
static volatile uint8_t x147 = 1U;
int64_t x148 = INT64_MIN;
int16_t x160 = INT16_MAX;
uint64_t x162 = 6448732314846530455LLU;
uint64_t t38 = 1259456986LLU;
volatile uint32_t t39 = UINT32_MAX;
int8_t x173 = INT8_MAX;
int32_t x175 = INT32_MIN;
static volatile int32_t t41 = 22268;
uint64_t x193 = UINT64_MAX;
int8_t x204 = INT8_MAX;
int32_t t50 = 235629400;
int8_t x216 = -1;
static uint64_t x229 = 650LLU;
static volatile int64_t x230 = INT64_MAX;
uint64_t x234 = 3230LLU;
int8_t x237 = -1;
int32_t x244 = INT32_MIN;
int64_t x248 = INT64_MIN;
int16_t x252 = INT16_MAX;
static int8_t x256 = 1;
static int32_t t62 = -1700;
static int32_t x265 = -1;
int16_t x276 = INT16_MIN;
static volatile int32_t x279 = INT32_MIN;
int64_t x282 = INT64_MAX;
uint32_t t68 = 1801690711U;
volatile int64_t t69 = 39166352322649736LL;
static int32_t x293 = INT32_MAX;
uint8_t x297 = UINT8_MAX;
volatile int8_t x304 = INT8_MIN;
volatile int64_t t72 = 146762719LL;
int32_t x307 = INT32_MIN;
static int64_t t73 = 4289557243LL;
int8_t x313 = -1;
static int64_t t76 = -47159194LL;
static int8_t x338 = INT8_MIN;
uint64_t x345 = UINT64_MAX;
int32_t x347 = INT32_MIN;
static int16_t x352 = INT16_MAX;
int32_t x353 = INT32_MIN;
volatile uint64_t x359 = UINT64_MAX;
uint64_t t86 = 292742LLU;
uint8_t x364 = 98U;
uint8_t x365 = UINT8_MAX;
uint64_t x368 = 1853767825000055350LLU;
int8_t x374 = INT8_MAX;
int64_t x388 = INT64_MAX;
uint16_t x391 = 66U;
int16_t x398 = -1;
uint64_t x399 = UINT64_MAX;
volatile int64_t x406 = -313977897021185251LL;
volatile uint64_t x407 = 65066960087451LLU;
int8_t x408 = -15;
static int32_t x409 = INT32_MIN;
static int8_t x412 = INT8_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int16_t x2 = INT16_MAX;
	uint32_t x3 = 351425U;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 2321816923LLU;

	t0 = (((x1|x2)%x3)+x4);

	if (t0 != 202369LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int8_t x6 = INT8_MAX;
	volatile uint16_t x7 = UINT16_MAX;
	static volatile int32_t x8 = INT32_MAX;
	static volatile int32_t t1 = -184017;

	t1 = (((x5|x6)%x7)+x8);

	if (t1 != 2147451006) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 130110365LLU;
	static uint16_t x10 = 1U;
	uint64_t x12 = 26478173172834940LLU;
	volatile uint64_t t2 = 17101555969607547LLU;

	t2 = (((x9|x10)%x11)+x12);

	if (t2 != 26478173172834942LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -10954007725179LL;
	uint32_t x14 = 122238436U;
	uint32_t x15 = 433689094U;
	int16_t x16 = INT16_MIN;
	static volatile int64_t t3 = -1LL;

	t3 = (((x13|x14)%x15)+x16);

	if (t3 != -237833765LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x19 = -34;
	static volatile int32_t t4 = -26320996;

	t4 = (((x17|x18)%x19)+x20);

	if (t4 != 25) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x22 = UINT32_MAX;
	static int8_t x23 = -1;
	uint32_t x24 = UINT32_MAX;

	t5 = (((x21|x22)%x23)+x24);

	if (t5 != 4294967295LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -1LL;
	int16_t x27 = -307;
	static uint64_t x28 = 173961705621169064LLU;
	volatile uint64_t t6 = 82810968989LLU;

	t6 = (((x25|x26)%x27)+x28);

	if (t6 != 173961705621169063LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 506348721LLU;
	static int16_t x31 = -797;
	uint8_t x32 = 1U;
	volatile uint64_t t7 = 2818LLU;

	t7 = (((x29|x30)%x31)+x32);

	if (t7 != 506348728LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = 107;
	int32_t x35 = INT32_MAX;
	int32_t x36 = 6;

	t8 = (((x33|x34)%x35)+x36);

	if (t8 != 71770101U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	uint8_t x38 = 2U;
	volatile int16_t x39 = -610;
	uint32_t x40 = 3414U;

	t9 = (((x37|x38)%x39)+x40);

	if (t9 != 2978U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x45 = UINT16_MAX;
	uint64_t x46 = UINT64_MAX;
	int8_t x48 = INT8_MAX;

	t10 = (((x45|x46)%x47)+x48);

	if (t10 != 142LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 1U;
	static int64_t x50 = INT64_MIN;
	static int8_t x51 = INT8_MIN;
	int64_t x52 = 67LL;
	static int64_t t11 = 2LL;

	t11 = (((x49|x50)%x51)+x52);

	if (t11 != -60LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	static int64_t x54 = -250LL;
	int16_t x55 = INT16_MAX;
	int32_t x56 = INT32_MIN;
	volatile int64_t t12 = -227LL;

	t12 = (((x53|x54)%x55)+x56);

	if (t12 != -2147483649LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	uint32_t x58 = 867U;
	int16_t x59 = INT16_MIN;
	int32_t x60 = -1;
	uint32_t t13 = 453140U;

	t13 = (((x57|x58)%x59)+x60);

	if (t13 != 2147483646U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	uint8_t x62 = 1U;
	static int64_t x63 = INT64_MIN;
	int64_t t14 = 767LL;

	t14 = (((x61|x62)%x63)+x64);

	if (t14 != 4294967294LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	int32_t x67 = INT32_MAX;
	static volatile int64_t x68 = -3001LL;
	volatile int64_t t15 = -28541811LL;

	t15 = (((x65|x66)%x67)+x68);

	if (t15 != -2147486133LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -7967434819933LL;
	volatile int64_t x70 = INT64_MIN;
	int16_t x71 = INT16_MIN;

	t16 = (((x69|x70)%x71)+x72);

	if (t16 != 2488380LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = 11;
	int64_t x75 = INT64_MAX;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t17 = 2165591673LLU;

	t17 = (((x73|x74)%x75)+x76);

	if (t17 != 18446744073709518858LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	uint8_t x78 = 12U;
	int16_t x80 = -618;
	volatile int64_t t18 = -1515482LL;

	t18 = (((x77|x78)%x79)+x80);

	if (t18 != -619LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = INT16_MIN;
	static int64_t x82 = -1LL;
	static uint32_t x83 = 497292478U;
	int16_t x84 = -1;
	static int64_t t19 = 80919594543433287LL;

	t19 = (((x81|x82)%x83)+x84);

	if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = 3;
	static uint8_t x87 = 14U;
	int32_t x88 = -34298598;

	t20 = (((x85|x86)%x87)+x88);

	if (t20 != -34298595) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x89 = UINT16_MAX;
	uint32_t x90 = 60U;
	uint32_t x91 = UINT32_MAX;
	static uint8_t x92 = UINT8_MAX;
	volatile uint32_t t21 = 136566U;

	t21 = (((x89|x90)%x91)+x92);

	if (t21 != 65790U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = 556762365;
	int16_t x94 = INT16_MIN;
	int64_t t22 = 1171278050LL;

	t22 = (((x93|x94)%x95)+x96);

	if (t22 != -15903LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -284851970446748LL;
	int8_t x102 = -1;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MAX;
	int64_t t23 = 7514369LL;

	t23 = (((x101|x102)%x103)+x104);

	if (t23 != 32766LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MAX;
	volatile int32_t x108 = INT32_MIN;
	volatile int64_t t24 = -1LL;

	t24 = (((x105|x106)%x107)+x108);

	if (t24 != -2147483649LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = 742951969770LL;
	int8_t x110 = INT8_MIN;
	int8_t x112 = -1;
	int64_t t25 = -13796LL;

	t25 = (((x109|x110)%x111)+x112);

	if (t25 != -23LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x113 = 225235865U;
	int32_t x114 = INT32_MIN;

	t26 = (((x113|x114)%x115)+x116);

	if (t26 != 34690716057986841LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x117 = INT16_MAX;
	static int16_t x118 = 75;
	static uint16_t x119 = 2U;
	volatile int16_t x120 = -964;
	static volatile int32_t t27 = 1;

	t27 = (((x117|x118)%x119)+x120);

	if (t27 != -963) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MIN;
	volatile uint8_t x122 = 0U;

	t28 = (((x121|x122)%x123)+x124);

	if (t28 != -66627604LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x126 = UINT32_MAX;
	int8_t x127 = INT8_MAX;
	volatile uint64_t x128 = 8681506092LLU;

	t29 = (((x125|x126)%x127)+x128);

	if (t29 != 8681506092LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MAX;
	int8_t x130 = -13;
	int32_t x131 = -1;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (((x129|x130)%x131)+x132);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	volatile int8_t x134 = -1;
	static uint64_t x135 = 1634649262LLU;
	int16_t x136 = INT16_MIN;
	volatile uint64_t t31 = 8694912006350696LLU;

	t31 = (((x133|x134)%x135)+x136);

	if (t31 != 1155734839LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x138 = 54461596996LLU;
	volatile int32_t x139 = -1;
	volatile int64_t x140 = INT64_MIN;
	static volatile uint64_t t32 = 152LLU;

	t32 = (((x137|x138)%x139)+x140);

	if (t32 != 9223372091316372861LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	uint64_t x143 = 1134919674692LLU;
	volatile uint64_t t33 = 71LLU;

	t33 = (((x141|x142)%x143)+x144);

	if (t33 != 142118409365LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t t34 = INT64_MIN;

	t34 = (((x145|x146)%x147)+x148);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -678;
	int8_t x150 = INT8_MIN;
	volatile int64_t x151 = INT64_MIN;
	volatile uint16_t x152 = 3U;
	static volatile int64_t t35 = 42003761LL;

	t35 = (((x149|x150)%x151)+x152);

	if (t35 != -35LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = INT8_MIN;
	uint8_t x154 = 17U;
	int64_t x155 = INT64_MIN;
	int32_t x156 = INT32_MIN;
	volatile int64_t t36 = -12940795724LL;

	t36 = (((x153|x154)%x155)+x156);

	if (t36 != -2147483759LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x157 = 63;
	uint16_t x158 = 3U;
	int8_t x159 = 1;
	int32_t t37 = -138;

	t37 = (((x157|x158)%x159)+x160);

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MAX;
	volatile int32_t x163 = INT32_MIN;
	int16_t x164 = -1;

	t38 = (((x161|x162)%x163)+x164);

	if (t38 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MAX;
	volatile int32_t x166 = INT32_MAX;
	static int32_t x167 = INT32_MAX;
	uint32_t x168 = UINT32_MAX;

	t39 = (((x165|x166)%x167)+x168);

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -1LL;
	static int64_t x170 = -56061788301156LL;
	int32_t x171 = 768591577;
	int16_t x172 = INT16_MAX;
	volatile int64_t t40 = -1869085163428LL;

	t40 = (((x169|x170)%x171)+x172);

	if (t40 != 32766LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x174 = INT16_MAX;
	static uint16_t x176 = 8763U;

	t41 = (((x173|x174)%x175)+x176);

	if (t41 != 41530) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x177 = -1;
	int64_t x178 = 1LL;
	int16_t x179 = -55;
	static int16_t x180 = -1;
	static volatile int64_t t42 = 3654428038224LL;

	t42 = (((x177|x178)%x179)+x180);

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = -3;
	uint64_t x182 = 1812LLU;
	static int64_t x183 = 58032597845372LL;
	int64_t x184 = 7738LL;
	static uint64_t t43 = 2LLU;

	t43 = (((x181|x182)%x183)+x184);

	if (t43 != 38261796852455LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = 106234;
	int64_t x186 = INT64_MIN;
	uint64_t x187 = UINT64_MAX;
	int8_t x188 = INT8_MIN;
	volatile uint64_t t44 = 3665857LLU;

	t44 = (((x185|x186)%x187)+x188);

	if (t44 != 9223372036854881914LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = UINT64_MAX;
	int32_t x190 = -1;
	int64_t x191 = INT64_MIN;
	uint8_t x192 = 52U;
	static uint64_t t45 = 7847707856527448457LLU;

	t45 = (((x189|x190)%x191)+x192);

	if (t45 != 9223372036854775859LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x194 = 310688757288LLU;
	static int8_t x195 = INT8_MAX;
	static uint32_t x196 = 31231U;
	uint64_t t46 = 464526257759LLU;

	t46 = (((x193|x194)%x195)+x196);

	if (t46 != 31232LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x197 = -3078168626249843LL;
	int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MAX;
	uint16_t x200 = 2U;
	volatile int64_t t47 = -3054946757311LL;

	t47 = (((x197|x198)%x199)+x200);

	if (t47 != -113LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = -156518LL;
	static int8_t x202 = -1;
	static uint64_t x203 = 12LLU;
	uint64_t t48 = 43341733722918291LLU;

	t48 = (((x201|x202)%x203)+x204);

	if (t48 != 130LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x205 = 72332847558LLU;
	volatile int64_t x206 = 19LL;
	int32_t x207 = INT32_MIN;
	int8_t x208 = INT8_MIN;
	static uint64_t t49 = 72741779591LLU;

	t49 = (((x205|x206)%x207)+x208);

	if (t49 != 72332847447LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = UINT16_MAX;
	int16_t x210 = 1;
	volatile int32_t x211 = 83;
	volatile uint8_t x212 = 1U;

	t50 = (((x209|x210)%x211)+x212);

	if (t50 != 49) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MIN;
	uint8_t x214 = 15U;
	int16_t x215 = -4106;
	int32_t t51 = 3;

	t51 = (((x213|x214)%x215)+x216);

	if (t51 != -4012) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = UINT8_MAX;
	volatile uint16_t x218 = 3584U;
	int8_t x219 = -1;
	uint64_t x220 = UINT64_MAX;
	uint64_t t52 = UINT64_MAX;

	t52 = (((x217|x218)%x219)+x220);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = 446U;
	static int16_t x222 = 6;
	static int32_t x223 = INT32_MIN;
	static int8_t x224 = INT8_MIN;
	volatile uint32_t t53 = 16089514U;

	t53 = (((x221|x222)%x223)+x224);

	if (t53 != 318U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MAX;
	int16_t x227 = -1;
	uint64_t x228 = UINT64_MAX;
	uint64_t t54 = UINT64_MAX;

	t54 = (((x225|x226)%x227)+x228);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x231 = INT8_MIN;
	int32_t x232 = -6089;
	static uint64_t t55 = 81948687419LLU;

	t55 = (((x229|x230)%x231)+x232);

	if (t55 != 9223372036854769718LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x233 = 7U;
	uint8_t x235 = UINT8_MAX;
	int64_t x236 = -1LL;
	uint64_t t56 = 9860389920LLU;

	t56 = (((x233|x234)%x235)+x236);

	if (t56 != 170LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x238 = UINT32_MAX;
	uint8_t x239 = 111U;
	volatile uint32_t x240 = UINT32_MAX;
	uint32_t t57 = 7576U;

	t57 = (((x237|x238)%x239)+x240);

	if (t57 != 5U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x241 = UINT8_MAX;
	uint16_t x242 = 0U;
	int32_t x243 = INT32_MAX;
	static volatile int32_t t58 = 2332;

	t58 = (((x241|x242)%x243)+x244);

	if (t58 != -2147483393) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MIN;
	static volatile int32_t x247 = INT32_MIN;
	int64_t t59 = INT64_MIN;

	t59 = (((x245|x246)%x247)+x248);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x249 = 487U;
	int16_t x250 = -9682;
	static uint64_t x251 = UINT64_MAX;
	volatile uint64_t t60 = 25257237570LLU;

	t60 = (((x249|x250)%x251)+x252);

	if (t60 != 23534LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MIN;
	volatile int16_t x255 = 94;
	static int32_t t61 = -205;

	t61 = (((x253|x254)%x255)+x256);

	if (t61 != -33) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = 169;
	int32_t x262 = INT32_MIN;
	int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MAX;

	t62 = (((x261|x262)%x263)+x264);

	if (t62 != 40) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x266 = 608U;
	static uint32_t x267 = UINT32_MAX;
	static int16_t x268 = -43;
	volatile uint32_t t63 = 0U;

	t63 = (((x265|x266)%x267)+x268);

	if (t63 != 4294967253U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x269 = INT16_MIN;
	static int32_t x270 = -1;
	int32_t x271 = -1;
	volatile int16_t x272 = INT16_MIN;
	int32_t t64 = -207;

	t64 = (((x269|x270)%x271)+x272);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = 10U;
	volatile int64_t x274 = INT64_MIN;
	uint64_t x275 = 8748LLU;
	uint64_t t65 = 1153141550145LLU;

	t65 = (((x273|x274)%x275)+x276);

	if (t65 != 18446744073709526822LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = 2465290813566412315LL;
	volatile int64_t x280 = 66554LL;
	static int64_t t66 = 1020466062026LL;

	t66 = (((x277|x278)%x279)+x280);

	if (t66 != -357963243LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -11;
	int16_t x283 = -1;
	int32_t x284 = INT32_MAX;
	volatile int64_t t67 = -659793136LL;

	t67 = (((x281|x282)%x283)+x284);

	if (t67 != 2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = 85U;
	uint32_t x286 = 70523U;
	uint32_t x287 = 677710770U;
	int8_t x288 = -1;

	t68 = (((x285|x286)%x287)+x288);

	if (t68 != 70526U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	int64_t x291 = 57LL;
	uint8_t x292 = UINT8_MAX;

	t69 = (((x289|x290)%x291)+x292);

	if (t69 != 199LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x294 = INT64_MIN;
	uint16_t x295 = 1019U;
	static volatile int8_t x296 = INT8_MIN;
	volatile int64_t t70 = -64556LL;

	t70 = (((x293|x294)%x295)+x296);

	if (t70 != -561LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x298 = UINT64_MAX;
	int64_t x299 = INT64_MAX;
	int32_t x300 = -1;
	volatile uint64_t t71 = 464508550637LLU;

	t71 = (((x297|x298)%x299)+x300);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = 1772;
	volatile int16_t x302 = INT16_MAX;
	volatile int64_t x303 = -1864LL;

	t72 = (((x301|x302)%x303)+x304);

	if (t72 != 951LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int32_t x306 = INT32_MIN;
	int64_t x308 = -28128383609103LL;

	t73 = (((x305|x306)%x307)+x308);

	if (t73 != -28126236125456LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x309 = INT8_MAX;
	int64_t x310 = 1124827772947891LL;
	int64_t x311 = INT64_MIN;
	int64_t x312 = INT64_MIN;
	volatile int64_t t74 = -16783224337LL;

	t74 = (((x309|x310)%x311)+x312);

	if (t74 != -9222247209081827841LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x314 = INT8_MAX;
	int64_t x315 = INT64_MAX;
	int8_t x316 = -1;
	int64_t t75 = 106428423LL;

	t75 = (((x313|x314)%x315)+x316);

	if (t75 != -2LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = 6LL;
	uint32_t x318 = UINT32_MAX;
	int64_t x319 = -1LL;
	uint8_t x320 = UINT8_MAX;

	t76 = (((x317|x318)%x319)+x320);

	if (t76 != 255LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = 16;
	volatile int16_t x322 = 154;
	static int64_t x323 = INT64_MIN;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t77 = 1LLU;

	t77 = (((x321|x322)%x323)+x324);

	if (t77 != 153LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = INT64_MIN;
	volatile int32_t x326 = INT32_MAX;
	static int8_t x327 = -1;
	int8_t x328 = -59;
	int64_t t78 = -66556469LL;

	t78 = (((x325|x326)%x327)+x328);

	if (t78 != -59LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x329 = INT64_MAX;
	uint8_t x330 = 3U;
	int64_t x331 = INT64_MAX;
	int32_t x332 = INT32_MIN;
	static volatile int64_t t79 = -1475758660612761LL;

	t79 = (((x329|x330)%x331)+x332);

	if (t79 != -2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x333 = 3U;
	volatile uint8_t x334 = 17U;
	static volatile int16_t x335 = INT16_MIN;
	int16_t x336 = INT16_MIN;
	int32_t t80 = 703;

	t80 = (((x333|x334)%x335)+x336);

	if (t80 != -32749) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = 3154094494268841LL;
	volatile uint16_t x339 = 3464U;
	int32_t x340 = -23219;
	volatile int64_t t81 = -29LL;

	t81 = (((x337|x338)%x339)+x340);

	if (t81 != -23306LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = INT8_MIN;
	volatile int32_t x342 = -1366;
	uint8_t x343 = 2U;
	int64_t x344 = INT64_MAX;
	volatile int64_t t82 = INT64_MAX;

	t82 = (((x341|x342)%x343)+x344);

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x346 = INT8_MAX;
	static int32_t x348 = INT32_MIN;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (((x345|x346)%x347)+x348);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = -2;
	int16_t x350 = INT16_MIN;
	static uint16_t x351 = UINT16_MAX;
	volatile int32_t t84 = -3;

	t84 = (((x349|x350)%x351)+x352);

	if (t84 != 32765) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x354 = INT16_MIN;
	static uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MIN;
	static volatile uint32_t t85 = 904U;

	t85 = (((x353|x354)%x355)+x356);

	if (t85 != 4294901760U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x357 = INT32_MIN;
	int16_t x358 = -1;
	uint32_t x360 = 1463078058U;

	t86 = (((x357|x358)%x359)+x360);

	if (t86 != 1463078058LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x361 = 2;
	volatile int32_t x362 = -43975907;
	volatile int32_t x363 = INT32_MIN;
	volatile int32_t t87 = -456752738;

	t87 = (((x361|x362)%x363)+x364);

	if (t87 != -43975807) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MAX;
	static uint64_t t88 = 182481295406124LLU;

	t88 = (((x365|x366)%x367)+x368);

	if (t88 != 1853767825000022837LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x369 = INT16_MAX;
	uint32_t x370 = 6U;
	static volatile int64_t x371 = INT64_MAX;
	static uint64_t x372 = UINT64_MAX;
	uint64_t t89 = 3751LLU;

	t89 = (((x369|x370)%x371)+x372);

	if (t89 != 32766LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x373 = 52U;
	uint8_t x375 = UINT8_MAX;
	static int16_t x376 = INT16_MIN;
	static volatile int32_t t90 = 6376782;

	t90 = (((x373|x374)%x375)+x376);

	if (t90 != -32641) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x377 = 389314862LLU;
	int64_t x378 = 133545668LL;
	int32_t x379 = -170405480;
	uint32_t x380 = UINT32_MAX;
	volatile uint64_t t91 = 3LLU;

	t91 = (((x377|x378)%x379)+x380);

	if (t91 != 4696965101LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MIN;
	volatile int16_t x382 = INT16_MIN;
	static uint32_t x383 = UINT32_MAX;
	uint64_t x384 = 604541787175212LLU;
	uint64_t t92 = 2LLU;

	t92 = (((x381|x382)%x383)+x384);

	if (t92 != 604546082142380LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x385 = -12;
	volatile int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MAX;
	int64_t t93 = 3590LL;

	t93 = (((x385|x386)%x387)+x388);

	if (t93 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x389 = 5U;
	int64_t x390 = -1LL;
	int32_t x392 = INT32_MIN;
	volatile int64_t t94 = -107443017349LL;

	t94 = (((x389|x390)%x391)+x392);

	if (t94 != -2147483649LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x393 = INT32_MIN;
	int16_t x394 = 2515;
	volatile uint64_t x395 = UINT64_MAX;
	int16_t x396 = INT16_MAX;
	volatile uint64_t t95 = 532334869526LLU;

	t95 = (((x393|x394)%x395)+x396);

	if (t95 != 18446744071562103250LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x397 = INT32_MIN;
	static int64_t x400 = INT64_MIN;
	uint64_t t96 = 4546865043405LLU;

	t96 = (((x397|x398)%x399)+x400);

	if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x405 = UINT64_MAX;
	uint64_t t97 = 394963694412684LLU;

	t97 = (((x405|x406)%x407)+x408);

	if (t97 != 621076843296LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x410 = 6128118705475424501LLU;
	volatile int32_t x411 = -1;
	volatile uint64_t t98 = 15580305LLU;

	t98 = (((x409|x410)%x411)+x412);

	if (t98 != 18446744071919243636LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x413 = 0U;
	uint32_t x414 = 42389U;
	int32_t x415 = INT32_MIN;
	int8_t x416 = INT8_MIN;
	static volatile uint32_t t99 = 166U;

	t99 = (((x413|x414)%x415)+x416);

	if (t99 != 42261U) { NG(); } else { ; }
	
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

