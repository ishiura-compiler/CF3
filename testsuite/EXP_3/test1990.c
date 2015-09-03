#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x15 = INT16_MAX;
int64_t x18 = INT64_MAX;
int64_t t4 = -17927538922699086LL;
int32_t x24 = INT32_MAX;
uint32_t x25 = 1U;
static volatile int16_t x26 = -44;
static uint32_t x30 = UINT32_MAX;
int16_t x35 = INT16_MIN;
uint32_t x36 = 4090U;
static uint8_t x37 = 1U;
int16_t x45 = INT16_MIN;
volatile int64_t t11 = 4910450670LL;
uint16_t x53 = 2930U;
static volatile uint32_t x56 = 1117124U;
static uint16_t x62 = 606U;
uint64_t x64 = 106633762LLU;
uint64_t x65 = 825033909497702LLU;
uint8_t x66 = 105U;
volatile int32_t x72 = -1;
int64_t x78 = 483150921329LL;
int64_t x80 = INT64_MIN;
int8_t x87 = 1;
uint64_t x98 = 1874639446257LLU;
uint64_t t24 = 278LLU;
static volatile uint64_t x102 = UINT64_MAX;
int16_t x104 = INT16_MAX;
int32_t x105 = -1;
int64_t t26 = -12756459408233LL;
uint64_t x111 = 24LLU;
static volatile int64_t x113 = -1LL;
uint16_t x114 = 480U;
volatile uint64_t x117 = 11204981987675398LLU;
int8_t x120 = -1;
int16_t x124 = INT16_MIN;
static volatile uint64_t t30 = 111638044434502LLU;
int16_t x125 = 7;
int32_t x126 = 898;
int32_t x127 = -1;
int64_t x129 = -1LL;
uint64_t x135 = UINT64_MAX;
int64_t x140 = -181LL;
volatile int64_t t34 = -10557238509689LL;
static int64_t x141 = INT64_MAX;
int32_t t37 = 44716933;
int32_t x156 = INT32_MAX;
volatile int64_t x157 = -40325812513887847LL;
static uint8_t x160 = 64U;
int8_t x164 = INT8_MIN;
static volatile int32_t x172 = 6185451;
volatile int32_t t42 = -3428271;
int8_t x177 = INT8_MIN;
uint32_t x178 = UINT32_MAX;
int64_t x187 = -1LL;
volatile int64_t t48 = -5680178LL;
uint8_t x201 = UINT8_MAX;
static int8_t x202 = INT8_MAX;
static int8_t x207 = -1;
uint8_t x208 = 0U;
volatile uint32_t t50 = 0U;
int8_t x209 = -1;
int16_t x210 = 1;
static uint8_t x212 = UINT8_MAX;
uint8_t x216 = UINT8_MAX;
uint64_t t52 = 1868428453LLU;
int16_t x218 = -1;
static int16_t x227 = INT16_MIN;
int8_t x229 = 20;
uint32_t x230 = UINT32_MAX;
static int16_t x231 = 7510;
int32_t x233 = INT32_MIN;
int64_t t58 = -6789LL;
int16_t x242 = -1;
volatile uint64_t t59 = 9649082853944359LLU;
int32_t x249 = INT32_MAX;
uint32_t x255 = UINT32_MAX;
int64_t x258 = INT64_MIN;
static volatile uint64_t x261 = 20112055LLU;
int64_t x265 = INT64_MIN;
int32_t x266 = INT32_MAX;
uint32_t x275 = 7826U;
int64_t x278 = -19142LL;
static uint64_t t69 = 264596236LLU;
uint64_t t70 = 253808875495547714LLU;
uint64_t x295 = UINT64_MAX;
int64_t x323 = -1673069770060126LL;
uint64_t x325 = UINT64_MAX;
static volatile int64_t x327 = -1LL;
static volatile int32_t x331 = -1;
int64_t x335 = INT64_MIN;
static volatile int16_t x336 = -1;
volatile int64_t t81 = 59LL;
uint64_t t82 = 204043722806748926LLU;
volatile int64_t t83 = 3868100481LL;
volatile int64_t t84 = -2071723733572LL;
int64_t t85 = 1756738321071628746LL;
volatile int16_t x360 = -1;
int64_t t86 = 1800078794407LL;
int16_t x368 = -1;
int16_t x370 = INT16_MAX;
uint64_t x378 = 952027438507166LLU;
int64_t x383 = INT64_MIN;
uint16_t x384 = 8U;
uint16_t x385 = 26U;
uint32_t x390 = 7961652U;
int64_t x391 = -28737869001LL;
int64_t x393 = -1LL;
static int64_t x399 = INT64_MIN;
int64_t t96 = -33227072787126676LL;
int16_t x404 = INT16_MIN;
uint32_t t97 = UINT32_MAX;
static uint32_t x406 = 14001U;
volatile int32_t t99 = -67159585;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint32_t x2 = 532127U;
	int64_t x3 = INT64_MAX;
	volatile int8_t x4 = -1;
	volatile int64_t t0 = -13LL;

	t0 = ((x1&x2)+(x3|x4));

	if (t0 != 524287LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 6U;
	static int32_t x6 = INT32_MIN;
	volatile int16_t x7 = INT16_MIN;
	volatile int8_t x8 = -1;
	volatile int32_t t1 = 35920;

	t1 = ((x5&x6)+(x7|x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 7U;
	int32_t x10 = -32481;
	uint64_t x11 = 1361330969297LLU;
	uint16_t x12 = 446U;
	static volatile uint64_t t2 = 32707197064067460LLU;

	t2 = ((x9&x10)+(x11|x12));

	if (t2 != 1361330969606LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int8_t x14 = -1;
	int64_t x16 = -1LL;
	volatile int64_t t3 = 7538520681LL;

	t3 = ((x13&x14)+(x15|x16));

	if (t3 != 65534LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = -1;
	int32_t x19 = -60663823;
	int32_t x20 = -1;

	t4 = ((x17&x18)+(x19|x20));

	if (t4 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	uint8_t x22 = 98U;
	volatile int64_t x23 = 6277LL;
	int64_t t5 = 5038765151847373LL;

	t5 = ((x21&x22)+(x23|x24));

	if (t5 != 2147483647LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x27 = 3;
	static int32_t x28 = INT32_MAX;
	uint32_t t6 = 767U;

	t6 = ((x25&x26)+(x27|x28));

	if (t6 != 2147483647U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 4170950LLU;
	volatile int8_t x31 = -16;
	int8_t x32 = -1;
	uint64_t t7 = 14864624LLU;

	t7 = ((x29&x30)+(x31|x32));

	if (t7 != 4170949LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 4U;
	volatile int64_t x34 = -1LL;
	int64_t t8 = -401280167904948LL;

	t8 = ((x33&x34)+(x35|x36));

	if (t8 != 4294938622LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = 427;
	int16_t x39 = INT16_MIN;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 754966521;

	t9 = ((x37&x38)+(x39|x40));

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int32_t x42 = -1;
	int64_t x43 = -1784851072218756865LL;
	static int8_t x44 = INT8_MIN;
	static volatile int64_t t10 = -175385LL;

	t10 = ((x41&x42)+(x43|x44));

	if (t10 != -2LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x46 = -1;
	int64_t x47 = 1LL;
	int8_t x48 = -1;

	t11 = ((x45&x46)+(x47|x48));

	if (t11 != -32769LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -14;
	int32_t x50 = 7;
	int64_t x51 = -116792141344LL;
	static int64_t x52 = 662203772810LL;
	volatile int64_t t12 = 938LL;

	t12 = ((x49&x50)+(x51|x52));

	if (t12 != -4581228564LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 2487459273648LLU;
	int8_t x55 = INT8_MIN;
	volatile uint64_t t13 = 2294627338288931785LLU;

	t13 = ((x53&x54)+(x55|x56));

	if (t13 != 4294970100LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 97U;
	static volatile uint64_t x58 = 1745820355638LLU;
	uint32_t x59 = UINT32_MAX;
	volatile int16_t x60 = INT16_MIN;
	uint64_t t14 = 27156427859LLU;

	t14 = ((x57&x58)+(x59|x60));

	if (t14 != 4294967327LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	uint32_t x63 = 5225201U;
	uint64_t t15 = 30540771380LLU;

	t15 = ((x61&x62)+(x63|x64));

	if (t15 != 106937681LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x67 = 7U;
	static int64_t x68 = INT64_MAX;
	uint64_t t16 = 3705766LLU;

	t16 = ((x65&x66)+(x67|x68));

	if (t16 != 9223372036854775903LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -10;
	uint8_t x70 = 73U;
	int64_t x71 = INT64_MAX;
	volatile int64_t t17 = -16393LL;

	t17 = ((x69&x70)+(x71|x72));

	if (t17 != 63LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = 36;
	uint32_t x76 = UINT32_MAX;
	uint32_t t18 = 402U;

	t18 = ((x73&x74)+(x75|x76));

	if (t18 != 4294967294U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 113806;
	uint16_t x79 = 136U;
	int64_t t19 = 151170150408LL;

	t19 = ((x77&x78)+(x79|x80));

	if (t19 != -9223372036854662008LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 0U;
	static int16_t x82 = -1;
	uint16_t x83 = UINT16_MAX;
	uint8_t x84 = 0U;
	static volatile int32_t t20 = 2987;

	t20 = ((x81&x82)+(x83|x84));

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 367U;
	static int32_t x86 = INT32_MAX;
	int8_t x88 = 44;
	int32_t t21 = 471;

	t21 = ((x85&x86)+(x87|x88));

	if (t21 != 412) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	uint8_t x90 = 1U;
	volatile uint32_t x91 = 131596774U;
	int8_t x92 = INT8_MAX;
	volatile uint32_t t22 = 48U;

	t22 = ((x89&x90)+(x91|x92));

	if (t22 != 131596800U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 34U;
	static int64_t x94 = INT64_MAX;
	uint32_t x95 = 1U;
	static volatile int16_t x96 = 1;
	volatile int64_t t23 = 194812225807504LL;

	t23 = ((x93&x94)+(x95|x96));

	if (t23 != 35LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	uint32_t x99 = 436U;
	int16_t x100 = -3;

	t24 = ((x97&x98)+(x99|x100));

	if (t24 != 4294967534LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -9;
	uint64_t x103 = 31409400889868LLU;
	volatile uint64_t t25 = 206236596603LLU;

	t25 = ((x101&x102)+(x103|x104));

	if (t25 != 31409400905718LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = -1;
	int64_t x107 = INT64_MAX;
	static int32_t x108 = INT32_MAX;

	t26 = ((x105&x106)+(x107|x108));

	if (t26 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MIN;
	static int16_t x110 = INT16_MIN;
	int64_t x112 = 1330198475529726097LL;
	volatile uint64_t t27 = 384511925795916136LLU;

	t27 = ((x109&x110)+(x111|x112));

	if (t27 != 10553570512384501913LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x115 = 13LLU;
	uint16_t x116 = 109U;
	volatile uint64_t t28 = 3350279261LLU;

	t28 = ((x113&x114)+(x115|x116));

	if (t28 != 589LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	volatile uint16_t x119 = UINT16_MAX;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = ((x117&x118)+(x119|x120));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x122 = UINT64_MAX;
	int32_t x123 = INT32_MIN;

	t30 = ((x121&x122)+(x123|x124));

	if (t30 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x128 = INT64_MIN;
	int64_t t31 = -1883562LL;

	t31 = ((x125&x126)+(x127|x128));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = 2;
	int32_t x131 = INT32_MIN;
	volatile uint32_t x132 = 3U;
	int64_t t32 = 413207LL;

	t32 = ((x129&x130)+(x131|x132));

	if (t32 != 2147483653LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	int8_t x134 = 7;
	int16_t x136 = 0;
	uint64_t t33 = UINT64_MAX;

	t33 = ((x133&x134)+(x135|x136));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 29U;
	int64_t x138 = -10022637936519LL;
	int32_t x139 = INT32_MIN;

	t34 = ((x137&x138)+(x139|x140));

	if (t34 != -156LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x142 = 4203419069292LLU;
	int16_t x143 = -1;
	static int16_t x144 = 46;
	volatile uint64_t t35 = 312443679988LLU;

	t35 = ((x141&x142)+(x143|x144));

	if (t35 != 4203419069291LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = -1;
	uint8_t x146 = 3U;
	uint64_t x147 = UINT64_MAX;
	int16_t x148 = -1;
	uint64_t t36 = 5434965525359LLU;

	t36 = ((x145&x146)+(x147|x148));

	if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	volatile uint8_t x150 = 43U;
	int32_t x151 = 507060034;
	static int16_t x152 = -1;

	t37 = ((x149&x150)+(x151|x152));

	if (t37 != 42) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	static uint16_t x154 = UINT16_MAX;
	uint64_t x155 = UINT64_MAX;
	uint64_t t38 = 88301989871150948LLU;

	t38 = ((x153&x154)+(x155|x156));

	if (t38 != 65534LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = -1;
	volatile int8_t x159 = INT8_MAX;
	int64_t t39 = -321209474LL;

	t39 = ((x157&x158)+(x159|x160));

	if (t39 != -40325812513887720LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = 1;
	static int16_t x163 = -1;
	int32_t t40 = -95794;

	t40 = ((x161&x162)+(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	volatile uint32_t x166 = 14602U;
	volatile uint32_t x167 = 14950U;
	volatile int16_t x168 = INT16_MIN;
	static uint32_t t41 = 1484697U;

	t41 = ((x165&x166)+(x167|x168));

	if (t41 != 4294964070U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	uint16_t x170 = 230U;
	int16_t x171 = INT16_MIN;

	t42 = ((x169&x170)+(x171|x172));

	if (t42 != -7701) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x179 = INT32_MAX;
	static int16_t x180 = INT16_MIN;
	static volatile uint32_t t43 = 138U;

	t43 = ((x177&x178)+(x179|x180));

	if (t43 != 4294967167U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = 0;
	uint64_t x182 = 94389484778861LLU;
	int16_t x183 = 42;
	uint64_t x184 = 83480884494390064LLU;
	uint64_t t44 = 3313090LLU;

	t44 = ((x181&x182)+(x183|x184));

	if (t44 != 83480884494390074LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = UINT8_MAX;
	uint64_t x186 = 4349835697712171LLU;
	int32_t x188 = 183054033;
	static volatile uint64_t t45 = 75264293LLU;

	t45 = ((x185&x186)+(x187|x188));

	if (t45 != 42LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x189 = 156016366193224LLU;
	volatile uint32_t x190 = 4450542U;
	int32_t x191 = INT32_MIN;
	int8_t x192 = -1;
	volatile uint64_t t46 = 8431LLU;

	t46 = ((x189&x190)+(x191|x192));

	if (t46 != 133191LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = 13U;
	int16_t x194 = INT16_MIN;
	int16_t x195 = -1;
	int64_t x196 = INT64_MIN;
	volatile int64_t t47 = 1980LL;

	t47 = ((x193&x194)+(x195|x196));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	static int64_t x198 = 125257546588LL;
	volatile int8_t x199 = INT8_MIN;
	int16_t x200 = -244;

	t48 = ((x197&x198)+(x199|x200));

	if (t48 != 125257546380LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x203 = INT8_MIN;
	int16_t x204 = -599;
	int32_t t49 = 136;

	t49 = ((x201&x202)+(x203|x204));

	if (t49 != 40) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 123174961U;
	static int8_t x206 = INT8_MAX;

	t50 = ((x205&x206)+(x207|x208));

	if (t50 != 48U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x211 = 193U;
	int32_t t51 = -114;

	t51 = ((x209&x210)+(x211|x212));

	if (t51 != 256) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	volatile uint8_t x214 = 16U;
	uint64_t x215 = 4717677LLU;

	t52 = ((x213&x214)+(x215|x216));

	if (t52 != 4717823LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = INT16_MAX;
	static int16_t x219 = 0;
	int16_t x220 = -1;
	volatile int32_t t53 = -30373864;

	t53 = ((x217&x218)+(x219|x220));

	if (t53 != 32766) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = 1U;
	uint16_t x222 = 57U;
	uint32_t x223 = UINT32_MAX;
	uint16_t x224 = UINT16_MAX;
	uint32_t t54 = 1506310U;

	t54 = ((x221&x222)+(x223|x224));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = 187;
	int32_t x226 = -1;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t55 = -1200;

	t55 = ((x225&x226)+(x227|x228));

	if (t55 != -32581) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x232 = UINT64_MAX;
	volatile uint64_t t56 = 2LLU;

	t56 = ((x229&x230)+(x231|x232));

	if (t56 != 19LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x234 = -688;
	uint64_t x235 = 670379LLU;
	int32_t x236 = INT32_MIN;
	uint64_t t57 = 2124367567988076LLU;

	t57 = ((x233&x234)+(x235|x236));

	if (t57 != 18446744069415254699LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = 1;
	int8_t x238 = 0;
	int64_t x239 = INT64_MIN;
	uint32_t x240 = 869U;

	t58 = ((x237&x238)+(x239|x240));

	if (t58 != -9223372036854774939LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x241 = 804742;
	int32_t x243 = INT32_MIN;
	uint64_t x244 = 18152909320LLU;

	t59 = ((x241&x242)+(x243|x244));

	if (t59 != 18446744072535912846LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 121U;
	int64_t x246 = 1556118443776267682LL;
	volatile int32_t x247 = INT32_MIN;
	static int32_t x248 = INT32_MAX;
	static int64_t t60 = -839LL;

	t60 = ((x245&x246)+(x247|x248));

	if (t60 != 31LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x250 = 1;
	int32_t x251 = -383545764;
	static int32_t x252 = INT32_MAX;
	int32_t t61 = 1;

	t61 = ((x249&x250)+(x251|x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MIN;
	volatile uint32_t x256 = 1149U;
	int64_t t62 = -4562836599360943840LL;

	t62 = ((x253&x254)+(x255|x256));

	if (t62 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x257 = UINT64_MAX;
	uint64_t x259 = 14122903843481021LLU;
	int32_t x260 = INT32_MIN;
	uint64_t t63 = 14LLU;

	t63 = ((x257&x258)+(x259|x260));

	if (t63 != 9223372035962021309LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x262 = 632;
	static int8_t x263 = -1;
	static int16_t x264 = INT16_MIN;
	uint64_t t64 = 0LLU;

	t64 = ((x261&x262)+(x263|x264));

	if (t64 != 559LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x267 = 24;
	volatile uint8_t x268 = UINT8_MAX;
	volatile int64_t t65 = -330633184LL;

	t65 = ((x265&x266)+(x267|x268));

	if (t65 != 255LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x269 = 71U;
	uint8_t x270 = 4U;
	int32_t x271 = -8009;
	int64_t x272 = -1LL;
	static int64_t t66 = -5290752LL;

	t66 = ((x269&x270)+(x271|x272));

	if (t66 != 3LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x273 = INT8_MIN;
	static uint32_t x274 = 314639147U;
	static uint16_t x276 = UINT16_MAX;
	uint32_t t67 = 539U;

	t67 = ((x273&x274)+(x275|x276));

	if (t67 != 314704639U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = 22U;
	int64_t x279 = -1LL;
	uint8_t x280 = UINT8_MAX;
	volatile int64_t t68 = -5LL;

	t68 = ((x277&x278)+(x279|x280));

	if (t68 != 17LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x281 = INT32_MIN;
	static int32_t x282 = INT32_MAX;
	static int16_t x283 = 3010;
	volatile uint64_t x284 = 7143286812LLU;

	t69 = ((x281&x282)+(x283|x284));

	if (t69 != 7143287774LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x285 = 350880024858823LLU;
	int16_t x286 = -69;
	int32_t x287 = INT32_MIN;
	static uint16_t x288 = 14838U;

	t70 = ((x285&x286)+(x287|x288));

	if (t70 != 350877877389945LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MIN;
	volatile int8_t x294 = INT8_MIN;
	static uint16_t x296 = UINT16_MAX;
	static volatile uint64_t t71 = 320582062181878309LLU;

	t71 = ((x293&x294)+(x295|x296));

	if (t71 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x297 = -5;
	int8_t x298 = INT8_MAX;
	volatile uint16_t x299 = 153U;
	static int64_t x300 = INT64_MIN;
	volatile int64_t t72 = 781417442128346LL;

	t72 = ((x297&x298)+(x299|x300));

	if (t72 != -9223372036854775532LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MIN;
	static int8_t x303 = -7;
	int32_t x304 = -129034;
	volatile int32_t t73 = -377;

	t73 = ((x301&x302)+(x303|x304));

	if (t73 != -32769) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = -250LL;
	volatile uint64_t x306 = 6597689217LLU;
	static int64_t x307 = -1LL;
	int64_t x308 = -1LL;
	volatile uint64_t t74 = 3313459998933LLU;

	t74 = ((x305&x306)+(x307|x308));

	if (t74 != 6597689087LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = INT8_MIN;
	static int8_t x314 = 6;
	volatile int32_t x315 = INT32_MIN;
	static volatile int8_t x316 = INT8_MIN;
	volatile int32_t t75 = 92;

	t75 = ((x313&x314)+(x315|x316));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = INT8_MAX;
	int8_t x318 = INT8_MIN;
	volatile uint16_t x319 = 582U;
	volatile uint16_t x320 = 5U;
	volatile int32_t t76 = 50;

	t76 = ((x317&x318)+(x319|x320));

	if (t76 != 583) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = -1;
	static uint32_t x322 = 78U;
	volatile int16_t x324 = INT16_MIN;
	int64_t t77 = 1502211191905883LL;

	t77 = ((x321&x322)+(x323|x324));

	if (t77 != -12560LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x326 = INT32_MIN;
	uint64_t x328 = UINT64_MAX;
	uint64_t t78 = 681869LLU;

	t78 = ((x325&x326)+(x327|x328));

	if (t78 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = -2;
	int8_t x332 = 1;
	int32_t t79 = 3229;

	t79 = ((x329&x330)+(x331|x332));

	if (t79 != -32769) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x333 = 16;
	static uint64_t x334 = 27153202319661LLU;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x333&x334)+(x335|x336));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MIN;
	uint32_t x338 = UINT32_MAX;
	volatile int8_t x339 = -7;
	int64_t x340 = INT64_MIN;

	t81 = ((x337&x338)+(x339|x340));

	if (t81 != 4294967161LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x341 = 65294300LLU;
	int64_t x342 = -14046030497LL;
	int32_t x343 = 15;
	int32_t x344 = -221024233;

	t82 = ((x341&x342)+(x343|x344));

	if (t82 != 18446744073534666107LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x345 = INT64_MIN;
	int8_t x346 = 7;
	static int32_t x347 = INT32_MIN;
	int8_t x348 = -1;

	t83 = ((x345&x346)+(x347|x348));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x349 = INT64_MAX;
	uint16_t x350 = 5U;
	int16_t x351 = -1;
	int8_t x352 = INT8_MIN;

	t84 = ((x349&x350)+(x351|x352));

	if (t84 != 4LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = INT64_MIN;
	int8_t x354 = INT8_MIN;
	static volatile uint32_t x355 = 51U;
	int32_t x356 = -1;

	t85 = ((x353&x354)+(x355|x356));

	if (t85 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = INT64_MAX;
	int8_t x358 = INT8_MAX;
	volatile int64_t x359 = INT64_MIN;

	t86 = ((x357&x358)+(x359|x360));

	if (t86 != 126LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x361 = 3507848438897LLU;
	static int8_t x362 = -1;
	int64_t x363 = INT64_MIN;
	static int8_t x364 = INT8_MIN;
	static uint64_t t87 = 598397705537379758LLU;

	t87 = ((x361&x362)+(x363|x364));

	if (t87 != 3507848438769LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x365 = 3LLU;
	volatile uint64_t x366 = UINT64_MAX;
	volatile int16_t x367 = -1;
	static volatile uint64_t t88 = 26575205386502161LLU;

	t88 = ((x365&x366)+(x367|x368));

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x369 = 17189LLU;
	volatile uint32_t x371 = 21237624U;
	volatile uint16_t x372 = 30051U;
	uint64_t t89 = 40861101605LLU;

	t89 = ((x369&x370)+(x371|x372));

	if (t89 != 21283488LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x373 = UINT8_MAX;
	volatile int8_t x374 = -1;
	volatile int64_t x375 = -8925048LL;
	uint8_t x376 = UINT8_MAX;
	int64_t t90 = -27774471LL;

	t90 = ((x373&x374)+(x375|x376));

	if (t90 != -8924674LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x377 = 188;
	uint32_t x379 = 1U;
	volatile int32_t x380 = INT32_MAX;
	volatile uint64_t t91 = 19982319205285105LLU;

	t91 = ((x377&x378)+(x379|x380));

	if (t91 != 2147483803LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x381 = INT64_MIN;
	uint64_t x382 = 280145147470052LLU;
	uint64_t t92 = 1463376949LLU;

	t92 = ((x381&x382)+(x383|x384));

	if (t92 != 9223372036854775816LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MAX;
	int64_t x388 = -204LL;
	int64_t t93 = -4285533LL;

	t93 = ((x385&x386)+(x387|x388));

	if (t93 != -129LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = -1LL;
	uint32_t x392 = 4500U;
	volatile int64_t t94 = -8675029420666LL;

	t94 = ((x389&x390)+(x391|x392));

	if (t94 != -28729903125LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x394 = 0LLU;
	static int64_t x395 = INT64_MIN;
	int64_t x396 = 60635706408003977LL;
	volatile uint64_t t95 = 162959193250937LLU;

	t95 = ((x393&x394)+(x395|x396));

	if (t95 != 9284007743262779785LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MIN;
	uint16_t x398 = 58U;
	int32_t x400 = -1;

	t96 = ((x397&x398)+(x399|x400));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x401 = INT16_MIN;
	uint32_t x402 = 3989U;
	uint16_t x403 = UINT16_MAX;

	t97 = ((x401&x402)+(x403|x404));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x405 = UINT8_MAX;
	uint32_t x407 = 101855U;
	volatile uint8_t x408 = 1U;
	volatile uint32_t t98 = 130535U;

	t98 = ((x405&x406)+(x407|x408));

	if (t98 != 102032U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = INT32_MAX;
	volatile int8_t x411 = -12;
	int16_t x412 = -44;

	t99 = ((x409&x410)+(x411|x412));

	if (t99 != 2147450868) { NG(); } else { ; }
	
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

