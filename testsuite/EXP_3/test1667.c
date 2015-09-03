#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int8_t x3 = INT8_MIN;
volatile int64_t t1 = 945582LL;
int64_t x11 = -20175752101221715LL;
int64_t x17 = INT64_MIN;
static volatile uint8_t x22 = 97U;
static volatile uint64_t x23 = 959936432LLU;
uint64_t x40 = UINT64_MAX;
static int32_t t11 = 54958249;
uint16_t x52 = 1U;
volatile int32_t x54 = -24117363;
int64_t x55 = INT64_MAX;
uint16_t x61 = 2U;
int64_t t15 = 1523LL;
uint8_t x69 = 14U;
volatile int64_t x74 = INT64_MIN;
uint8_t x76 = 12U;
int8_t x77 = -1;
volatile int32_t x78 = INT32_MIN;
int64_t x79 = 2492921006645612465LL;
int8_t x86 = INT8_MIN;
int32_t x89 = INT32_MAX;
volatile int16_t x95 = INT16_MIN;
int64_t x100 = INT64_MAX;
static int8_t x102 = -24;
int64_t t26 = -113294LL;
volatile int8_t x111 = -1;
uint8_t x122 = 0U;
uint64_t x123 = UINT64_MAX;
int32_t x130 = -391;
int64_t x131 = -1LL;
static volatile int64_t t33 = 1812284LL;
volatile int64_t x143 = INT64_MIN;
int32_t x145 = 74053;
int64_t x149 = INT64_MIN;
int16_t x155 = INT16_MIN;
int32_t t38 = 6165;
uint16_t x158 = 65U;
volatile int32_t t39 = -459585379;
int16_t x162 = 2;
volatile int32_t t40 = -3371;
uint64_t x166 = 740LLU;
int8_t x168 = 1;
uint16_t x172 = 3U;
int32_t x173 = INT32_MIN;
static uint32_t x176 = 234U;
int32_t x177 = -1;
static int32_t t44 = 1;
int8_t x185 = -1;
volatile int64_t x188 = INT64_MIN;
int8_t x190 = INT8_MAX;
int8_t x198 = INT8_MIN;
int16_t x204 = INT16_MAX;
int64_t x212 = INT64_MAX;
volatile int32_t t52 = 18;
int16_t x214 = -95;
static int64_t x229 = -105476283280074932LL;
int64_t x232 = -70972996452846476LL;
int16_t x234 = INT16_MIN;
volatile uint64_t x235 = UINT64_MAX;
int32_t t59 = 1464;
volatile int32_t x248 = -1;
int8_t x252 = INT8_MIN;
int32_t x258 = INT32_MIN;
int64_t t65 = 2924373241187957LL;
uint64_t x266 = 148334647LLU;
int8_t x276 = -1;
int64_t x277 = 13407281LL;
int16_t x288 = -67;
int64_t t74 = 60824268834LL;
int64_t x301 = 7978375LL;
int32_t x303 = -1;
volatile int64_t t75 = -1974291624406632231LL;
int32_t x305 = -12170401;
static uint64_t x307 = 858925024LLU;
int64_t t76 = 152214351765LL;
int64_t x309 = INT64_MAX;
int8_t x313 = 1;
uint64_t x318 = 15LLU;
volatile uint8_t x319 = UINT8_MAX;
int32_t x327 = -1;
static int32_t x329 = INT32_MAX;
int32_t x330 = INT32_MAX;
static uint32_t x331 = 57900702U;
static int8_t x333 = -4;
int32_t t83 = -237800609;
static int8_t x338 = -8;
int16_t x340 = -1;
int64_t x347 = INT64_MIN;
int32_t t86 = -27;
int64_t x352 = INT64_MAX;
static int32_t t87 = 1365;
volatile int32_t t88 = INT32_MAX;
uint32_t x361 = 406482457U;
static uint16_t x372 = 6U;
int32_t x373 = -1;
int64_t x375 = INT64_MIN;
uint8_t x376 = 66U;
uint64_t x378 = UINT64_MAX;
int8_t x382 = INT8_MIN;
volatile int64_t t95 = -34870295334195LL;
int16_t x386 = INT16_MIN;
int8_t x387 = -1;
static volatile int64_t t96 = 30672341417LL;
int8_t x389 = INT8_MIN;
uint64_t x392 = 228204914994174288LLU;
int8_t x396 = INT8_MIN;
uint16_t x400 = 21U;


void f0(void) {
	int64_t x1 = -20761329207LL;
	static int16_t x4 = -6355;
	static volatile int64_t t0 = 10267737LL;

	t0 = ((x1|x2)*(x3<=x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	volatile uint16_t x6 = UINT16_MAX;
	int16_t x7 = 494;
	uint16_t x8 = 15U;

	t1 = ((x5|x6)*(x7<=x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 9;
	int16_t x10 = -8348;
	static int16_t x12 = -17;
	int32_t t2 = -4;

	t2 = ((x9|x10)*(x11<=x12));

	if (t2 != -8339) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MIN;
	int64_t t3 = 40744558992358LL;

	t3 = ((x13|x14)*(x15<=x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 4485430847473429123LLU;
	static int32_t x19 = INT32_MIN;
	static uint16_t x20 = UINT16_MAX;
	uint64_t t4 = 111617LLU;

	t4 = ((x17|x18)*(x19<=x20));

	if (t4 != 13708802884328204931LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 190301U;
	static int16_t x24 = INT16_MIN;
	volatile uint32_t t5 = 206U;

	t5 = ((x21|x22)*(x23<=x24));

	if (t5 != 190333U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	volatile int32_t x26 = INT32_MAX;
	int16_t x27 = -1;
	int64_t x28 = INT64_MAX;
	uint64_t t6 = UINT64_MAX;

	t6 = ((x25|x26)*(x27<=x28));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MIN;
	static volatile uint32_t x31 = 1955906U;
	int16_t x32 = -1;
	int64_t t7 = 21102495042158498LL;

	t7 = ((x29|x30)*(x31<=x32));

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -765;
	int16_t x34 = INT16_MIN;
	static uint16_t x35 = UINT16_MAX;
	volatile int16_t x36 = -1;
	volatile int32_t t8 = 4498;

	t8 = ((x33|x34)*(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint64_t x38 = UINT64_MAX;
	volatile int64_t x39 = 195724338LL;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = ((x37|x38)*(x39<=x40));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = -120LL;
	int16_t x42 = -268;
	volatile int16_t x43 = -1;
	volatile uint32_t x44 = 638U;
	volatile int64_t t10 = 0LL;

	t10 = ((x41|x42)*(x43<=x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	static uint8_t x46 = 23U;
	int16_t x47 = INT16_MIN;
	uint8_t x48 = 6U;

	t11 = ((x45|x46)*(x47<=x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int8_t x50 = INT8_MIN;
	int64_t x51 = 3681417325LL;
	static int32_t t12 = -5221527;

	t12 = ((x49|x50)*(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 6;

	t13 = ((x53|x54)*(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -1;
	int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	static int32_t x60 = -1;
	int64_t t14 = -4LL;

	t14 = ((x57|x58)*(x59<=x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = 2053293615567LL;
	int32_t x63 = INT32_MIN;
	int64_t x64 = -1LL;

	t15 = ((x61|x62)*(x63<=x64));

	if (t15 != 2053293615567LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = 130836320455912015LLU;
	int32_t x66 = 1072289373;
	uint32_t x67 = 75259185U;
	int16_t x68 = INT16_MIN;
	uint64_t t16 = 13098226LLU;

	t16 = ((x65|x66)*(x67<=x68));

	if (t16 != 130836320648953439LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x70 = -1;
	int32_t x71 = -763913827;
	volatile int32_t x72 = INT32_MAX;
	int32_t t17 = 156561;

	t17 = ((x69|x70)*(x71<=x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1;
	static int64_t x75 = -1LL;
	volatile int64_t t18 = 28282LL;

	t18 = ((x73|x74)*(x75<=x76));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x80 = -72;
	int32_t t19 = 1;

	t19 = ((x77|x78)*(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 21U;
	volatile int64_t x82 = INT64_MAX;
	volatile uint8_t x83 = 40U;
	static volatile int64_t x84 = -3703376532LL;
	static volatile int64_t t20 = 306748268LL;

	t20 = ((x81|x82)*(x83<=x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	static uint16_t x87 = 19360U;
	static int16_t x88 = -113;
	int32_t t21 = 2;

	t21 = ((x85|x86)*(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = UINT16_MAX;
	uint64_t x91 = 2554232460271LLU;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = INT32_MAX;

	t22 = ((x89|x90)*(x91<=x92));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 1U;
	int32_t x94 = 0;
	static volatile int8_t x96 = INT8_MAX;
	static int32_t t23 = 0;

	t23 = ((x93|x94)*(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	uint32_t x98 = 7U;
	uint8_t x99 = 28U;
	static volatile uint32_t t24 = 86860U;

	t24 = ((x97|x98)*(x99<=x100));

	if (t24 != 2147483655U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MIN;
	static int16_t x103 = -5;
	uint16_t x104 = 68U;
	static volatile int32_t t25 = 57981001;

	t25 = ((x101|x102)*(x103<=x104));

	if (t25 != -24) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int64_t x106 = INT64_MAX;
	volatile uint64_t x107 = 2792364LLU;
	int64_t x108 = INT64_MIN;

	t26 = ((x105|x106)*(x107<=x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 4;
	volatile uint32_t x110 = 1984U;
	int8_t x112 = INT8_MIN;
	uint32_t t27 = 115938U;

	t27 = ((x109|x110)*(x111<=x112));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 8562559025908612LL;
	volatile int64_t x114 = -1LL;
	volatile uint16_t x115 = 5873U;
	static int16_t x116 = -1;
	int64_t t28 = 2738852516505LL;

	t28 = ((x113|x114)*(x115<=x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x117 = UINT32_MAX;
	int64_t x118 = -1777108155LL;
	int8_t x119 = INT8_MIN;
	int8_t x120 = -1;
	volatile int64_t t29 = 122551295262446016LL;

	t29 = ((x117|x118)*(x119<=x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -1;
	static volatile uint32_t x124 = 249746U;
	volatile int32_t t30 = 3244718;

	t30 = ((x121|x122)*(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	static int64_t x126 = INT64_MIN;
	uint32_t x127 = 241929643U;
	int8_t x128 = -1;
	int64_t t31 = 7284766938512LL;

	t31 = ((x125|x126)*(x127<=x128));

	if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	static int16_t x132 = -42;
	volatile int64_t t32 = 1758490553806919593LL;

	t32 = ((x129|x130)*(x131<=x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 1233;
	volatile int64_t x134 = -1LL;
	uint16_t x135 = 0U;
	uint16_t x136 = 24U;

	t33 = ((x133|x134)*(x135<=x136));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	volatile int32_t x138 = INT32_MAX;
	uint32_t x139 = UINT32_MAX;
	int8_t x140 = INT8_MIN;
	static volatile int32_t t34 = -271;

	t34 = ((x137|x138)*(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 1010U;
	static int64_t x142 = INT64_MAX;
	int16_t x144 = INT16_MIN;
	int64_t t35 = INT64_MAX;

	t35 = ((x141|x142)*(x143<=x144));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = -1749377484261736441LL;
	volatile uint8_t x147 = 12U;
	uint16_t x148 = 1U;
	volatile int64_t t36 = -1742880LL;

	t36 = ((x145|x146)*(x147<=x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x150 = 109U;
	uint32_t x151 = 1621163410U;
	static int16_t x152 = INT16_MIN;
	int64_t t37 = -110LL;

	t37 = ((x149|x150)*(x151<=x152));

	if (t37 != -9223372036854775699LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = UINT16_MAX;
	int8_t x154 = 1;
	volatile uint32_t x156 = UINT32_MAX;

	t38 = ((x153|x154)*(x155<=x156));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = INT8_MIN;
	int16_t x159 = 15209;
	int32_t x160 = -55;

	t39 = ((x157|x158)*(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int32_t x163 = 87567;
	int32_t x164 = -1;

	t40 = ((x161|x162)*(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 0;
	static int8_t x167 = INT8_MAX;
	uint64_t t41 = 9556006856515053LLU;

	t41 = ((x165|x166)*(x167<=x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1731229763496410LL;
	volatile int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MIN;
	volatile int64_t t42 = 246LL;

	t42 = ((x169|x170)*(x171<=x172));

	if (t42 != -27098LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = -1;
	int8_t x175 = -1;
	volatile int32_t t43 = 1;

	t43 = ((x173|x174)*(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -1;
	volatile int32_t x179 = INT32_MAX;
	uint32_t x180 = UINT32_MAX;

	t44 = ((x177|x178)*(x179<=x180));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int32_t x182 = -1;
	static int8_t x183 = -1;
	int16_t x184 = 15;
	int64_t t45 = 2220362198610436LL;

	t45 = ((x181|x182)*(x183<=x184));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = INT32_MIN;
	volatile int8_t x187 = INT8_MIN;
	int32_t t46 = 957873;

	t46 = ((x185|x186)*(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 7263LL;
	volatile int32_t x191 = -10896569;
	uint64_t x192 = 32917564LLU;
	int64_t t47 = -924156497LL;

	t47 = ((x189|x190)*(x191<=x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	static volatile uint16_t x194 = UINT16_MAX;
	int32_t x195 = INT32_MIN;
	static int64_t x196 = INT64_MIN;
	int64_t t48 = -397188LL;

	t48 = ((x193|x194)*(x195<=x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	static uint8_t x199 = 6U;
	volatile int32_t x200 = -2372;
	volatile int64_t t49 = -8687196445355909LL;

	t49 = ((x197|x198)*(x199<=x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 1;
	static int16_t x202 = 2;
	uint8_t x203 = UINT8_MAX;
	int32_t t50 = -13813079;

	t50 = ((x201|x202)*(x203<=x204));

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 1276906585656LLU;
	int64_t x206 = -1LL;
	uint32_t x207 = 35U;
	uint16_t x208 = UINT16_MAX;
	uint64_t t51 = UINT64_MAX;

	t51 = ((x205|x206)*(x207<=x208));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MIN;

	t52 = ((x209|x210)*(x211<=x212));

	if (t52 != -2147483393) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = -1;
	static int32_t x215 = INT32_MIN;
	int16_t x216 = -1;
	volatile int32_t t53 = 4151334;

	t53 = ((x213|x214)*(x215<=x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 147U;
	volatile int32_t x218 = INT32_MAX;
	volatile int8_t x219 = -31;
	volatile int8_t x220 = INT8_MAX;
	uint32_t t54 = 4305161U;

	t54 = ((x217|x218)*(x219<=x220));

	if (t54 != 2147483647U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 12U;
	int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	uint8_t x224 = 0U;
	volatile int32_t t55 = 0;

	t55 = ((x221|x222)*(x223<=x224));

	if (t55 != -2147483636) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x225 = 331U;
	int16_t x226 = INT16_MIN;
	int16_t x227 = 43;
	int64_t x228 = INT64_MIN;
	static volatile int32_t t56 = -297;

	t56 = ((x225|x226)*(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MAX;
	uint64_t x231 = 3851986LLU;
	int64_t t57 = 921148102250LL;

	t57 = ((x229|x230)*(x231<=x232));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = 1906257967335938797LLU;
	int32_t x236 = INT32_MIN;
	uint64_t t58 = 1778101457670LLU;

	t58 = ((x233|x234)*(x235<=x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MAX;
	volatile int16_t x239 = INT16_MIN;
	static int8_t x240 = INT8_MIN;

	t59 = ((x237|x238)*(x239<=x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 1;
	int32_t x242 = -1;
	uint16_t x243 = 3U;
	volatile int16_t x244 = 463;
	int32_t t60 = 739787;

	t60 = ((x241|x242)*(x243<=x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = -1LL;
	int64_t x246 = 216LL;
	uint32_t x247 = UINT32_MAX;
	int64_t t61 = 572924843425LL;

	t61 = ((x245|x246)*(x247<=x248));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	uint16_t x250 = UINT16_MAX;
	int32_t x251 = INT32_MIN;
	static volatile int32_t t62 = 468779485;

	t62 = ((x249|x250)*(x251<=x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 27LL;
	uint16_t x254 = UINT16_MAX;
	static volatile uint32_t x255 = 89044U;
	int8_t x256 = INT8_MIN;
	int64_t t63 = 47LL;

	t63 = ((x253|x254)*(x255<=x256));

	if (t63 != 65535LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	int32_t x259 = INT32_MIN;
	static uint64_t x260 = UINT64_MAX;
	static volatile uint64_t t64 = UINT64_MAX;

	t64 = ((x257|x258)*(x259<=x260));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	uint16_t x262 = UINT16_MAX;
	uint64_t x263 = 3903006230391103LLU;
	int8_t x264 = INT8_MIN;

	t65 = ((x261|x262)*(x263<=x264));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 45;
	uint64_t x267 = 393880LLU;
	int32_t x268 = INT32_MIN;
	uint64_t t66 = 3511973899LLU;

	t66 = ((x265|x266)*(x267<=x268));

	if (t66 != 148334655LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 54U;
	static int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MAX;
	static volatile int64_t x272 = 700559801597759260LL;
	volatile int64_t t67 = -1117607308838LL;

	t67 = ((x269|x270)*(x271<=x272));

	if (t67 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 340974048724476362LLU;
	int64_t x274 = -148899613944LL;
	static int8_t x275 = -1;
	volatile uint64_t t68 = 2177LLU;

	t68 = ((x273|x274)*(x275<=x276));

	if (t68 != 18446743934122947530LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x278 = 0U;
	static int32_t x279 = 959086;
	int8_t x280 = -7;
	volatile int64_t t69 = 15LL;

	t69 = ((x277|x278)*(x279<=x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -11;
	int64_t x282 = INT64_MAX;
	uint16_t x283 = UINT16_MAX;
	static uint32_t x284 = 29875124U;
	int64_t t70 = -1646535LL;

	t70 = ((x281|x282)*(x283<=x284));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	int8_t x286 = INT8_MIN;
	int32_t x287 = -1;
	static int32_t t71 = 1072949010;

	t71 = ((x285|x286)*(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 0U;
	int16_t x290 = INT16_MIN;
	volatile int64_t x291 = INT64_MAX;
	volatile uint32_t x292 = 9228U;
	volatile int32_t t72 = -1575;

	t72 = ((x289|x290)*(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	static uint8_t x294 = 16U;
	volatile uint32_t x295 = UINT32_MAX;
	int32_t x296 = -1;
	int32_t t73 = 427300;

	t73 = ((x293|x294)*(x295<=x296));

	if (t73 != -32752) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -128619321;
	volatile int64_t x298 = 7606346737162LL;
	uint64_t x299 = UINT64_MAX;
	static uint8_t x300 = 6U;

	t74 = ((x297|x298)*(x299<=x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x302 = INT16_MIN;
	uint32_t x304 = 197U;

	t75 = ((x301|x302)*(x303<=x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MIN;
	volatile uint16_t x308 = 8170U;

	t76 = ((x305|x306)*(x307<=x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = 1032LL;
	static volatile uint32_t x311 = 21U;
	static int32_t x312 = INT32_MIN;
	volatile int64_t t77 = INT64_MAX;

	t77 = ((x309|x310)*(x311<=x312));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MAX;
	int64_t x315 = INT64_MAX;
	static uint16_t x316 = 5U;
	int64_t t78 = -46LL;

	t78 = ((x313|x314)*(x315<=x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = UINT16_MAX;
	int32_t x320 = INT32_MIN;
	volatile uint64_t t79 = 823554325064LLU;

	t79 = ((x317|x318)*(x319<=x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	int64_t x322 = 148554368425062598LL;
	int8_t x323 = INT8_MIN;
	volatile int8_t x324 = INT8_MIN;
	static int64_t t80 = 47LL;

	t80 = ((x321|x322)*(x323<=x324));

	if (t80 != -58LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = UINT8_MAX;
	volatile int32_t x326 = -412492;
	int8_t x328 = INT8_MIN;
	volatile int32_t t81 = -9;

	t81 = ((x325|x326)*(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x332 = 3;
	volatile int32_t t82 = 2800430;

	t82 = ((x329|x330)*(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x334 = UINT16_MAX;
	int32_t x335 = INT32_MIN;
	int16_t x336 = INT16_MIN;

	t83 = ((x333|x334)*(x335<=x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = UINT8_MAX;
	uint64_t x339 = 12129162LLU;
	int32_t t84 = 31348;

	t84 = ((x337|x338)*(x339<=x340));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = -49047417;
	static int8_t x342 = -3;
	int16_t x343 = INT16_MAX;
	int32_t x344 = -7762535;
	int32_t t85 = 74970351;

	t85 = ((x341|x342)*(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	static int16_t x346 = INT16_MIN;
	int64_t x348 = -1LL;

	t86 = ((x345|x346)*(x347<=x348));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 59U;
	uint16_t x350 = 690U;
	int8_t x351 = INT8_MIN;

	t87 = ((x349|x350)*(x351<=x352));

	if (t87 != 699) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = UINT16_MAX;
	static int32_t x354 = INT32_MAX;
	static volatile int32_t x355 = -1;
	int32_t x356 = INT32_MAX;

	t88 = ((x353|x354)*(x355<=x356));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	uint16_t x358 = 3U;
	int64_t x359 = INT64_MIN;
	int8_t x360 = -1;
	volatile int32_t t89 = 0;

	t89 = ((x357|x358)*(x359<=x360));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = INT8_MAX;
	int8_t x363 = 1;
	int16_t x364 = 5736;
	uint32_t t90 = 5U;

	t90 = ((x361|x362)*(x363<=x364));

	if (t90 != 406482559U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MAX;
	volatile int64_t x366 = INT64_MAX;
	uint8_t x367 = 0U;
	int32_t x368 = INT32_MIN;
	volatile int64_t t91 = -128280812029226LL;

	t91 = ((x365|x366)*(x367<=x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	int16_t x370 = -1;
	static volatile uint32_t x371 = 50840U;
	static int32_t t92 = 319970528;

	t92 = ((x369|x370)*(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MIN;
	volatile int32_t t93 = 62020532;

	t93 = ((x373|x374)*(x375<=x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x377 = 9U;
	int32_t x379 = INT32_MIN;
	uint32_t x380 = 1369349886U;
	static volatile uint64_t t94 = 226446667180LLU;

	t94 = ((x377|x378)*(x379<=x380));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 219886774382023731LL;
	static uint8_t x383 = UINT8_MAX;
	int16_t x384 = INT16_MIN;

	t95 = ((x381|x382)*(x383<=x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = INT64_MIN;
	static uint8_t x388 = 1U;

	t96 = ((x385|x386)*(x387<=x388));

	if (t96 != -32768LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x390 = 97205892248589LLU;
	int32_t x391 = INT32_MIN;
	static uint64_t t97 = 71520446859740642LLU;

	t97 = ((x389|x390)*(x391<=x392));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = 200;
	uint8_t x394 = 104U;
	uint32_t x395 = 6U;
	volatile int32_t t98 = -13046;

	t98 = ((x393|x394)*(x395<=x396));

	if (t98 != 232) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = INT8_MIN;
	volatile uint8_t x398 = UINT8_MAX;
	int64_t x399 = INT64_MIN;
	int32_t t99 = -47124194;

	t99 = ((x397|x398)*(x399<=x400));

	if (t99 != -1) { NG(); } else { ; }
	
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

