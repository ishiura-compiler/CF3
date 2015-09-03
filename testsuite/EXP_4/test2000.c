#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = 1944667110576703LL;
volatile int64_t t1 = -4126800LL;
int32_t x11 = INT32_MAX;
volatile int64_t t2 = 17551LL;
int64_t t3 = -11141LL;
int64_t x22 = INT64_MAX;
volatile int64_t t5 = INT64_MAX;
static uint32_t x36 = 30U;
int32_t x45 = INT32_MIN;
uint32_t x48 = 92567198U;
volatile uint64_t t12 = 8116937943154169430LLU;
static uint64_t x54 = 0LLU;
uint64_t x55 = 20970LLU;
volatile uint16_t x58 = 8544U;
volatile int64_t x71 = -1LL;
static int16_t x72 = INT16_MAX;
int64_t t18 = 85118LL;
uint8_t x81 = 9U;
uint32_t x87 = 2630149U;
int8_t x89 = INT8_MIN;
volatile int16_t x91 = INT16_MAX;
int8_t x93 = INT8_MAX;
int64_t t23 = -81354869267979458LL;
uint8_t x104 = 2U;
volatile int32_t t26 = -2513903;
static uint64_t x114 = 4521355LLU;
volatile uint64_t x120 = 2850383887LLU;
int16_t x122 = -1;
int16_t x123 = INT16_MIN;
uint16_t x127 = 656U;
uint32_t x132 = 577U;
uint64_t x139 = 43304789708LLU;
volatile int32_t x140 = INT32_MIN;
int16_t x148 = 40;
uint64_t x151 = 2LLU;
static uint32_t x153 = 11025U;
uint8_t x155 = 51U;
int16_t x156 = -93;
int8_t x160 = -3;
int8_t x161 = INT8_MIN;
int32_t x165 = INT32_MAX;
uint64_t x167 = UINT64_MAX;
static volatile uint64_t t41 = 480681989460765LLU;
uint8_t x169 = 13U;
static int32_t t44 = 5;
uint16_t x182 = 0U;
volatile uint64_t x186 = 18862LLU;
uint32_t x187 = 19U;
static volatile int64_t x191 = 2379407449LL;
static volatile int64_t t47 = -20613044LL;
static volatile int32_t x194 = -2;
static int16_t x208 = -1;
int16_t x210 = INT16_MIN;
volatile int16_t x215 = 32;
uint8_t x216 = 111U;
uint8_t x226 = 3U;
int16_t x231 = INT16_MAX;
uint64_t x241 = UINT64_MAX;
static int32_t x243 = INT32_MAX;
int8_t x247 = INT8_MAX;
uint8_t x248 = 12U;
uint64_t t61 = 487626212295049529LLU;
static uint16_t x249 = 28661U;
volatile uint8_t x255 = 95U;
uint16_t x260 = UINT16_MAX;
volatile uint8_t x266 = 78U;
static int16_t x267 = 1;
int8_t x270 = INT8_MAX;
int64_t x278 = INT64_MAX;
uint64_t t69 = 502367294998271LLU;
volatile int64_t x286 = INT64_MIN;
volatile uint16_t x293 = UINT16_MAX;
int64_t x302 = INT64_MIN;
static int8_t x304 = INT8_MIN;
static int64_t t75 = INT64_MIN;
static int8_t x307 = 6;
volatile uint32_t x310 = UINT32_MAX;
int32_t t78 = 177380613;
int8_t x325 = -30;
int16_t x330 = -1;
static int32_t t82 = 738;
static volatile int64_t x337 = INT64_MAX;
volatile int8_t x342 = INT8_MAX;
int8_t x357 = INT8_MIN;
int64_t x358 = -1LL;
static volatile int8_t x362 = INT8_MIN;
int32_t x364 = -546;
static volatile int32_t t90 = 519407;
volatile int8_t x366 = INT8_MAX;
int32_t x368 = -513;
uint64_t x369 = UINT64_MAX;
volatile uint32_t x370 = UINT32_MAX;
static volatile uint8_t x380 = 2U;
int16_t x385 = -1;
int16_t x386 = INT16_MIN;
uint64_t x394 = UINT64_MAX;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	int16_t x2 = INT16_MIN;
	int32_t x4 = INT32_MIN;
	int64_t t0 = 133674LL;

	t0 = (x1&(x2&(x3|x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	volatile int32_t x6 = -1360;
	static int8_t x7 = INT8_MIN;
	static int64_t x8 = -3221725LL;

	t1 = (x5&(x6&(x7|x8)));

	if (t1 != -1408LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	volatile int8_t x10 = INT8_MIN;
	uint16_t x12 = 15168U;

	t2 = (x9&(x10&(x11|x12)));

	if (t2 != 2147483520LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -1LL;
	int8_t x14 = INT8_MIN;
	uint32_t x15 = 684540U;
	uint16_t x16 = 0U;

	t3 = (x13&(x14&(x15|x16)));

	if (t3 != 684416LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 63U;
	int8_t x18 = INT8_MIN;
	volatile int32_t x19 = INT32_MAX;
	uint16_t x20 = 7U;
	int32_t t4 = 57603;

	t4 = (x17&(x18&(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int32_t x23 = INT32_MIN;
	volatile int32_t x24 = -1;

	t5 = (x21&(x22&(x23|x24)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	volatile uint32_t x26 = 96367U;
	int8_t x27 = INT8_MAX;
	uint64_t x28 = 2351059873788LLU;
	static uint64_t t6 = 0LLU;

	t6 = (x25&(x26&(x27|x28)));

	if (t6 != 10351LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int16_t x30 = -127;
	int16_t x31 = -1;
	int8_t x32 = -1;
	static int32_t t7 = -806868049;

	t7 = (x29&(x30&(x31|x32)));

	if (t7 != 2147483521) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 6U;
	uint64_t x34 = 5554693158291896LLU;
	volatile uint8_t x35 = 4U;
	static volatile uint64_t t8 = 0LLU;

	t8 = (x33&(x34&(x35|x36)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	static volatile uint64_t x38 = 46LLU;
	int16_t x39 = 113;
	static volatile uint8_t x40 = 2U;
	uint64_t t9 = 111921520482LLU;

	t9 = (x37&(x38&(x39|x40)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 96620976U;
	int64_t x42 = 0LL;
	volatile int32_t x43 = 6;
	int32_t x44 = INT32_MIN;
	volatile int64_t t10 = -10790285LL;

	t10 = (x41&(x42&(x43|x44)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = -1;
	int32_t x47 = INT32_MAX;
	uint32_t t11 = 30U;

	t11 = (x45&(x46&(x47|x48)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 40441LLU;
	static int8_t x50 = INT8_MIN;
	int16_t x51 = 905;
	volatile uint64_t x52 = 24LLU;

	t12 = (x49&(x50&(x51|x52)));

	if (t12 != 384LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MAX;
	int8_t x56 = -1;
	volatile uint64_t t13 = 10LLU;

	t13 = (x53&(x54&(x55|x56)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 202168691U;
	int16_t x59 = INT16_MIN;
	int32_t x60 = -46;
	uint32_t t14 = 1U;

	t14 = (x57&(x58&(x59|x60)));

	if (t14 != 320U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	static int64_t x62 = INT64_MIN;
	uint32_t x63 = 46741983U;
	int8_t x64 = INT8_MIN;
	volatile int64_t t15 = -5317677321LL;

	t15 = (x61&(x62&(x63|x64)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -215547LL;
	volatile int64_t x66 = INT64_MAX;
	uint16_t x67 = UINT16_MAX;
	int32_t x68 = 3688;
	volatile int64_t t16 = 8LL;

	t16 = (x65&(x66&(x67|x68)));

	if (t16 != 46597LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 95441676U;
	static int16_t x70 = 2;
	volatile int64_t t17 = -30313027051535LL;

	t17 = (x69&(x70&(x71|x72)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x73 = INT64_MAX;
	int16_t x74 = 1;
	int16_t x75 = -1;
	uint16_t x76 = 1959U;

	t18 = (x73&(x74&(x75|x76)));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 6U;
	volatile uint64_t x78 = 932894843651047262LLU;
	int16_t x79 = -1;
	uint8_t x80 = 45U;
	uint64_t t19 = 60LLU;

	t19 = (x77&(x78&(x79|x80)));

	if (t19 != 6LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 3U;
	int16_t x83 = 1;
	int8_t x84 = -1;
	int32_t t20 = -758991195;

	t20 = (x81&(x82&(x83|x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	static int64_t x86 = INT64_MAX;
	static volatile uint8_t x88 = UINT8_MAX;
	int64_t t21 = -7442037897456LL;

	t21 = (x85&(x86&(x87|x88)));

	if (t21 != 2630399LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MAX;
	int16_t x92 = INT16_MIN;
	static int64_t t22 = 3826750434725298601LL;

	t22 = (x89&(x90&(x91|x92)));

	if (t22 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = -6397LL;
	int32_t x95 = INT32_MIN;
	volatile int32_t x96 = 914896509;

	t23 = (x93&(x94&(x95|x96)));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MIN;
	int8_t x100 = -15;
	int64_t t24 = 2889040LL;

	t24 = (x97&(x98&(x99|x100)));

	if (t24 != 32753LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = 3758;
	static volatile int8_t x102 = INT8_MAX;
	int16_t x103 = INT16_MIN;
	volatile int32_t t25 = -25;

	t25 = (x101&(x102&(x103|x104)));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x106 = UINT8_MAX;
	static uint8_t x107 = UINT8_MAX;
	int32_t x108 = INT32_MIN;

	t26 = (x105&(x106&(x107|x108)));

	if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int32_t x110 = 1;
	volatile int64_t x111 = -29416698266LL;
	int32_t x112 = -57;
	volatile int64_t t27 = 232213386655732950LL;

	t27 = (x109&(x110&(x111|x112)));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -4;
	int64_t x115 = 2129202312716453LL;
	int32_t x116 = INT32_MAX;
	uint64_t t28 = 2173913021041413312LLU;

	t28 = (x113&(x114&(x115|x116)));

	if (t28 != 4521352LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MIN;
	uint16_t x118 = UINT16_MAX;
	uint8_t x119 = 11U;
	volatile uint64_t t29 = 126024642LLU;

	t29 = (x117&(x118&(x119|x120)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int8_t x124 = INT8_MAX;
	int32_t t30 = 147039;

	t30 = (x121&(x122&(x123|x124)));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = UINT8_MAX;
	uint64_t x126 = 2448251LLU;
	int32_t x128 = INT32_MAX;
	uint64_t t31 = 111174331568LLU;

	t31 = (x125&(x126&(x127|x128)));

	if (t31 != 123LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MIN;
	static int32_t x130 = INT32_MIN;
	uint64_t x131 = 32619467929926703LLU;
	uint64_t t32 = 3801045171089836LLU;

	t32 = (x129&(x130&(x131|x132)));

	if (t32 != 32619467011784704LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	int16_t x134 = INT16_MAX;
	int64_t x135 = INT64_MIN;
	static int64_t x136 = INT64_MIN;
	int64_t t33 = -145LL;

	t33 = (x133&(x134&(x135|x136)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 22822U;
	int8_t x138 = INT8_MIN;
	uint64_t t34 = 8715224834678LLU;

	t34 = (x137&(x138&(x139|x140)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	int32_t x142 = -702030812;
	int16_t x143 = 29;
	int64_t x144 = INT64_MAX;
	int64_t t35 = 48436558254982413LL;

	t35 = (x141&(x142&(x143|x144)));

	if (t35 != 23588LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	volatile int16_t x146 = 0;
	int64_t x147 = -12218LL;
	volatile int64_t t36 = 0LL;

	t36 = (x145&(x146&(x147|x148)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int16_t x150 = INT16_MAX;
	static int8_t x152 = -1;
	volatile uint64_t t37 = 54370566102676LLU;

	t37 = (x149&(x150&(x151|x152)));

	if (t37 != 32767LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x154 = UINT64_MAX;
	volatile uint64_t t38 = 3096LLU;

	t38 = (x153&(x154&(x155|x156)));

	if (t38 != 11025LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	uint64_t x158 = 2278LLU;
	uint16_t x159 = 573U;
	volatile uint64_t t39 = 3204LLU;

	t39 = (x157&(x158&(x159|x160)));

	if (t39 != 2276LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x162 = 781U;
	volatile int32_t x163 = -1;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = 2765871;

	t40 = (x161&(x162&(x163|x164)));

	if (t40 != 768) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 0U;
	volatile int8_t x168 = INT8_MIN;

	t41 = (x165&(x166&(x167|x168)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x170 = 2;
	int64_t x171 = INT64_MAX;
	static int16_t x172 = 7;
	volatile int64_t t42 = -284723890937553131LL;

	t42 = (x169&(x170&(x171|x172)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -43;
	int64_t x174 = -3206756339825855328LL;
	static int64_t x175 = INT64_MIN;
	uint8_t x176 = 0U;
	volatile int64_t t43 = INT64_MIN;

	t43 = (x173&(x174&(x175|x176)));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MIN;
	int8_t x178 = -2;
	static int8_t x179 = 0;
	int16_t x180 = -900;

	t44 = (x177&(x178&(x179|x180)));

	if (t44 != -1024) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MAX;
	int64_t x183 = -1LL;
	static int16_t x184 = 12897;
	volatile int64_t t45 = -2762372101LL;

	t45 = (x181&(x182&(x183|x184)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x185 = 1U;
	uint64_t x188 = UINT64_MAX;
	uint64_t t46 = 22981302LLU;

	t46 = (x185&(x186&(x187|x188)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	int8_t x190 = INT8_MAX;
	int32_t x192 = 45637408;

	t47 = (x189&(x190&(x191|x192)));

	if (t47 != 121LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 4267048961LLU;
	uint16_t x195 = UINT16_MAX;
	int32_t x196 = INT32_MIN;
	uint64_t t48 = 0LLU;

	t48 = (x193&(x194&(x195|x196)));

	if (t48 != 2147483648LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	volatile int8_t x198 = INT8_MIN;
	volatile int16_t x199 = -1;
	int16_t x200 = INT16_MIN;
	int32_t t49 = 378328187;

	t49 = (x197&(x198&(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 59665LLU;
	int32_t x202 = 70509292;
	uint32_t x203 = 4U;
	uint64_t x204 = 39645833897LLU;
	volatile uint64_t t50 = 13LLU;

	t50 = (x201&(x202&(x203|x204)));

	if (t50 != 24576LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -6990906;
	uint8_t x206 = 0U;
	int32_t x207 = INT32_MIN;
	volatile int32_t t51 = -172453;

	t51 = (x205&(x206&(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 38U;
	int16_t x211 = INT16_MIN;
	int64_t x212 = -633903892560784LL;
	int64_t t52 = 8433711009LL;

	t52 = (x209&(x210&(x211|x212)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	uint64_t x214 = 1736648LLU;
	static volatile uint64_t t53 = 23594316431293919LLU;

	t53 = (x213&(x214&(x215|x216)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = 7448U;
	int64_t x218 = -1LL;
	volatile int8_t x219 = 58;
	static int8_t x220 = 1;
	int64_t t54 = 205240318LL;

	t54 = (x217&(x218&(x219|x220)));

	if (t54 != 24LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = -1940007508105143LL;
	int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MAX;
	int32_t x224 = 443122;
	volatile int64_t t55 = -6803595586011399LL;

	t55 = (x221&(x222&(x223|x224)));

	if (t55 != 393216LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = -1;
	int32_t t56 = 0;

	t56 = (x225&(x226&(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -1;
	volatile uint8_t x230 = 4U;
	volatile int8_t x232 = -1;
	static int32_t t57 = 60334;

	t57 = (x229&(x230&(x231|x232)));

	if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MAX;
	uint64_t x234 = UINT64_MAX;
	uint64_t x235 = UINT64_MAX;
	uint32_t x236 = 19475U;
	volatile uint64_t t58 = 1997012586323473LLU;

	t58 = (x233&(x234&(x235|x236)));

	if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x237 = INT32_MIN;
	int64_t x238 = 1532549864708729LL;
	static int32_t x239 = INT32_MIN;
	uint8_t x240 = 49U;
	int64_t t59 = -27484734721304LL;

	t59 = (x237&(x238&(x239|x240)));

	if (t59 != 1532549557911552LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = 0U;
	int64_t x244 = -8271450646800LL;
	uint64_t t60 = 0LLU;

	t60 = (x241&(x242&(x243|x244)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = UINT64_MAX;
	int8_t x246 = -1;

	t61 = (x245&(x246&(x247|x248)));

	if (t61 != 127LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = 0;
	int8_t x251 = 7;
	int16_t x252 = -1;
	static volatile int32_t t62 = -2647;

	t62 = (x249&(x250&(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	static uint8_t x254 = 1U;
	int8_t x256 = 0;
	volatile int64_t t63 = 644543042LL;

	t63 = (x253&(x254&(x255|x256)));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	static uint32_t x258 = UINT32_MAX;
	uint16_t x259 = UINT16_MAX;
	static volatile uint32_t t64 = 23U;

	t64 = (x257&(x258&(x259|x260)));

	if (t64 != 65535U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 133966LLU;
	uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	volatile uint16_t x264 = 1790U;
	volatile uint64_t t65 = 1864594318457270LLU;

	t65 = (x261&(x262&(x263|x264)));

	if (t65 != 590LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = -1LL;
	int8_t x268 = -15;
	volatile int64_t t66 = -13384LL;

	t66 = (x265&(x266&(x267|x268)));

	if (t66 != 64LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	uint16_t x271 = UINT16_MAX;
	int8_t x272 = INT8_MIN;
	int32_t t67 = -35907362;

	t67 = (x269&(x270&(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = -1;
	static int8_t x274 = -1;
	volatile uint32_t x275 = 7960U;
	int32_t x276 = INT32_MIN;
	volatile uint32_t t68 = 3U;

	t68 = (x273&(x274&(x275|x276)));

	if (t68 != 2147491608U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	static uint64_t x279 = 168606350LLU;
	uint32_t x280 = 0U;

	t69 = (x277&(x278&(x279|x280)));

	if (t69 != 168606350LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	int16_t x282 = INT16_MAX;
	volatile uint64_t x283 = 15153795123767744LLU;
	uint8_t x284 = 59U;
	volatile uint64_t t70 = 15502023162LLU;

	t70 = (x281&(x282&(x283|x284)));

	if (t70 != 27131LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	uint8_t x287 = 49U;
	int8_t x288 = -1;
	static volatile int64_t t71 = INT64_MIN;

	t71 = (x285&(x286&(x287|x288)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	int16_t x290 = 2155;
	volatile uint32_t x291 = UINT32_MAX;
	static int32_t x292 = -1;
	volatile int64_t t72 = 3436325652LL;

	t72 = (x289&(x290&(x291|x292)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = INT16_MAX;
	static int16_t x295 = INT16_MAX;
	volatile int8_t x296 = INT8_MAX;
	volatile int32_t t73 = 0;

	t73 = (x293&(x294&(x295|x296)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	uint8_t x298 = 6U;
	int8_t x299 = INT8_MIN;
	static int64_t x300 = INT64_MAX;
	volatile int64_t t74 = 918084305488862LL;

	t74 = (x297&(x298&(x299|x300)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -13LL;
	int16_t x303 = INT16_MAX;

	t75 = (x301&(x302&(x303|x304)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 24U;
	uint16_t x306 = UINT16_MAX;
	volatile int64_t x308 = 108831320512924988LL;
	int64_t t76 = -14667112825671348LL;

	t76 = (x305&(x306&(x307|x308)));

	if (t76 != 24LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	int64_t x311 = -114788797LL;
	uint32_t x312 = UINT32_MAX;
	int64_t t77 = 170053LL;

	t77 = (x309&(x310&(x311|x312)));

	if (t77 != 32767LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	volatile int32_t x314 = -571036021;
	volatile int8_t x315 = 1;
	volatile uint16_t x316 = 31744U;

	t78 = (x313&(x314&(x315|x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	uint16_t x318 = UINT16_MAX;
	int16_t x319 = -2983;
	int16_t x320 = 1;
	static uint32_t t79 = 6199668U;

	t79 = (x317&(x318&(x319|x320)));

	if (t79 != 62553U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 122800LL;
	uint64_t x322 = 7685561114573274552LLU;
	uint32_t x323 = 375076U;
	uint16_t x324 = 24U;
	volatile uint64_t t80 = 267382321995976LLU;

	t80 = (x321&(x322&(x323|x324)));

	if (t80 != 104752LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	int16_t x328 = 1193;
	int32_t t81 = -2230;

	t81 = (x325&(x326&(x327|x328)));

	if (t81 != 65506) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	static int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;

	t82 = (x329&(x330&(x331|x332)));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	volatile uint64_t x334 = 6089164105LLU;
	int64_t x335 = INT64_MIN;
	static uint32_t x336 = 29094542U;
	uint64_t t83 = 7777297307927086LLU;

	t83 = (x333&(x334&(x335|x336)));

	if (t83 != 11616264LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = INT8_MIN;
	static uint16_t x339 = 4U;
	int16_t x340 = INT16_MAX;
	int64_t t84 = 16543071438563LL;

	t84 = (x337&(x338&(x339|x340)));

	if (t84 != 32640LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int8_t x343 = INT8_MIN;
	int64_t x344 = -1LL;
	int64_t t85 = 13741LL;

	t85 = (x341&(x342&(x343|x344)));

	if (t85 != 127LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 6013000368521775020LLU;
	int32_t x346 = INT32_MIN;
	uint16_t x347 = 193U;
	uint8_t x348 = 2U;
	volatile uint64_t t86 = 92609LLU;

	t86 = (x345&(x346&(x347|x348)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	volatile uint8_t x350 = 51U;
	volatile int8_t x351 = INT8_MAX;
	volatile uint64_t x352 = UINT64_MAX;
	static uint64_t t87 = 1149006974053570228LLU;

	t87 = (x349&(x350&(x351|x352)));

	if (t87 != 51LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = 160282LLU;
	int64_t x354 = INT64_MIN;
	volatile int8_t x355 = INT8_MIN;
	static uint64_t x356 = 284LLU;
	volatile uint64_t t88 = 16537750073121LLU;

	t88 = (x353&(x354&(x355|x356)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x359 = -306LL;
	uint32_t x360 = 1U;
	volatile int64_t t89 = -4902408LL;

	t89 = (x357&(x358&(x359|x360)));

	if (t89 != -384LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	volatile int8_t x363 = INT8_MIN;

	t90 = (x361&(x362&(x363|x364)));

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x365 = 12433326LLU;
	uint64_t x367 = 1LLU;
	uint64_t t91 = 21LLU;

	t91 = (x365&(x366&(x367|x368)));

	if (t91 != 46LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x371 = INT32_MAX;
	int32_t x372 = 291285922;
	uint64_t t92 = 8194LLU;

	t92 = (x369&(x370&(x371|x372)));

	if (t92 != 2147483647LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MIN;
	uint16_t x375 = UINT16_MAX;
	int16_t x376 = INT16_MAX;
	int32_t t93 = -2759141;

	t93 = (x373&(x374&(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	uint8_t x378 = UINT8_MAX;
	uint16_t x379 = 1U;
	static volatile int32_t t94 = 45;

	t94 = (x377&(x378&(x379|x380)));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x381 = UINT8_MAX;
	int64_t x382 = 598175LL;
	int64_t x383 = INT64_MIN;
	int64_t x384 = INT64_MIN;
	static volatile int64_t t95 = -658913510137324063LL;

	t95 = (x381&(x382&(x383|x384)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x387 = UINT64_MAX;
	volatile uint64_t x388 = 3028623766725145LLU;
	static volatile uint64_t t96 = 1865191005LLU;

	t96 = (x385&(x386&(x387|x388)));

	if (t96 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 61U;
	int8_t x390 = 13;
	int32_t x391 = INT32_MAX;
	int16_t x392 = -1;
	int32_t t97 = 1;

	t97 = (x389&(x390&(x391|x392)));

	if (t97 != 13) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	uint64_t x395 = 939070408LLU;
	static volatile uint64_t x396 = 3LLU;
	volatile uint64_t t98 = 645470LLU;

	t98 = (x393&(x394&(x395|x396)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MAX;
	int64_t x398 = INT64_MAX;
	uint16_t x399 = UINT16_MAX;
	volatile int8_t x400 = INT8_MAX;
	int64_t t99 = -4008476052LL;

	t99 = (x397&(x398&(x399|x400)));

	if (t99 != 32767LL) { NG(); } else { ; }
	
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

