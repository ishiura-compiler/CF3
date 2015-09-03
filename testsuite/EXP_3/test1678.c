#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 2665635755267030LLU;
int16_t x8 = INT16_MAX;
volatile int32_t t2 = -1049993324;
volatile uint64_t x17 = 6464231LLU;
int32_t x23 = INT32_MIN;
volatile int64_t x36 = INT64_MIN;
static int64_t x39 = -1LL;
int64_t x43 = -18127LL;
int16_t x48 = 1132;
volatile int16_t x52 = -1;
static volatile int8_t x66 = INT8_MIN;
volatile uint32_t x70 = 119881991U;
uint16_t x78 = UINT16_MAX;
uint64_t x80 = 1982850681LLU;
volatile int64_t t20 = 9498LL;
int32_t x87 = INT32_MIN;
int16_t x91 = 1;
uint64_t x95 = 12LLU;
int64_t t23 = 775558915315398LL;
uint64_t x103 = 14124570938705045LLU;
static uint8_t x110 = 36U;
int32_t x115 = -1;
uint16_t x122 = 26U;
uint16_t x123 = 0U;
volatile int32_t t30 = 2875342;
int16_t x127 = INT16_MIN;
uint16_t x131 = UINT16_MAX;
int8_t x138 = -1;
int8_t x139 = INT8_MIN;
volatile int64_t x142 = INT64_MAX;
int16_t x148 = INT16_MIN;
uint8_t x156 = 5U;
uint8_t x158 = 49U;
uint8_t x159 = UINT8_MAX;
volatile uint64_t t39 = 3078310272LLU;
static int64_t x173 = -1LL;
volatile int32_t x174 = -9;
uint16_t x177 = 158U;
volatile int8_t x180 = -1;
int64_t t43 = -3422702869740624LL;
volatile int8_t x193 = INT8_MAX;
uint32_t x199 = 28U;
volatile int32_t t51 = 7634;
volatile uint16_t x213 = 99U;
int8_t x215 = INT8_MAX;
uint8_t x217 = UINT8_MAX;
static int64_t x219 = INT64_MAX;
volatile int8_t x220 = -1;
int8_t x223 = INT8_MIN;
static volatile uint32_t x230 = 219433U;
uint32_t x231 = 3U;
int64_t x240 = -1LL;
int16_t x245 = INT16_MIN;
static int32_t x251 = -6;
volatile int32_t x254 = 493083;
uint64_t t62 = 18621LLU;
volatile int16_t x261 = -1;
volatile int32_t x265 = INT32_MAX;
int16_t x269 = INT16_MAX;
volatile int16_t x270 = INT16_MIN;
volatile int32_t t69 = 1;
volatile int64_t x286 = -1LL;
int64_t t70 = -537744637054LL;
int16_t x297 = -1;
static int64_t x299 = -432280019925909LL;
static int16_t x301 = -1;
int16_t x302 = -6298;
static volatile uint32_t x303 = 353278544U;
static int64_t x307 = INT64_MIN;
int32_t x312 = 736;
uint64_t x316 = UINT64_MAX;
static uint64_t x317 = 9260LLU;
int8_t x325 = -58;
uint8_t x330 = 0U;
int8_t x333 = INT8_MAX;
uint32_t x334 = 23U;
int64_t x338 = INT64_MAX;
static int64_t x340 = 489197283774996713LL;
int64_t x349 = INT64_MAX;
int8_t x351 = 0;
static int32_t t87 = 1909758;
uint16_t x357 = UINT16_MAX;
int32_t t88 = 425483547;
static volatile int16_t x368 = -456;
int16_t x370 = -1;
static int64_t x371 = INT64_MIN;
int64_t x372 = INT64_MIN;
uint32_t x373 = UINT32_MAX;
volatile uint64_t x374 = UINT64_MAX;
uint64_t x376 = UINT64_MAX;
int8_t x379 = -53;
volatile int64_t x401 = -1LL;
static uint16_t x404 = UINT16_MAX;
int8_t x405 = 1;
int16_t x407 = -1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile int8_t x2 = -1;
	int8_t x3 = INT8_MAX;
	volatile int32_t t0 = -514775880;

	t0 = ((x1^x2)+(x3<=x4));

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 7483814U;
	int16_t x6 = 52;
	volatile uint8_t x7 = 0U;
	uint32_t t1 = 1342U;

	t1 = ((x5^x6)+(x7<=x8));

	if (t1 != 7483795U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	static int8_t x10 = INT8_MAX;
	uint16_t x11 = 218U;
	static volatile uint32_t x12 = UINT32_MAX;

	t2 = ((x9^x10)+(x11<=x12));

	if (t2 != -2147483520) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	uint8_t x14 = 0U;
	static int64_t x15 = 15833783LL;
	int32_t x16 = -1;
	static int32_t t3 = 22757;

	t3 = ((x13^x14)+(x15<=x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MAX;
	int64_t x19 = INT64_MIN;
	uint16_t x20 = 616U;
	volatile uint64_t t4 = 30277027LLU;

	t4 = ((x17^x18)+(x19<=x20));

	if (t4 != 6479129LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 7U;
	int64_t x22 = 154047100364LL;
	uint32_t x24 = UINT32_MAX;
	volatile int64_t t5 = -476387455447105050LL;

	t5 = ((x21^x22)+(x23<=x24));

	if (t5 != 154047100364LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -1;
	static uint16_t x26 = 118U;
	volatile int32_t x27 = -1;
	int8_t x28 = INT8_MAX;
	static int32_t t6 = 58408;

	t6 = ((x25^x26)+(x27<=x28));

	if (t6 != -118) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	int64_t x30 = -6595387056331LL;
	volatile int16_t x31 = -1;
	volatile int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 347650248776LL;

	t7 = ((x29^x30)+(x31<=x32));

	if (t7 != -6595387056310LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 11330U;
	uint16_t x34 = UINT16_MAX;
	int64_t x35 = 4LL;
	static int32_t t8 = -75;

	t8 = ((x33^x34)+(x35<=x36));

	if (t8 != 54205) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = 270;
	int64_t x38 = -396427280LL;
	int32_t x40 = INT32_MIN;
	static int64_t t9 = 1051900579493LL;

	t9 = ((x37^x38)+(x39<=x40));

	if (t9 != -396427522LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 0U;
	int8_t x42 = -1;
	volatile uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = -60607541;

	t10 = ((x41^x42)+(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static int32_t x46 = -1290;
	static int16_t x47 = INT16_MAX;
	static volatile int32_t t11 = -316151;

	t11 = ((x45^x46)+(x47<=x48));

	if (t11 != 1398) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 3U;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = -1LL;
	uint64_t t12 = 41589686208031LLU;

	t12 = ((x49^x50)+(x51<=x52));

	if (t12 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -32;
	int64_t x54 = INT64_MAX;
	static int64_t x55 = -1LL;
	static volatile int64_t x56 = INT64_MIN;
	int64_t t13 = -611561LL;

	t13 = ((x53^x54)+(x55<=x56));

	if (t13 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	int64_t x58 = -1LL;
	int8_t x59 = -1;
	int64_t x60 = INT64_MIN;
	int64_t t14 = -24489521343LL;

	t14 = ((x57^x58)+(x59<=x60));

	if (t14 != -2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -3;
	uint8_t x62 = 62U;
	uint32_t x63 = UINT32_MAX;
	volatile uint16_t x64 = 3U;
	volatile int32_t t15 = -6407;

	t15 = ((x61^x62)+(x63<=x64));

	if (t15 != -61) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 1U;
	static volatile uint8_t x67 = 0U;
	uint8_t x68 = 32U;
	int32_t t16 = -1921;

	t16 = ((x65^x66)+(x67<=x68));

	if (t16 != -126) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -5;
	int32_t x71 = INT32_MAX;
	static int32_t x72 = -67066409;
	volatile uint32_t t17 = 359517649U;

	t17 = ((x69^x70)+(x71<=x72));

	if (t17 != 4175085308U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 7U;
	int8_t x74 = INT8_MAX;
	volatile int32_t x75 = 264871;
	uint32_t x76 = 5389424U;
	int32_t t18 = -332;

	t18 = ((x73^x74)+(x75<=x76));

	if (t18 != 121) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 261964LLU;
	volatile uint16_t x79 = 29U;
	uint64_t t19 = 6605001LLU;

	t19 = ((x77^x78)+(x79<=x80));

	if (t19 != 196788LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = -1LL;
	static uint16_t x82 = 98U;
	int64_t x83 = 691LL;
	int16_t x84 = -1;

	t20 = ((x81^x82)+(x83<=x84));

	if (t20 != -99LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int32_t x86 = INT32_MAX;
	volatile uint32_t x88 = 68520U;
	int32_t t21 = -128843561;

	t21 = ((x85^x86)+(x87<=x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 18U;
	int32_t x90 = INT32_MAX;
	int64_t x92 = -10LL;
	static volatile int32_t t22 = 3929;

	t22 = ((x89^x90)+(x91<=x92));

	if (t22 != 2147483629) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;
	static volatile int8_t x96 = INT8_MIN;

	t23 = ((x93^x94)+(x95<=x96));

	if (t23 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	uint16_t x98 = 369U;
	int32_t x99 = -1;
	static volatile uint8_t x100 = UINT8_MAX;
	int32_t t24 = -1;

	t24 = ((x97^x98)+(x99<=x100));

	if (t24 != 399) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = INT8_MAX;
	static uint32_t x104 = UINT32_MAX;
	volatile uint64_t t25 = 6882257333075LLU;

	t25 = ((x101^x102)+(x103<=x104));

	if (t25 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = 876LLU;
	uint32_t x106 = 250567U;
	int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MIN;
	static uint64_t t26 = 352968233462512LLU;

	t26 = ((x105^x106)+(x107<=x108));

	if (t26 != 250284LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	static int32_t x111 = -1;
	static uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = -1;

	t27 = ((x109^x110)+(x111<=x112));

	if (t27 != -32731) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = -1;
	static int8_t x114 = INT8_MIN;
	int16_t x116 = INT16_MIN;
	int32_t t28 = 748813;

	t28 = ((x113^x114)+(x115<=x116));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static int16_t x118 = 12344;
	int8_t x119 = -46;
	volatile int32_t x120 = -1451;
	int32_t t29 = -600;

	t29 = ((x117^x118)+(x119<=x120));

	if (t29 != -2147471304) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int16_t x124 = INT16_MIN;

	t30 = ((x121^x122)+(x123<=x124));

	if (t30 != -27) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x125 = INT64_MIN;
	int32_t x126 = -60;
	volatile int16_t x128 = INT16_MIN;
	static int64_t t31 = 349810624450358LL;

	t31 = ((x125^x126)+(x127<=x128));

	if (t31 != 9223372036854775749LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x129 = UINT8_MAX;
	static int64_t x130 = INT64_MIN;
	static int32_t x132 = INT32_MIN;
	int64_t t32 = 4237603219LL;

	t32 = ((x129^x130)+(x131<=x132));

	if (t32 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	uint64_t x134 = 179777979908397LLU;
	static uint64_t x135 = 64144904500696358LLU;
	int32_t x136 = INT32_MIN;
	volatile uint64_t t33 = 2216728105346604473LLU;

	t33 = ((x133^x134)+(x135<=x136));

	if (t33 != 18446564295729643219LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = 807U;
	int32_t x140 = INT32_MIN;
	static volatile uint32_t t34 = 201334U;

	t34 = ((x137^x138)+(x139<=x140));

	if (t34 != 4294966488U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	uint16_t x143 = 214U;
	uint16_t x144 = 2293U;
	int64_t t35 = -36262279LL;

	t35 = ((x141^x142)+(x143<=x144));

	if (t35 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 161LLU;
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = -1LL;
	uint64_t t36 = 6648LLU;

	t36 = ((x145^x146)+(x147<=x148));

	if (t36 != 4294967134LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = 282U;
	int8_t x150 = INT8_MIN;
	uint64_t x151 = 1639975264851386LLU;
	uint32_t x152 = 13504609U;
	volatile uint32_t t37 = 3106802U;

	t37 = ((x149^x150)+(x151<=x152));

	if (t37 != 4294966938U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 115U;
	int8_t x154 = INT8_MAX;
	uint32_t x155 = 80284U;
	volatile int32_t t38 = -12557;

	t38 = ((x153^x154)+(x155<=x156));

	if (t38 != 12) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	int16_t x160 = -1;

	t39 = ((x157^x158)+(x159<=x160));

	if (t39 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x161 = UINT8_MAX;
	int32_t x162 = INT32_MIN;
	int64_t x163 = 349576879LL;
	static int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 179;

	t40 = ((x161^x162)+(x163<=x164));

	if (t40 != -2147483393) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = INT32_MIN;
	int64_t x170 = INT64_MAX;
	static int64_t x171 = -3113918857544568LL;
	uint32_t x172 = UINT32_MAX;
	static int64_t t41 = -8774527075262516LL;

	t41 = ((x169^x170)+(x171<=x172));

	if (t41 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x175 = UINT32_MAX;
	volatile uint64_t x176 = UINT64_MAX;
	int64_t t42 = -36LL;

	t42 = ((x173^x174)+(x175<=x176));

	if (t42 != 9LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x178 = -124519237683862728LL;
	int64_t x179 = -1LL;

	t43 = ((x177^x178)+(x179<=x180));

	if (t43 != -124519237683862617LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MIN;
	static uint8_t x182 = 43U;
	uint64_t x183 = 1451279001062309476LLU;
	int64_t x184 = INT64_MIN;
	int32_t t44 = 3;

	t44 = ((x181^x182)+(x183<=x184));

	if (t44 != -84) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = -11;
	volatile int8_t x186 = INT8_MIN;
	uint16_t x187 = 109U;
	volatile uint8_t x188 = 37U;
	int32_t t45 = 4308;

	t45 = ((x185^x186)+(x187<=x188));

	if (t45 != 117) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = -1;
	static volatile int64_t x191 = 24770226693879295LL;
	int32_t x192 = -1;
	int32_t t46 = 327526;

	t46 = ((x189^x190)+(x191<=x192));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x194 = -1;
	int16_t x195 = -738;
	int8_t x196 = INT8_MAX;
	int32_t t47 = -401;

	t47 = ((x193^x194)+(x195<=x196));

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x197 = -1;
	int64_t x198 = INT64_MIN;
	int16_t x200 = 0;
	volatile int64_t t48 = INT64_MAX;

	t48 = ((x197^x198)+(x199<=x200));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x201 = 3;
	int8_t x202 = INT8_MIN;
	uint8_t x203 = 2U;
	uint64_t x204 = 42182LLU;
	int32_t t49 = -18;

	t49 = ((x201^x202)+(x203<=x204));

	if (t49 != -124) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x205 = 525591089639041LLU;
	int16_t x206 = INT16_MAX;
	int16_t x207 = -1;
	int64_t x208 = INT64_MIN;
	volatile uint64_t t50 = 260993205LLU;

	t50 = ((x205^x206)+(x207<=x208));

	if (t50 != 525591089615230LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x209 = INT8_MAX;
	static volatile uint8_t x210 = 86U;
	static uint64_t x211 = 209566LLU;
	int32_t x212 = -1;

	t51 = ((x209^x210)+(x211<=x212));

	if (t51 != 42) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x214 = INT8_MAX;
	int16_t x216 = INT16_MAX;
	volatile int32_t t52 = 1;

	t52 = ((x213^x214)+(x215<=x216));

	if (t52 != 29) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x218 = INT32_MAX;
	volatile int32_t t53 = -13269580;

	t53 = ((x217^x218)+(x219<=x220));

	if (t53 != 2147483392) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = -1;
	uint32_t x222 = 900761U;
	uint8_t x224 = 3U;
	volatile uint32_t t54 = 34U;

	t54 = ((x221^x222)+(x223<=x224));

	if (t54 != 4294066535U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x225 = UINT8_MAX;
	static uint32_t x226 = 15624U;
	int64_t x227 = INT64_MIN;
	static volatile int16_t x228 = INT16_MIN;
	uint32_t t55 = 7U;

	t55 = ((x225^x226)+(x227<=x228));

	if (t55 != 15864U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = -1;
	volatile int64_t x232 = -993389145746906LL;
	uint32_t t56 = 6589U;

	t56 = ((x229^x230)+(x231<=x232));

	if (t56 != 4294747862U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = 218899U;
	uint64_t x234 = 262228421LLU;
	static int16_t x235 = 39;
	uint64_t x236 = 259674256866471LLU;
	static uint64_t t57 = 206951742622LLU;

	t57 = ((x233^x234)+(x235<=x236));

	if (t57 != 262282967LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = 245;
	static uint64_t x238 = 3823494LLU;
	uint8_t x239 = 7U;
	uint64_t t58 = 673428645LLU;

	t58 = ((x237^x238)+(x239<=x240));

	if (t58 != 3823475LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x241 = 3U;
	static volatile int8_t x242 = INT8_MIN;
	static volatile int64_t x243 = -718LL;
	static volatile uint64_t x244 = 6513169511149013LLU;
	volatile int32_t t59 = 21169;

	t59 = ((x241^x242)+(x243<=x244));

	if (t59 != -125) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x246 = 10042LLU;
	uint16_t x247 = 0U;
	int16_t x248 = 425;
	static uint64_t t60 = 5375758206LLU;

	t60 = ((x245^x246)+(x247<=x248));

	if (t60 != 18446744073709528891LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x249 = 58920U;
	volatile int16_t x250 = INT16_MAX;
	int64_t x252 = INT64_MIN;
	static volatile uint32_t t61 = 226U;

	t61 = ((x249^x250)+(x251<=x252));

	if (t61 != 39383U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x253 = 15088961LLU;
	static uint16_t x255 = 1U;
	uint64_t x256 = 217719052LLU;

	t62 = ((x253^x254)+(x255<=x256));

	if (t62 != 14793563LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x257 = 1LLU;
	int8_t x258 = -6;
	uint8_t x259 = UINT8_MAX;
	static int32_t x260 = INT32_MAX;
	static uint64_t t63 = 3956953LLU;

	t63 = ((x257^x258)+(x259<=x260));

	if (t63 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x262 = INT8_MIN;
	static uint16_t x263 = 1U;
	uint64_t x264 = UINT64_MAX;
	static int32_t t64 = -75772740;

	t64 = ((x261^x262)+(x263<=x264));

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x266 = INT64_MAX;
	volatile int64_t x267 = 1702LL;
	int64_t x268 = -1LL;
	volatile int64_t t65 = 727423855LL;

	t65 = ((x265^x266)+(x267<=x268));

	if (t65 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x271 = 30066769;
	int32_t x272 = INT32_MIN;
	volatile int32_t t66 = -1633583;

	t66 = ((x269^x270)+(x271<=x272));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x273 = 1442U;
	int64_t x274 = INT64_MIN;
	static int32_t x275 = INT32_MIN;
	static int16_t x276 = -9;
	int64_t t67 = 190909013361352LL;

	t67 = ((x273^x274)+(x275<=x276));

	if (t67 != -9223372036854774365LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x277 = INT32_MIN;
	uint64_t x278 = 308522879996343LLU;
	int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MIN;
	static uint64_t t68 = 87971827338138LLU;

	t68 = ((x277^x278)+(x279<=x280));

	if (t68 != 18446435549375549880LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = -9;
	int8_t x282 = INT8_MIN;
	int8_t x283 = -2;
	volatile int32_t x284 = -1;

	t69 = ((x281^x282)+(x283<=x284));

	if (t69 != 120) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x285 = INT32_MIN;
	int16_t x287 = -11;
	volatile int64_t x288 = 327840690866LL;

	t70 = ((x285^x286)+(x287<=x288));

	if (t70 != 2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x289 = -9;
	volatile int64_t x290 = INT64_MIN;
	static int8_t x291 = INT8_MIN;
	int8_t x292 = 1;
	int64_t t71 = 547927878510361032LL;

	t71 = ((x289^x290)+(x291<=x292));

	if (t71 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = UINT16_MAX;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = INT8_MAX;
	volatile uint16_t x296 = 4U;
	volatile uint64_t t72 = 17175857472701421LLU;

	t72 = ((x293^x294)+(x295<=x296));

	if (t72 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x298 = 4LLU;
	volatile int32_t x300 = INT32_MIN;
	uint64_t t73 = 133277952230LLU;

	t73 = ((x297^x298)+(x299<=x300));

	if (t73 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x304 = 4;
	int32_t t74 = 224588;

	t74 = ((x301^x302)+(x303<=x304));

	if (t74 != 6297) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x305 = UINT32_MAX;
	static uint8_t x306 = 0U;
	int64_t x308 = INT64_MIN;
	volatile uint32_t t75 = 316U;

	t75 = ((x305^x306)+(x307<=x308));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = 318;
	volatile int64_t x310 = INT64_MAX;
	uint32_t x311 = 1784U;
	volatile int64_t t76 = 1LL;

	t76 = ((x309^x310)+(x311<=x312));

	if (t76 != 9223372036854775489LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = INT16_MAX;
	uint32_t x314 = 28092U;
	int64_t x315 = INT64_MIN;
	volatile uint32_t t77 = 12376935U;

	t77 = ((x313^x314)+(x315<=x316));

	if (t77 != 4676U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x318 = -22925885;
	static int16_t x319 = INT16_MIN;
	volatile int8_t x320 = 1;
	static uint64_t t78 = 2429155827772018956LLU;

	t78 = ((x317^x318)+(x319<=x320));

	if (t78 != 18446744073686616560LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = 15;
	static volatile uint32_t x322 = 303U;
	static uint32_t x323 = UINT32_MAX;
	int8_t x324 = -1;
	uint32_t t79 = 0U;

	t79 = ((x321^x322)+(x323<=x324));

	if (t79 != 289U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x326 = INT8_MIN;
	uint8_t x327 = 0U;
	volatile int32_t x328 = -14;
	int32_t t80 = -710147898;

	t80 = ((x325^x326)+(x327<=x328));

	if (t80 != 70) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = INT64_MIN;
	int32_t x331 = 29322;
	int8_t x332 = 3;
	int64_t t81 = INT64_MIN;

	t81 = ((x329^x330)+(x331<=x332));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x335 = 983293816;
	int8_t x336 = INT8_MAX;
	volatile uint32_t t82 = 389299629U;

	t82 = ((x333^x334)+(x335<=x336));

	if (t82 != 104U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = 1;
	uint16_t x339 = 11U;
	int64_t t83 = INT64_MAX;

	t83 = ((x337^x338)+(x339<=x340));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x341 = UINT32_MAX;
	uint32_t x342 = 3174U;
	static volatile int16_t x343 = -1;
	int16_t x344 = -1;
	uint32_t t84 = 28026U;

	t84 = ((x341^x342)+(x343<=x344));

	if (t84 != 4294964122U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	int32_t x348 = INT32_MIN;
	volatile int32_t t85 = -43;

	t85 = ((x345^x346)+(x347<=x348));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x350 = INT16_MIN;
	int32_t x352 = -9802;
	int64_t t86 = 246LL;

	t86 = ((x349^x350)+(x351<=x352));

	if (t86 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = -770030435;
	volatile int8_t x354 = INT8_MIN;
	uint64_t x355 = 286801157612LLU;
	volatile int16_t x356 = -27;

	t87 = ((x353^x354)+(x355<=x356));

	if (t87 != 770030366) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x358 = 0;
	volatile int16_t x359 = INT16_MIN;
	uint16_t x360 = UINT16_MAX;

	t88 = ((x357^x358)+(x359<=x360));

	if (t88 != 65536) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x361 = 148U;
	int16_t x362 = INT16_MIN;
	static uint64_t x363 = UINT64_MAX;
	static volatile int64_t x364 = INT64_MAX;
	volatile int32_t t89 = 6;

	t89 = ((x361^x362)+(x363<=x364));

	if (t89 != -32620) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x365 = 14;
	uint64_t x366 = 0LLU;
	int64_t x367 = INT64_MIN;
	volatile uint64_t t90 = 6853LLU;

	t90 = ((x365^x366)+(x367<=x368));

	if (t90 != 15LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x369 = -1;
	int32_t t91 = -1;

	t91 = ((x369^x370)+(x371<=x372));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x375 = 1613U;
	uint64_t t92 = 3335864066139LLU;

	t92 = ((x373^x374)+(x375<=x376));

	if (t92 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x377 = 3U;
	int64_t x378 = 7849182LL;
	volatile int64_t x380 = 430LL;
	int64_t t93 = 101246814718126LL;

	t93 = ((x377^x378)+(x379<=x380));

	if (t93 != 7849182LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = INT64_MIN;
	int32_t x386 = INT32_MIN;
	int8_t x387 = INT8_MIN;
	uint16_t x388 = 0U;
	int64_t t94 = -64399102919237830LL;

	t94 = ((x385^x386)+(x387<=x388));

	if (t94 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = 8;
	uint16_t x390 = UINT16_MAX;
	static int64_t x391 = -1LL;
	static uint8_t x392 = 3U;
	int32_t t95 = 227942362;

	t95 = ((x389^x390)+(x391<=x392));

	if (t95 != 65528) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MIN;
	uint16_t x394 = UINT16_MAX;
	volatile uint8_t x395 = 2U;
	uint8_t x396 = UINT8_MAX;
	int32_t t96 = -87219110;

	t96 = ((x393^x394)+(x395<=x396));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x397 = 11U;
	volatile int64_t x398 = INT64_MIN;
	uint8_t x399 = 15U;
	static int64_t x400 = INT64_MAX;
	volatile int64_t t97 = -44108136572822LL;

	t97 = ((x397^x398)+(x399<=x400));

	if (t97 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x402 = INT8_MIN;
	int8_t x403 = -1;
	int64_t t98 = 28387786734LL;

	t98 = ((x401^x402)+(x403<=x404));

	if (t98 != 128LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x406 = INT8_MAX;
	static int16_t x408 = -1;
	int32_t t99 = -2081347;

	t99 = ((x405^x406)+(x407<=x408));

	if (t99 != 127) { NG(); } else { ; }
	
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

