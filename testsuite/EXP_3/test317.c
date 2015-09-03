#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 1U;
volatile int32_t x16 = INT32_MIN;
volatile uint64_t t2 = 2294953936053068016LLU;
uint8_t x30 = UINT8_MAX;
uint32_t t5 = 10505924U;
uint64_t x33 = UINT64_MAX;
int8_t x37 = INT8_MAX;
uint16_t x50 = UINT16_MAX;
volatile int32_t t11 = 1615063;
static uint16_t x63 = 459U;
uint32_t x68 = 129817U;
static int8_t x71 = INT8_MIN;
int32_t t14 = -11348505;
uint64_t t15 = 6486LLU;
int8_t x80 = INT8_MIN;
volatile int8_t x83 = -1;
static int32_t x84 = INT32_MIN;
uint16_t x90 = 428U;
uint64_t x94 = UINT64_MAX;
static volatile int32_t x102 = -26307010;
int32_t x103 = INT32_MIN;
uint64_t x104 = 1LLU;
volatile int16_t x117 = -1;
static int8_t x128 = INT8_MIN;
static int64_t x146 = INT64_MIN;
static volatile uint8_t x147 = UINT8_MAX;
static volatile uint64_t t30 = 669345919548LLU;
uint32_t x152 = UINT32_MAX;
static int32_t x156 = -69180927;
int32_t x157 = INT32_MAX;
int32_t x159 = INT32_MIN;
uint32_t x171 = 67258012U;
static int64_t t35 = 18LL;
int32_t x177 = 46343;
volatile int32_t x194 = 15368531;
uint64_t x195 = UINT64_MAX;
static uint64_t x196 = 15775968935952LLU;
static int64_t x197 = 194270LL;
int64_t t41 = -4423732854692LL;
uint64_t x201 = UINT64_MAX;
volatile int16_t x211 = -1;
volatile int32_t t43 = 48;
int16_t x218 = INT16_MIN;
int32_t x221 = -1;
int8_t x222 = INT8_MAX;
uint16_t x229 = 7U;
uint64_t t48 = 886536945551790LLU;
uint64_t x241 = 0LLU;
static int8_t x252 = INT8_MIN;
static int8_t x256 = INT8_MAX;
int8_t x257 = INT8_MIN;
int16_t x260 = INT16_MIN;
volatile int32_t t54 = 0;
int16_t x262 = INT16_MIN;
uint32_t x269 = 114949U;
uint8_t x273 = 2U;
int16_t x275 = -1;
int16_t x278 = -1;
int8_t x289 = -1;
static uint16_t x290 = UINT16_MAX;
static uint32_t x292 = 56577U;
static int8_t x300 = -1;
static uint16_t x308 = UINT16_MAX;
uint64_t t65 = 97321692419742LLU;
int32_t x310 = INT32_MIN;
static int8_t x313 = 12;
static volatile int32_t t67 = -2023;
static int32_t x322 = -791142593;
int32_t x324 = 123;
volatile int64_t x332 = 101386LL;
volatile uint8_t x347 = UINT8_MAX;
uint64_t t72 = 8483974LLU;
int64_t x354 = INT64_MIN;
int64_t x358 = INT64_MIN;
int32_t x373 = INT32_MAX;
int64_t x378 = 110367698036731LL;
int64_t x393 = 8001LL;
int8_t x401 = 1;
volatile uint32_t t83 = 14U;
int16_t x408 = INT16_MAX;
int8_t x409 = 54;
static int32_t x410 = 871;
volatile int64_t x418 = INT64_MIN;
static volatile uint16_t x420 = 115U;
int32_t x422 = INT32_MIN;
uint32_t x424 = UINT32_MAX;
volatile uint8_t x425 = UINT8_MAX;
int8_t x428 = 0;
volatile int32_t t88 = 727;
volatile uint16_t x439 = UINT16_MAX;
int64_t t91 = -2LL;
static volatile int32_t t95 = -205;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MIN;
	static int16_t x4 = INT16_MIN;
	static int32_t t0 = 19;

	t0 = ((x1|x2)%(x3-x4));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint64_t x7 = UINT64_MAX;
	static int32_t x8 = -6;
	uint64_t t1 = 10020787LLU;

	t1 = ((x5|x6)%(x7-x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MIN;
	uint16_t x14 = 1U;
	uint64_t x15 = 156382859904728268LLU;

	t2 = ((x13|x14)%(x15-x16));

	if (t2 != 153166037826484681LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 3LLU;
	int16_t x18 = INT16_MIN;
	volatile uint32_t x19 = 13676840U;
	uint8_t x20 = 33U;
	static volatile uint64_t t3 = 76557061LLU;

	t3 = ((x17|x18)%(x19-x20));

	if (t3 != 5110846LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x25 = 15U;
	volatile uint32_t x26 = 1U;
	int64_t x27 = INT64_MAX;
	uint8_t x28 = 0U;
	static int64_t t4 = 119471523590LL;

	t4 = ((x25|x26)%(x27-x28));

	if (t4 != 15LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x29 = 0U;
	int16_t x31 = INT16_MAX;
	int8_t x32 = -1;

	t5 = ((x29|x30)%(x31-x32));

	if (t5 != 255U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x34 = INT64_MAX;
	static int64_t x35 = INT64_MIN;
	volatile int16_t x36 = -2;
	static volatile uint64_t t6 = 1LLU;

	t6 = ((x33|x34)%(x35-x36));

	if (t6 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x38 = 216U;
	int8_t x39 = INT8_MIN;
	volatile int16_t x40 = INT16_MAX;
	volatile int32_t t7 = -39018;

	t7 = ((x37|x38)%(x39-x40));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = 19;
	int64_t x42 = INT64_MIN;
	static int16_t x43 = 1;
	volatile uint64_t x44 = UINT64_MAX;
	uint64_t t8 = 33568274341656607LLU;

	t8 = ((x41|x42)%(x43-x44));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 1U;
	int16_t x46 = INT16_MIN;
	int16_t x47 = -1;
	uint8_t x48 = 50U;
	volatile int32_t t9 = -457;

	t9 = ((x45|x46)%(x47-x48));

	if (t9 != -25) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = 0;
	int16_t x51 = INT16_MAX;
	volatile int64_t x52 = -1LL;
	volatile int64_t t10 = 28714632351LL;

	t10 = ((x49|x50)%(x51-x52));

	if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -1;
	int8_t x58 = -1;
	static int16_t x59 = INT16_MAX;
	static uint8_t x60 = 0U;

	t11 = ((x57|x58)%(x59-x60));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = 6172;
	volatile int64_t x62 = INT64_MAX;
	static int16_t x64 = INT16_MAX;
	volatile int64_t t12 = -1837866522907267973LL;

	t12 = ((x61|x62)%(x63-x64));

	if (t12 != 10175LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = UINT32_MAX;
	static uint16_t x66 = UINT16_MAX;
	int32_t x67 = 249324096;
	uint32_t t13 = 245U;

	t13 = ((x65|x66)%(x67-x68));

	if (t13 != 58664552U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x69 = INT32_MIN;
	static volatile uint16_t x70 = 13U;
	int32_t x72 = INT32_MIN;

	t14 = ((x69|x70)%(x71-x72));

	if (t14 != -115) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = INT16_MIN;
	int64_t x74 = INT64_MIN;
	static int8_t x75 = 45;
	uint64_t x76 = 19849381065LLU;

	t15 = ((x73|x74)%(x75-x76));

	if (t15 != 19849348252LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = UINT8_MAX;
	uint8_t x78 = 16U;
	static int32_t x79 = INT32_MIN;
	static int32_t t16 = -1699202;

	t16 = ((x77|x78)%(x79-x80));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x81 = 1LLU;
	int8_t x82 = -1;
	static volatile uint64_t t17 = 1433342357448LLU;

	t17 = ((x81|x82)%(x83-x84));

	if (t17 != 3LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = UINT16_MAX;
	static int32_t x91 = -1;
	volatile uint32_t x92 = 64572780U;
	uint32_t t18 = 672U;

	t18 = ((x89|x90)%(x91-x92));

	if (t18 != 65535U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x93 = INT64_MAX;
	uint8_t x95 = 0U;
	int16_t x96 = INT16_MIN;
	uint64_t t19 = 177254667LLU;

	t19 = ((x93|x94)%(x95-x96));

	if (t19 != 32767LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x97 = UINT64_MAX;
	uint16_t x98 = 23174U;
	static int32_t x99 = 0;
	int16_t x100 = 7130;
	uint64_t t20 = 2293950LLU;

	t20 = ((x97|x98)%(x99-x100));

	if (t20 != 7129LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x101 = UINT64_MAX;
	volatile uint64_t t21 = 766988135LLU;

	t21 = ((x101|x102)%(x103-x104));

	if (t21 != 2147483648LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MAX;
	int64_t x106 = -1LL;
	int64_t x107 = INT64_MIN;
	int16_t x108 = -1;
	volatile int64_t t22 = -57794283787951598LL;

	t22 = ((x105|x106)%(x107-x108));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x113 = UINT8_MAX;
	uint32_t x114 = 24474934U;
	uint64_t x115 = 434018667938701426LLU;
	int8_t x116 = -41;
	static volatile uint64_t t23 = 429837096026390LLU;

	t23 = ((x113|x114)%(x115-x116));

	if (t23 != 24475135LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x118 = UINT32_MAX;
	uint16_t x119 = 2U;
	int8_t x120 = INT8_MIN;
	uint32_t t24 = 111968749U;

	t24 = ((x117|x118)%(x119-x120));

	if (t24 != 125U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x121 = -74442470887173LL;
	int32_t x122 = 10;
	int16_t x123 = 3577;
	uint16_t x124 = 1391U;
	volatile int64_t t25 = 599295LL;

	t25 = ((x121|x122)%(x123-x124));

	if (t25 != -721LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x125 = 556832891857412LL;
	int8_t x126 = -1;
	int16_t x127 = INT16_MIN;
	volatile int64_t t26 = -12LL;

	t26 = ((x125|x126)%(x127-x128));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MIN;
	uint8_t x130 = UINT8_MAX;
	int32_t x131 = INT32_MAX;
	int64_t x132 = -1LL;
	volatile int64_t t27 = -11LL;

	t27 = ((x129|x130)%(x131-x132));

	if (t27 != -2147483393LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x133 = 2;
	uint64_t x134 = UINT64_MAX;
	int64_t x135 = INT64_MAX;
	static int64_t x136 = 1896899074LL;
	volatile uint64_t t28 = 104LLU;

	t28 = ((x133|x134)%(x135-x136));

	if (t28 != 3793798149LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	static volatile int64_t x143 = -5438848368LL;
	int16_t x144 = INT16_MAX;
	static int64_t t29 = -2067385LL;

	t29 = ((x141|x142)%(x143-x144));

	if (t29 != -32768LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x145 = UINT64_MAX;
	int8_t x148 = -1;

	t30 = ((x145|x146)%(x147-x148));

	if (t30 != 255LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x149 = INT16_MIN;
	static uint16_t x150 = 321U;
	int64_t x151 = INT64_MAX;
	volatile int64_t t31 = 24466LL;

	t31 = ((x149|x150)%(x151-x152));

	if (t31 != -32447LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = -109472387079LL;
	volatile int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MIN;
	int64_t t32 = 76375LL;

	t32 = ((x153|x154)%(x155-x156));

	if (t32 != -7LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x158 = -280078LL;
	int16_t x160 = -1;
	static volatile int64_t t33 = 1706LL;

	t33 = ((x157|x158)%(x159-x160));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x161 = UINT8_MAX;
	int64_t x162 = -482421776157LL;
	int8_t x163 = 1;
	int64_t x164 = 243696LL;
	volatile int64_t t34 = 128817076058397605LL;

	t34 = ((x161|x162)%(x163-x164));

	if (t34 != -229789LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x169 = 21U;
	int64_t x170 = -1255360LL;
	volatile uint32_t x172 = 173841141U;

	t35 = ((x169|x170)%(x171-x172));

	if (t35 != -1255339LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x173 = 15U;
	int16_t x174 = INT16_MAX;
	uint8_t x175 = 44U;
	uint8_t x176 = 2U;
	uint32_t t36 = 65260251U;

	t36 = ((x173|x174)%(x175-x176));

	if (t36 != 7U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x178 = INT16_MIN;
	volatile int32_t x179 = -1;
	int8_t x180 = INT8_MAX;
	volatile int32_t t37 = -28230;

	t37 = ((x177|x178)%(x179-x180));

	if (t37 != -121) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = INT64_MAX;
	volatile int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	int16_t x188 = INT16_MIN;
	volatile int64_t t38 = -240633475553115LL;

	t38 = ((x185|x186)%(x187-x188));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = -1;
	volatile int8_t x190 = -5;
	volatile int64_t x191 = 140869711566262693LL;
	int32_t x192 = -1;
	volatile int64_t t39 = 13003LL;

	t39 = ((x189|x190)%(x191-x192));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = 5U;
	static volatile uint64_t t40 = 2LLU;

	t40 = ((x193|x194)%(x195-x196));

	if (t40 != 15368535LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x198 = INT8_MIN;
	uint16_t x199 = 51U;
	static uint8_t x200 = UINT8_MAX;

	t41 = ((x197|x198)%(x199-x200));

	if (t41 != -34LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x202 = -2047638901LL;
	int32_t x203 = INT32_MIN;
	int64_t x204 = -3088449893LL;
	static uint64_t t42 = 3975227LLU;

	t42 = ((x201|x202)%(x203-x204));

	if (t42 != 540252510LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x209 = 1373;
	volatile int8_t x210 = -19;
	uint16_t x212 = UINT16_MAX;

	t43 = ((x209|x210)%(x211-x212));

	if (t43 != -3) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = INT8_MIN;
	uint8_t x214 = 25U;
	static int8_t x215 = INT8_MAX;
	int16_t x216 = -1;
	volatile int32_t t44 = -253;

	t44 = ((x213|x214)%(x215-x216));

	if (t44 != -103) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = -1;
	int16_t x219 = 685;
	uint8_t x220 = 1U;
	int32_t t45 = 24661;

	t45 = ((x217|x218)%(x219-x220));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x223 = -21977LL;
	int32_t x224 = -1;
	volatile int64_t t46 = -2885756962LL;

	t46 = ((x221|x222)%(x223-x224));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = -375;
	int16_t x226 = -1;
	int16_t x227 = INT16_MIN;
	int8_t x228 = -2;
	volatile int32_t t47 = -233918750;

	t47 = ((x225|x226)%(x227-x228));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x230 = INT64_MAX;
	volatile uint64_t x231 = 2254234075094144854LLU;
	int32_t x232 = INT32_MIN;

	t48 = ((x229|x230)%(x231-x232));

	if (t48 != 206435727888261799LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x233 = INT64_MIN;
	static volatile uint8_t x234 = UINT8_MAX;
	static int32_t x235 = INT32_MIN;
	int16_t x236 = INT16_MIN;
	static volatile int64_t t49 = 338LL;

	t49 = ((x233|x234)%(x235-x236));

	if (t49 != -32513LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x237 = INT64_MIN;
	uint8_t x238 = 42U;
	static int32_t x239 = 26;
	volatile int16_t x240 = -1;
	int64_t t50 = 26LL;

	t50 = ((x237|x238)%(x239-x240));

	if (t50 != -11LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x242 = 1U;
	volatile int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MIN;
	uint64_t t51 = 832274367594LLU;

	t51 = ((x241|x242)%(x243-x244));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = -1LL;
	static volatile uint8_t x250 = 3U;
	uint64_t x251 = 30565471719413684LLU;
	static volatile uint64_t t52 = 5118805876LLU;

	t52 = ((x249|x250)%(x251-x252));

	if (t52 != 15764626903022979LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x253 = -603278143;
	uint64_t x254 = 298224LLU;
	uint8_t x255 = 21U;
	volatile uint64_t t53 = 372866LLU;

	t53 = ((x253|x254)%(x255-x256));

	if (t53 != 18446744073106537713LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x258 = -1;
	int32_t x259 = 6724606;

	t54 = ((x257|x258)%(x259-x260));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x261 = UINT64_MAX;
	int8_t x263 = INT8_MIN;
	int16_t x264 = -1;
	volatile uint64_t t55 = 1001642700985636LLU;

	t55 = ((x261|x262)%(x263-x264));

	if (t55 != 126LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = 3906LL;
	static volatile uint32_t x266 = UINT32_MAX;
	int8_t x267 = -1;
	uint8_t x268 = UINT8_MAX;
	static int64_t t56 = 677520286LL;

	t56 = ((x265|x266)%(x267-x268));

	if (t56 != 255LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x270 = INT16_MIN;
	static uint64_t x271 = 256292391540950092LLU;
	uint16_t x272 = UINT16_MAX;
	uint64_t t57 = 21227421311968210LLU;

	t57 = ((x269|x270)%(x271-x272));

	if (t57 != 4294951173LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x274 = -28;
	uint64_t x276 = 180LLU;
	volatile uint64_t t58 = 10720326310058LLU;

	t58 = ((x273|x274)%(x275-x276));

	if (t58 != 155LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = 229;
	int8_t x279 = INT8_MIN;
	static int16_t x280 = -1;
	static int32_t t59 = 285687154;

	t59 = ((x277|x278)%(x279-x280));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x281 = 833;
	int8_t x282 = INT8_MIN;
	static volatile int64_t x283 = -2524828826677309LL;
	static uint16_t x284 = UINT16_MAX;
	static int64_t t60 = 133251603399493LL;

	t60 = ((x281|x282)%(x283-x284));

	if (t60 != -63LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x291 = 102U;
	uint32_t t61 = 0U;

	t61 = ((x289|x290)%(x291-x292));

	if (t61 != 56474U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x293 = -6660;
	volatile int32_t x294 = -1;
	int16_t x295 = -1;
	volatile int32_t x296 = -7810400;
	volatile int32_t t62 = 100784;

	t62 = ((x293|x294)%(x295-x296));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x297 = INT32_MIN;
	volatile int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MIN;
	int32_t t63 = -589165;

	t63 = ((x297|x298)%(x299-x300));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = 96;
	uint32_t x302 = 881969552U;
	uint8_t x303 = 5U;
	volatile int16_t x304 = INT16_MIN;
	uint32_t t64 = 511348U;

	t64 = ((x301|x302)%(x303-x304));

	if (t64 != 15445U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x305 = 21U;
	static uint64_t x306 = 17443909265816LLU;
	int64_t x307 = -16354119837688268LL;

	t65 = ((x305|x306)%(x307-x308));

	if (t65 != 17443909265821LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x309 = UINT64_MAX;
	uint8_t x311 = 2U;
	volatile int64_t x312 = 192843009145598LL;
	uint64_t t66 = 6769139341246470560LLU;

	t66 = ((x309|x310)%(x311-x312));

	if (t66 != 192843009145595LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x314 = 9U;
	int32_t x315 = 3636029;
	int8_t x316 = INT8_MAX;

	t67 = ((x313|x314)%(x315-x316));

	if (t67 != 13) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x317 = UINT64_MAX;
	int64_t x318 = INT64_MIN;
	int8_t x319 = INT8_MIN;
	uint64_t x320 = 2LLU;
	uint64_t t68 = 7661696LLU;

	t68 = ((x317|x318)%(x319-x320));

	if (t68 != 129LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x321 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	volatile int32_t t69 = 5;

	t69 = ((x321|x322)%(x323-x324));

	if (t69 != -65) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = INT32_MIN;
	int8_t x330 = INT8_MAX;
	uint32_t x331 = 76U;
	static volatile int64_t t70 = -379161LL;

	t70 = ((x329|x330)%(x331-x332));

	if (t70 != -15451LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = -1;
	uint32_t x334 = 74154585U;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	uint32_t t71 = 958025562U;

	t71 = ((x333|x334)%(x335-x336));

	if (t71 != 255U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = INT32_MAX;
	volatile uint64_t x346 = 891636355304527LLU;
	static int64_t x348 = 236248104384LL;

	t72 = ((x345|x346)%(x347-x348));

	if (t72 != 891637358133247LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x353 = UINT8_MAX;
	static int64_t x355 = 2336053298LL;
	static volatile int8_t x356 = INT8_MIN;
	int64_t t73 = 1203087861543LL;

	t73 = ((x353|x354)%(x355-x356));

	if (t73 != -815421311LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x357 = UINT8_MAX;
	static uint16_t x359 = 27762U;
	int16_t x360 = INT16_MIN;
	int64_t t74 = 30259865033317LL;

	t74 = ((x357|x358)%(x359-x360));

	if (t74 != -7883LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x362 = -1145;
	int8_t x363 = -1;
	static int8_t x364 = 21;
	volatile int32_t t75 = -54;

	t75 = ((x361|x362)%(x363-x364));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x365 = 36102LLU;
	int16_t x366 = -5;
	int16_t x367 = INT16_MAX;
	int64_t x368 = INT64_MAX;
	uint64_t t76 = 4159LLU;

	t76 = ((x365|x366)%(x367-x368));

	if (t76 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x374 = 7288676973636540LLU;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = INT16_MIN;
	uint64_t t77 = 660599912744LLU;

	t77 = ((x373|x374)%(x375-x376));

	if (t77 != 8791LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x377 = 50783524170050LL;
	volatile int32_t x379 = INT32_MIN;
	int8_t x380 = INT8_MIN;
	static int64_t t78 = 110006584LL;

	t78 = ((x377|x378)%(x379-x380));

	if (t78 != 6168571LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x381 = UINT32_MAX;
	int16_t x382 = INT16_MIN;
	uint64_t x383 = 2609LLU;
	int32_t x384 = INT32_MAX;
	volatile uint64_t t79 = 612449836LLU;

	t79 = ((x381|x382)%(x383-x384));

	if (t79 != 4294967295LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x389 = -66997971706843LL;
	int8_t x390 = INT8_MIN;
	int8_t x391 = 1;
	int8_t x392 = INT8_MAX;
	int64_t t80 = -3025019766580661137LL;

	t80 = ((x389|x390)%(x391-x392));

	if (t80 != -91LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x394 = UINT8_MAX;
	int16_t x395 = INT16_MIN;
	volatile int32_t x396 = -1;
	volatile int64_t t81 = 576LL;

	t81 = ((x393|x394)%(x395-x396));

	if (t81 != 8191LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x397 = UINT16_MAX;
	static volatile int8_t x398 = -1;
	int8_t x399 = INT8_MIN;
	int8_t x400 = 30;
	int32_t t82 = -349639510;

	t82 = ((x397|x398)%(x399-x400));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x402 = UINT8_MAX;
	int16_t x403 = -184;
	uint32_t x404 = 304264U;

	t83 = ((x401|x402)%(x403-x404));

	if (t83 != 255U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x405 = INT16_MIN;
	static int32_t x406 = -82;
	uint32_t x407 = 22112695U;
	volatile uint32_t t84 = 17293926U;

	t84 = ((x405|x406)%(x407-x408));

	if (t84 != 11461182U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x411 = INT32_MIN;
	int64_t x412 = 93284LL;
	static int64_t t85 = 1453524346279369LL;

	t85 = ((x409|x410)%(x411-x412));

	if (t85 != 887LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x417 = -1LL;
	int16_t x419 = 3519;
	int64_t t86 = -83LL;

	t86 = ((x417|x418)%(x419-x420));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x421 = -1;
	volatile int64_t x423 = INT64_MAX;
	static volatile int64_t t87 = -268465191LL;

	t87 = ((x421|x422)%(x423-x424));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x426 = -1;
	uint8_t x427 = UINT8_MAX;

	t88 = ((x425|x426)%(x427-x428));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x433 = 10;
	volatile int64_t x434 = -1LL;
	uint64_t x435 = UINT64_MAX;
	int16_t x436 = INT16_MIN;
	uint64_t t89 = 8319512116185889LLU;

	t89 = ((x433|x434)%(x435-x436));

	if (t89 != 15LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x437 = UINT16_MAX;
	uint16_t x438 = 7U;
	uint32_t x440 = UINT32_MAX;
	volatile uint32_t t90 = 742698U;

	t90 = ((x437|x438)%(x439-x440));

	if (t90 != 65535U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x441 = 28;
	static int16_t x442 = 98;
	int64_t x443 = 142217362548653295LL;
	int64_t x444 = 4287LL;

	t91 = ((x441|x442)%(x443-x444));

	if (t91 != 126LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x445 = INT8_MIN;
	uint8_t x446 = UINT8_MAX;
	uint64_t x447 = 699500633312LLU;
	int64_t x448 = INT64_MIN;
	uint64_t t92 = 3496915011234915798LLU;

	t92 = ((x445|x446)%(x447-x448));

	if (t92 != 9223371337354142495LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x449 = -85704LL;
	volatile int16_t x450 = INT16_MIN;
	static int8_t x451 = INT8_MIN;
	volatile int16_t x452 = INT16_MIN;
	int64_t t93 = -16284717383LL;

	t93 = ((x449|x450)%(x451-x452));

	if (t93 != -20168LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x457 = 22U;
	int64_t x458 = INT64_MIN;
	int64_t x459 = 24LL;
	static int64_t x460 = 1550328343106831LL;
	static volatile int64_t t94 = 48926684LL;

	t94 = ((x457|x458)%(x459-x460));

	if (t94 != -468723712380943LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x465 = INT8_MIN;
	static uint8_t x466 = UINT8_MAX;
	static int16_t x467 = INT16_MIN;
	uint8_t x468 = UINT8_MAX;

	t95 = ((x465|x466)%(x467-x468));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x469 = INT32_MIN;
	int32_t x470 = INT32_MIN;
	int8_t x471 = -3;
	static int64_t x472 = INT64_MIN;
	volatile int64_t t96 = -63057845451009206LL;

	t96 = ((x469|x470)%(x471-x472));

	if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x473 = UINT32_MAX;
	int16_t x474 = INT16_MIN;
	uint8_t x475 = UINT8_MAX;
	int16_t x476 = INT16_MIN;
	volatile uint32_t t97 = 16212134U;

	t97 = ((x473|x474)%(x475-x476));

	if (t97 != 28938U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x477 = UINT32_MAX;
	static int32_t x478 = 1;
	uint64_t x479 = UINT64_MAX;
	volatile int64_t x480 = INT64_MAX;
	uint64_t t98 = 1334277065278493LLU;

	t98 = ((x477|x478)%(x479-x480));

	if (t98 != 4294967295LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x485 = UINT8_MAX;
	uint16_t x486 = UINT16_MAX;
	uint32_t x487 = 0U;
	uint16_t x488 = 7120U;
	uint32_t t99 = 6027U;

	t99 = ((x485|x486)%(x487-x488));

	if (t99 != 65535U) { NG(); } else { ; }
	
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

