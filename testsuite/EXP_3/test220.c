#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = 260U;
int32_t x9 = INT32_MIN;
int64_t x11 = 272025229LL;
static volatile uint64_t x31 = 2257526317LLU;
int16_t x34 = 8;
int64_t t8 = -1612825LL;
int32_t x42 = 56;
uint64_t x45 = 45227402054249LLU;
static volatile uint32_t x55 = 16565U;
uint32_t t12 = 7U;
uint32_t x66 = 178023129U;
volatile int32_t x67 = -4303221;
static volatile uint32_t t14 = 528982888U;
int64_t t15 = -110646LL;
volatile uint16_t x85 = 520U;
int32_t x94 = INT32_MIN;
uint64_t t18 = 177918229462571LLU;
static uint64_t x100 = UINT64_MAX;
volatile int32_t t20 = 769041047;
static volatile int32_t x105 = 486588;
static uint32_t x110 = 227U;
static int64_t t22 = -7197629LL;
volatile int16_t x119 = -1;
int64_t x121 = INT64_MIN;
int32_t x122 = INT32_MIN;
static int32_t x126 = INT32_MIN;
static int16_t x148 = -1;
int8_t x149 = -1;
volatile uint32_t t31 = 7758U;
uint16_t x158 = UINT16_MAX;
volatile int16_t x159 = -83;
int32_t t32 = -255456954;
static volatile int32_t x167 = 625891;
uint16_t x181 = 13035U;
static volatile int64_t x182 = INT64_MIN;
volatile int64_t t35 = 30966080111981978LL;
static int64_t t36 = 470890612916792LL;
int32_t x192 = INT32_MIN;
uint16_t x194 = UINT16_MAX;
static int8_t x196 = 2;
volatile uint32_t x202 = UINT32_MAX;
uint64_t t39 = 102220041299452LLU;
static int32_t x206 = -1;
uint64_t x212 = 332760383764022188LLU;
int16_t x218 = -1;
uint64_t x223 = 20830159164180678LLU;
volatile int32_t x245 = 3862;
static volatile uint16_t x246 = 11910U;
uint8_t x250 = 34U;
volatile int8_t x255 = INT8_MIN;
uint16_t x257 = 788U;
int8_t x262 = INT8_MIN;
volatile int8_t x263 = 1;
int64_t t53 = -216584240859952LL;
int8_t x269 = -1;
static int16_t x274 = -1;
int32_t x282 = -22;
int32_t x284 = -876;
uint64_t t57 = 628LLU;
uint16_t x295 = 6U;
static int8_t x298 = -1;
volatile int32_t x301 = -59835416;
uint16_t x302 = UINT16_MAX;
int32_t x314 = 1;
int64_t t63 = -100400LL;
int8_t x342 = -1;
int64_t x343 = INT64_MAX;
int32_t x365 = -1;
volatile uint64_t t71 = 49383308247214806LLU;
volatile int64_t x369 = INT64_MIN;
int32_t x376 = -1895205;
volatile uint32_t t73 = 3U;
int16_t x389 = INT16_MAX;
int8_t x390 = INT8_MIN;
volatile int64_t x395 = -2279LL;
int16_t x397 = -1;
volatile int8_t x400 = INT8_MAX;
int16_t x416 = INT16_MIN;
uint8_t x417 = UINT8_MAX;
int8_t x420 = 1;
static volatile uint8_t x421 = UINT8_MAX;
int16_t x422 = 3288;
int32_t x442 = 1437266;
uint32_t t87 = 0U;
int16_t x448 = 41;
static int8_t x450 = INT8_MIN;
int8_t x455 = INT8_MIN;
uint8_t x465 = 1U;
volatile int16_t x471 = -24;
static int32_t x475 = -1;
uint16_t x476 = UINT16_MAX;
static uint64_t t94 = 898920191245283LLU;
int8_t x478 = INT8_MAX;
int16_t x504 = -3;


void f0(void) {
	volatile int8_t x1 = -1;
	uint32_t x2 = UINT32_MAX;
	int8_t x3 = INT8_MAX;
	volatile int16_t x4 = 7;
	volatile uint32_t t0 = 490775U;

	t0 = ((x1/x2)|(x3-x4));

	if (t0 != 121U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = 3;
	int32_t x7 = -106210;
	static int8_t x8 = 9;
	volatile uint32_t t1 = 176U;

	t1 = ((x5/x6)|(x7-x8));

	if (t1 != 4294861143U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	static int32_t x12 = INT32_MAX;
	int64_t t2 = 2LL;

	t2 = ((x9/x10)|(x11-x12));

	if (t2 != -1875458418LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 47234U;
	int16_t x18 = INT16_MIN;
	static int8_t x19 = -1;
	int64_t x20 = INT64_MIN;
	volatile int64_t t3 = INT64_MAX;

	t3 = ((x17/x18)|(x19-x20));

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x21 = 428752U;
	static uint32_t x22 = 954U;
	static uint64_t x23 = 1087102903294274785LLU;
	int64_t x24 = -5LL;
	static volatile uint64_t t4 = 781403809082LLU;

	t4 = ((x21/x22)|(x23-x24));

	if (t4 != 1087102903294275047LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MAX;
	volatile int32_t x26 = 10;
	uint32_t x27 = 117622182U;
	uint16_t x28 = 2792U;
	static volatile uint32_t t5 = 7330U;

	t5 = ((x25/x26)|(x27-x28));

	if (t5 != 117620478U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = INT32_MIN;
	static int64_t x30 = 903506659096LL;
	int8_t x32 = INT8_MIN;
	static volatile uint64_t t6 = 1384015377LLU;

	t6 = ((x29/x30)|(x31-x32));

	if (t6 != 2257526445LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	uint16_t x35 = 712U;
	int64_t x36 = -590549LL;
	static volatile int64_t t7 = -462617LL;

	t7 = ((x33/x34)|(x35-x36));

	if (t7 != -267844195LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MAX;
	int8_t x39 = -6;
	static int64_t x40 = -1LL;

	t8 = ((x37/x38)|(x39-x40));

	if (t8 != -5LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = UINT8_MAX;
	int16_t x43 = INT16_MIN;
	volatile uint64_t x44 = 2964LLU;
	static uint64_t t9 = 15313453LLU;

	t9 = ((x41/x42)|(x43-x44));

	if (t9 != 18446744073709515884LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = -1;
	static int64_t x47 = -1LL;
	int64_t x48 = 265LL;
	uint64_t t10 = 106LLU;

	t10 = ((x45/x46)|(x47-x48));

	if (t10 != 18446744073709551350LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = INT8_MIN;
	uint32_t x56 = 14U;
	uint32_t t11 = UINT32_MAX;

	t11 = ((x53/x54)|(x55-x56));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 30U;
	int8_t x58 = INT8_MAX;
	static uint32_t x59 = 1036849U;
	int8_t x60 = 1;

	t12 = ((x57/x58)|(x59-x60));

	if (t12 != 1036848U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x65 = 2025;
	volatile uint16_t x68 = 14392U;
	uint32_t t13 = 6U;

	t13 = ((x65/x66)|(x67-x68));

	if (t13 != 4290649683U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x69 = 6U;
	uint32_t x70 = 532608U;
	int16_t x71 = INT16_MAX;
	int8_t x72 = INT8_MIN;

	t14 = ((x69/x70)|(x71-x72));

	if (t14 != 32895U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1LL;
	int16_t x74 = 15;
	volatile int16_t x75 = INT16_MIN;
	static uint16_t x76 = 0U;

	t15 = ((x73/x74)|(x75-x76));

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 86203U;
	uint16_t x78 = 1324U;
	int8_t x79 = -3;
	int32_t x80 = INT32_MIN;
	volatile uint32_t t16 = 0U;

	t16 = ((x77/x78)|(x79-x80));

	if (t16 != 2147483645U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x86 = INT16_MIN;
	volatile uint64_t x87 = UINT64_MAX;
	uint8_t x88 = 1U;
	static volatile uint64_t t17 = 36926691234983529LLU;

	t17 = ((x85/x86)|(x87-x88));

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = UINT64_MAX;
	int8_t x95 = -1;
	int32_t x96 = INT32_MIN;

	t18 = ((x93/x94)|(x95-x96));

	if (t18 != 2147483647LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = 1;
	int32_t x98 = INT32_MIN;
	int16_t x99 = 1;
	static uint64_t t19 = 1001LLU;

	t19 = ((x97/x98)|(x99-x100));

	if (t19 != 2LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x101 = INT32_MIN;
	uint8_t x102 = 11U;
	int16_t x103 = INT16_MAX;
	volatile int16_t x104 = -10860;

	t20 = ((x101/x102)|(x103-x104));

	if (t20 != -195182737) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x106 = INT8_MIN;
	static int64_t x107 = 61LL;
	uint16_t x108 = 412U;
	int64_t t21 = -105004158159LL;

	t21 = ((x105/x106)|(x107-x108));

	if (t21 != -89LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x109 = -1LL;
	int16_t x111 = -2959;
	int32_t x112 = -127900153;

	t22 = ((x109/x110)|(x111-x112));

	if (t22 != 127897194LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = -1;
	int16_t x114 = INT16_MIN;
	static int64_t x115 = -1LL;
	uint32_t x116 = 0U;
	volatile int64_t t23 = 15234LL;

	t23 = ((x113/x114)|(x115-x116));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x117 = INT16_MIN;
	int32_t x118 = INT32_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t24 = 4;

	t24 = ((x117/x118)|(x119-x120));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x123 = 6U;
	static int16_t x124 = -1;
	int64_t t25 = -6820407599153LL;

	t25 = ((x121/x122)|(x123-x124));

	if (t25 != 4294967303LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x125 = -7;
	volatile int32_t x127 = INT32_MIN;
	int32_t x128 = INT32_MIN;
	int32_t t26 = -865;

	t26 = ((x125/x126)|(x127-x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x129 = INT64_MIN;
	volatile int8_t x130 = 30;
	static int8_t x131 = -1;
	int8_t x132 = -1;
	static int64_t t27 = -873272375823927961LL;

	t27 = ((x129/x130)|(x131-x132));

	if (t27 != -307445734561825860LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x133 = 11639U;
	int64_t x134 = INT64_MIN;
	uint16_t x135 = 7U;
	uint16_t x136 = UINT16_MAX;
	volatile int64_t t28 = 0LL;

	t28 = ((x133/x134)|(x135-x136));

	if (t28 != -65528LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = -1LL;
	int64_t x146 = -1390093443722993LL;
	int64_t x147 = INT64_MIN;
	volatile int64_t t29 = 2896639602605786LL;

	t29 = ((x145/x146)|(x147-x148));

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x150 = -1;
	uint8_t x151 = 2U;
	int64_t x152 = INT64_MAX;
	volatile int64_t t30 = 347433LL;

	t30 = ((x149/x150)|(x151-x152));

	if (t30 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x153 = 26805U;
	int8_t x154 = INT8_MIN;
	int8_t x155 = 3;
	int8_t x156 = -1;

	t31 = ((x153/x154)|(x155-x156));

	if (t31 != 4U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x157 = UINT8_MAX;
	volatile int32_t x160 = INT32_MIN;

	t32 = ((x157/x158)|(x159-x160));

	if (t32 != 2147483565) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x165 = 59361590048131586LLU;
	int32_t x166 = INT32_MAX;
	volatile uint8_t x168 = 86U;
	volatile uint64_t t33 = 41744218LLU;

	t33 = ((x165/x166)|(x167-x168));

	if (t33 != 28167839LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x169 = 10317047389LL;
	int16_t x170 = 9598;
	int16_t x171 = -1;
	uint16_t x172 = UINT16_MAX;
	volatile int64_t t34 = 91LL;

	t34 = ((x169/x170)|(x171-x172));

	if (t34 != -39196LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x183 = INT8_MIN;
	static volatile int16_t x184 = -115;

	t35 = ((x181/x182)|(x183-x184));

	if (t35 != -13LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x185 = INT64_MAX;
	int16_t x186 = INT16_MIN;
	volatile int16_t x187 = INT16_MIN;
	int32_t x188 = INT32_MIN;

	t36 = ((x185/x186)|(x187-x188));

	if (t36 != -281472829259775LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x189 = -442834LL;
	static int8_t x190 = INT8_MIN;
	int8_t x191 = -63;
	volatile int64_t t37 = -644303786LL;

	t37 = ((x189/x190)|(x191-x192));

	if (t37 != 2147483587LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x193 = INT16_MIN;
	int8_t x195 = 2;
	int32_t t38 = 1037686413;

	t38 = ((x193/x194)|(x195-x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = INT32_MIN;
	uint64_t x203 = UINT64_MAX;
	volatile uint8_t x204 = 10U;

	t39 = ((x201/x202)|(x203-x204));

	if (t39 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x205 = -45844;
	int64_t x207 = 89239418329LL;
	int32_t x208 = 3;
	int64_t t40 = 7LL;

	t40 = ((x205/x206)|(x207-x208));

	if (t40 != 89239451606LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x209 = 5618512138054719LLU;
	int64_t x210 = INT64_MIN;
	volatile int64_t x211 = 62640459646560LL;
	static uint64_t t41 = 61LLU;

	t41 = ((x209/x210)|(x211-x212));

	if (t41 != 18114046330405175988LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x217 = INT64_MAX;
	volatile int8_t x219 = INT8_MIN;
	int32_t x220 = INT32_MIN;
	int64_t t42 = -13784931372033167LL;

	t42 = ((x217/x218)|(x219-x220));

	if (t42 != -9223372034707292287LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x221 = 110205LLU;
	int8_t x222 = INT8_MIN;
	static int16_t x224 = -710;
	static uint64_t t43 = 1528320LLU;

	t43 = ((x221/x222)|(x223-x224));

	if (t43 != 20830159164181388LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x225 = INT16_MIN;
	int8_t x226 = 2;
	static int8_t x227 = INT8_MAX;
	volatile int16_t x228 = -1;
	volatile int32_t t44 = -36964;

	t44 = ((x225/x226)|(x227-x228));

	if (t44 != -16256) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x229 = 1U;
	uint64_t x230 = 246815LLU;
	uint32_t x231 = UINT32_MAX;
	uint64_t x232 = 1484458089669LLU;
	volatile uint64_t t45 = 362508152612442LLU;

	t45 = ((x229/x230)|(x231-x232));

	if (t45 != 18446742593546429242LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = INT8_MAX;
	uint64_t x234 = 2829152054356662LLU;
	uint32_t x235 = 1U;
	uint8_t x236 = 55U;
	volatile uint64_t t46 = 1789151923368LLU;

	t46 = ((x233/x234)|(x235-x236));

	if (t46 != 4294967242LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x237 = 4U;
	static volatile int32_t x238 = INT32_MIN;
	int64_t x239 = -1LL;
	static uint8_t x240 = 2U;
	volatile int64_t t47 = -499270471LL;

	t47 = ((x237/x238)|(x239-x240));

	if (t47 != -3LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x247 = -1LL;
	static int32_t x248 = INT32_MAX;
	int64_t t48 = 593988779LL;

	t48 = ((x245/x246)|(x247-x248));

	if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x249 = 37;
	int64_t x251 = -1753981678978520649LL;
	static int32_t x252 = INT32_MIN;
	volatile int64_t t49 = 2713147736917202786LL;

	t49 = ((x249/x250)|(x251-x252));

	if (t49 != -1753981676831037001LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x253 = INT8_MIN;
	int64_t x254 = -7903647989LL;
	int16_t x256 = 5;
	int64_t t50 = 116124059604LL;

	t50 = ((x253/x254)|(x255-x256));

	if (t50 != -133LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x258 = INT16_MIN;
	int8_t x259 = 11;
	int64_t x260 = -42652273922245LL;
	volatile int64_t t51 = 1133545347174517618LL;

	t51 = ((x257/x258)|(x259-x260));

	if (t51 != 42652273922256LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x261 = UINT32_MAX;
	static volatile uint64_t x264 = 43852LLU;
	uint64_t t52 = 114662LLU;

	t52 = ((x261/x262)|(x263-x264));

	if (t52 != 18446744073709507765LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x265 = -272802069410480LL;
	static int8_t x266 = -12;
	volatile int16_t x267 = INT16_MAX;
	volatile int8_t x268 = -7;

	t53 = ((x265/x266)|(x267-x268));

	if (t53 != 22733505816974LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int16_t x272 = -1;
	int32_t t54 = 1566651;

	t54 = ((x269/x270)|(x271-x272));

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x273 = 0;
	int16_t x275 = -955;
	uint32_t x276 = 101003U;
	uint32_t t55 = 217339U;

	t55 = ((x273/x274)|(x275-x276));

	if (t55 != 4294865338U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x281 = -1;
	int64_t x283 = -1LL;
	volatile int64_t t56 = 495161118LL;

	t56 = ((x281/x282)|(x283-x284));

	if (t56 != 875LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x289 = -1LL;
	uint16_t x290 = 1787U;
	uint64_t x291 = 15LLU;
	int16_t x292 = INT16_MIN;

	t57 = ((x289/x290)|(x291-x292));

	if (t57 != 32783LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x293 = INT64_MAX;
	volatile int64_t x294 = INT64_MIN;
	uint16_t x296 = 987U;
	int64_t t58 = 54816515315LL;

	t58 = ((x293/x294)|(x295-x296));

	if (t58 != -981LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x297 = 3359656LLU;
	int8_t x299 = -29;
	int8_t x300 = INT8_MIN;
	static uint64_t t59 = 4679591945711776LLU;

	t59 = ((x297/x298)|(x299-x300));

	if (t59 != 99LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x303 = INT8_MAX;
	int32_t x304 = -1;
	int32_t t60 = -7;

	t60 = ((x301/x302)|(x303-x304));

	if (t60 != -785) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x305 = 3523816U;
	static volatile int64_t x306 = INT64_MIN;
	uint32_t x307 = 1400001010U;
	static int16_t x308 = 1689;
	volatile int64_t t61 = 113LL;

	t61 = ((x305/x306)|(x307-x308));

	if (t61 != 1399999321LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x309 = -1;
	uint8_t x310 = 1U;
	int8_t x311 = 37;
	int32_t x312 = 24516364;
	static volatile int32_t t62 = 7;

	t62 = ((x309/x310)|(x311-x312));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x313 = -1;
	static uint16_t x315 = 6U;
	volatile int64_t x316 = 67782467934165LL;

	t63 = ((x313/x314)|(x315-x316));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x317 = 291599939434LLU;
	uint32_t x318 = UINT32_MAX;
	uint8_t x319 = 1U;
	int16_t x320 = -1;
	uint64_t t64 = 12LLU;

	t64 = ((x317/x318)|(x319-x320));

	if (t64 != 67LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = INT64_MAX;
	static int8_t x323 = 8;
	uint8_t x324 = UINT8_MAX;
	int64_t t65 = 14096861123816LL;

	t65 = ((x321/x322)|(x323-x324));

	if (t65 != -247LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x329 = INT32_MIN;
	static uint8_t x330 = UINT8_MAX;
	uint32_t x331 = UINT32_MAX;
	int16_t x332 = INT16_MIN;
	volatile uint32_t t66 = 5965U;

	t66 = ((x329/x330)|(x331-x332));

	if (t66 != 4286545919U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x337 = UINT16_MAX;
	static uint64_t x338 = 978914635LLU;
	int8_t x339 = INT8_MAX;
	uint64_t x340 = 30LLU;
	uint64_t t67 = 820028752496466LLU;

	t67 = ((x337/x338)|(x339-x340));

	if (t67 != 97LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x341 = INT32_MAX;
	int64_t x344 = INT64_MAX;
	int64_t t68 = -19110850239787LL;

	t68 = ((x341/x342)|(x343-x344));

	if (t68 != -2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x349 = -1;
	int8_t x350 = -1;
	uint16_t x351 = 17U;
	int16_t x352 = -1;
	static int32_t t69 = 498623;

	t69 = ((x349/x350)|(x351-x352));

	if (t69 != 19) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x353 = INT32_MAX;
	uint64_t x354 = 233878774075LLU;
	int16_t x355 = INT16_MAX;
	int8_t x356 = INT8_MIN;
	uint64_t t70 = 47753631LLU;

	t70 = ((x353/x354)|(x355-x356));

	if (t70 != 32895LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x366 = 324;
	volatile uint16_t x367 = UINT16_MAX;
	uint64_t x368 = UINT64_MAX;

	t71 = ((x365/x366)|(x367-x368));

	if (t71 != 65536LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x370 = 9;
	volatile uint16_t x371 = 14U;
	int32_t x372 = INT32_MAX;
	volatile int64_t t72 = -70059302344297LL;

	t72 = ((x369/x370)|(x371-x372));

	if (t72 != -954437169LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x373 = 660U;
	volatile uint32_t x374 = UINT32_MAX;
	int32_t x375 = -3804;

	t73 = ((x373/x374)|(x375-x376));

	if (t73 != 1891401U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x385 = 252U;
	int8_t x386 = 4;
	int8_t x387 = INT8_MIN;
	int16_t x388 = INT16_MIN;
	int32_t t74 = 963;

	t74 = ((x385/x386)|(x387-x388));

	if (t74 != 32703) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x391 = 22U;
	static int32_t x392 = -1;
	static int32_t t75 = 270;

	t75 = ((x389/x390)|(x391-x392));

	if (t75 != -233) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x393 = -472755142177606401LL;
	uint16_t x394 = UINT16_MAX;
	int16_t x396 = INT16_MIN;
	static volatile int64_t t76 = -62712057LL;

	t76 = ((x393/x394)|(x395-x396));

	if (t76 != -7213781057543LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x398 = -1;
	volatile int32_t x399 = INT32_MAX;
	static volatile int32_t t77 = -254;

	t77 = ((x397/x398)|(x399-x400));

	if (t77 != 2147483521) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x401 = -1;
	int16_t x402 = INT16_MIN;
	static uint32_t x403 = UINT32_MAX;
	int64_t x404 = -10877037434650LL;
	volatile int64_t t78 = -31LL;

	t78 = ((x401/x402)|(x403-x404));

	if (t78 != 10881332401945LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x405 = -1LL;
	volatile int32_t x406 = INT32_MIN;
	int64_t x407 = 197057549217942356LL;
	uint8_t x408 = 14U;
	volatile int64_t t79 = 249704509741480LL;

	t79 = ((x405/x406)|(x407-x408));

	if (t79 != 197057549217942342LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x413 = INT32_MIN;
	volatile uint32_t x414 = 166535018U;
	volatile int32_t x415 = INT32_MIN;
	uint32_t t80 = 582U;

	t80 = ((x413/x414)|(x415-x416));

	if (t80 != 2147516428U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MAX;
	static int32_t t81 = -4784899;

	t81 = ((x417/x418)|(x419-x420));

	if (t81 != 2147483646) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x423 = INT32_MAX;
	int32_t x424 = 25;
	int32_t t82 = -6940118;

	t82 = ((x421/x422)|(x423-x424));

	if (t82 != 2147483622) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x425 = 18U;
	static int16_t x426 = -3;
	volatile int16_t x427 = -1;
	int16_t x428 = INT16_MAX;
	int32_t t83 = -52951;

	t83 = ((x425/x426)|(x427-x428));

	if (t83 != -6) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x429 = INT64_MIN;
	uint16_t x430 = UINT16_MAX;
	uint64_t x431 = 80210567252858LLU;
	int16_t x432 = -767;
	static uint64_t t84 = 2532456522LLU;

	t84 = ((x429/x430)|(x431-x432));

	if (t84 != 18446603334073699961LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x433 = INT32_MAX;
	int16_t x434 = 4;
	int8_t x435 = -1;
	int64_t x436 = INT64_MAX;
	volatile int64_t t85 = -583278750381761943LL;

	t85 = ((x433/x434)|(x435-x436));

	if (t85 != -9223372036317904897LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x437 = INT16_MIN;
	int32_t x438 = -26679;
	int8_t x439 = -1;
	int16_t x440 = INT16_MIN;
	int32_t t86 = 28;

	t86 = ((x437/x438)|(x439-x440));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x441 = -7;
	int32_t x443 = INT32_MIN;
	uint32_t x444 = 511900U;

	t87 = ((x441/x442)|(x443-x444));

	if (t87 != 2146971748U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x445 = 2238U;
	volatile int64_t x446 = -14LL;
	int8_t x447 = 5;
	static volatile int64_t t88 = 86075323386113397LL;

	t88 = ((x445/x446)|(x447-x448));

	if (t88 != -3LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x449 = -47;
	static volatile int16_t x451 = -1;
	int8_t x452 = INT8_MAX;
	int32_t t89 = 373473915;

	t89 = ((x449/x450)|(x451-x452));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x453 = 129242016599006559LLU;
	uint8_t x454 = 1U;
	volatile int8_t x456 = -1;
	volatile uint64_t t90 = 13857328852889LLU;

	t90 = ((x453/x454)|(x455-x456));

	if (t90 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x457 = UINT64_MAX;
	uint16_t x458 = 1073U;
	static int32_t x459 = INT32_MIN;
	volatile int16_t x460 = -14;
	volatile uint64_t t91 = 2079641127076804LLU;

	t91 = ((x457/x458)|(x459-x460));

	if (t91 != 18446744073367315182LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x466 = INT32_MIN;
	static uint8_t x467 = 71U;
	static int32_t x468 = -1;
	volatile int32_t t92 = 22349;

	t92 = ((x465/x466)|(x467-x468));

	if (t92 != 72) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x469 = INT32_MAX;
	int32_t x470 = -1;
	static int16_t x472 = 18;
	volatile int32_t t93 = 21464057;

	t93 = ((x469/x470)|(x471-x472));

	if (t93 != -41) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x473 = INT64_MIN;
	uint64_t x474 = UINT64_MAX;

	t94 = ((x473/x474)|(x475-x476));

	if (t94 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x477 = -15;
	int64_t x479 = -65950065436979138LL;
	int64_t x480 = INT64_MIN;
	static int64_t t95 = 160070LL;

	t95 = ((x477/x478)|(x479-x480));

	if (t95 != 9157421971417796670LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x481 = 212845090882047366LL;
	uint32_t x482 = 28581672U;
	uint32_t x483 = 87905U;
	int32_t x484 = 3894452;
	volatile int64_t t96 = 0LL;

	t96 = ((x481/x482)|(x483-x484));

	if (t96 != 8587833279LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x485 = 108U;
	int16_t x486 = INT16_MIN;
	static volatile int8_t x487 = -1;
	static int64_t x488 = INT64_MIN;
	int64_t t97 = INT64_MAX;

	t97 = ((x485/x486)|(x487-x488));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x497 = UINT16_MAX;
	int8_t x498 = INT8_MIN;
	uint64_t x499 = 41035848416069LLU;
	uint16_t x500 = 7U;
	volatile uint64_t t98 = 347777776197604648LLU;

	t98 = ((x497/x498)|(x499-x500));

	if (t98 != 18446744073709551423LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x501 = 87291373;
	uint16_t x502 = UINT16_MAX;
	static volatile uint16_t x503 = 55U;
	volatile int32_t t99 = 4404218;

	t99 = ((x501/x502)|(x503-x504));

	if (t99 != 1339) { NG(); } else { ; }
	
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

