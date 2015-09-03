#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
int16_t x7 = -1;
static int64_t x10 = INT64_MIN;
static uint32_t x18 = 869U;
int16_t x22 = 1;
int16_t x26 = INT16_MIN;
static int8_t x27 = INT8_MIN;
volatile uint64_t x39 = 742797053338919LLU;
uint32_t x40 = UINT32_MAX;
int32_t x41 = INT32_MIN;
int32_t x51 = -2013;
int32_t x53 = -1;
int32_t x56 = INT32_MIN;
uint8_t x60 = UINT8_MAX;
volatile uint32_t t14 = 822749U;
int64_t x61 = -6LL;
int8_t x63 = 0;
static volatile int32_t x64 = INT32_MAX;
int32_t t15 = INT32_MAX;
static int64_t x66 = 1201LL;
int32_t t16 = 5803141;
static int64_t x71 = INT64_MAX;
static int8_t x74 = INT8_MIN;
volatile uint32_t x83 = UINT32_MAX;
uint8_t x95 = 47U;
int64_t x99 = INT64_MIN;
volatile int64_t t24 = -26351181LL;
int32_t t25 = -4773281;
int8_t x110 = INT8_MAX;
volatile int32_t x113 = -3108952;
int16_t x114 = INT16_MIN;
int64_t x116 = -1LL;
uint64_t x118 = UINT64_MAX;
int32_t x121 = 996751;
int32_t x128 = INT32_MAX;
static uint32_t x136 = 39884U;
uint32_t t33 = 140U;
int64_t x137 = INT64_MAX;
int8_t x144 = INT8_MIN;
volatile int8_t x154 = INT8_MIN;
uint16_t x160 = 85U;
volatile int16_t x161 = -1;
volatile int64_t x169 = 9107442887LL;
int64_t x171 = INT64_MIN;
int16_t x173 = INT16_MIN;
int64_t x174 = 13760051LL;
uint32_t t43 = UINT32_MAX;
int64_t x180 = -810101LL;
uint8_t x181 = 0U;
static uint16_t x185 = 17U;
static int8_t x187 = 1;
int64_t x188 = -1LL;
int8_t x192 = 4;
int64_t t49 = 15649LL;
uint8_t x203 = UINT8_MAX;
uint8_t x204 = 0U;
int32_t t50 = -102;
static int8_t x206 = -1;
int16_t x207 = -1;
uint64_t x208 = UINT64_MAX;
uint8_t x214 = UINT8_MAX;
static int64_t x216 = INT64_MIN;
int64_t t53 = -6401028622766033LL;
int16_t x220 = -1;
uint32_t x227 = UINT32_MAX;
volatile int64_t x232 = -1LL;
static int8_t x235 = INT8_MAX;
int8_t x242 = -1;
static int64_t x247 = INT64_MIN;
volatile int64_t t61 = INT64_MIN;
uint32_t x249 = UINT32_MAX;
volatile int64_t t62 = -7248941863577LL;
volatile int8_t x261 = -40;
volatile int8_t x262 = INT8_MAX;
int16_t x264 = -1;
int32_t x268 = INT32_MAX;
static uint64_t x269 = 21970206890349LLU;
int16_t x272 = -1;
uint64_t x274 = 35LLU;
int64_t x276 = INT64_MIN;
int16_t x281 = -13528;
volatile int16_t x292 = INT16_MAX;
int32_t x298 = INT32_MIN;
static int64_t t74 = -133LL;
int32_t t75 = 6;
volatile int8_t x311 = INT8_MIN;
static int16_t x313 = INT16_MIN;
int16_t x322 = 1330;
int64_t x323 = INT64_MIN;
static int64_t x326 = -1813LL;
static int64_t x327 = INT64_MIN;
static uint8_t x331 = 2U;
volatile int64_t t82 = -205053333583LL;
static volatile int32_t t83 = 162242992;
volatile int16_t x339 = INT16_MIN;
uint16_t x343 = 920U;
volatile int16_t x349 = INT16_MAX;
int8_t x351 = -1;
int8_t x352 = INT8_MAX;
volatile uint8_t x353 = 11U;
int64_t x356 = INT64_MAX;
int32_t x357 = -1;
static int32_t t89 = 740412;
int16_t x366 = 1;
static int16_t x367 = -1;
volatile int32_t x373 = INT32_MIN;
uint32_t t93 = UINT32_MAX;
volatile int32_t x382 = 333;
int8_t x390 = INT8_MAX;
volatile int64_t t97 = 15859156LL;
int8_t x393 = -1;
volatile int64_t x396 = 1LL;
static int8_t x398 = INT8_MIN;
int16_t x400 = INT16_MIN;


void f0(void) {
	uint16_t x1 = 14U;
	static uint8_t x2 = UINT8_MAX;
	int32_t x3 = INT32_MIN;
	int32_t x4 = INT32_MIN;
	int32_t t0 = INT32_MIN;

	t0 = ((x1<=x2)*(x3|x4));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	int32_t x8 = -1;
	int32_t t1 = -192;

	t1 = ((x5<=x6)*(x7|x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	volatile int32_t x11 = INT32_MIN;
	volatile uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = -3462832;

	t2 = ((x9<=x10)*(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = UINT8_MAX;
	int64_t x14 = INT64_MAX;
	static uint8_t x15 = 55U;
	int16_t x16 = -1;
	int32_t t3 = 5376692;

	t3 = ((x13<=x14)*(x15|x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 6U;
	int16_t x19 = INT16_MIN;
	volatile int64_t x20 = INT64_MIN;
	int64_t t4 = 10LL;

	t4 = ((x17<=x18)*(x19|x20));

	if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int8_t x23 = -1;
	int8_t x24 = -1;
	int32_t t5 = 58;

	t5 = ((x21<=x22)*(x23|x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	static int32_t x28 = 8693;
	volatile int32_t t6 = 696;

	t6 = ((x25<=x26)*(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 95U;
	int32_t x30 = INT32_MIN;
	static int64_t x31 = 742338516870LL;
	uint8_t x32 = UINT8_MAX;
	static volatile int64_t t7 = 214860329614LL;

	t7 = ((x29<=x30)*(x31|x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int32_t x34 = -1;
	int32_t x35 = -717287;
	uint32_t x36 = 7U;
	uint32_t t8 = 156569863U;

	t8 = ((x33<=x34)*(x35|x36));

	if (t8 != 4294250015U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -40;
	uint8_t x38 = UINT8_MAX;
	static volatile uint64_t t9 = 251394LLU;

	t9 = ((x37<=x38)*(x39|x40));

	if (t9 != 742797413974015LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x42 = INT16_MAX;
	int16_t x43 = INT16_MIN;
	int32_t x44 = INT32_MAX;
	int32_t t10 = 30736;

	t10 = ((x41<=x42)*(x43|x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	static int8_t x46 = INT8_MAX;
	static int64_t x47 = 0LL;
	int64_t x48 = 0LL;
	int64_t t11 = -212798406246880LL;

	t11 = ((x45<=x46)*(x47|x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint16_t x50 = UINT16_MAX;
	int16_t x52 = -2391;
	volatile int32_t t12 = 93690;

	t12 = ((x49<=x50)*(x51|x52));

	if (t12 != -341) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x54 = 2225;
	volatile uint64_t x55 = 3352870904748307LLU;
	volatile uint64_t t13 = 247259012999852LLU;

	t13 = ((x53<=x54)*(x55|x56));

	if (t13 != 18446744071952226579LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 11U;
	volatile int64_t x58 = -110303060046490050LL;
	uint32_t x59 = 10314U;

	t14 = ((x57<=x58)*(x59|x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = 995;

	t15 = ((x61<=x62)*(x63|x64));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile int16_t x67 = INT16_MIN;
	int8_t x68 = 0;

	t16 = ((x65<=x66)*(x67|x68));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -4;
	int64_t x70 = -1LL;
	uint16_t x72 = 2U;
	int64_t t17 = INT64_MAX;

	t17 = ((x69<=x70)*(x71|x72));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	volatile uint16_t x75 = 9U;
	uint64_t x76 = 495875942167198381LLU;
	static uint64_t t18 = 218LLU;

	t18 = ((x73<=x74)*(x75|x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 7U;
	volatile int16_t x78 = 0;
	static int32_t x79 = -1;
	int8_t x80 = INT8_MAX;
	int32_t t19 = 657095237;

	t19 = ((x77<=x78)*(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 31175352979LL;
	int64_t x82 = INT64_MIN;
	int16_t x84 = INT16_MIN;
	volatile uint32_t t20 = 12U;

	t20 = ((x81<=x82)*(x83|x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -606322096337LL;
	static uint8_t x86 = UINT8_MAX;
	uint32_t x87 = 9651333U;
	static uint8_t x88 = 41U;
	static volatile uint32_t t21 = 6082502U;

	t21 = ((x85<=x86)*(x87|x88));

	if (t21 != 9651373U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MAX;
	uint16_t x90 = UINT16_MAX;
	volatile int64_t x91 = -1LL;
	uint32_t x92 = 123037062U;
	int64_t t22 = 21965237113LL;

	t22 = ((x89<=x90)*(x91|x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 1;
	volatile uint64_t x94 = 79074340612LLU;
	static volatile uint8_t x96 = 29U;
	int32_t t23 = 13354010;

	t23 = ((x93<=x94)*(x95|x96));

	if (t23 != 63) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MIN;
	static uint8_t x100 = 0U;

	t24 = ((x97<=x98)*(x99|x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MAX;
	static int32_t x102 = -462575;
	static int16_t x103 = INT16_MIN;
	int32_t x104 = 4101;

	t25 = ((x101<=x102)*(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = -1LL;
	static uint32_t x106 = 126282U;
	static int64_t x107 = INT64_MAX;
	uint64_t x108 = 27679154322491621LLU;
	uint64_t t26 = 194LLU;

	t26 = ((x105<=x106)*(x107|x108));

	if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -1;
	uint32_t x111 = 75553447U;
	static int32_t x112 = 1;
	uint32_t t27 = 2108U;

	t27 = ((x109<=x110)*(x111|x112));

	if (t27 != 75553447U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x115 = INT16_MAX;
	int64_t t28 = -36174497902440876LL;

	t28 = ((x113<=x114)*(x115|x116));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int8_t x119 = INT8_MAX;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = 3;

	t29 = ((x117<=x118)*(x119|x120));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = 50LLU;
	volatile uint64_t x123 = UINT64_MAX;
	volatile int64_t x124 = 1653LL;
	volatile uint64_t t30 = 1099071221LLU;

	t30 = ((x121<=x122)*(x123|x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 347;
	int64_t x126 = INT64_MAX;
	volatile uint64_t x127 = 845563LLU;
	static volatile uint64_t t31 = 4LLU;

	t31 = ((x125<=x126)*(x127|x128));

	if (t31 != 2147483647LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	int16_t x130 = INT16_MIN;
	static volatile int8_t x131 = 0;
	int32_t x132 = INT32_MAX;
	volatile int32_t t32 = 23;

	t32 = ((x129<=x130)*(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = 20064197;
	volatile int16_t x134 = -1;
	int32_t x135 = INT32_MAX;

	t33 = ((x133<=x134)*(x135|x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = 31;
	static volatile int64_t x139 = INT64_MIN;
	int32_t x140 = -1;
	volatile int64_t t34 = -343824474659320LL;

	t34 = ((x137<=x138)*(x139|x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 28599172672LL;
	static int32_t x142 = INT32_MAX;
	static volatile uint8_t x143 = 4U;
	int32_t t35 = 3876713;

	t35 = ((x141<=x142)*(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 160U;
	static uint32_t x146 = 40972722U;
	static volatile uint32_t x147 = UINT32_MAX;
	static int16_t x148 = INT16_MIN;
	static uint32_t t36 = UINT32_MAX;

	t36 = ((x145<=x146)*(x147|x148));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x149 = INT32_MIN;
	uint8_t x150 = UINT8_MAX;
	volatile uint64_t x151 = 24LLU;
	volatile int32_t x152 = -1;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = ((x149<=x150)*(x151|x152));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 28316651315LLU;
	uint32_t x155 = 58613U;
	uint16_t x156 = 970U;
	static volatile uint32_t t38 = 186555698U;

	t38 = ((x153<=x154)*(x155|x156));

	if (t38 != 59391U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	uint64_t x158 = 1009836153566250363LLU;
	int16_t x159 = INT16_MAX;
	volatile int32_t t39 = 0;

	t39 = ((x157<=x158)*(x159|x160));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = INT32_MIN;
	static int16_t x163 = -63;
	uint32_t x164 = UINT32_MAX;
	static uint32_t t40 = 1021550U;

	t40 = ((x161<=x162)*(x163|x164));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 9165U;
	int16_t x166 = INT16_MIN;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = 3;
	int32_t t41 = 264969982;

	t41 = ((x165<=x166)*(x167|x168));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x170 = -11;
	int32_t x172 = 175375438;
	volatile int64_t t42 = 224LL;

	t42 = ((x169<=x170)*(x171|x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x175 = UINT32_MAX;
	int32_t x176 = -1;

	t43 = ((x173<=x174)*(x175|x176));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	int64_t x178 = -1LL;
	int8_t x179 = -1;
	static int64_t t44 = -4043045551438574718LL;

	t44 = ((x177<=x178)*(x179|x180));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MAX;
	volatile int64_t x183 = 111359974718294LL;
	volatile int16_t x184 = -224;
	volatile int64_t t45 = 15659LL;

	t45 = ((x181<=x182)*(x183|x184));

	if (t45 != -138LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = -39853313;
	volatile int64_t t46 = 34234711317LL;

	t46 = ((x185<=x186)*(x187|x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MIN;
	volatile int32_t t47 = 9876866;

	t47 = ((x189<=x190)*(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	int64_t x194 = 3LL;
	int64_t x195 = -1LL;
	volatile uint64_t x196 = 2394939095908748541LLU;
	volatile uint64_t t48 = 872875220LLU;

	t48 = ((x193<=x194)*(x195|x196));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -655676730LL;
	uint8_t x198 = 89U;
	uint32_t x199 = UINT32_MAX;
	int64_t x200 = 25053718LL;

	t49 = ((x197<=x198)*(x199|x200));

	if (t49 != 4294967295LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x201 = 4058673549163069953LLU;
	int32_t x202 = 1;

	t50 = ((x201<=x202)*(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MIN;
	static uint64_t t51 = UINT64_MAX;

	t51 = ((x205<=x206)*(x207|x208));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 28U;
	static int64_t x210 = -1LL;
	int8_t x211 = -1;
	volatile uint64_t x212 = 47950LLU;
	volatile uint64_t t52 = 2650056294942592LLU;

	t52 = ((x209<=x210)*(x211|x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = 1U;
	static volatile int32_t x215 = INT32_MIN;

	t53 = ((x213<=x214)*(x215|x216));

	if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = 40744LLU;
	uint16_t x218 = 2946U;
	static int32_t x219 = -1;
	int32_t t54 = 95156992;

	t54 = ((x217<=x218)*(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 411072203U;
	uint8_t x222 = 4U;
	int64_t x223 = INT64_MIN;
	uint32_t x224 = 5U;
	static volatile int64_t t55 = 4784673307935LL;

	t55 = ((x221<=x222)*(x223|x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -2;
	uint32_t x226 = 301939703U;
	uint64_t x228 = 483540LLU;
	volatile uint64_t t56 = 26560LLU;

	t56 = ((x225<=x226)*(x227|x228));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	int32_t x230 = INT32_MIN;
	volatile int32_t x231 = -1;
	volatile int64_t t57 = 2067172715LL;

	t57 = ((x229<=x230)*(x231|x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MAX;
	int64_t x234 = -1LL;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t58 = 1;

	t58 = ((x233<=x234)*(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	volatile uint64_t x238 = UINT64_MAX;
	static int64_t x239 = -3561188246LL;
	volatile uint32_t x240 = UINT32_MAX;
	static int64_t t59 = 14483012810925LL;

	t59 = ((x237<=x238)*(x239|x240));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	static volatile uint16_t x243 = 382U;
	static volatile uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = -1350522;

	t60 = ((x241<=x242)*(x243|x244));

	if (t60 != 511) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	uint32_t x246 = 761116U;
	volatile int64_t x248 = INT64_MIN;

	t61 = ((x245<=x246)*(x247|x248));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x250 = INT16_MIN;
	int64_t x251 = -128416614LL;
	int8_t x252 = INT8_MIN;

	t62 = ((x249<=x250)*(x251|x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	uint8_t x254 = 27U;
	int8_t x255 = 3;
	int16_t x256 = INT16_MIN;
	int32_t t63 = -3090854;

	t63 = ((x253<=x254)*(x255|x256));

	if (t63 != -32765) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = 2;
	uint32_t x258 = UINT32_MAX;
	int32_t x259 = -473697;
	int8_t x260 = INT8_MIN;
	int32_t t64 = 7736;

	t64 = ((x257<=x258)*(x259|x260));

	if (t64 != -97) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x263 = UINT64_MAX;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = ((x261<=x262)*(x263|x264));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = INT64_MIN;
	volatile int8_t x266 = INT8_MIN;
	static uint16_t x267 = 1568U;
	static volatile int32_t t66 = INT32_MAX;

	t66 = ((x265<=x266)*(x267|x268));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x270 = 14U;
	uint32_t x271 = 796U;
	static uint32_t t67 = 0U;

	t67 = ((x269<=x270)*(x271|x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	uint32_t x275 = UINT32_MAX;
	int64_t t68 = -2LL;

	t68 = ((x273<=x274)*(x275|x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	volatile int16_t x278 = -3;
	static int32_t x279 = -1;
	int32_t x280 = INT32_MIN;
	int32_t t69 = -42257234;

	t69 = ((x277<=x278)*(x279|x280));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = UINT8_MAX;
	int64_t x283 = -10286288563725LL;
	int8_t x284 = INT8_MIN;
	static volatile int64_t t70 = 116087030225LL;

	t70 = ((x281<=x282)*(x283|x284));

	if (t70 != -13LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	volatile int16_t x286 = 1;
	static int8_t x287 = 3;
	static int8_t x288 = INT8_MIN;
	static int32_t t71 = -1;

	t71 = ((x285<=x286)*(x287|x288));

	if (t71 != -125) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = 0;
	static uint32_t x290 = 1354848U;
	static volatile uint32_t x291 = 30U;
	volatile uint32_t t72 = 35093431U;

	t72 = ((x289<=x290)*(x291|x292));

	if (t72 != 32767U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MIN;
	volatile int16_t x294 = -1;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t73 = UINT32_MAX;

	t73 = ((x293<=x294)*(x295|x296));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 1;
	int32_t x299 = INT32_MIN;
	static int64_t x300 = INT64_MAX;

	t74 = ((x297<=x298)*(x299|x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -11487164;
	uint16_t x302 = UINT16_MAX;
	int8_t x303 = -1;
	static int16_t x304 = -1;

	t75 = ((x301<=x302)*(x303|x304));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 6513U;
	int16_t x306 = -8;
	static uint16_t x307 = 1U;
	volatile uint64_t x308 = 5153401LLU;
	static volatile uint64_t t76 = 17614LLU;

	t76 = ((x305<=x306)*(x307|x308));

	if (t76 != 5153401LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -25;
	uint32_t x310 = UINT32_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -4157794;

	t77 = ((x309<=x310)*(x311|x312));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = -1LL;
	volatile int8_t x315 = INT8_MAX;
	static int8_t x316 = -1;
	volatile int32_t t78 = -118;

	t78 = ((x313<=x314)*(x315|x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -1300053;
	uint8_t x318 = UINT8_MAX;
	volatile uint16_t x319 = UINT16_MAX;
	int32_t x320 = -1;
	int32_t t79 = -7;

	t79 = ((x317<=x318)*(x319|x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	int8_t x324 = INT8_MIN;
	static int64_t t80 = 622404438LL;

	t80 = ((x321<=x322)*(x323|x324));

	if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	volatile int8_t x328 = INT8_MIN;
	volatile int64_t t81 = -73090287LL;

	t81 = ((x325<=x326)*(x327|x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MAX;
	int32_t x330 = INT32_MAX;
	volatile int64_t x332 = INT64_MAX;

	t82 = ((x329<=x330)*(x331|x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int32_t x334 = INT32_MIN;
	int8_t x335 = -1;
	static int16_t x336 = INT16_MIN;

	t83 = ((x333<=x334)*(x335|x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	int32_t x338 = INT32_MIN;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t84 = -15;

	t84 = ((x337<=x338)*(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x341 = UINT16_MAX;
	uint32_t x342 = 15869U;
	int32_t x344 = -1;
	int32_t t85 = -433138275;

	t85 = ((x341<=x342)*(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -4761;
	int64_t x346 = -1LL;
	int16_t x347 = -1;
	static int32_t x348 = INT32_MIN;
	static int32_t t86 = 461483843;

	t86 = ((x345<=x346)*(x347|x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x350 = 39776;
	int32_t t87 = 184;

	t87 = ((x349<=x350)*(x351|x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = 2265;
	uint16_t x355 = 1U;
	volatile int64_t t88 = INT64_MAX;

	t88 = ((x353<=x354)*(x355|x356));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = 6U;
	volatile int32_t x359 = INT32_MIN;
	int16_t x360 = INT16_MAX;

	t89 = ((x357<=x358)*(x359|x360));

	if (t89 != -2147450881) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	int64_t x362 = INT64_MIN;
	uint64_t x363 = 1132901948896465310LLU;
	int64_t x364 = INT64_MIN;
	static uint64_t t90 = 70LLU;

	t90 = ((x361<=x362)*(x363|x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = UINT16_MAX;
	int16_t x368 = -1;
	volatile int32_t t91 = 1;

	t91 = ((x365<=x366)*(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	volatile uint64_t x370 = 8742396624682LLU;
	uint8_t x371 = 6U;
	int32_t x372 = INT32_MAX;
	volatile int32_t t92 = INT32_MAX;

	t92 = ((x369<=x370)*(x371|x372));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = -1;
	uint32_t x375 = UINT32_MAX;
	volatile int8_t x376 = -1;

	t93 = ((x373<=x374)*(x375|x376));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 3;
	volatile int64_t x378 = -1LL;
	volatile int8_t x379 = INT8_MAX;
	uint8_t x380 = 6U;
	static int32_t t94 = -147;

	t94 = ((x377<=x378)*(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 874469553389942LL;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = INT8_MAX;
	volatile int32_t t95 = 19275027;

	t95 = ((x381<=x382)*(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = 356793923U;
	int8_t x386 = INT8_MIN;
	int8_t x387 = 0;
	int16_t x388 = INT16_MAX;
	int32_t t96 = 0;

	t96 = ((x385<=x386)*(x387|x388));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	volatile int64_t x391 = INT64_MAX;
	int64_t x392 = INT64_MIN;

	t97 = ((x389<=x390)*(x391|x392));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = 70030934734296579LL;
	static int16_t x395 = 1113;
	int64_t t98 = -1LL;

	t98 = ((x393<=x394)*(x395|x396));

	if (t98 != 1113LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 762;
	static int32_t x399 = -1;
	int32_t t99 = 0;

	t99 = ((x397<=x398)*(x399|x400));

	if (t99 != 0) { NG(); } else { ; }
	
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

