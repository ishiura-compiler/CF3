#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 13;
int16_t x12 = INT16_MAX;
static int16_t x14 = -1425;
static volatile int16_t x30 = INT16_MIN;
volatile int64_t x38 = INT64_MAX;
static int32_t x40 = INT32_MAX;
int8_t x44 = INT8_MIN;
static int16_t x46 = 70;
volatile uint64_t t11 = 254096760284373LLU;
static int16_t x50 = 222;
volatile int32_t x53 = INT32_MIN;
volatile int16_t x54 = 7496;
int16_t x56 = INT16_MIN;
int16_t x57 = INT16_MIN;
int64_t x71 = -1LL;
static int16_t x76 = 774;
uint32_t x88 = 1891489U;
volatile int64_t x94 = INT64_MIN;
volatile int32_t t23 = 15585;
volatile int64_t t24 = -829381036LL;
static volatile uint8_t x101 = UINT8_MAX;
int32_t x102 = -1;
volatile int16_t x105 = 13;
uint8_t x106 = 2U;
int32_t x107 = INT32_MAX;
int8_t x108 = INT8_MAX;
static int16_t x114 = INT16_MIN;
uint16_t x117 = UINT16_MAX;
volatile uint64_t x120 = 79754LLU;
int64_t x132 = INT64_MIN;
int16_t x135 = 0;
uint8_t x151 = UINT8_MAX;
int32_t t37 = 442635786;
volatile int32_t x159 = INT32_MIN;
uint64_t x160 = 155808LLU;
int8_t x161 = INT8_MAX;
int8_t x162 = -1;
uint8_t x171 = 58U;
int64_t t41 = -1303229713238LL;
volatile int16_t x187 = INT16_MAX;
int32_t t44 = -9311967;
uint16_t x191 = 3U;
int16_t x192 = -4;
volatile int32_t t45 = 8485801;
uint16_t x195 = UINT16_MAX;
int32_t x197 = -1;
int16_t x198 = INT16_MAX;
int32_t t47 = -1;
uint64_t t48 = 7137911054358506279LLU;
static int8_t x206 = INT8_MIN;
static int8_t x213 = 1;
int8_t x217 = INT8_MIN;
int32_t x220 = 12;
int8_t x222 = -5;
static volatile int32_t x223 = INT32_MIN;
int32_t t53 = 50;
int64_t t56 = -36443166LL;
volatile uint16_t x242 = 445U;
uint32_t x244 = 413954U;
int16_t x245 = -1;
volatile int8_t x249 = INT8_MIN;
uint32_t x250 = 61U;
static uint8_t x252 = 1U;
int8_t x256 = -1;
int32_t x258 = INT32_MAX;
int64_t t61 = 2618171LL;
volatile int16_t x261 = INT16_MIN;
int32_t t63 = -5067649;
volatile int32_t t67 = -75936222;
static int64_t x288 = INT64_MIN;
int16_t x292 = 192;
int64_t x294 = 1LL;
int64_t x299 = INT64_MIN;
static int32_t x300 = INT32_MIN;
uint32_t x304 = UINT32_MAX;
volatile int16_t x305 = INT16_MAX;
int16_t x313 = INT16_MIN;
volatile int8_t x318 = -1;
uint8_t x320 = UINT8_MAX;
int32_t x321 = -1;
int8_t x322 = 3;
volatile int8_t x323 = INT8_MIN;
volatile int32_t t77 = 0;
uint16_t x332 = UINT16_MAX;
int32_t t79 = 2041;
static uint32_t x333 = 10U;
int32_t t81 = 531602;
volatile int32_t x341 = 163;
int32_t x346 = INT32_MIN;
static int16_t x349 = -1;
int64_t x350 = INT64_MIN;
int8_t x352 = -8;
int64_t x356 = -1LL;
int32_t x359 = 0;
uint32_t x363 = UINT32_MAX;
static volatile int32_t x368 = INT32_MAX;
int32_t x369 = -1;
int8_t x373 = INT8_MIN;
uint32_t t90 = 1752385U;
volatile int64_t t92 = 1203334126585440LL;
int32_t t93 = -1;
int16_t x393 = -1;
static int8_t x402 = INT8_MAX;
static uint32_t t97 = 20305U;
uint8_t x409 = UINT8_MAX;


void f0(void) {
	volatile int16_t x1 = 814;
	int8_t x2 = 0;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -1650320;

	t0 = ((x1<=x2)&(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int64_t x6 = INT64_MIN;
	int16_t x7 = 61;
	volatile int64_t x8 = -1LL;
	int64_t t1 = -3617849320LL;

	t1 = ((x5<=x6)&(x7/x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	int32_t x10 = -107395;
	int8_t x11 = INT8_MIN;
	int32_t t2 = -1367;

	t2 = ((x9<=x10)&(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int32_t x15 = INT32_MAX;
	volatile uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -20929;

	t3 = ((x13<=x14)&(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -4;
	static int32_t x18 = INT32_MIN;
	uint32_t x19 = UINT32_MAX;
	static int8_t x20 = INT8_MIN;
	volatile uint32_t t4 = 11U;

	t4 = ((x17<=x18)&(x19/x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -270170LL;
	static int16_t x22 = -1;
	volatile int32_t x23 = -1;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 2926;

	t5 = ((x21<=x22)&(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 0U;
	volatile uint64_t x26 = UINT64_MAX;
	int32_t x27 = INT32_MIN;
	int16_t x28 = 155;
	int32_t t6 = 1386685;

	t6 = ((x25<=x26)&(x27/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MAX;
	uint64_t x31 = 379019912500759LLU;
	int8_t x32 = INT8_MIN;
	uint64_t t7 = 0LLU;

	t7 = ((x29<=x30)&(x31/x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 21407094U;
	uint16_t x34 = 1U;
	int16_t x35 = 0;
	uint64_t x36 = 727094430976LLU;
	static volatile uint64_t t8 = 1373074919104168LLU;

	t8 = ((x33<=x34)&(x35/x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 10U;
	uint8_t x39 = 84U;
	volatile int32_t t9 = -854113684;

	t9 = ((x37<=x38)&(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint16_t x42 = 322U;
	static uint32_t x43 = 179U;
	uint32_t t10 = 143544160U;

	t10 = ((x41<=x42)&(x43/x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -3;
	int64_t x47 = INT64_MAX;
	uint64_t x48 = 161LLU;

	t11 = ((x45<=x46)&(x47/x48));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 516U;
	int8_t x51 = INT8_MIN;
	int64_t x52 = INT64_MAX;
	volatile int64_t t12 = -555LL;

	t12 = ((x49<=x50)&(x51/x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x55 = -4;
	volatile int32_t t13 = -17848908;

	t13 = ((x53<=x54)&(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -322;
	uint32_t x59 = 538530U;
	int32_t x60 = 195;
	volatile uint32_t t14 = 7029U;

	t14 = ((x57<=x58)&(x59/x60));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 3;
	static uint32_t x62 = 0U;
	int32_t x63 = 1451310;
	int16_t x64 = INT16_MIN;
	int32_t t15 = -28953283;

	t15 = ((x61<=x62)&(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MAX;
	int32_t x66 = INT32_MIN;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = INT32_MIN;
	uint64_t t16 = 13141LLU;

	t16 = ((x65<=x66)&(x67/x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = 47;
	static int8_t x70 = INT8_MIN;
	uint8_t x72 = UINT8_MAX;
	int64_t t17 = 62LL;

	t17 = ((x69<=x70)&(x71/x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MIN;
	int32_t t18 = 1941;

	t18 = ((x73<=x74)&(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 2109;
	int64_t x78 = INT64_MAX;
	uint64_t x79 = 116861359LLU;
	static int8_t x80 = INT8_MIN;
	static uint64_t t19 = 4067754902258846933LLU;

	t19 = ((x77<=x78)&(x79/x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	static uint32_t x82 = UINT32_MAX;
	int32_t x83 = INT32_MIN;
	int32_t x84 = 538132515;
	static int32_t t20 = -1739;

	t20 = ((x81<=x82)&(x83/x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	int64_t x86 = 27950LL;
	uint32_t x87 = 299857034U;
	uint32_t t21 = 62U;

	t21 = ((x85<=x86)&(x87/x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	int32_t x90 = INT32_MIN;
	volatile uint8_t x91 = 14U;
	volatile int64_t x92 = 2603430943498865783LL;
	static int64_t t22 = 164LL;

	t22 = ((x89<=x90)&(x91/x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1863;
	uint16_t x95 = UINT16_MAX;
	uint16_t x96 = 1U;

	t23 = ((x93<=x94)&(x95/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = UINT16_MAX;
	int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MAX;
	int64_t x100 = 48750986977963LL;

	t24 = ((x97<=x98)&(x99/x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x103 = 54991464548LL;
	int32_t x104 = INT32_MIN;
	volatile int64_t t25 = -240LL;

	t25 = ((x101<=x102)&(x103/x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t t26 = 7;

	t26 = ((x105<=x106)&(x107/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1171;
	int16_t x110 = INT16_MAX;
	int8_t x111 = INT8_MAX;
	volatile int8_t x112 = -1;
	static volatile int32_t t27 = 4;

	t27 = ((x109<=x110)&(x111/x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	int8_t x115 = 7;
	static uint16_t x116 = 58U;
	int32_t t28 = -6240641;

	t28 = ((x113<=x114)&(x115/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x118 = 1158;
	int64_t x119 = INT64_MIN;
	static volatile uint64_t t29 = 1455LLU;

	t29 = ((x117<=x118)&(x119/x120));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MIN;
	int16_t x123 = 4095;
	int64_t x124 = INT64_MIN;
	int64_t t30 = 114541645477720174LL;

	t30 = ((x121<=x122)&(x123/x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	uint16_t x126 = 5U;
	int16_t x127 = INT16_MIN;
	int16_t x128 = -357;
	volatile int32_t t31 = 1;

	t31 = ((x125<=x126)&(x127/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 6U;
	static uint16_t x130 = 0U;
	int64_t x131 = -2032589LL;
	volatile int64_t t32 = 1186836983902665LL;

	t32 = ((x129<=x130)&(x131/x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	volatile uint64_t x134 = 27218LLU;
	static int32_t x136 = INT32_MIN;
	int32_t t33 = -4600276;

	t33 = ((x133<=x134)&(x135/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int32_t x138 = -1;
	static int8_t x139 = 0;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -1945842;

	t34 = ((x137<=x138)&(x139/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = -1LL;
	uint8_t x142 = UINT8_MAX;
	uint32_t x143 = 11067U;
	volatile int16_t x144 = INT16_MIN;
	volatile uint32_t t35 = 21954U;

	t35 = ((x141<=x142)&(x143/x144));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 2830U;
	int64_t x150 = INT64_MAX;
	uint16_t x152 = 6U;
	volatile int32_t t36 = 0;

	t36 = ((x149<=x150)&(x151/x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x153 = 0;
	volatile uint8_t x154 = 9U;
	static uint8_t x155 = 57U;
	static uint16_t x156 = UINT16_MAX;

	t37 = ((x153<=x154)&(x155/x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = UINT8_MAX;
	uint32_t x158 = 76689U;
	volatile uint64_t t38 = 10133542790152LLU;

	t38 = ((x157<=x158)&(x159/x160));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x163 = -1;
	volatile uint64_t x164 = 586316251259087LLU;
	volatile uint64_t t39 = 810394043919740LLU;

	t39 = ((x161<=x162)&(x163/x164));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 23U;
	static volatile uint64_t x170 = 0LLU;
	volatile int32_t x172 = -77451123;
	int32_t t40 = 1;

	t40 = ((x169<=x170)&(x171/x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MAX;
	int64_t x175 = -64LL;
	int64_t x176 = -1LL;

	t41 = ((x173<=x174)&(x175/x176));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = INT8_MAX;
	uint64_t x178 = 385LLU;
	static int32_t x179 = INT32_MIN;
	static int8_t x180 = -3;
	volatile int32_t t42 = 5737;

	t42 = ((x177<=x178)&(x179/x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = -1LL;
	int8_t x182 = INT8_MAX;
	int8_t x183 = -1;
	int64_t x184 = -274042LL;
	volatile int64_t t43 = 12013155541LL;

	t43 = ((x181<=x182)&(x183/x184));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MIN;
	int8_t x188 = INT8_MIN;

	t44 = ((x185<=x186)&(x187/x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -1;
	int8_t x190 = INT8_MIN;

	t45 = ((x189<=x190)&(x191/x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = -352;
	int16_t x194 = -1;
	static int64_t x196 = INT64_MIN;
	static int64_t t46 = 136LL;

	t46 = ((x193<=x194)&(x195/x196));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x199 = 20U;
	int32_t x200 = -1;

	t47 = ((x197<=x198)&(x199/x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -1;
	int64_t x202 = 3430067286989675896LL;
	uint64_t x203 = 265994078222LLU;
	int8_t x204 = 31;

	t48 = ((x201<=x202)&(x203/x204));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = 43U;
	int32_t x207 = INT32_MIN;
	volatile int16_t x208 = 3;
	int32_t t49 = -29431074;

	t49 = ((x205<=x206)&(x207/x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = -26;
	static int64_t x211 = INT64_MIN;
	volatile uint16_t x212 = UINT16_MAX;
	int64_t t50 = 199462226523LL;

	t50 = ((x209<=x210)&(x211/x212));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x214 = -1;
	static uint16_t x215 = 2U;
	static volatile uint16_t x216 = 65U;
	int32_t t51 = -88;

	t51 = ((x213<=x214)&(x215/x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x218 = INT64_MIN;
	uint8_t x219 = UINT8_MAX;
	static volatile int32_t t52 = 6391716;

	t52 = ((x217<=x218)&(x219/x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x221 = 2039LL;
	volatile int8_t x224 = INT8_MIN;

	t53 = ((x221<=x222)&(x223/x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = UINT32_MAX;
	volatile int16_t x226 = INT16_MAX;
	int64_t x227 = -1241539792LL;
	int64_t x228 = INT64_MIN;
	volatile int64_t t54 = 1LL;

	t54 = ((x225<=x226)&(x227/x228));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x229 = INT32_MIN;
	int16_t x230 = 14;
	uint16_t x231 = 5001U;
	uint16_t x232 = UINT16_MAX;
	int32_t t55 = 3509;

	t55 = ((x229<=x230)&(x231/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x233 = UINT8_MAX;
	static volatile int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	static int64_t x236 = -186559369244014891LL;

	t56 = ((x233<=x234)&(x235/x236));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x241 = UINT16_MAX;
	int8_t x243 = INT8_MIN;
	volatile uint32_t t57 = 10124986U;

	t57 = ((x241<=x242)&(x243/x244));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x246 = UINT32_MAX;
	int64_t x247 = -1LL;
	static uint16_t x248 = 4115U;
	volatile int64_t t58 = -89LL;

	t58 = ((x245<=x246)&(x247/x248));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x251 = INT64_MAX;
	volatile int64_t t59 = 1LL;

	t59 = ((x249<=x250)&(x251/x252));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x253 = INT16_MAX;
	int16_t x254 = INT16_MIN;
	volatile int8_t x255 = 0;
	volatile int32_t t60 = -2447;

	t60 = ((x253<=x254)&(x255/x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x257 = 49U;
	uint8_t x259 = 3U;
	int64_t x260 = -1LL;

	t61 = ((x257<=x258)&(x259/x260));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x262 = UINT32_MAX;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = INT32_MAX;
	uint32_t t62 = 1479744U;

	t62 = ((x261<=x262)&(x263/x264));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	int8_t x266 = -1;
	int8_t x267 = -1;
	static uint8_t x268 = UINT8_MAX;

	t63 = ((x265<=x266)&(x267/x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x269 = 18175539;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = 9U;
	int8_t x272 = INT8_MIN;
	static int32_t t64 = -77895190;

	t64 = ((x269<=x270)&(x271/x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = -1;
	static int8_t x275 = 1;
	int8_t x276 = 2;
	volatile int32_t t65 = -960682745;

	t65 = ((x273<=x274)&(x275/x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = 5U;
	uint8_t x278 = 15U;
	uint16_t x279 = 8433U;
	uint32_t x280 = UINT32_MAX;
	static uint32_t t66 = 338499425U;

	t66 = ((x277<=x278)&(x279/x280));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -1;
	volatile int8_t x282 = 1;
	int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MAX;

	t67 = ((x281<=x282)&(x283/x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = INT16_MIN;
	int64_t x286 = INT64_MAX;
	int16_t x287 = INT16_MIN;
	static volatile int64_t t68 = -132433124725101684LL;

	t68 = ((x285<=x286)&(x287/x288));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = -1;
	uint8_t x290 = 28U;
	uint64_t x291 = UINT64_MAX;
	uint64_t t69 = 7321351926245LLU;

	t69 = ((x289<=x290)&(x291/x292));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = INT16_MIN;
	static uint64_t x295 = 748838570301LLU;
	int64_t x296 = INT64_MAX;
	uint64_t t70 = 128LLU;

	t70 = ((x293<=x294)&(x295/x296));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = UINT64_MAX;
	static int64_t x298 = 3060320595LL;
	int64_t t71 = 2248117762600LL;

	t71 = ((x297<=x298)&(x299/x300));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = 30211924;
	volatile int8_t x302 = INT8_MAX;
	static int32_t x303 = INT32_MAX;
	volatile uint32_t t72 = 55U;

	t72 = ((x301<=x302)&(x303/x304));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x306 = 104295816366LL;
	static int64_t x307 = -1LL;
	int16_t x308 = INT16_MIN;
	int64_t t73 = 303044133938345447LL;

	t73 = ((x305<=x306)&(x307/x308));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 61U;
	uint16_t x310 = 1528U;
	int16_t x311 = 1426;
	uint64_t x312 = UINT64_MAX;
	uint64_t t74 = 864783575213544LLU;

	t74 = ((x309<=x310)&(x311/x312));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x314 = INT32_MIN;
	volatile int16_t x315 = -23;
	uint8_t x316 = UINT8_MAX;
	static volatile int32_t t75 = -401409966;

	t75 = ((x313<=x314)&(x315/x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x317 = 0U;
	static volatile int16_t x319 = 2;
	int32_t t76 = -2075849;

	t76 = ((x317<=x318)&(x319/x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x324 = INT16_MIN;

	t77 = ((x321<=x322)&(x323/x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x325 = -1;
	int8_t x326 = -1;
	int32_t x327 = 6;
	int8_t x328 = -1;
	static int32_t t78 = -10606;

	t78 = ((x325<=x326)&(x327/x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x329 = INT16_MAX;
	volatile int8_t x330 = 14;
	volatile int8_t x331 = INT8_MIN;

	t79 = ((x329<=x330)&(x331/x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x334 = INT16_MIN;
	int8_t x335 = 21;
	static uint64_t x336 = UINT64_MAX;
	volatile uint64_t t80 = 532128LLU;

	t80 = ((x333<=x334)&(x335/x336));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = 51905305LL;
	static int64_t x338 = -61969LL;
	static uint16_t x339 = UINT16_MAX;
	int16_t x340 = -1;

	t81 = ((x337<=x338)&(x339/x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x342 = -1LL;
	uint16_t x343 = 870U;
	uint32_t x344 = UINT32_MAX;
	uint32_t t82 = 42230247U;

	t82 = ((x341<=x342)&(x343/x344));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = 16836902956422398LL;
	int32_t x347 = INT32_MIN;
	static volatile int64_t x348 = INT64_MIN;
	int64_t t83 = -16394692479472LL;

	t83 = ((x345<=x346)&(x347/x348));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x351 = 255892;
	int32_t t84 = 23054;

	t84 = ((x349<=x350)&(x351/x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x353 = INT8_MAX;
	static int8_t x354 = -1;
	uint16_t x355 = 45U;
	volatile int64_t t85 = -1548137758259698LL;

	t85 = ((x353<=x354)&(x355/x356));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x357 = INT64_MIN;
	uint16_t x358 = 0U;
	volatile int32_t x360 = INT32_MAX;
	int32_t t86 = 31298;

	t86 = ((x357<=x358)&(x359/x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x361 = UINT8_MAX;
	volatile int32_t x362 = -46306250;
	int32_t x364 = INT32_MAX;
	uint32_t t87 = 157907U;

	t87 = ((x361<=x362)&(x363/x364));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = INT16_MAX;
	static int8_t x366 = 5;
	uint64_t x367 = UINT64_MAX;
	uint64_t t88 = 1069411873LLU;

	t88 = ((x365<=x366)&(x367/x368));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x370 = INT32_MAX;
	volatile int16_t x371 = INT16_MIN;
	volatile int16_t x372 = -16;
	volatile int32_t t89 = 1282;

	t89 = ((x369<=x370)&(x371/x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x374 = -1;
	uint32_t x375 = UINT32_MAX;
	uint8_t x376 = 1U;

	t90 = ((x373<=x374)&(x375/x376));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = -1;
	uint64_t x378 = UINT64_MAX;
	uint32_t x379 = 235U;
	uint16_t x380 = UINT16_MAX;
	uint32_t t91 = 18U;

	t91 = ((x377<=x378)&(x379/x380));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x381 = -52;
	int64_t x382 = -1LL;
	uint16_t x383 = 2782U;
	static volatile int64_t x384 = INT64_MIN;

	t92 = ((x381<=x382)&(x383/x384));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MAX;
	int64_t x386 = INT64_MIN;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = -1;

	t93 = ((x385<=x386)&(x387/x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = INT64_MAX;
	uint32_t x390 = 1028814945U;
	static uint64_t x391 = UINT64_MAX;
	uint32_t x392 = 13254U;
	static uint64_t t94 = 6620620LLU;

	t94 = ((x389<=x390)&(x391/x392));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x394 = INT8_MIN;
	int64_t x395 = 87432123611858394LL;
	int32_t x396 = INT32_MIN;
	static int64_t t95 = -3989LL;

	t95 = ((x393<=x394)&(x395/x396));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = -26;
	volatile int8_t x398 = -1;
	uint16_t x399 = 184U;
	int64_t x400 = INT64_MAX;
	int64_t t96 = 4944LL;

	t96 = ((x397<=x398)&(x399/x400));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = -1;
	uint32_t x403 = 74609841U;
	int32_t x404 = -1;

	t97 = ((x401<=x402)&(x403/x404));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = -1LL;
	int16_t x406 = INT16_MIN;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = INT16_MIN;
	int32_t t98 = 8176;

	t98 = ((x405<=x406)&(x407/x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x410 = 1;
	uint32_t x411 = UINT32_MAX;
	int8_t x412 = INT8_MAX;
	static volatile uint32_t t99 = 419U;

	t99 = ((x409<=x410)&(x411/x412));

	if (t99 != 0U) { NG(); } else { ; }
	
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

