#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -3066;
int8_t x23 = 5;
uint16_t x24 = 8276U;
volatile uint16_t x35 = 10001U;
int16_t x40 = INT16_MIN;
uint8_t x54 = 5U;
uint32_t x71 = UINT32_MAX;
int16_t x78 = -1;
int64_t x81 = -67357LL;
uint32_t x88 = 36794934U;
volatile uint32_t x90 = 234U;
volatile int32_t x96 = INT32_MIN;
volatile uint16_t x103 = 169U;
static uint32_t t20 = 4U;
int8_t x110 = 3;
int64_t t21 = 1LL;
int16_t x115 = -1;
volatile uint64_t x124 = 84447608LLU;
volatile uint64_t t24 = 5672LLU;
int64_t x134 = 210770LL;
static uint32_t x135 = UINT32_MAX;
uint16_t x138 = 608U;
uint64_t t28 = 147491416LLU;
int32_t x142 = INT32_MIN;
int64_t t30 = 2166278326375LL;
uint32_t x153 = UINT32_MAX;
volatile int32_t x155 = -686338168;
uint8_t x165 = 7U;
volatile int32_t x168 = 1694;
int16_t x169 = INT16_MIN;
int16_t x171 = INT16_MIN;
int32_t t38 = 3883595;
int16_t x185 = -2;
volatile int64_t t40 = 15046075947122LL;
int16_t x198 = INT16_MIN;
int32_t x206 = INT32_MIN;
int32_t x210 = -10225;
uint64_t x225 = 11629001LLU;
uint32_t x233 = UINT32_MAX;
uint64_t x239 = 419412892959008LLU;
volatile uint64_t x240 = 47280233640051LLU;
static int16_t x249 = INT16_MIN;
static int32_t x251 = 7671;
volatile int32_t t55 = 620;
int16_t x261 = INT16_MIN;
uint16_t x270 = UINT16_MAX;
int32_t x272 = 7492545;
volatile int64_t t60 = 94820899464LL;
uint16_t x292 = 6U;
int32_t t61 = -796;
volatile int32_t x295 = INT32_MIN;
volatile uint32_t t63 = 24931U;
uint64_t t64 = 5597490768663414LLU;
volatile uint16_t x316 = 32U;
static int64_t t65 = 883620569035717879LL;
int8_t x327 = -1;
int16_t x330 = -1;
int8_t x332 = INT8_MIN;
int32_t t68 = -232371;
uint64_t x334 = 3985506568501671LLU;
uint64_t x337 = 396141480484LLU;
volatile int64_t x339 = INT64_MIN;
int64_t x343 = INT64_MAX;
uint64_t x361 = 5507LLU;
int8_t x369 = 5;
volatile int32_t x375 = -13536;
volatile uint32_t t76 = 158593055U;
static int8_t x377 = 2;
int32_t x379 = INT32_MIN;
static int32_t x380 = -2675;
static int8_t x392 = -7;
int64_t x396 = -18512LL;
volatile int64_t t80 = 2933382702LL;
uint64_t x412 = 521829841706020724LLU;
uint64_t t83 = 132531228LLU;
int8_t x417 = INT8_MIN;
int32_t x420 = -145786;
int16_t x425 = INT16_MIN;
volatile int32_t t88 = -714054671;
volatile int32_t x434 = -1;
volatile int8_t x440 = -1;
uint32_t x442 = 1420U;
int32_t x446 = INT32_MAX;
static int8_t x449 = -18;
uint8_t x455 = 11U;
int8_t x466 = -2;
int16_t x469 = INT16_MAX;


void f0(void) {
	static int16_t x9 = INT16_MAX;
	int8_t x11 = 0;
	int8_t x12 = INT8_MIN;
	volatile int32_t t0 = -3846;

	t0 = ((x9|x10)-(x11-x12));

	if (t0 != -129) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = -1;
	int16_t x18 = 1;
	volatile int32_t x19 = INT32_MIN;
	volatile int8_t x20 = -1;
	int32_t t1 = 33060;

	t1 = ((x17|x18)-(x19-x20));

	if (t1 != 2147483646) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x21 = INT64_MIN;
	volatile uint32_t x22 = 351507477U;
	volatile int64_t t2 = -1581112044982LL;

	t2 = ((x21|x22)-(x23-x24));

	if (t2 != -9223372036503260060LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = 7295382566LL;
	static int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	static int8_t x32 = -1;
	int64_t t3 = -4709LL;

	t3 = ((x29|x30)-(x31-x32));

	if (t3 != 2147464229LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x33 = UINT8_MAX;
	int16_t x34 = INT16_MIN;
	static volatile uint32_t x36 = UINT32_MAX;
	static volatile uint32_t t4 = 384U;

	t4 = ((x33|x34)-(x35-x36));

	if (t4 != 4294924781U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x37 = UINT16_MAX;
	volatile int16_t x38 = INT16_MIN;
	int16_t x39 = 855;
	int32_t t5 = -55175404;

	t5 = ((x37|x38)-(x39-x40));

	if (t5 != -33624) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = INT8_MAX;
	uint8_t x42 = 3U;
	volatile int64_t x43 = -26572156803664261LL;
	uint64_t x44 = 14795813LLU;
	volatile uint64_t t6 = 441923LLU;

	t6 = ((x41|x42)-(x43-x44));

	if (t6 != 26572156818460201LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x45 = 3837U;
	int64_t x46 = 8989436836LL;
	int32_t x47 = INT32_MIN;
	int8_t x48 = -1;
	volatile int64_t t7 = 2026819LL;

	t7 = ((x45|x46)-(x47-x48));

	if (t7 != 11136921596LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = INT16_MIN;
	static int16_t x50 = -71;
	int16_t x51 = 1;
	int16_t x52 = -1;
	int32_t t8 = -528383;

	t8 = ((x49|x50)-(x51-x52));

	if (t8 != -73) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = -15LL;
	static volatile int8_t x55 = -1;
	int32_t x56 = INT32_MIN;
	volatile int64_t t9 = -619302LL;

	t9 = ((x53|x54)-(x55-x56));

	if (t9 != -2147483658LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = 821115U;
	static int16_t x58 = INT16_MAX;
	int64_t x59 = INT64_MAX;
	uint64_t x60 = 8LLU;
	static uint64_t t10 = 4384704LLU;

	t10 = ((x57|x58)-(x59-x60));

	if (t10 != 9223372036855627784LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = -38;
	int16_t x62 = 914;
	int8_t x63 = -1;
	int64_t x64 = -1LL;
	volatile int64_t t11 = 454LL;

	t11 = ((x61|x62)-(x63-x64));

	if (t11 != -38LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = UINT16_MAX;
	int8_t x66 = -1;
	int8_t x67 = 4;
	uint16_t x68 = 13339U;
	volatile int32_t t12 = 62080161;

	t12 = ((x65|x66)-(x67-x68));

	if (t12 != 13334) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x69 = 1;
	static volatile int64_t x70 = INT64_MAX;
	static int16_t x72 = INT16_MAX;
	volatile int64_t t13 = 22768602LL;

	t13 = ((x69|x70)-(x71-x72));

	if (t13 != 9223372032559841279LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x73 = -310;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = 125755LLU;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t14 = 115661175LLU;

	t14 = ((x73|x74)-(x75-x76));

	if (t14 != 18446744073709425806LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MIN;
	uint16_t x79 = 8U;
	volatile int64_t x80 = 615024403391981LL;
	static int64_t t15 = -1LL;

	t15 = ((x77|x78)-(x79-x80));

	if (t15 != 615024403391972LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x82 = INT8_MIN;
	int32_t x83 = 28442;
	int16_t x84 = INT16_MIN;
	static volatile int64_t t16 = 66651489LL;

	t16 = ((x81|x82)-(x83-x84));

	if (t16 != -61239LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -11;
	volatile int8_t x86 = -12;
	uint16_t x87 = 1127U;
	uint32_t t17 = 397281U;

	t17 = ((x85|x86)-(x87-x88));

	if (t17 != 36793796U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x89 = INT32_MAX;
	static volatile int64_t x91 = -1LL;
	int32_t x92 = -6;
	int64_t t18 = -571LL;

	t18 = ((x89|x90)-(x91-x92));

	if (t18 != 2147483642LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MIN;
	int16_t x94 = INT16_MAX;
	static int8_t x95 = INT8_MIN;
	int32_t t19 = -53676877;

	t19 = ((x93|x94)-(x95-x96));

	if (t19 != -2147483521) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x101 = 281421814U;
	volatile int32_t x102 = INT32_MIN;
	uint16_t x104 = 4944U;

	t20 = ((x101|x102)-(x103-x104));

	if (t20 != 2428910237U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x109 = 1519597336571LL;
	int8_t x111 = INT8_MIN;
	static int64_t x112 = 287009858073LL;

	t21 = ((x109|x110)-(x111-x112));

	if (t21 != 1806607194772LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x113 = 341344681U;
	uint32_t x114 = 58U;
	volatile int8_t x116 = INT8_MIN;
	static volatile uint32_t t22 = 814U;

	t22 = ((x113|x114)-(x115-x116));

	if (t22 != 341344572U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x117 = 1034926424330572LLU;
	uint16_t x118 = UINT16_MAX;
	int16_t x119 = 550;
	int64_t x120 = -1LL;
	static uint64_t t23 = 3168184LLU;

	t23 = ((x117|x118)-(x119-x120));

	if (t23 != 1034926424391128LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x121 = 46U;
	uint16_t x122 = UINT16_MAX;
	int32_t x123 = -1;

	t24 = ((x121|x122)-(x123-x124));

	if (t24 != 84513144LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x125 = 6U;
	int8_t x126 = -1;
	int8_t x127 = -6;
	int64_t x128 = -2634965830374LL;
	int64_t t25 = -259038065224872036LL;

	t25 = ((x125|x126)-(x127-x128));

	if (t25 != -2634965830369LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x129 = UINT64_MAX;
	static int32_t x130 = -15;
	uint32_t x131 = 344882U;
	int32_t x132 = -1;
	static uint64_t t26 = 719161519094373698LLU;

	t26 = ((x129|x130)-(x131-x132));

	if (t26 != 18446744073709206732LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	static uint8_t x136 = 65U;
	int64_t t27 = 11630764LL;

	t27 = ((x133|x134)-(x135-x136));

	if (t27 != -6442240108LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = -48;
	volatile int64_t x139 = INT64_MIN;
	uint64_t x140 = UINT64_MAX;

	t28 = ((x137|x138)-(x139-x140));

	if (t28 != 9223372036854775791LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 0U;
	int8_t x143 = -1;
	int8_t x144 = 1;
	int32_t t29 = 153558;

	t29 = ((x141|x142)-(x143-x144));

	if (t29 != -2147483646) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x145 = 986670501LL;
	int32_t x146 = INT32_MAX;
	int8_t x147 = INT8_MIN;
	int8_t x148 = INT8_MIN;

	t30 = ((x145|x146)-(x147-x148));

	if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MIN;
	static uint16_t x150 = 1U;
	volatile uint8_t x151 = 3U;
	int8_t x152 = INT8_MIN;
	int32_t t31 = -202503664;

	t31 = ((x149|x150)-(x151-x152));

	if (t31 != -32898) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x154 = INT64_MIN;
	static volatile uint8_t x156 = 55U;
	volatile int64_t t32 = -1698173281LL;

	t32 = ((x153|x154)-(x155-x156));

	if (t32 != -9223372031873470290LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = -984881977348734LL;
	uint8_t x162 = 115U;
	int64_t x163 = 244956241268LL;
	volatile int64_t x164 = -144LL;
	int64_t t33 = -881LL;

	t33 = ((x161|x162)-(x163-x164));

	if (t33 != -985126933590033LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x166 = 8352U;
	volatile int8_t x167 = -6;
	volatile uint32_t t34 = 80318U;

	t34 = ((x165|x166)-(x167-x168));

	if (t34 != 10059U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x170 = INT8_MAX;
	int32_t x172 = 448127046;
	static int32_t t35 = 6997247;

	t35 = ((x169|x170)-(x171-x172));

	if (t35 != 448127173) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x173 = 3U;
	int32_t x174 = -7;
	int64_t x175 = -15638921LL;
	uint16_t x176 = UINT16_MAX;
	int64_t t36 = 170063246942726290LL;

	t36 = ((x173|x174)-(x175-x176));

	if (t36 != 4310671747LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x177 = 4889510LLU;
	int8_t x178 = INT8_MIN;
	int16_t x179 = INT16_MAX;
	uint64_t x180 = 142533668274719LLU;
	static volatile uint64_t t37 = 1777008935LLU;

	t37 = ((x177|x178)-(x179-x180));

	if (t37 != 142533668241862LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x181 = -6728;
	volatile uint8_t x182 = 15U;
	volatile int32_t x183 = INT32_MIN;
	static volatile int16_t x184 = -39;

	t38 = ((x181|x182)-(x183-x184));

	if (t38 != 2147476888) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x186 = 116LLU;
	static uint64_t x187 = 99914LLU;
	volatile int64_t x188 = 119853520487649LL;
	uint64_t t39 = 67619361456086957LLU;

	t39 = ((x185|x186)-(x187-x188));

	if (t39 != 119853520387733LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x189 = -1LL;
	static uint8_t x190 = 2U;
	static int32_t x191 = INT32_MIN;
	uint32_t x192 = 73U;

	t40 = ((x189|x190)-(x191-x192));

	if (t40 != -2147483576LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = -1;
	int32_t x195 = -8;
	uint16_t x196 = UINT16_MAX;
	int32_t t41 = 138;

	t41 = ((x193|x194)-(x195-x196));

	if (t41 != 65542) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x197 = UINT16_MAX;
	int32_t x199 = -702459570;
	uint32_t x200 = 131U;
	uint32_t t42 = 741939015U;

	t42 = ((x197|x198)-(x199-x200));

	if (t42 != 702459700U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MIN;
	int64_t x202 = 499813866LL;
	volatile int16_t x203 = 792;
	uint32_t x204 = UINT32_MAX;
	static volatile int64_t t43 = 157381289060905363LL;

	t43 = ((x201|x202)-(x203-x204));

	if (t43 != -9223372036354962735LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x205 = 581446;
	uint8_t x207 = UINT8_MAX;
	static volatile int16_t x208 = -1;
	int32_t t44 = 0;

	t44 = ((x205|x206)-(x207-x208));

	if (t44 != -2146902458) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x209 = INT32_MIN;
	int16_t x211 = -1;
	static int16_t x212 = -58;
	int32_t t45 = -769440;

	t45 = ((x209|x210)-(x211-x212));

	if (t45 != -10282) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x213 = 819842690U;
	static int32_t x214 = -857;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = UINT8_MAX;
	volatile uint32_t t46 = 87U;

	t46 = ((x213|x214)-(x215-x216));

	if (t46 != 32678U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x217 = 173LLU;
	uint8_t x218 = 10U;
	int8_t x219 = INT8_MAX;
	static int16_t x220 = INT16_MIN;
	static uint64_t t47 = 33061379348900405LLU;

	t47 = ((x217|x218)-(x219-x220));

	if (t47 != 18446744073709518896LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = INT64_MAX;
	static int32_t x222 = INT32_MIN;
	uint32_t x223 = 1831U;
	volatile int8_t x224 = INT8_MAX;
	int64_t t48 = 134293223378424LL;

	t48 = ((x221|x222)-(x223-x224));

	if (t48 != -1705LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x226 = 5049LLU;
	uint8_t x227 = 6U;
	static int8_t x228 = INT8_MIN;
	volatile uint64_t t49 = 1410950LLU;

	t49 = ((x225|x226)-(x227-x228));

	if (t49 != 11629427LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x234 = INT8_MAX;
	volatile int32_t x235 = INT32_MIN;
	volatile uint64_t x236 = 2160349369718144341LLU;
	volatile uint64_t t50 = 344215230710925LLU;

	t50 = ((x233|x234)-(x235-x236));

	if (t50 != 2160349376160595284LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = INT64_MIN;
	static uint8_t x238 = 10U;
	uint64_t t51 = 2126779LLU;

	t51 = ((x237|x238)-(x239-x240));

	if (t51 != 9222999904195456861LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x245 = UINT16_MAX;
	static uint64_t x246 = 93LLU;
	static int64_t x247 = INT64_MAX;
	volatile int32_t x248 = 0;
	uint64_t t52 = 2487333419068837382LLU;

	t52 = ((x245|x246)-(x247-x248));

	if (t52 != 9223372036854841344LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x250 = 278U;
	int32_t x252 = INT32_MAX;
	volatile uint32_t t53 = 2100766U;

	t53 = ((x249|x250)-(x251-x252));

	if (t53 != 2147443486U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x253 = INT64_MIN;
	volatile int64_t x254 = INT64_MAX;
	volatile int32_t x255 = 0;
	volatile uint16_t x256 = 7890U;
	static volatile int64_t t54 = -28270LL;

	t54 = ((x253|x254)-(x255-x256));

	if (t54 != 7889LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = -1;
	int16_t x258 = -1;
	int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MIN;

	t55 = ((x257|x258)-(x259-x260));

	if (t55 != -2147483521) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x262 = UINT16_MAX;
	static uint64_t x263 = 1760418291459709331LLU;
	uint8_t x264 = UINT8_MAX;
	uint64_t t56 = 4768967617447LLU;

	t56 = ((x261|x262)-(x263-x264));

	if (t56 != 16686325782249842539LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x265 = 0LLU;
	int16_t x266 = INT16_MIN;
	static volatile uint32_t x267 = 55U;
	uint64_t x268 = UINT64_MAX;
	uint64_t t57 = 27278196029LLU;

	t57 = ((x265|x266)-(x267-x268));

	if (t57 != 18446744073709518792LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = 2441;
	int16_t x271 = INT16_MIN;
	int32_t t58 = -10;

	t58 = ((x269|x270)-(x271-x272));

	if (t58 != 7590848) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x277 = 327135676U;
	static uint64_t x278 = 2074529LLU;
	uint16_t x279 = 29832U;
	int16_t x280 = 343;
	volatile uint64_t t59 = 5002638568971LLU;

	t59 = ((x277|x278)-(x279-x280));

	if (t59 != 327107724LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = 94292756;
	int16_t x286 = -2;
	int32_t x287 = INT32_MAX;
	int64_t x288 = INT64_MAX;

	t60 = ((x285|x286)-(x287-x288));

	if (t60 != 9223372034707292158LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x289 = 696952754;
	volatile int8_t x290 = -3;
	int8_t x291 = INT8_MIN;

	t61 = ((x289|x290)-(x291-x292));

	if (t61 != 133) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = -21014221911597LL;
	uint64_t x296 = 7LLU;
	volatile uint64_t t62 = 150281782443332249LLU;

	t62 = ((x293|x294)-(x295-x296));

	if (t62 != 2147453402LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x301 = -1;
	volatile int16_t x302 = 1;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = UINT32_MAX;

	t63 = ((x301|x302)-(x303-x304));

	if (t63 != 32766U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x309 = 6741U;
	uint64_t x310 = 14324249040899LLU;
	int8_t x311 = INT8_MIN;
	int32_t x312 = -1;

	t64 = ((x309|x310)-(x311-x312));

	if (t64 != 14324249041622LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x313 = INT64_MIN;
	static int16_t x314 = -22;
	int32_t x315 = 21543;

	t65 = ((x313|x314)-(x315-x316));

	if (t65 != -21533LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x321 = UINT64_MAX;
	int32_t x322 = INT32_MIN;
	int16_t x323 = -6;
	uint16_t x324 = 1546U;
	uint64_t t66 = 38LLU;

	t66 = ((x321|x322)-(x323-x324));

	if (t66 != 1551LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MIN;
	uint16_t x328 = UINT16_MAX;
	int64_t t67 = -594379634137837143LL;

	t67 = ((x325|x326)-(x327-x328));

	if (t67 != 32768LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x329 = UINT8_MAX;
	uint8_t x331 = 1U;

	t68 = ((x329|x330)-(x331-x332));

	if (t68 != -130) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = -1;
	int64_t x335 = INT64_MIN;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t69 = 22770245LLU;

	t69 = ((x333|x334)-(x335-x336));

	if (t69 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x338 = -20;
	int16_t x340 = -14707;
	volatile uint64_t t70 = 1471143230950LLU;

	t70 = ((x337|x338)-(x339-x340));

	if (t70 != 9223372036854761081LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x341 = INT64_MAX;
	int64_t x342 = INT64_MAX;
	int16_t x344 = 91;
	int64_t t71 = 8529170856254788LL;

	t71 = ((x341|x342)-(x343-x344));

	if (t71 != 91LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x349 = UINT32_MAX;
	volatile int8_t x350 = -4;
	static int16_t x351 = INT16_MIN;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t72 = 51917U;

	t72 = ((x349|x350)-(x351-x352));

	if (t72 != 32766U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x353 = INT16_MAX;
	static int16_t x354 = -1;
	static uint8_t x355 = 7U;
	int8_t x356 = INT8_MIN;
	volatile int32_t t73 = -64197;

	t73 = ((x353|x354)-(x355-x356));

	if (t73 != -136) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x362 = INT32_MAX;
	int16_t x363 = INT16_MIN;
	volatile int8_t x364 = 61;
	volatile uint64_t t74 = 56413479805719992LLU;

	t74 = ((x361|x362)-(x363-x364));

	if (t74 != 2147516476LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x370 = 20U;
	int16_t x371 = -1;
	static int16_t x372 = -1;
	volatile int32_t t75 = 18;

	t75 = ((x369|x370)-(x371-x372));

	if (t75 != 21) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x373 = 3620U;
	uint16_t x374 = 752U;
	int16_t x376 = INT16_MIN;

	t76 = ((x373|x374)-(x375-x376));

	if (t76 != 4294951892U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x378 = UINT32_MAX;
	static volatile uint32_t t77 = 681U;

	t77 = ((x377|x378)-(x379-x380));

	if (t77 != 2147480972U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x385 = 357;
	volatile int16_t x386 = -2;
	uint64_t x387 = 27790944833834LLU;
	uint32_t x388 = 3507687U;
	volatile uint64_t t78 = 6473LLU;

	t78 = ((x385|x386)-(x387-x388));

	if (t78 != 18446716282768225468LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x389 = UINT32_MAX;
	int32_t x390 = INT32_MAX;
	int64_t x391 = 505295LL;
	int64_t t79 = -1LL;

	t79 = ((x389|x390)-(x391-x392));

	if (t79 != 4294461993LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x393 = INT64_MAX;
	static uint8_t x394 = 36U;
	int8_t x395 = INT8_MAX;

	t80 = ((x393|x394)-(x395-x396));

	if (t80 != 9223372036854757168LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x397 = UINT32_MAX;
	volatile uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MAX;
	uint16_t x400 = 127U;
	uint32_t t81 = 220U;

	t81 = ((x397|x398)-(x399-x400));

	if (t81 != 4294934655U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x401 = UINT16_MAX;
	volatile int32_t x402 = -9549749;
	static int16_t x403 = -64;
	uint16_t x404 = 25U;
	volatile int32_t t82 = 64;

	t82 = ((x401|x402)-(x403-x404));

	if (t82 != -9502632) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x409 = INT16_MIN;
	uint8_t x410 = 0U;
	volatile int8_t x411 = -1;

	t83 = ((x409|x410)-(x411-x412));

	if (t83 != 521829841705987957LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x413 = 606696859319501281LL;
	static int8_t x414 = INT8_MAX;
	static volatile uint32_t x415 = UINT32_MAX;
	uint16_t x416 = 469U;
	volatile int64_t t84 = 528972048044LL;

	t84 = ((x413|x414)-(x415-x416));

	if (t84 != 606696855024534485LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x418 = UINT8_MAX;
	int8_t x419 = INT8_MIN;
	int32_t t85 = 10889216;

	t85 = ((x417|x418)-(x419-x420));

	if (t85 != -145659) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x421 = 4;
	uint64_t x422 = UINT64_MAX;
	int64_t x423 = -1LL;
	volatile int32_t x424 = INT32_MIN;
	uint64_t t86 = 10695836744LLU;

	t86 = ((x421|x422)-(x423-x424));

	if (t86 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x426 = 134165U;
	uint32_t x427 = 42294562U;
	static int32_t x428 = -3152;
	uint32_t t87 = 118U;

	t87 = ((x425|x426)-(x427-x428));

	if (t87 != 4252639907U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x429 = INT16_MIN;
	int32_t x430 = INT32_MIN;
	int8_t x431 = INT8_MIN;
	uint16_t x432 = 1U;

	t88 = ((x429|x430)-(x431-x432));

	if (t88 != -32639) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x433 = 7LLU;
	int8_t x435 = -1;
	uint16_t x436 = UINT16_MAX;
	uint64_t t89 = 16424307LLU;

	t89 = ((x433|x434)-(x435-x436));

	if (t89 != 65535LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x437 = 0;
	static int8_t x438 = INT8_MAX;
	volatile int8_t x439 = INT8_MAX;
	static volatile int32_t t90 = 33136334;

	t90 = ((x437|x438)-(x439-x440));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x441 = UINT64_MAX;
	volatile int64_t x443 = INT64_MIN;
	static volatile int16_t x444 = INT16_MIN;
	volatile uint64_t t91 = 1297335LLU;

	t91 = ((x441|x442)-(x443-x444));

	if (t91 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x445 = INT16_MIN;
	int32_t x447 = INT32_MIN;
	uint32_t x448 = 96118194U;
	uint32_t t92 = 959881U;

	t92 = ((x445|x446)-(x447-x448));

	if (t92 != 2243601841U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x450 = INT32_MIN;
	volatile uint8_t x451 = 2U;
	int32_t x452 = INT32_MAX;
	int32_t t93 = 2;

	t93 = ((x449|x450)-(x451-x452));

	if (t93 != 2147483627) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x453 = 33281127244459289LL;
	int8_t x454 = INT8_MIN;
	int32_t x456 = 0;
	volatile int64_t t94 = 2449549899175432037LL;

	t94 = ((x453|x454)-(x455-x456));

	if (t94 != -114LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x457 = 86035272779592488LLU;
	int32_t x458 = INT32_MIN;
	static int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MAX;
	static uint64_t t95 = 1501706769865320LLU;

	t95 = ((x457|x458)-(x459-x460));

	if (t95 != 18446744073444160551LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x461 = -1;
	int32_t x462 = INT32_MAX;
	uint64_t x463 = 1586525896893509507LLU;
	int32_t x464 = INT32_MIN;
	static uint64_t t96 = 3422458LLU;

	t96 = ((x461|x462)-(x463-x464));

	if (t96 != 16860218174668558460LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x465 = INT32_MAX;
	static int8_t x467 = INT8_MIN;
	static volatile uint32_t x468 = 16212U;
	volatile uint32_t t97 = 11701U;

	t97 = ((x465|x466)-(x467-x468));

	if (t97 != 16339U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x470 = -3;
	uint16_t x471 = 1U;
	int64_t x472 = -182445301740426LL;
	volatile int64_t t98 = -8LL;

	t98 = ((x469|x470)-(x471-x472));

	if (t98 != -182445301740428LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x473 = INT32_MAX;
	int8_t x474 = 62;
	volatile int16_t x475 = INT16_MIN;
	static int16_t x476 = INT16_MIN;
	int32_t t99 = INT32_MAX;

	t99 = ((x473|x474)-(x475-x476));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

