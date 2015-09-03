#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x1 = -14267;
volatile int64_t x8 = INT64_MIN;
int8_t x9 = -1;
int32_t x24 = INT32_MAX;
volatile int8_t x30 = INT8_MIN;
int32_t x31 = -1;
int8_t x32 = INT8_MAX;
int8_t x34 = INT8_MAX;
uint64_t x35 = 53699210703034625LLU;
int32_t x36 = INT32_MIN;
static int8_t x38 = INT8_MIN;
uint16_t x44 = UINT16_MAX;
static int8_t x45 = INT8_MIN;
int8_t x59 = INT8_MIN;
volatile int32_t x64 = INT32_MAX;
volatile uint32_t x65 = UINT32_MAX;
volatile int16_t x66 = INT16_MIN;
int32_t x70 = -31111954;
int32_t x72 = -65326970;
int64_t x77 = -1LL;
volatile int8_t x92 = -38;
int8_t x94 = INT8_MIN;
int16_t x97 = INT16_MIN;
int64_t x98 = 4379668312171227132LL;
static uint16_t x102 = UINT16_MAX;
volatile uint32_t x103 = 0U;
volatile int16_t x104 = -2;
int32_t t25 = -72;
uint16_t x105 = UINT16_MAX;
volatile int8_t x106 = -1;
static uint8_t x114 = UINT8_MAX;
int32_t t28 = -7;
uint64_t x129 = UINT64_MAX;
int64_t x134 = -1343359567LL;
uint64_t x136 = UINT64_MAX;
volatile int32_t x137 = -1;
uint64_t x144 = 219535LLU;
uint64_t t35 = 169960214769911550LLU;
int32_t x152 = INT32_MAX;
static volatile int8_t x154 = 0;
int64_t x167 = INT64_MIN;
uint8_t x170 = 109U;
int64_t x177 = -2048159107648LL;
int16_t x181 = -9923;
static volatile int8_t x183 = 14;
int8_t x187 = 8;
int32_t x189 = 766;
static int64_t x196 = -1LL;
uint32_t x198 = 510U;
int8_t x201 = -1;
uint8_t x202 = 6U;
static volatile int64_t x205 = -1381066063467518431LL;
static int32_t t52 = -36953541;
int16_t x216 = 404;
static volatile int16_t x218 = INT16_MAX;
int8_t x219 = INT8_MAX;
int16_t x227 = INT16_MIN;
static int16_t x238 = 16;
static int32_t x244 = INT32_MAX;
int16_t x246 = -1;
int64_t x256 = 4603LL;
static int16_t x260 = INT16_MAX;
volatile int64_t x261 = INT64_MIN;
int64_t x264 = INT64_MAX;
int64_t t65 = 59LL;
volatile int8_t x266 = -1;
int16_t x267 = INT16_MIN;
uint64_t x269 = 1713425088335LLU;
int16_t x271 = INT16_MIN;
int64_t x277 = INT64_MIN;
volatile int8_t x279 = 21;
static uint32_t x287 = 5U;
volatile int16_t x288 = -1;
uint8_t x293 = 53U;
static volatile uint16_t x295 = 12820U;
volatile uint32_t x300 = 193967921U;
uint64_t x301 = 10902862638498514LLU;
uint8_t x303 = 1U;
int16_t x310 = 412;
int32_t x313 = INT32_MIN;
int16_t x317 = -1;
uint64_t x336 = UINT64_MAX;
static int16_t x348 = INT16_MIN;
int8_t x349 = -7;
static int64_t x364 = 2695315253539066867LL;
volatile int16_t x372 = INT16_MIN;
int64_t x376 = 3318060680042789LL;
volatile int64_t t94 = -325650283LL;
volatile int32_t t96 = -1;
int8_t x389 = 2;
volatile int32_t t97 = 243;
uint64_t x396 = UINT64_MAX;
int16_t x397 = 585;


void f0(void) {
	static volatile uint16_t x2 = UINT16_MAX;
	volatile int64_t x3 = INT64_MIN;
	int32_t x4 = -1535151;
	static int32_t t0 = -141;

	t0 = (x1&(x2*(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 482586LL;
	static uint8_t x6 = 0U;
	static uint16_t x7 = 4U;
	volatile int64_t t1 = -6077763503405LL;

	t1 = (x5&(x6*(x7==x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 49U;
	uint16_t x11 = 2U;
	uint16_t x12 = 8599U;
	volatile int32_t t2 = 1491633;

	t2 = (x9&(x10*(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int32_t x14 = INT32_MAX;
	int64_t x15 = INT64_MIN;
	volatile int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 28LLU;

	t3 = (x13&(x14*(x15==x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 1351;
	int64_t x18 = 972139006LL;
	int64_t x19 = 1LL;
	int64_t x20 = INT64_MAX;
	static volatile int64_t t4 = -777152290413564LL;

	t4 = (x17&(x18*(x19==x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static int64_t x22 = INT64_MAX;
	static uint16_t x23 = 30U;
	int64_t t5 = 0LL;

	t5 = (x21&(x22*(x23==x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	volatile int8_t x26 = -4;
	int64_t x27 = INT64_MIN;
	volatile uint32_t x28 = 2372199U;
	static int64_t t6 = 111917624580LL;

	t6 = (x25&(x26*(x27==x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int32_t t7 = -10237;

	t7 = (x29&(x30*(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static int32_t t8 = 1;

	t8 = (x33&(x34*(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 11737U;
	int8_t x39 = 55;
	int16_t x40 = INT16_MAX;
	volatile int32_t t9 = 1;

	t9 = (x37&(x38*(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 78;
	int64_t x42 = -1LL;
	uint64_t x43 = UINT64_MAX;
	int64_t t10 = -3068333704340LL;

	t10 = (x41&(x42*(x43==x44)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x46 = 6858U;
	uint32_t x47 = 1409792252U;
	volatile int16_t x48 = 0;
	volatile uint32_t t11 = 21604U;

	t11 = (x45&(x46*(x47==x48)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -3926603;
	uint16_t x50 = UINT16_MAX;
	int32_t x51 = -671;
	static int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -1382506;

	t12 = (x49&(x50*(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MAX;
	volatile int8_t x54 = -1;
	static volatile int32_t x55 = 62681;
	static int16_t x56 = INT16_MAX;
	static volatile int32_t t13 = -1872711;

	t13 = (x53&(x54*(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile int32_t x58 = 28;
	static int8_t x60 = INT8_MIN;
	static volatile int32_t t14 = -62;

	t14 = (x57&(x58*(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x61 = 121LLU;
	int32_t x62 = INT32_MIN;
	volatile int32_t x63 = INT32_MIN;
	static volatile uint64_t t15 = 3LLU;

	t15 = (x61&(x62*(x63==x64)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x67 = 247772453973104627LL;
	int32_t x68 = INT32_MIN;
	uint32_t t16 = 7U;

	t16 = (x65&(x66*(x67==x68)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 395680LLU;
	static uint64_t x71 = UINT64_MAX;
	uint64_t t17 = 4898LLU;

	t17 = (x69&(x70*(x71==x72)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	int32_t x74 = 566;
	static uint16_t x75 = UINT16_MAX;
	uint8_t x76 = 124U;
	int32_t t18 = 0;

	t18 = (x73&(x74*(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = -1;
	volatile int16_t x79 = INT16_MIN;
	uint64_t x80 = UINT64_MAX;
	volatile int64_t t19 = -1LL;

	t19 = (x77&(x78*(x79==x80)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x81 = UINT8_MAX;
	static int32_t x82 = INT32_MAX;
	uint16_t x83 = 3U;
	uint16_t x84 = 25U;
	int32_t t20 = -1;

	t20 = (x81&(x82*(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 88867U;
	volatile int32_t x86 = -1;
	int32_t x87 = INT32_MAX;
	static int32_t x88 = INT32_MAX;
	uint32_t t21 = 0U;

	t21 = (x85&(x86*(x87==x88)));

	if (t21 != 88867U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -10514851;
	int32_t x90 = -1;
	int16_t x91 = INT16_MAX;
	int32_t t22 = 0;

	t22 = (x89&(x90*(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int8_t x95 = -1;
	static int16_t x96 = -1;
	int32_t t23 = -986710;

	t23 = (x93&(x94*(x95==x96)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x99 = 299332;
	uint16_t x100 = 0U;
	volatile int64_t t24 = 54LL;

	t24 = (x97&(x98*(x99==x100)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 3U;

	t25 = (x101&(x102*(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x107 = 3U;
	static int16_t x108 = INT16_MIN;
	int32_t t26 = 3796744;

	t26 = (x105&(x106*(x107==x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 3556LLU;
	volatile int32_t x110 = INT32_MIN;
	int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MIN;
	uint64_t t27 = 75868014904062LLU;

	t27 = (x109&(x110*(x111==x112)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	int16_t x115 = INT16_MIN;
	static int64_t x116 = 7848904888LL;

	t28 = (x113&(x114*(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	volatile int8_t x118 = INT8_MIN;
	static int64_t x119 = -10935159423831LL;
	int64_t x120 = -339050448565LL;
	volatile int32_t t29 = -24;

	t29 = (x117&(x118*(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -44LL;
	int8_t x122 = -1;
	int8_t x123 = -5;
	int64_t x124 = -1LL;
	int64_t t30 = 178579548479LL;

	t30 = (x121&(x122*(x123==x124)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x125 = 0;
	int8_t x126 = -6;
	volatile int32_t x127 = 11739284;
	int32_t x128 = INT32_MAX;
	volatile int32_t t31 = 473993003;

	t31 = (x125&(x126*(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x130 = INT64_MIN;
	int32_t x131 = -1;
	int64_t x132 = -1LL;
	volatile uint64_t t32 = 8429512707LLU;

	t32 = (x129&(x130*(x131==x132)));

	if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = UINT16_MAX;
	volatile int32_t x135 = -1;
	int64_t t33 = 49370784352721LL;

	t33 = (x133&(x134*(x135==x136)));

	if (t33 != 62897LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x138 = -299312;
	static int8_t x139 = INT8_MIN;
	volatile int32_t x140 = -5;
	static int32_t t34 = -796922746;

	t34 = (x137&(x138*(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	uint64_t x142 = 52355068LLU;
	int32_t x143 = INT32_MIN;

	t35 = (x141&(x142*(x143==x144)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = -1;
	volatile int8_t x146 = -1;
	static int16_t x147 = INT16_MIN;
	int16_t x148 = 3;
	int32_t t36 = 138279050;

	t36 = (x145&(x146*(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	volatile uint64_t x150 = UINT64_MAX;
	uint32_t x151 = 2116U;
	volatile uint64_t t37 = 5048696423LLU;

	t37 = (x149&(x150*(x151==x152)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 8520628035883LLU;
	volatile uint8_t x155 = UINT8_MAX;
	int8_t x156 = INT8_MIN;
	uint64_t t38 = 317006182LLU;

	t38 = (x153&(x154*(x155==x156)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1891291989LL;
	int8_t x158 = -12;
	int64_t x159 = INT64_MAX;
	int16_t x160 = INT16_MAX;
	static int64_t t39 = -341193396LL;

	t39 = (x157&(x158*(x159==x160)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -9288700438LL;
	uint32_t x162 = UINT32_MAX;
	volatile int8_t x163 = INT8_MIN;
	uint64_t x164 = 149163219882LLU;
	int64_t t40 = 2007375982771511LL;

	t40 = (x161&(x162*(x163==x164)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	int32_t x166 = -1070;
	int8_t x168 = INT8_MIN;
	uint64_t t41 = 14LLU;

	t41 = (x165&(x166*(x167==x168)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -2172710237LL;
	int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MIN;
	static volatile int64_t t42 = -561125756774671LL;

	t42 = (x169&(x170*(x171==x172)));

	if (t42 != 33LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -29;
	static volatile uint32_t x174 = 86U;
	volatile uint8_t x175 = 13U;
	int64_t x176 = INT64_MIN;
	volatile uint32_t t43 = 952U;

	t43 = (x173&(x174*(x175==x176)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x178 = INT8_MIN;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	int64_t t44 = -89LL;

	t44 = (x177&(x178*(x179==x180)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;
	int64_t x184 = INT64_MIN;
	volatile int32_t t45 = 1;

	t45 = (x181&(x182*(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	uint64_t x186 = 14LLU;
	int16_t x188 = -1;
	static uint64_t t46 = 8LLU;

	t46 = (x185&(x186*(x187==x188)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = INT32_MAX;
	int16_t x191 = -1;
	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = 30;

	t47 = (x189&(x190*(x191==x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = 3101878099LL;
	int16_t x195 = -13769;
	volatile int64_t t48 = -237127LL;

	t48 = (x193&(x194*(x195==x196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -224;
	uint32_t x199 = UINT32_MAX;
	static volatile int64_t x200 = -1LL;
	volatile uint32_t t49 = 31969U;

	t49 = (x197&(x198*(x199==x200)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x203 = 31;
	volatile uint16_t x204 = UINT16_MAX;
	int32_t t50 = -31704396;

	t50 = (x201&(x202*(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = 15549U;
	int16_t x207 = INT16_MIN;
	int8_t x208 = -1;
	int64_t t51 = 20018672LL;

	t51 = (x205&(x206*(x207==x208)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MAX;
	static int16_t x210 = INT16_MIN;
	static uint64_t x211 = UINT64_MAX;
	int8_t x212 = 39;

	t52 = (x209&(x210*(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x213 = 221U;
	int32_t x214 = INT32_MIN;
	int32_t x215 = 200;
	volatile int32_t t53 = -4591926;

	t53 = (x213&(x214*(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	uint64_t x220 = 74785155759254469LLU;
	static volatile int32_t t54 = -3;

	t54 = (x217&(x218*(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	static volatile int16_t x222 = INT16_MIN;
	static volatile int32_t x223 = INT32_MIN;
	int8_t x224 = -1;
	static int64_t t55 = 4048689851LL;

	t55 = (x221&(x222*(x223==x224)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 191689902;
	int8_t x226 = INT8_MAX;
	volatile uint32_t x228 = 2669023U;
	static volatile int32_t t56 = -6786;

	t56 = (x225&(x226*(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = INT64_MIN;
	uint64_t x231 = 2757761899927464LLU;
	uint8_t x232 = 1U;
	uint64_t t57 = 246880822LLU;

	t57 = (x229&(x230*(x231==x232)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -42;
	int16_t x234 = INT16_MIN;
	int16_t x235 = -1;
	int64_t x236 = -1LL;
	static volatile int32_t t58 = -90000;

	t58 = (x233&(x234*(x235==x236)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	uint32_t x239 = 245950U;
	volatile int16_t x240 = 0;
	volatile uint64_t t59 = 12167821386561LLU;

	t59 = (x237&(x238*(x239==x240)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	uint8_t x242 = 45U;
	int8_t x243 = -1;
	int64_t t60 = -8198017LL;

	t60 = (x241&(x242*(x243==x244)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	int32_t x247 = INT32_MIN;
	uint64_t x248 = UINT64_MAX;
	static volatile int64_t t61 = 206391718LL;

	t61 = (x245&(x246*(x247==x248)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MAX;
	int32_t x250 = -10;
	volatile int16_t x251 = INT16_MIN;
	int8_t x252 = 3;
	volatile int64_t t62 = -381402979LL;

	t62 = (x249&(x250*(x251==x252)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 0;
	int32_t x254 = INT32_MIN;
	static int16_t x255 = INT16_MIN;
	volatile int32_t t63 = -153659;

	t63 = (x253&(x254*(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -8280;
	uint16_t x258 = UINT16_MAX;
	int64_t x259 = -1LL;
	static volatile int32_t t64 = 821254;

	t64 = (x257&(x258*(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MIN;

	t65 = (x261&(x262*(x263==x264)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 448294108747LLU;
	uint8_t x268 = 19U;
	uint64_t t66 = 119070LLU;

	t66 = (x265&(x266*(x267==x268)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MIN;
	static int32_t x272 = INT32_MIN;
	uint64_t t67 = 1451LLU;

	t67 = (x269&(x270*(x271==x272)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = 865U;
	static uint64_t x274 = 2964356025279285593LLU;
	int8_t x275 = -1;
	static uint32_t x276 = UINT32_MAX;
	volatile uint64_t t68 = 1120890971LLU;

	t68 = (x273&(x274*(x275==x276)));

	if (t68 != 321LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x278 = INT32_MAX;
	volatile int32_t x280 = INT32_MIN;
	int64_t t69 = 6LL;

	t69 = (x277&(x278*(x279==x280)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x281 = INT32_MIN;
	uint64_t x282 = UINT64_MAX;
	static int64_t x283 = -25979084765LL;
	static int32_t x284 = 16;
	uint64_t t70 = 8595536192841061865LLU;

	t70 = (x281&(x282*(x283==x284)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int32_t x286 = 85419;
	volatile int32_t t71 = 1210;

	t71 = (x285&(x286*(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x289 = UINT64_MAX;
	int8_t x290 = INT8_MIN;
	volatile int16_t x291 = INT16_MAX;
	int32_t x292 = -668;
	uint64_t t72 = 25722961LLU;

	t72 = (x289&(x290*(x291==x292)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x294 = 2U;
	uint16_t x296 = 2067U;
	volatile int32_t t73 = 10238;

	t73 = (x293&(x294*(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	int32_t x298 = INT32_MIN;
	int16_t x299 = 0;
	volatile int32_t t74 = 56804922;

	t74 = (x297&(x298*(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = INT64_MAX;
	int32_t x304 = 14907;
	uint64_t t75 = 1146381005716275140LLU;

	t75 = (x301&(x302*(x303==x304)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 22363U;
	int32_t x306 = -1;
	int16_t x307 = INT16_MAX;
	volatile int16_t x308 = 0;
	volatile int32_t t76 = 32741654;

	t76 = (x305&(x306*(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 168U;
	volatile uint16_t x311 = 1460U;
	uint8_t x312 = 111U;
	static uint32_t t77 = 837U;

	t77 = (x309&(x310*(x311==x312)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MAX;
	static uint32_t x315 = 4647U;
	static volatile int64_t x316 = INT64_MIN;
	volatile int64_t t78 = -984533879601097LL;

	t78 = (x313&(x314*(x315==x316)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x318 = UINT32_MAX;
	static uint16_t x319 = 1741U;
	volatile uint64_t x320 = 28885547364LLU;
	uint32_t t79 = 2U;

	t79 = (x317&(x318*(x319==x320)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x321 = 1;
	int32_t x322 = INT32_MAX;
	uint32_t x323 = UINT32_MAX;
	volatile int32_t x324 = 31137;
	int32_t t80 = -771348071;

	t80 = (x321&(x322*(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = -1;
	volatile int64_t x326 = -2LL;
	int32_t x327 = INT32_MAX;
	int8_t x328 = INT8_MAX;
	static int64_t t81 = -1055256202545048949LL;

	t81 = (x325&(x326*(x327==x328)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	int32_t x330 = INT32_MIN;
	volatile int32_t x331 = 138173;
	int32_t x332 = 8549;
	int64_t t82 = 0LL;

	t82 = (x329&(x330*(x331==x332)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 3LL;
	int32_t x334 = 0;
	static int64_t x335 = 33995451552276526LL;
	int64_t t83 = -338431791LL;

	t83 = (x333&(x334*(x335==x336)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x337 = INT8_MIN;
	static uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MAX;
	int8_t x340 = -1;
	int32_t t84 = -1;

	t84 = (x337&(x338*(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 514LL;
	volatile uint16_t x342 = UINT16_MAX;
	volatile uint16_t x343 = UINT16_MAX;
	int32_t x344 = -1;
	volatile int64_t t85 = -17996LL;

	t85 = (x341&(x342*(x343==x344)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	uint64_t x346 = UINT64_MAX;
	uint32_t x347 = UINT32_MAX;
	volatile uint64_t t86 = 976124196347586230LLU;

	t86 = (x345&(x346*(x347==x348)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = 7U;
	int8_t x351 = -1;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 30448875;

	t87 = (x349&(x350*(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = 1711867215LLU;
	static int64_t x354 = INT64_MIN;
	int8_t x355 = -1;
	uint8_t x356 = 40U;
	static uint64_t t88 = 1680595LLU;

	t88 = (x353&(x354*(x355==x356)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = 2U;
	uint32_t x358 = 5685133U;
	int32_t x359 = INT32_MIN;
	int8_t x360 = 43;
	uint32_t t89 = 25U;

	t89 = (x357&(x358*(x359==x360)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 7U;
	int32_t x362 = -1;
	static uint64_t x363 = UINT64_MAX;
	int32_t t90 = -52157358;

	t90 = (x361&(x362*(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 8U;
	uint16_t x366 = 1U;
	int16_t x367 = -7576;
	uint8_t x368 = 31U;
	int32_t t91 = 71419235;

	t91 = (x365&(x366*(x367==x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 78227LLU;
	volatile int16_t x370 = -5945;
	uint64_t x371 = UINT64_MAX;
	volatile uint64_t t92 = 2515884749249LLU;

	t92 = (x369&(x370*(x371==x372)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	uint8_t x374 = UINT8_MAX;
	uint16_t x375 = 1641U;
	int32_t t93 = -191746845;

	t93 = (x373&(x374*(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x377 = INT64_MIN;
	int32_t x378 = INT32_MIN;
	uint16_t x379 = 378U;
	static uint64_t x380 = UINT64_MAX;

	t94 = (x377&(x378*(x379==x380)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 0U;
	uint32_t x382 = 917U;
	int32_t x383 = 5859;
	int64_t x384 = INT64_MAX;
	volatile uint32_t t95 = 585769212U;

	t95 = (x381&(x382*(x383==x384)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	static volatile int16_t x386 = 2;
	int32_t x387 = -1;
	uint32_t x388 = 43127832U;

	t96 = (x385&(x386*(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = -1;
	static int8_t x391 = 3;
	uint16_t x392 = UINT16_MAX;

	t97 = (x389&(x390*(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 869480LLU;
	static int16_t x394 = 2;
	int64_t x395 = 74394LL;
	volatile uint64_t t98 = 1551994618121LLU;

	t98 = (x393&(x394*(x395==x396)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = -1;
	int16_t x399 = -1;
	static int32_t x400 = INT32_MIN;
	volatile int32_t t99 = 17922693;

	t99 = (x397&(x398*(x399==x400)));

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

