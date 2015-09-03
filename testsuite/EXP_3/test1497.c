#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x3 = 316U;
int8_t x12 = -20;
static volatile uint64_t t2 = 924248712236488LLU;
volatile int16_t x17 = -1;
int64_t x20 = 439LL;
int64_t x26 = -66202783356LL;
int64_t t6 = -3358935158570989LL;
int32_t x29 = INT32_MAX;
int64_t x31 = INT64_MIN;
int16_t x32 = INT16_MIN;
int32_t t9 = -223;
int16_t x42 = INT16_MIN;
int64_t x45 = INT64_MIN;
int8_t x46 = -2;
static uint16_t x52 = UINT16_MAX;
static int16_t x53 = -968;
volatile int64_t t13 = -1633150646LL;
volatile uint32_t x59 = UINT32_MAX;
volatile int32_t x60 = -422;
uint8_t x63 = 85U;
uint32_t x64 = UINT32_MAX;
uint64_t x66 = 116994090152LLU;
int32_t x73 = -35464;
int32_t t18 = 112792;
int16_t x77 = 1;
static int32_t x78 = 165955966;
volatile int64_t x80 = -9LL;
static int8_t x83 = INT8_MIN;
int64_t t22 = -27136575441LL;
static int8_t x94 = 21;
volatile int64_t x96 = -1850261890107556LL;
volatile uint16_t x102 = 47U;
volatile int32_t t26 = 406517516;
int16_t x109 = INT16_MIN;
static int8_t x111 = INT8_MAX;
static int64_t x124 = -1LL;
volatile int32_t x125 = INT32_MIN;
int64_t x127 = 25016LL;
volatile int8_t x128 = -1;
static int64_t x133 = 525433388831874961LL;
int8_t x145 = 0;
int16_t x153 = INT16_MIN;
volatile uint64_t x155 = 346055735035307LLU;
volatile int16_t x163 = -1;
uint64_t x164 = 252897956426LLU;
int32_t t41 = -214;
int8_t x171 = 29;
volatile int16_t x173 = -459;
static int16_t x180 = INT16_MIN;
static volatile uint64_t t45 = 2100958844LLU;
uint16_t x191 = UINT16_MAX;
static volatile int8_t x193 = INT8_MAX;
int8_t x197 = INT8_MIN;
int8_t x198 = -8;
static int16_t x200 = 6912;
uint32_t x203 = UINT32_MAX;
uint8_t x205 = 1U;
int8_t x209 = 60;
uint16_t x210 = 7765U;
static uint16_t x211 = 1U;
volatile int64_t x213 = INT64_MIN;
int16_t x223 = INT16_MIN;
static int32_t x224 = INT32_MAX;
volatile int16_t x227 = -5386;
uint64_t x228 = 6974350619925LLU;
int16_t x230 = -1;
int16_t x235 = INT16_MIN;
int32_t x243 = -5934;
volatile uint32_t t60 = 4U;
int64_t x246 = INT64_MIN;
int64_t t61 = -56528337449719LL;
static int8_t x249 = 4;
uint64_t x260 = 13475LLU;
int32_t x265 = INT32_MIN;
volatile int8_t x272 = -1;
volatile uint32_t t67 = 6U;
int8_t x278 = -13;
uint64_t t70 = UINT64_MAX;
int8_t x288 = -1;
uint8_t x291 = 1U;
static int64_t x299 = INT64_MIN;
volatile int16_t x310 = INT16_MIN;
uint64_t x315 = 238LLU;
static uint64_t x316 = UINT64_MAX;
static volatile int32_t t78 = 62;
uint32_t t79 = 49970U;
volatile int32_t x322 = INT32_MIN;
volatile int32_t x323 = INT32_MIN;
static volatile int32_t t81 = -4614;
int8_t x333 = -1;
int32_t x336 = INT32_MIN;
int32_t x337 = INT32_MIN;
static uint64_t x343 = UINT64_MAX;
int32_t x345 = INT32_MAX;
int32_t x347 = -1;
uint64_t x348 = 223LLU;
volatile int32_t t86 = INT32_MAX;
static uint16_t x349 = 344U;
volatile int16_t x350 = INT16_MIN;
int32_t x353 = INT32_MAX;
static volatile int64_t x355 = -1LL;
int8_t x360 = -1;
static int32_t t89 = 230;
uint64_t x363 = 10285002LLU;
volatile int32_t t91 = -595157;
int32_t x374 = -1;
int64_t x382 = -1LL;
int32_t x386 = -3611895;
int16_t x388 = INT16_MIN;
int16_t x392 = -1;
volatile uint64_t t97 = UINT64_MAX;
volatile int64_t x394 = INT64_MIN;
volatile int8_t x396 = INT8_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int16_t x2 = -2706;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -20964847;

	t0 = ((x1|x2)-(x3<x4));

	if (t0 != -2707) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile uint32_t x6 = 1434498513U;
	int8_t x7 = -1;
	int8_t x8 = 1;
	static volatile uint32_t t1 = 91868799U;

	t1 = ((x5|x6)-(x7<x8));

	if (t1 != 1434517502U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 3671626783901236LLU;
	volatile int16_t x10 = INT16_MIN;
	uint64_t x11 = 13LLU;

	t2 = ((x9|x10)-(x11<x12));

	if (t2 != 18446744073709536819LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint16_t x14 = 4060U;
	uint64_t x15 = UINT64_MAX;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = -48392360;

	t3 = ((x13|x14)-(x15<x16));

	if (t3 != -36) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	int16_t x19 = -79;
	volatile int32_t t4 = -2;

	t4 = ((x17|x18)-(x19<x20));

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -1;
	static int8_t x22 = INT8_MIN;
	int32_t x23 = -268009794;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -43673317;

	t5 = ((x21|x22)-(x23<x24));

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x25 = 208948146U;
	volatile uint8_t x27 = UINT8_MAX;
	int64_t x28 = INT64_MAX;

	t6 = ((x25|x26)-(x27<x28));

	if (t6 != -66060944459LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = UINT32_MAX;
	static volatile uint32_t t7 = 16072510U;

	t7 = ((x29|x30)-(x31<x32));

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	static uint16_t x34 = UINT16_MAX;
	uint64_t x35 = UINT64_MAX;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 17;

	t8 = ((x33|x34)-(x35<x36));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = UINT16_MAX;
	uint8_t x38 = UINT8_MAX;
	static volatile int16_t x39 = INT16_MAX;
	volatile int32_t x40 = -1;

	t9 = ((x37|x38)-(x39<x40));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 6U;
	static int16_t x43 = 340;
	uint64_t x44 = 133862539LLU;
	volatile int32_t t10 = -111152;

	t10 = ((x41|x42)-(x43<x44));

	if (t10 != -32763) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x47 = -1;
	int32_t x48 = -1;
	volatile int64_t t11 = -851812120240987LL;

	t11 = ((x45|x46)-(x47<x48));

	if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MAX;
	volatile int64_t t12 = 340535657LL;

	t12 = ((x49|x50)-(x51<x52));

	if (t12 != -32768LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x54 = INT64_MAX;
	int16_t x55 = 9;
	int32_t x56 = INT32_MIN;

	t13 = ((x53|x54)-(x55<x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = 2118U;
	int16_t x58 = INT16_MIN;
	static volatile uint32_t t14 = 1861293610U;

	t14 = ((x57|x58)-(x59<x60));

	if (t14 != 4294936646U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 7884453142006695584LLU;
	int8_t x62 = INT8_MIN;
	uint64_t t15 = 23671671LLU;

	t15 = ((x61|x62)-(x63<x64));

	if (t15 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	static int64_t x67 = 201949725489682LL;
	int64_t x68 = -1LL;
	uint64_t t16 = 235459959268LLU;

	t16 = ((x65|x66)-(x67<x68));

	if (t16 != 9223372153848865960LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	volatile int8_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	static volatile uint8_t x72 = UINT8_MAX;
	static int32_t t17 = -678502;

	t17 = ((x69|x70)-(x71<x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	int32_t x75 = -1;
	int64_t x76 = INT64_MIN;

	t18 = ((x73|x74)-(x75<x76));

	if (t18 != -35464) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x79 = INT16_MIN;
	volatile int32_t t19 = 25741;

	t19 = ((x77|x78)-(x79<x80));

	if (t19 != 165955966) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 24834U;
	uint16_t x82 = 0U;
	volatile int16_t x84 = -172;
	static volatile int32_t t20 = -1018055;

	t20 = ((x81|x82)-(x83<x84));

	if (t20 != 24834) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = 1517;
	uint16_t x86 = 32581U;
	static uint8_t x87 = 2U;
	int64_t x88 = INT64_MIN;
	int32_t t21 = 27730671;

	t21 = ((x85|x86)-(x87<x88));

	if (t21 != 32749) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -8290182;
	volatile int64_t x90 = 527186324LL;
	int32_t x91 = INT32_MIN;
	static int16_t x92 = INT16_MAX;

	t22 = ((x89|x90)-(x91<x92));

	if (t22 != -1197571LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -140462905LL;
	volatile int32_t x95 = INT32_MIN;
	int64_t t23 = -127971259985658LL;

	t23 = ((x93|x94)-(x95<x96));

	if (t23 != -140462889LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -41;
	int16_t x98 = INT16_MIN;
	int64_t x99 = INT64_MAX;
	int64_t x100 = 18LL;
	static volatile int32_t t24 = 1;

	t24 = ((x97|x98)-(x99<x100));

	if (t24 != -41) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	static int8_t x103 = 1;
	uint32_t x104 = 281151310U;
	static volatile int32_t t25 = 45867157;

	t25 = ((x101|x102)-(x103<x104));

	if (t25 != -82) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = 2;
	static int32_t x106 = 14042;
	static volatile int64_t x107 = INT64_MIN;
	uint8_t x108 = 29U;

	t26 = ((x105|x106)-(x107<x108));

	if (t26 != 14041) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = 3U;
	static volatile int16_t x112 = INT16_MAX;
	volatile uint32_t t27 = 354U;

	t27 = ((x109|x110)-(x111<x112));

	if (t27 != 4294934530U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	static int8_t x114 = INT8_MIN;
	static int8_t x115 = 0;
	volatile int16_t x116 = -1;
	int64_t t28 = -1LL;

	t28 = ((x113|x114)-(x115<x116));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int16_t x118 = -1;
	int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MIN;
	static volatile uint64_t t29 = UINT64_MAX;

	t29 = ((x117|x118)-(x119<x120));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 82547U;
	int8_t x122 = -1;
	int64_t x123 = -1LL;
	uint32_t t30 = UINT32_MAX;

	t30 = ((x121|x122)-(x123<x124));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 25262446U;
	volatile uint32_t t31 = 18477425U;

	t31 = ((x125|x126)-(x127<x128));

	if (t31 != 2172746094U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static int8_t x130 = INT8_MIN;
	volatile int16_t x131 = 17;
	static volatile uint16_t x132 = 29819U;
	volatile int64_t t32 = -53521LL;

	t32 = ((x129|x130)-(x131<x132));

	if (t32 != -129LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = -158857726LL;
	int16_t x135 = INT16_MIN;
	volatile uint32_t x136 = 24205839U;
	int64_t t33 = -3404LL;

	t33 = ((x133|x134)-(x135<x136));

	if (t33 != -17031277LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x137 = INT32_MIN;
	static int64_t x138 = INT64_MIN;
	volatile uint8_t x139 = 0U;
	uint32_t x140 = UINT32_MAX;
	int64_t t34 = -197024248128871LL;

	t34 = ((x137|x138)-(x139<x140));

	if (t34 != -2147483649LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = -1LL;
	int16_t x142 = 930;
	uint16_t x143 = 43U;
	uint16_t x144 = 4164U;
	int64_t t35 = -1LL;

	t35 = ((x141|x142)-(x143<x144));

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	uint8_t x147 = UINT8_MAX;
	static int8_t x148 = -1;
	volatile int32_t t36 = -256220;

	t36 = ((x145|x146)-(x147<x148));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	int32_t x150 = INT32_MIN;
	static int8_t x151 = 8;
	volatile uint8_t x152 = 9U;
	int32_t t37 = -49;

	t37 = ((x149|x150)-(x151<x152));

	if (t37 != -2147418114) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MAX;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = -905;

	t38 = ((x153|x154)-(x155<x156));

	if (t38 != -32642) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 32268039U;
	int16_t x158 = 0;
	int8_t x159 = 14;
	int32_t x160 = -1;
	volatile uint32_t t39 = 60545690U;

	t39 = ((x157|x158)-(x159<x160));

	if (t39 != 32268039U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int32_t x162 = -7848;
	uint64_t t40 = UINT64_MAX;

	t40 = ((x161|x162)-(x163<x164));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int32_t x166 = -6874;
	uint32_t x167 = 129029U;
	int8_t x168 = -1;

	t41 = ((x165|x166)-(x167<x168));

	if (t41 != -6875) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = INT16_MIN;
	int8_t x170 = INT8_MIN;
	int16_t x172 = 501;
	volatile int32_t t42 = -3178;

	t42 = ((x169|x170)-(x171<x172));

	if (t42 != -129) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = -1LL;
	volatile uint8_t x175 = UINT8_MAX;
	volatile int64_t x176 = INT64_MIN;
	volatile int64_t t43 = 97896165830680581LL;

	t43 = ((x173|x174)-(x175<x176));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1778186;
	int16_t x178 = -1;
	int32_t x179 = -1;
	volatile int32_t t44 = 4769502;

	t44 = ((x177|x178)-(x179<x180));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -14078;
	uint64_t x182 = 835965972409LLU;
	static int32_t x183 = INT32_MIN;
	static volatile int16_t x184 = -1;

	t45 = ((x181|x182)-(x183<x184));

	if (t45 != 18446744073709547450LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	volatile uint32_t x186 = 446U;
	int64_t x187 = INT64_MAX;
	static uint8_t x188 = 8U;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = ((x185|x186)-(x187<x188));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 7178492LL;
	int32_t x190 = INT32_MAX;
	int32_t x192 = INT32_MIN;
	int64_t t47 = 51730479831LL;

	t47 = ((x189|x190)-(x191<x192));

	if (t47 != 2147483647LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x194 = INT64_MIN;
	uint8_t x195 = 0U;
	volatile int64_t x196 = INT64_MAX;
	volatile int64_t t48 = -296284LL;

	t48 = ((x193|x194)-(x195<x196));

	if (t48 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x199 = -1;
	static int32_t t49 = 13470203;

	t49 = ((x197|x198)-(x199<x200));

	if (t49 != -9) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MIN;
	int32_t x204 = -1;
	int32_t t50 = 312;

	t50 = ((x201|x202)-(x203<x204));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x206 = UINT32_MAX;
	int64_t x207 = -1LL;
	volatile int16_t x208 = 111;
	static volatile uint32_t t51 = 1613U;

	t51 = ((x205|x206)-(x207<x208));

	if (t51 != 4294967294U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x212 = 141LLU;
	volatile int32_t t52 = 7450254;

	t52 = ((x209|x210)-(x211<x212));

	if (t52 != 7804) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = -63;
	static uint32_t x215 = 191U;
	int64_t x216 = 177853LL;
	volatile int64_t t53 = 15397LL;

	t53 = ((x213|x214)-(x215<x216));

	if (t53 != -64LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	volatile int64_t x218 = -1195414799992213LL;
	uint16_t x219 = UINT16_MAX;
	int32_t x220 = INT32_MIN;
	volatile int64_t t54 = -232459892869743883LL;

	t54 = ((x217|x218)-(x219<x220));

	if (t54 != -1195414799992213LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -1;
	int8_t x222 = -1;
	volatile int32_t t55 = -22582673;

	t55 = ((x221|x222)-(x223<x224));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 900291665131328287LL;
	int8_t x226 = 1;
	int64_t t56 = 4862642715LL;

	t56 = ((x225|x226)-(x227<x228));

	if (t56 != 900291665131328287LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 89U;
	int32_t x231 = -1;
	int8_t x232 = -1;
	int32_t t57 = -130436028;

	t57 = ((x229|x230)-(x231<x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -21304LL;
	static volatile int64_t x234 = -1386019158LL;
	uint16_t x236 = 65U;
	int64_t t58 = -70974845685820LL;

	t58 = ((x233|x234)-(x235<x236));

	if (t58 != -20759LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = 429U;
	uint16_t x238 = 17533U;
	int32_t x239 = INT32_MIN;
	volatile uint16_t x240 = UINT16_MAX;
	uint32_t t59 = 552U;

	t59 = ((x237|x238)-(x239<x240));

	if (t59 != 17916U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 90748870U;
	uint8_t x242 = UINT8_MAX;
	volatile int16_t x244 = INT16_MAX;

	t60 = ((x241|x242)-(x243<x244));

	if (t60 != 90748926U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = INT32_MIN;
	uint16_t x247 = UINT16_MAX;
	int64_t x248 = -2222LL;

	t61 = ((x245|x246)-(x247<x248));

	if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 303079714838865674LLU;
	volatile int8_t x251 = INT8_MIN;
	static volatile uint32_t x252 = 225755U;
	volatile uint64_t t62 = 2547320352940087LLU;

	t62 = ((x249|x250)-(x251<x252));

	if (t62 != 303079714838865678LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 18517764864077772LL;
	int16_t x254 = INT16_MIN;
	int8_t x255 = -1;
	static volatile uint8_t x256 = UINT8_MAX;
	int64_t t63 = -110829929354582LL;

	t63 = ((x253|x254)-(x255<x256));

	if (t63 != -4149LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	int64_t x258 = -1LL;
	int16_t x259 = -1;
	static volatile int64_t t64 = -6433212584LL;

	t64 = ((x257|x258)-(x259<x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MIN;
	int16_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	int8_t x264 = -1;
	int32_t t65 = -428511967;

	t65 = ((x261|x262)-(x263<x264));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = INT32_MIN;
	static volatile int32_t x267 = -1;
	int64_t x268 = INT64_MIN;
	volatile int32_t t66 = INT32_MIN;

	t66 = ((x265|x266)-(x267<x268));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x269 = 365U;
	volatile int8_t x270 = INT8_MAX;
	uint8_t x271 = 99U;

	t67 = ((x269|x270)-(x271<x272));

	if (t67 != 383U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	int32_t x274 = -1;
	static int16_t x275 = INT16_MIN;
	static int16_t x276 = INT16_MAX;
	static volatile int32_t t68 = 207642725;

	t68 = ((x273|x274)-(x275<x276));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 29U;
	uint32_t x279 = 23U;
	int32_t x280 = 22;
	static volatile uint32_t t69 = UINT32_MAX;

	t69 = ((x277|x278)-(x279<x280));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 1463LLU;
	int16_t x282 = -17;
	int8_t x283 = -1;
	static int64_t x284 = INT64_MIN;

	t70 = ((x281|x282)-(x283<x284));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = INT32_MIN;
	uint64_t x286 = 10771456829813908LLU;
	static int8_t x287 = INT8_MIN;
	static volatile uint64_t t71 = 7LLU;

	t71 = ((x285|x286)-(x287<x288));

	if (t71 != 18446744072536061075LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 2U;
	volatile int32_t x290 = INT32_MIN;
	static uint16_t x292 = UINT16_MAX;
	uint32_t t72 = 86084U;

	t72 = ((x289|x290)-(x291<x292));

	if (t72 != 2147483649U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int8_t x294 = INT8_MIN;
	int32_t x295 = INT32_MIN;
	volatile int32_t x296 = INT32_MAX;
	static volatile int32_t t73 = -1;

	t73 = ((x293|x294)-(x295<x296));

	if (t73 != -129) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	int64_t x298 = -711LL;
	uint32_t x300 = UINT32_MAX;
	int64_t t74 = 40LL;

	t74 = ((x297|x298)-(x299<x300));

	if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int32_t x302 = 386636;
	uint32_t x303 = 18557U;
	int64_t x304 = 3943776337079LL;
	int32_t t75 = 11376690;

	t75 = ((x301|x302)-(x303<x304));

	if (t75 != -6581) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	uint64_t x306 = 2413088303LLU;
	static uint64_t x307 = 586142431911388358LLU;
	int16_t x308 = INT16_MIN;
	volatile uint64_t t76 = 47637LLU;

	t76 = ((x305|x306)-(x307<x308));

	if (t76 != 18446744073709538862LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	int8_t x311 = -53;
	int8_t x312 = -1;
	static int32_t t77 = 29278;

	t77 = ((x309|x310)-(x311<x312));

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	static volatile int32_t x314 = INT32_MIN;

	t78 = ((x313|x314)-(x315<x316));

	if (t78 != -32769) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 66U;
	volatile int32_t x318 = INT32_MIN;
	uint16_t x319 = 32653U;
	int8_t x320 = INT8_MIN;

	t79 = ((x317|x318)-(x319<x320));

	if (t79 != 2147483714U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int16_t x324 = -13;
	volatile int32_t t80 = -1883;

	t80 = ((x321|x322)-(x323<x324));

	if (t80 != -32769) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 0;
	int16_t x326 = -1;
	int8_t x327 = INT8_MIN;
	int8_t x328 = -1;

	t81 = ((x325|x326)-(x327<x328));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x329 = -1;
	uint64_t x330 = 18701722LLU;
	int32_t x331 = INT32_MAX;
	int16_t x332 = INT16_MIN;
	uint64_t t82 = UINT64_MAX;

	t82 = ((x329|x330)-(x331<x332));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x334 = 49U;
	int32_t x335 = -35945;
	volatile int32_t t83 = 5199734;

	t83 = ((x333|x334)-(x335<x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x338 = UINT16_MAX;
	static uint8_t x339 = 45U;
	static int8_t x340 = INT8_MAX;
	int32_t t84 = 7;

	t84 = ((x337|x338)-(x339<x340));

	if (t84 != -2147418114) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 1;
	int8_t x342 = INT8_MIN;
	int8_t x344 = INT8_MAX;
	static int32_t t85 = -16;

	t85 = ((x341|x342)-(x343<x344));

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x346 = 11U;

	t86 = ((x345|x346)-(x347<x348));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x351 = 31;
	static volatile uint8_t x352 = UINT8_MAX;
	int32_t t87 = -840227;

	t87 = ((x349|x350)-(x351<x352));

	if (t87 != -32425) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = -2;
	int32_t x356 = -11805;
	volatile int32_t t88 = 12;

	t88 = ((x353|x354)-(x355<x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MAX;
	int16_t x359 = INT16_MIN;

	t89 = ((x357|x358)-(x359<x360));

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MIN;
	int64_t x362 = INT64_MAX;
	int64_t x364 = 3620LL;
	volatile int64_t t90 = 34638960924412633LL;

	t90 = ((x361|x362)-(x363<x364));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = 114U;
	int8_t x366 = -1;
	static int64_t x367 = 5808512663496401LL;
	volatile int32_t x368 = 337;

	t91 = ((x365|x366)-(x367<x368));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 68U;
	uint64_t x370 = 2332138815377092LLU;
	int32_t x371 = -15303586;
	uint32_t x372 = UINT32_MAX;
	volatile uint64_t t92 = 20690551184396LLU;

	t92 = ((x369|x370)-(x371<x372));

	if (t92 != 2332138815377091LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -3;
	static int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MIN;
	int32_t t93 = 90578638;

	t93 = ((x373|x374)-(x375<x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	uint32_t x378 = 5183U;
	uint32_t x379 = 649597016U;
	int8_t x380 = -52;
	uint32_t t94 = 5014U;

	t94 = ((x377|x378)-(x379<x380));

	if (t94 != 4294939710U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 97U;
	int16_t x383 = INT16_MAX;
	uint64_t x384 = UINT64_MAX;
	static volatile int64_t t95 = -22353LL;

	t95 = ((x381|x382)-(x383<x384));

	if (t95 != -2LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	int8_t x387 = 1;
	volatile int32_t t96 = 9;

	t96 = ((x385|x386)-(x387<x388));

	if (t96 != -119) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 1127359345964830463LLU;
	int16_t x390 = -1;
	uint8_t x391 = 3U;

	t97 = ((x389|x390)-(x391<x392));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	uint16_t x395 = 772U;
	int64_t t98 = -21LL;

	t98 = ((x393|x394)-(x395<x396));

	if (t98 != -32768LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	volatile int32_t x398 = -1;
	volatile uint16_t x399 = 2U;
	int32_t x400 = INT32_MIN;
	volatile int32_t t99 = 1182284;

	t99 = ((x397|x398)-(x399<x400));

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

