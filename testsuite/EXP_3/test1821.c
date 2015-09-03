#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -1279748;
int8_t x8 = -1;
int64_t x9 = 1000059LL;
uint64_t x11 = 257614935238070820LLU;
volatile int16_t x13 = 3580;
int16_t x17 = 113;
uint32_t x23 = 16U;
int32_t x32 = 199438368;
static uint32_t t7 = 26U;
volatile int32_t t8 = -2;
int64_t x39 = INT64_MIN;
volatile uint64_t t10 = 145304261303809LLU;
static int16_t x46 = -8211;
uint32_t t11 = 959811U;
volatile uint8_t x56 = 6U;
uint32_t x64 = 322919514U;
static int8_t x72 = -45;
volatile int64_t t17 = 392489LL;
uint64_t x77 = 2538915LLU;
int8_t x78 = INT8_MIN;
uint64_t t18 = 1840493LLU;
volatile int32_t x83 = 118184;
static int32_t x85 = -1;
uint64_t x86 = 12965395027LLU;
volatile uint16_t x87 = UINT16_MAX;
volatile int16_t x94 = -2489;
int8_t x98 = -1;
uint8_t x100 = 40U;
static int64_t t23 = -1LL;
int64_t x104 = INT64_MIN;
static volatile int64_t t24 = 3476661034LL;
uint64_t x116 = 42191LLU;
volatile int8_t x117 = INT8_MAX;
int32_t x119 = INT32_MIN;
static volatile uint64_t t29 = 65LLU;
uint16_t x126 = 5U;
static int16_t x127 = INT16_MIN;
int32_t x136 = -156;
static int32_t x137 = -135815;
volatile uint64_t t34 = 52LLU;
uint16_t x147 = UINT16_MAX;
volatile uint64_t t36 = 583339781407021LLU;
uint64_t x158 = UINT64_MAX;
uint64_t t38 = 16230201LLU;
volatile uint16_t x164 = 326U;
uint64_t x166 = 6286753002605024LLU;
static uint32_t x168 = 2U;
static uint64_t t40 = 188894841LLU;
volatile int8_t x180 = INT8_MAX;
volatile int32_t t43 = 4;
uint16_t x182 = 12683U;
static int16_t x187 = 8644;
int16_t x191 = INT16_MIN;
int16_t x192 = -1;
uint8_t x194 = 29U;
int8_t x200 = 2;
static uint32_t x204 = 8749U;
int32_t x205 = INT32_MAX;
uint8_t x227 = UINT8_MAX;
int64_t x228 = -1LL;
volatile int64_t t55 = -371398LL;
int16_t x230 = INT16_MAX;
volatile int64_t t56 = -134809597350935747LL;
uint8_t x237 = 20U;
static int16_t x241 = INT16_MAX;
volatile int64_t t59 = -394234082LL;
uint16_t x247 = UINT16_MAX;
uint64_t x257 = 2087742299812LLU;
uint64_t t62 = 13396132489894LLU;
static int16_t x261 = INT16_MIN;
int16_t x273 = INT16_MIN;
int8_t x278 = 0;
int8_t x280 = INT8_MIN;
int8_t x285 = -1;
uint16_t x286 = UINT16_MAX;
static uint64_t x287 = UINT64_MAX;
int32_t x289 = -1;
static int32_t x291 = INT32_MIN;
uint64_t x301 = UINT64_MAX;
int16_t x305 = INT16_MIN;
int64_t x307 = INT64_MIN;
int64_t x312 = 6LL;
volatile int32_t x313 = -1;
uint64_t x316 = 378436541LLU;
int8_t x321 = INT8_MAX;
volatile int8_t x327 = INT8_MIN;
static uint8_t x333 = 34U;
static int16_t x338 = 11945;
uint32_t x347 = 181171U;
static volatile uint32_t t84 = 2383051U;
uint8_t x355 = 15U;
static uint16_t x360 = UINT16_MAX;
volatile int32_t t86 = 102731953;
int32_t x363 = 2602884;
volatile uint64_t t88 = 0LLU;
volatile int64_t x375 = 4411215120860LL;
static volatile int16_t x387 = 1;
int32_t x389 = 3503063;
volatile uint64_t x390 = UINT64_MAX;
int64_t x401 = 734LL;
static int16_t x407 = INT16_MIN;
int64_t x411 = 1507399039391934LL;
int64_t t99 = 13648514600362LL;


void f0(void) {
	int32_t x1 = -767;
	static int16_t x2 = INT16_MIN;
	int8_t x3 = -54;
	int32_t x4 = -1;

	t0 = ((x1&x2)+(x3&x4));

	if (t0 != -32822) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 106U;
	static int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;
	static int32_t t1 = -5863878;

	t1 = ((x5&x6)+(x7&x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 1U;
	int8_t x12 = -1;
	volatile uint64_t t2 = 9LLU;

	t2 = ((x9&x10)+(x11&x12));

	if (t2 != 257614935238070821LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x14 = UINT8_MAX;
	uint8_t x15 = UINT8_MAX;
	volatile int8_t x16 = -1;
	static int32_t t3 = -6645;

	t3 = ((x13&x14)+(x15&x16));

	if (t3 != 507) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = -1;
	int16_t x19 = -1;
	uint16_t x20 = 1080U;
	volatile int32_t t4 = -1030;

	t4 = ((x17&x18)+(x19&x20));

	if (t4 != 1193) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int64_t x22 = 112248091567564816LL;
	static int32_t x24 = -131;
	int64_t t5 = -3LL;

	t5 = ((x21&x22)+(x23&x24));

	if (t5 != 112248091567564832LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -1;
	uint8_t x26 = UINT8_MAX;
	volatile int64_t x27 = -1LL;
	static int16_t x28 = INT16_MIN;
	int64_t t6 = 15LL;

	t6 = ((x25&x26)+(x27&x28));

	if (t6 != -32513LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	static int8_t x30 = -1;
	static volatile uint32_t x31 = 2U;

	t7 = ((x29&x30)+(x31&x32));

	if (t7 != 2147483647U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	static int8_t x34 = INT8_MIN;
	uint8_t x35 = 5U;
	int32_t x36 = INT32_MAX;

	t8 = ((x33&x34)+(x35&x36));

	if (t8 != 2147483525) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	int16_t x38 = -86;
	uint64_t x40 = 3473247968830LLU;
	volatile uint64_t t9 = 33446781578LLU;

	t9 = ((x37&x38)+(x39&x40));

	if (t9 != 18446744073709551530LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 26U;
	uint64_t x42 = UINT64_MAX;
	static int8_t x43 = INT8_MIN;
	static uint64_t x44 = 9453965742074489LLU;

	t10 = ((x41&x42)+(x43&x44));

	if (t10 != 9453965742074394LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -1;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = 61U;

	t11 = ((x45&x46)+(x47&x48));

	if (t11 != 4294959085U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int8_t x50 = INT8_MAX;
	uint64_t x51 = UINT64_MAX;
	static volatile int64_t x52 = INT64_MIN;
	volatile uint64_t t12 = 4177114640LLU;

	t12 = ((x49&x50)+(x51&x52));

	if (t12 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	int32_t x54 = -933246;
	uint32_t x55 = 351U;
	volatile uint32_t t13 = 188U;

	t13 = ((x53&x54)+(x55&x56));

	if (t13 != 4294034056U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 8U;
	int32_t x62 = INT32_MIN;
	uint16_t x63 = 940U;
	volatile uint32_t t14 = 947020U;

	t14 = ((x61&x62)+(x63&x64));

	if (t14 != 8U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	int32_t x66 = INT32_MAX;
	static uint64_t x67 = 207401LLU;
	static uint64_t x68 = 6025966772351LLU;
	volatile uint64_t t15 = 57694748LLU;

	t15 = ((x65&x66)+(x67&x68));

	if (t15 != 2147688488LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	static int32_t x70 = 10;
	int8_t x71 = 0;
	static volatile int32_t t16 = 52436;

	t16 = ((x69&x70)+(x71&x72));

	if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1151;
	int8_t x74 = INT8_MIN;
	int64_t x75 = -479271164394191179LL;
	int8_t x76 = -13;

	t17 = ((x73&x74)+(x75&x76));

	if (t17 != -479271164394192335LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x79 = INT16_MAX;
	int64_t x80 = INT64_MAX;

	t18 = ((x77&x78)+(x79&x80));

	if (t18 != 2571647LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = INT8_MAX;
	int8_t x82 = INT8_MAX;
	volatile int8_t x84 = 15;
	int32_t t19 = -847;

	t19 = ((x81&x82)+(x83&x84));

	if (t19 != 135) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x88 = INT64_MIN;
	volatile uint64_t t20 = 3630096516LLU;

	t20 = ((x85&x86)+(x87&x88));

	if (t20 != 12965395027LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x89 = UINT32_MAX;
	int16_t x90 = INT16_MIN;
	int16_t x91 = -1;
	volatile int16_t x92 = INT16_MAX;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = ((x89&x90)+(x91&x92));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = UINT16_MAX;
	int32_t x95 = -661759;
	int64_t x96 = 425120145060LL;
	int64_t t22 = 17LL;

	t22 = ((x93&x94)+(x95&x96));

	if (t22 != 425120070727LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	static int8_t x99 = INT8_MAX;

	t23 = ((x97&x98)+(x99&x100));

	if (t23 != 39LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = 150;
	int8_t x102 = 7;
	uint32_t x103 = UINT32_MAX;

	t24 = ((x101&x102)+(x103&x104));

	if (t24 != 6LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 1033575150236142152LLU;
	int32_t x106 = -867524;
	int8_t x107 = 1;
	int32_t x108 = -12358;
	volatile uint64_t t25 = 525914422673259688LLU;

	t25 = ((x105&x106)+(x107&x108));

	if (t25 != 1033575150235288072LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MAX;
	uint8_t x112 = 64U;
	int32_t t26 = 14;

	t26 = ((x109&x110)+(x111&x112));

	if (t26 != 192) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x113 = INT32_MIN;
	uint64_t x114 = UINT64_MAX;
	int16_t x115 = INT16_MAX;
	uint64_t t27 = 133795307LLU;

	t27 = ((x113&x114)+(x115&x116));

	if (t27 != 18446744071562077391LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x118 = UINT64_MAX;
	int32_t x120 = 537084174;
	volatile uint64_t t28 = 1068615494224LLU;

	t28 = ((x117&x118)+(x119&x120));

	if (t28 != 127LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = -62;
	int64_t x122 = 503LL;
	int8_t x123 = -1;
	uint64_t x124 = 799315082497LLU;

	t29 = ((x121&x122)+(x123&x124));

	if (t29 != 799315082947LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	volatile uint32_t x128 = UINT32_MAX;
	volatile int64_t t30 = -446LL;

	t30 = ((x125&x126)+(x127&x128));

	if (t30 != 4294934528LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 56U;
	static uint8_t x130 = UINT8_MAX;
	static volatile uint16_t x131 = 1975U;
	int16_t x132 = INT16_MIN;
	volatile int32_t t31 = 14734;

	t31 = ((x129&x130)+(x131&x132));

	if (t31 != 56) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x133 = 938724913683754185LLU;
	volatile uint64_t x134 = UINT64_MAX;
	static uint8_t x135 = 20U;
	static volatile uint64_t t32 = 11230565937LLU;

	t32 = ((x133&x134)+(x135&x136));

	if (t32 != 938724913683754189LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x138 = 168U;
	volatile int64_t x139 = 1LL;
	volatile uint64_t x140 = 19375803LLU;
	uint64_t t33 = 663407LLU;

	t33 = ((x137&x138)+(x139&x140));

	if (t33 != 41LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x141 = UINT64_MAX;
	uint16_t x142 = 3U;
	uint64_t x143 = UINT64_MAX;
	uint32_t x144 = UINT32_MAX;

	t34 = ((x141&x142)+(x143&x144));

	if (t34 != 4294967298LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = 4;
	static int64_t x146 = INT64_MAX;
	volatile int64_t x148 = -1LL;
	int64_t t35 = 3940413036428LL;

	t35 = ((x145&x146)+(x147&x148));

	if (t35 != 65539LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x149 = 23U;
	volatile uint64_t x150 = 1429921395889LLU;
	int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MAX;

	t36 = ((x149&x150)+(x151&x152));

	if (t36 != 9223372036854775697LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -1;
	int32_t x154 = INT32_MIN;
	int8_t x155 = -1;
	uint16_t x156 = 31586U;
	volatile int32_t t37 = 23024561;

	t37 = ((x153&x154)+(x155&x156));

	if (t37 != -2147452062) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MAX;
	int32_t x159 = INT32_MIN;
	uint32_t x160 = 578658032U;

	t38 = ((x157&x158)+(x159&x160));

	if (t38 != 32767LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MIN;
	volatile uint64_t x162 = 2LLU;
	uint64_t x163 = 439480260LLU;
	static volatile uint64_t t39 = 33563LLU;

	t39 = ((x161&x162)+(x163&x164));

	if (t39 != 324LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 9U;
	int32_t x167 = INT32_MIN;

	t40 = ((x165&x166)+(x167&x168));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = 69U;
	int32_t x170 = 295;
	int32_t x171 = -1;
	volatile int16_t x172 = INT16_MIN;
	static volatile int32_t t41 = -18;

	t41 = ((x169&x170)+(x171&x172));

	if (t41 != -32763) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 15U;
	uint64_t x174 = 86554371525LLU;
	uint64_t x175 = 221407622550015738LLU;
	volatile uint16_t x176 = UINT16_MAX;
	uint64_t t42 = 1007LLU;

	t42 = ((x173&x174)+(x175&x176));

	if (t42 != 20223LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MAX;
	int32_t x178 = -334;
	volatile int16_t x179 = 572;

	t43 = ((x177&x178)+(x179&x180));

	if (t43 != 110) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MAX;
	static int8_t x183 = -46;
	volatile uint32_t x184 = 370U;
	int64_t t44 = 2050853753869015230LL;

	t44 = ((x181&x182)+(x183&x184));

	if (t44 != 13021LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x185 = INT32_MAX;
	uint8_t x186 = 1U;
	int64_t x188 = INT64_MAX;
	volatile int64_t t45 = 45422472372918151LL;

	t45 = ((x185&x186)+(x187&x188));

	if (t45 != 8645LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = -1;
	static uint16_t x190 = 15U;
	int32_t t46 = 10702477;

	t46 = ((x189&x190)+(x191&x192));

	if (t46 != -32753) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = UINT32_MAX;
	uint64_t x195 = 121047191433390926LLU;
	volatile uint32_t x196 = 3U;
	volatile uint64_t t47 = 874689917523656LLU;

	t47 = ((x193&x194)+(x195&x196));

	if (t47 != 31LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = INT32_MIN;
	int64_t x198 = INT64_MIN;
	uint32_t x199 = 507U;
	int64_t t48 = 407308LL;

	t48 = ((x197&x198)+(x199&x200));

	if (t48 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MAX;
	uint8_t x202 = 0U;
	int8_t x203 = INT8_MIN;
	volatile uint32_t t49 = 55210U;

	t49 = ((x201&x202)+(x203&x204));

	if (t49 != 8704U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x206 = -1;
	volatile uint8_t x207 = 17U;
	static int64_t x208 = -26LL;
	volatile int64_t t50 = 1021117769349525LL;

	t50 = ((x205&x206)+(x207&x208));

	if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = 4079467325179940911LLU;
	volatile int8_t x210 = 1;
	int64_t x211 = 1427LL;
	volatile int8_t x212 = INT8_MIN;
	static uint64_t t51 = 36359745033608LLU;

	t51 = ((x209&x210)+(x211&x212));

	if (t51 != 1409LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -1;
	int16_t x214 = -1;
	uint32_t x215 = 50662U;
	uint8_t x216 = UINT8_MAX;
	uint32_t t52 = 757U;

	t52 = ((x213&x214)+(x215&x216));

	if (t52 != 229U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 12U;
	static int32_t x218 = INT32_MIN;
	uint64_t x219 = 1LLU;
	int8_t x220 = INT8_MIN;
	uint64_t t53 = 210673685LLU;

	t53 = ((x217&x218)+(x219&x220));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = INT8_MAX;
	int32_t x222 = INT32_MAX;
	int64_t x223 = -830LL;
	static uint16_t x224 = 882U;
	volatile int64_t t54 = 59585497120LL;

	t54 = ((x221&x222)+(x223&x224));

	if (t54 != 193LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = UINT16_MAX;
	int16_t x226 = -1;

	t55 = ((x225&x226)+(x227&x228));

	if (t55 != 65790LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x229 = INT16_MAX;
	int64_t x231 = INT64_MIN;
	uint16_t x232 = 0U;

	t56 = ((x229&x230)+(x231&x232));

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -1;
	uint32_t x234 = UINT32_MAX;
	int16_t x235 = -1;
	int32_t x236 = INT32_MAX;
	volatile uint32_t t57 = 503U;

	t57 = ((x233&x234)+(x235&x236));

	if (t57 != 2147483646U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x238 = -45;
	static int8_t x239 = INT8_MAX;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t58 = 117039234;

	t58 = ((x237&x238)+(x239&x240));

	if (t58 != 143) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x242 = 167577U;
	int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MIN;

	t59 = ((x241&x242)+(x243&x244));

	if (t59 != -9223372036854772071LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x245 = INT16_MAX;
	static uint64_t x246 = 12LLU;
	uint16_t x248 = 4023U;
	uint64_t t60 = 3136260566LLU;

	t60 = ((x245&x246)+(x247&x248));

	if (t60 != 4035LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x253 = UINT32_MAX;
	volatile int16_t x254 = INT16_MIN;
	volatile int8_t x255 = 0;
	int32_t x256 = -1;
	static uint32_t t61 = 28472U;

	t61 = ((x253&x254)+(x255&x256));

	if (t61 != 4294934528U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x258 = INT8_MAX;
	int8_t x259 = INT8_MIN;
	static uint16_t x260 = 0U;

	t62 = ((x257&x258)+(x259&x260));

	if (t62 != 36LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x262 = 15626U;
	uint16_t x263 = 13535U;
	static volatile uint16_t x264 = UINT16_MAX;
	uint32_t t63 = 159U;

	t63 = ((x261&x262)+(x263&x264));

	if (t63 != 13535U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MIN;
	volatile int16_t x266 = -1;
	volatile int8_t x267 = 1;
	uint16_t x268 = 31U;
	volatile int32_t t64 = -173564551;

	t64 = ((x265&x266)+(x267&x268));

	if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 1U;
	int8_t x270 = INT8_MIN;
	uint16_t x271 = 366U;
	int64_t x272 = INT64_MIN;
	int64_t t65 = -31729633401865054LL;

	t65 = ((x269&x270)+(x271&x272));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x274 = UINT32_MAX;
	uint8_t x275 = 1U;
	int32_t x276 = -64444;
	uint32_t t66 = 439884U;

	t66 = ((x273&x274)+(x275&x276));

	if (t66 != 4294934528U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x277 = 6845U;
	uint16_t x279 = 0U;
	static int32_t t67 = 3361;

	t67 = ((x277&x278)+(x279&x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x281 = UINT8_MAX;
	int8_t x282 = 1;
	static volatile uint8_t x283 = UINT8_MAX;
	uint16_t x284 = 3179U;
	volatile int32_t t68 = -2581043;

	t68 = ((x281&x282)+(x283&x284));

	if (t68 != 108) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x288 = INT64_MAX;
	volatile uint64_t t69 = 1912902865460LLU;

	t69 = ((x285&x286)+(x287&x288));

	if (t69 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x290 = UINT8_MAX;
	int64_t x292 = INT64_MIN;
	static int64_t t70 = -4025LL;

	t70 = ((x289&x290)+(x291&x292));

	if (t70 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = 4;
	int8_t x294 = INT8_MIN;
	static int32_t x295 = INT32_MIN;
	volatile uint8_t x296 = 46U;
	int32_t t71 = 1585;

	t71 = ((x293&x294)+(x295&x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x297 = 1924084U;
	static uint32_t x298 = 2605U;
	volatile int64_t x299 = INT64_MIN;
	static int16_t x300 = INT16_MIN;
	volatile int64_t t72 = -1245696190546602547LL;

	t72 = ((x297&x298)+(x299&x300));

	if (t72 != -9223372036854773212LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x302 = 4240;
	uint8_t x303 = UINT8_MAX;
	int32_t x304 = 6163;
	uint64_t t73 = 711500761048LLU;

	t73 = ((x301&x302)+(x303&x304));

	if (t73 != 4259LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x306 = 906793466710LLU;
	volatile uint16_t x308 = UINT16_MAX;
	static uint64_t t74 = 509143011501397LLU;

	t74 = ((x305&x306)+(x307&x308));

	if (t74 != 906793451520LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x310 = UINT64_MAX;
	int8_t x311 = -1;
	volatile uint64_t t75 = 1LLU;

	t75 = ((x309&x310)+(x311&x312));

	if (t75 != 9223372036854775814LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x314 = 3U;
	int32_t x315 = -1;
	volatile uint64_t t76 = 353932LLU;

	t76 = ((x313&x314)+(x315&x316));

	if (t76 != 378436544LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = 33U;
	int8_t x318 = INT8_MIN;
	uint32_t x319 = 0U;
	uint8_t x320 = UINT8_MAX;
	uint32_t t77 = 129757U;

	t77 = ((x317&x318)+(x319&x320));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x322 = -1;
	int16_t x323 = INT16_MIN;
	int8_t x324 = -1;
	int32_t t78 = 256553819;

	t78 = ((x321&x322)+(x323&x324));

	if (t78 != -32641) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MAX;
	int16_t x326 = INT16_MIN;
	int16_t x328 = INT16_MAX;
	static int64_t t79 = 1324810394LL;

	t79 = ((x325&x326)+(x327&x328));

	if (t79 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = 4338;
	uint32_t x330 = 5785U;
	uint32_t x331 = 8853U;
	uint16_t x332 = 90U;
	volatile uint32_t t80 = 23349816U;

	t80 = ((x329&x330)+(x331&x332));

	if (t80 != 4256U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x334 = INT8_MAX;
	int16_t x335 = -16;
	int8_t x336 = -1;
	volatile int32_t t81 = 164;

	t81 = ((x333&x334)+(x335&x336));

	if (t81 != 18) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = INT8_MIN;
	static volatile int64_t x339 = 87491492LL;
	uint16_t x340 = UINT16_MAX;
	static int64_t t82 = -10LL;

	t82 = ((x337&x338)+(x339&x340));

	if (t82 != 12836LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MIN;
	uint8_t x342 = 3U;
	static uint8_t x343 = 48U;
	static int8_t x344 = 16;
	volatile int64_t t83 = -2705995LL;

	t83 = ((x341&x342)+(x343&x344));

	if (t83 != 16LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MIN;
	uint32_t x346 = 9904667U;
	int16_t x348 = INT16_MAX;

	t84 = ((x345&x346)+(x347&x348));

	if (t84 != 9913267U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x353 = 355120133LLU;
	uint64_t x354 = UINT64_MAX;
	int16_t x356 = INT16_MAX;
	uint64_t t85 = 1123LLU;

	t85 = ((x353&x354)+(x355&x356));

	if (t85 != 355120148LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = -1;
	static int8_t x358 = INT8_MIN;
	int8_t x359 = -29;

	t86 = ((x357&x358)+(x359&x360));

	if (t86 != 65379) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = 464U;
	int32_t x362 = INT32_MAX;
	volatile int16_t x364 = INT16_MAX;
	volatile int32_t t87 = 0;

	t87 = ((x361&x362)+(x363&x364));

	if (t87 != 14676) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = -65;
	volatile int8_t x366 = INT8_MIN;
	uint64_t x367 = 119658596LLU;
	uint16_t x368 = 46U;

	t88 = ((x365&x366)+(x367&x368));

	if (t88 != 18446744073709551524LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = -3;
	volatile int64_t x370 = 73LL;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = 1;
	int64_t t89 = 359041LL;

	t89 = ((x369&x370)+(x371&x372));

	if (t89 != 74LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x373 = UINT64_MAX;
	int64_t x374 = INT64_MAX;
	int64_t x376 = INT64_MAX;
	uint64_t t90 = 430588LLU;

	t90 = ((x373&x374)+(x375&x376));

	if (t90 != 9223376448069896667LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x377 = 228448LLU;
	int16_t x378 = -4;
	static int64_t x379 = 0LL;
	volatile uint8_t x380 = UINT8_MAX;
	volatile uint64_t t91 = 0LLU;

	t91 = ((x377&x378)+(x379&x380));

	if (t91 != 228448LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x381 = 3484030LLU;
	int8_t x382 = -2;
	uint16_t x383 = UINT16_MAX;
	uint16_t x384 = 51U;
	volatile uint64_t t92 = 27936954LLU;

	t92 = ((x381&x382)+(x383&x384));

	if (t92 != 3484081LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x385 = 130636622986792LLU;
	int32_t x386 = 200;
	int64_t x388 = INT64_MIN;
	volatile uint64_t t93 = 8LLU;

	t93 = ((x385&x386)+(x387&x388));

	if (t93 != 8LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x391 = INT16_MIN;
	static volatile int8_t x392 = -1;
	uint64_t t94 = 8902449756313512417LLU;

	t94 = ((x389&x390)+(x391&x392));

	if (t94 != 3470295LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x393 = 2373513921483LLU;
	uint16_t x394 = 750U;
	int32_t x395 = INT32_MIN;
	int8_t x396 = -1;
	uint64_t t95 = 7828LLU;

	t95 = ((x393&x394)+(x395&x396));

	if (t95 != 18446744071562068682LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x397 = 1224;
	volatile int16_t x398 = -1;
	uint64_t x399 = 7391625095887544LLU;
	int64_t x400 = -1LL;
	uint64_t t96 = 158LLU;

	t96 = ((x397&x398)+(x399&x400));

	if (t96 != 7391625095888768LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x402 = -1LL;
	int64_t x403 = -40901613270847670LL;
	int64_t x404 = INT64_MAX;
	int64_t t97 = -60164285LL;

	t97 = ((x401&x402)+(x403&x404));

	if (t97 != 9182470423583928872LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = INT8_MIN;
	uint64_t x406 = 1045266300120384LLU;
	static int16_t x408 = INT16_MIN;
	volatile uint64_t t98 = 3082562068447190LLU;

	t98 = ((x405&x406)+(x407&x408));

	if (t98 != 1045266300087552LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x409 = 54U;
	int64_t x410 = INT64_MIN;
	volatile int8_t x412 = -15;

	t99 = ((x409&x410)+(x411&x412));

	if (t99 != 1507399039391920LL) { NG(); } else { ; }
	
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

