#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 1U;
static uint8_t x5 = 26U;
static uint8_t x7 = UINT8_MAX;
uint16_t x19 = 11U;
volatile uint32_t t4 = 513463U;
volatile int64_t x22 = 509438840LL;
static uint64_t t6 = 701091445403318LLU;
static volatile int32_t x37 = -1;
volatile int32_t x38 = -1;
int32_t x41 = INT32_MAX;
int8_t x54 = INT8_MIN;
volatile int8_t x59 = INT8_MIN;
uint64_t t15 = 7073336LLU;
int16_t x72 = 5749;
uint32_t x74 = UINT32_MAX;
int64_t x75 = INT64_MIN;
volatile uint64_t t17 = 20LLU;
uint8_t x78 = 10U;
volatile int8_t x79 = -1;
int64_t x82 = -54439844862LL;
volatile uint64_t t19 = 39LLU;
volatile int8_t x85 = 19;
uint64_t x87 = 80688LLU;
volatile uint64_t t20 = 3767066365736934387LLU;
static int64_t x92 = -1LL;
static volatile int64_t t21 = 8199972633LL;
int16_t x102 = 1289;
uint64_t x107 = 27235043LLU;
int64_t x109 = INT64_MAX;
uint16_t x112 = UINT16_MAX;
static int64_t t26 = 0LL;
int8_t x114 = INT8_MAX;
int8_t x120 = INT8_MAX;
int16_t x125 = INT16_MAX;
int8_t x128 = INT8_MIN;
uint64_t t30 = 49260881LLU;
static int8_t x129 = -1;
static uint16_t x132 = 428U;
static int32_t x134 = INT32_MAX;
int32_t x136 = INT32_MAX;
uint64_t x140 = 389152802874620556LLU;
int64_t x144 = INT64_MAX;
int8_t x147 = 15;
volatile uint32_t t35 = 14U;
static volatile int8_t x151 = 29;
uint32_t x152 = UINT32_MAX;
volatile int32_t x164 = INT32_MIN;
int64_t x173 = -12650033242LL;
static uint16_t x174 = UINT16_MAX;
int32_t x181 = INT32_MIN;
int8_t x198 = 1;
int32_t t45 = 88272;
int64_t t46 = 1500785086839832LL;
volatile int32_t x210 = 24;
int32_t t47 = 72;
uint32_t x221 = UINT32_MAX;
uint16_t x224 = UINT16_MAX;
volatile uint32_t t48 = 4U;
uint32_t x231 = 6U;
volatile int8_t x233 = INT8_MIN;
uint8_t x242 = 4U;
volatile int32_t x244 = INT32_MIN;
int32_t x246 = -181776;
volatile int32_t t54 = 52249;
int16_t x249 = INT16_MAX;
int32_t x251 = INT32_MAX;
static int16_t x257 = INT16_MIN;
volatile uint64_t x258 = 4LLU;
volatile uint64_t t56 = 12160LLU;
static int32_t x276 = 1960618;
int16_t x282 = INT16_MIN;
static int32_t x284 = INT32_MAX;
int8_t x286 = -1;
int8_t x292 = -1;
volatile int32_t t62 = 111266291;
int16_t x297 = -8492;
uint64_t x303 = 89219841165028535LLU;
uint64_t x307 = 109778532815LLU;
uint32_t x308 = 124912U;
static int32_t x309 = INT32_MIN;
static volatile uint8_t x311 = UINT8_MAX;
int8_t x312 = -6;
int32_t x313 = INT32_MIN;
int64_t x321 = INT64_MIN;
static int64_t t69 = 1LL;
uint32_t x325 = 14U;
int32_t x344 = -1;
int8_t x349 = 0;
uint16_t x350 = 483U;
int8_t x351 = INT8_MIN;
int32_t x361 = -1;
uint8_t x363 = 71U;
volatile int64_t t77 = 59665LL;
static int16_t x365 = INT16_MIN;
static int64_t x367 = INT64_MAX;
uint64_t t79 = 32LLU;
static int8_t x382 = -1;
volatile int16_t x390 = -1;
int16_t x391 = INT16_MIN;
int16_t x397 = INT16_MIN;
int16_t x403 = -20;
int16_t x405 = INT16_MIN;
uint64_t x407 = 4098479786360654LLU;
int8_t x417 = 24;
volatile int32_t x422 = -1;
static int32_t t92 = -1;
uint16_t x425 = 65U;
uint32_t x435 = UINT32_MAX;
int32_t x436 = INT32_MIN;
uint32_t x439 = 2360U;
int64_t x449 = -3661LL;
int16_t x451 = 422;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int64_t x3 = INT64_MIN;
	int32_t x4 = -1;
	int64_t t0 = -6810878719041969LL;

	t0 = (x1&((x2|x3)-x4));

	if (t0 != 2LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = 658138;
	static int16_t x8 = -1;
	int32_t t1 = 375348686;

	t1 = (x5&((x6|x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static volatile int8_t x10 = INT8_MIN;
	static volatile int64_t x11 = INT64_MIN;
	int32_t x12 = 581;
	static int64_t t2 = INT64_MIN;

	t2 = (x9&((x10|x11)-x12));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = INT32_MIN;
	volatile int64_t x14 = -1LL;
	int8_t x15 = -1;
	uint16_t x16 = UINT16_MAX;
	volatile int64_t t3 = -432LL;

	t3 = (x13&((x14|x15)-x16));

	if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	static volatile uint32_t x18 = 7637793U;
	int32_t x20 = INT32_MIN;

	t4 = (x17&((x18|x19)-x20));

	if (t4 != 43U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static uint16_t x23 = 2349U;
	static int64_t x24 = -199455410979LL;
	volatile int64_t t5 = 0LL;

	t5 = (x21&((x22|x23)-x24));

	if (t5 != 199715979264LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	int32_t x26 = -414;
	uint64_t x27 = 529873LLU;
	int16_t x28 = 0;

	t6 = (x25&((x26|x27)-x28));

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	uint64_t x30 = UINT64_MAX;
	volatile int8_t x31 = INT8_MAX;
	volatile int8_t x32 = -1;
	static volatile uint64_t t7 = 1584565LLU;

	t7 = (x29&((x30|x31)-x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x39 = 0;
	int64_t x40 = -2LL;
	int64_t t8 = 24907683967838LL;

	t8 = (x37&((x38|x39)-x40));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x42 = 1;
	static int16_t x43 = 77;
	int32_t x44 = -1;
	int32_t t9 = -32904;

	t9 = (x41&((x42|x43)-x44));

	if (t9 != 78) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MAX;
	volatile int32_t x46 = INT32_MAX;
	uint8_t x47 = 7U;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t10 = -29884;

	t10 = (x45&((x46|x47)-x48));

	if (t10 != 2147418112) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	int8_t x50 = INT8_MIN;
	volatile int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MIN;
	static volatile int64_t t11 = -41855951LL;

	t11 = (x49&((x50|x51)-x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = INT64_MIN;
	volatile int32_t x55 = INT32_MAX;
	static int64_t x56 = -1LL;
	int64_t t12 = 1377520081LL;

	t12 = (x53&((x54|x55)-x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = INT64_MIN;
	uint8_t x58 = 0U;
	uint16_t x60 = UINT16_MAX;
	volatile int64_t t13 = INT64_MIN;

	t13 = (x57&((x58|x59)-x60));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = UINT32_MAX;
	uint8_t x62 = 1U;
	uint64_t x63 = UINT64_MAX;
	int8_t x64 = INT8_MIN;
	volatile uint64_t t14 = 352259018837315392LLU;

	t14 = (x61&((x62|x63)-x64));

	if (t14 != 127LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MAX;
	static int16_t x66 = 2;
	uint64_t x67 = 29650LLU;
	volatile int64_t x68 = 1001825863817577LL;

	t15 = (x65&((x66|x67)-x68));

	if (t15 != 6761LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x69 = 1946636U;
	int16_t x70 = INT16_MIN;
	volatile uint32_t x71 = 724676U;
	volatile uint32_t t16 = 2660U;

	t16 = (x69&((x70|x71)-x72));

	if (t16 != 1912844U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x73 = 8272821147316843054LLU;
	volatile int32_t x76 = 3952900;

	t17 = (x73&((x74|x75)-x76));

	if (t17 != 2415960618LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x77 = 16U;
	volatile int8_t x80 = -1;
	int32_t t18 = 355807;

	t18 = (x77&((x78|x79)-x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	int8_t x83 = INT8_MAX;
	uint64_t x84 = 35LLU;

	t19 = (x81&((x82|x83)-x84));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x86 = UINT64_MAX;
	volatile uint64_t x88 = UINT64_MAX;

	t20 = (x85&((x86|x87)-x88));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x89 = 3U;
	int16_t x90 = INT16_MIN;
	int64_t x91 = INT64_MAX;

	t21 = (x89&((x90|x91)-x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	volatile int64_t x94 = 1837134439067LL;
	static volatile uint8_t x95 = UINT8_MAX;
	int32_t x96 = -59031;
	static volatile int64_t t22 = -45LL;

	t22 = (x93&((x94|x95)-x96));

	if (t22 != 1837134498198LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = 113;
	int64_t x98 = INT64_MIN;
	static uint64_t x99 = UINT64_MAX;
	int8_t x100 = INT8_MIN;
	volatile uint64_t t23 = 1080983456698LLU;

	t23 = (x97&((x98|x99)-x100));

	if (t23 != 113LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x101 = INT16_MAX;
	uint64_t x103 = UINT64_MAX;
	static uint16_t x104 = 47U;
	uint64_t t24 = 497LLU;

	t24 = (x101&((x102|x103)-x104));

	if (t24 != 32720LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = 25;
	static int64_t x106 = INT64_MIN;
	static int8_t x108 = -1;
	volatile uint64_t t25 = 6218712261293690LLU;

	t25 = (x105&((x106|x107)-x108));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x110 = -11778387LL;
	volatile uint16_t x111 = 25256U;

	t26 = (x109&((x110|x111)-x112));

	if (t26 != 9223372036842940078LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	int64_t x115 = -1LL;
	volatile int16_t x116 = 209;
	volatile int64_t t27 = 25521LL;

	t27 = (x113&((x114|x115)-x116));

	if (t27 != 46LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x117 = 12U;
	static uint8_t x118 = UINT8_MAX;
	int8_t x119 = INT8_MAX;
	static volatile int32_t t28 = -486;

	t28 = (x117&((x118|x119)-x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	volatile int32_t x122 = INT32_MIN;
	int32_t x123 = 15521;
	uint32_t x124 = UINT32_MAX;
	volatile int64_t t29 = -3369471LL;

	t29 = (x121&((x122|x123)-x124));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x126 = UINT32_MAX;
	uint64_t x127 = 131167242760517246LLU;

	t30 = (x125&((x126|x127)-x128));

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x130 = UINT64_MAX;
	volatile int32_t x131 = INT32_MIN;
	static volatile uint64_t t31 = 52459LLU;

	t31 = (x129&((x130|x131)-x132));

	if (t31 != 18446744073709551187LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x133 = -683;
	int64_t x135 = INT64_MIN;
	volatile int64_t t32 = INT64_MIN;

	t32 = (x133&((x134|x135)-x136));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	uint16_t x138 = UINT16_MAX;
	volatile int64_t x139 = 39060606144952LL;
	volatile uint64_t t33 = 2319LLU;

	t33 = (x137&((x138|x139)-x140));

	if (t33 != 18057630331441087744LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	volatile int8_t x142 = -1;
	volatile int8_t x143 = 58;
	int64_t t34 = INT64_MIN;

	t34 = (x141&((x142|x143)-x144));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 1U;
	int32_t x146 = -1;
	volatile int32_t x148 = 6085;

	t35 = (x145&((x146|x147)-x148));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MAX;
	static int32_t x150 = -5;
	static volatile uint32_t t36 = 12U;

	t36 = (x149&((x150|x151)-x152));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x153 = 23794U;
	static int8_t x154 = -1;
	uint8_t x155 = 12U;
	int64_t x156 = INT64_MIN;
	int64_t t37 = 384690218016LL;

	t37 = (x153&((x154|x155)-x156));

	if (t37 != 23794LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	volatile uint64_t x158 = UINT64_MAX;
	volatile uint32_t x159 = UINT32_MAX;
	int32_t x160 = INT32_MAX;
	uint64_t t38 = 15832095438679LLU;

	t38 = (x157&((x158|x159)-x160));

	if (t38 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MAX;
	int64_t x162 = 1123728449757LL;
	static int32_t x163 = INT32_MAX;
	int64_t t39 = -304LL;

	t39 = (x161&((x162|x163)-x164));

	if (t39 != 1127428915199LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 3U;
	int32_t x170 = INT32_MIN;
	static uint32_t x171 = 1U;
	int32_t x172 = -1;
	uint32_t t40 = 494U;

	t40 = (x169&((x170|x171)-x172));

	if (t40 != 2U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x175 = 0U;
	static int16_t x176 = -416;
	volatile int64_t t41 = -20227060506LL;

	t41 = (x173&((x174|x175)-x176));

	if (t41 != 65926LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x182 = INT16_MAX;
	int32_t x183 = INT32_MIN;
	int64_t x184 = INT64_MIN;
	volatile int64_t t42 = -5772809LL;

	t42 = (x181&((x182|x183)-x184));

	if (t42 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = 20U;
	int16_t x190 = -381;
	int32_t x191 = -1;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t43 = 0;

	t43 = (x189&((x190|x191)-x192));

	if (t43 != 20) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MAX;
	volatile int64_t x194 = INT64_MAX;
	int32_t x195 = -1;
	uint64_t x196 = 3856207662530451LLU;
	uint64_t t44 = 277188LLU;

	t44 = (x193&((x194|x195)-x196));

	if (t44 != 108LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x197 = INT8_MIN;
	uint8_t x199 = 0U;
	int8_t x200 = 1;

	t45 = (x197&((x198|x199)-x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = -649370270626365919LL;
	int8_t x202 = -1;
	volatile int8_t x203 = -1;
	int8_t x204 = 25;

	t46 = (x201&((x202|x203)-x204));

	if (t46 != -649370270626365920LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MIN;
	static int32_t x211 = -13036;
	int32_t x212 = INT32_MIN;

	t47 = (x209&((x210|x211)-x212));

	if (t47 != 2147470592) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x222 = -29;
	static int16_t x223 = 1;

	t48 = (x221&((x222|x223)-x224));

	if (t48 != 4294901732U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = 632;
	static int16_t x226 = INT16_MIN;
	int8_t x227 = -1;
	int32_t x228 = -1;
	volatile int32_t t49 = -1634997;

	t49 = (x225&((x226|x227)-x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x229 = UINT16_MAX;
	int32_t x230 = INT32_MIN;
	int16_t x232 = -1;
	volatile uint32_t t50 = 477414282U;

	t50 = (x229&((x230|x231)-x232));

	if (t50 != 7U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x234 = INT32_MIN;
	static int64_t x235 = 244327LL;
	int16_t x236 = INT16_MIN;
	int64_t t51 = -60934109158694LL;

	t51 = (x233&((x234|x235)-x236));

	if (t51 != -2147206656LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x237 = 44U;
	volatile int64_t x238 = INT64_MAX;
	volatile int32_t x239 = INT32_MAX;
	uint32_t x240 = 34U;
	static int64_t t52 = -134580965443628LL;

	t52 = (x237&((x238|x239)-x240));

	if (t52 != 12LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x241 = 12090697550771LLU;
	volatile uint64_t x243 = 62207931128LLU;
	volatile uint64_t t53 = 19856260341985198LLU;

	t53 = (x241&((x242|x243)-x244));

	if (t53 != 60425339568LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = INT16_MIN;
	int16_t x247 = -1;
	int16_t x248 = INT16_MIN;

	t54 = (x245&((x246|x247)-x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x250 = 3;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t55 = -60;

	t55 = (x249&((x250|x251)-x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x259 = INT64_MIN;
	int8_t x260 = -6;

	t56 = (x257&((x258|x259)-x260));

	if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x262 = UINT16_MAX;
	uint8_t x263 = 5U;
	int16_t x264 = -1;
	int32_t t57 = 200;

	t57 = (x261&((x262|x263)-x264));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x273 = 17U;
	uint8_t x274 = 0U;
	uint64_t x275 = 1514753978LLU;
	volatile uint64_t t58 = 251250866597LLU;

	t58 = (x273&((x274|x275)-x276));

	if (t58 != 16LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x281 = INT16_MAX;
	uint32_t x283 = 938U;
	static uint32_t t59 = 175370U;

	t59 = (x281&((x282|x283)-x284));

	if (t59 != 939U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x285 = INT64_MIN;
	uint64_t x287 = UINT64_MAX;
	int64_t x288 = INT64_MIN;
	uint64_t t60 = 0LLU;

	t60 = (x285&((x286|x287)-x288));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x289 = -1;
	volatile int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	int32_t t61 = -186;

	t61 = (x289&((x290|x291)-x292));

	if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x293 = INT8_MIN;
	volatile int8_t x294 = INT8_MAX;
	int8_t x295 = INT8_MAX;
	uint16_t x296 = UINT16_MAX;

	t62 = (x293&((x294|x295)-x296));

	if (t62 != -65408) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x298 = -4;
	int64_t x299 = -1872285375445LL;
	int8_t x300 = INT8_MAX;
	int64_t t63 = 2010089LL;

	t63 = (x297&((x298|x299)-x300));

	if (t63 != -8576LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int8_t x302 = INT8_MAX;
	uint16_t x304 = 11U;
	volatile uint64_t t64 = 114029773LLU;

	t64 = (x301&((x302|x303)-x304));

	if (t64 != 193916148LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x305 = INT16_MAX;
	uint32_t x306 = 4086976U;
	uint64_t t65 = 197182031LLU;

	t65 = (x305&((x306|x307)-x308));

	if (t65 != 5599LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x310 = UINT8_MAX;
	int32_t t66 = 10608;

	t66 = (x309&((x310|x311)-x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x314 = 59187811LLU;
	int32_t x315 = -1;
	int16_t x316 = -3;
	static volatile uint64_t t67 = 32LLU;

	t67 = (x313&((x314|x315)-x316));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = INT16_MAX;
	int32_t x318 = INT32_MAX;
	int64_t x319 = 15124769LL;
	int16_t x320 = INT16_MIN;
	static int64_t t68 = 7264969585LL;

	t68 = (x317&((x318|x319)-x320));

	if (t68 != 32767LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x322 = 1U;
	uint32_t x323 = UINT32_MAX;
	int64_t x324 = -1LL;

	t69 = (x321&((x322|x323)-x324));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x326 = 0U;
	int16_t x327 = 0;
	uint8_t x328 = UINT8_MAX;
	uint32_t t70 = 285U;

	t70 = (x325&((x326|x327)-x328));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x329 = 8817795LLU;
	uint16_t x330 = 3U;
	int32_t x331 = -7;
	uint8_t x332 = UINT8_MAX;
	volatile uint64_t t71 = 1872808024968LLU;

	t71 = (x329&((x330|x331)-x332));

	if (t71 != 8817792LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x333 = 1;
	int64_t x334 = 5934LL;
	static int16_t x335 = -529;
	uint8_t x336 = 6U;
	volatile int64_t t72 = 100LL;

	t72 = (x333&((x334|x335)-x336));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x341 = INT8_MAX;
	static volatile int32_t x342 = INT32_MIN;
	static int8_t x343 = 1;
	static volatile int32_t t73 = 7439;

	t73 = (x341&((x342|x343)-x344));

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x352 = INT64_MIN;
	int64_t t74 = 490LL;

	t74 = (x349&((x350|x351)-x352));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = INT32_MIN;
	static int8_t x354 = INT8_MIN;
	volatile uint32_t x355 = UINT32_MAX;
	volatile uint16_t x356 = 14853U;
	static volatile uint32_t t75 = 1395952U;

	t75 = (x353&((x354|x355)-x356));

	if (t75 != 2147483648U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x357 = -1;
	int64_t x358 = INT64_MIN;
	volatile int32_t x359 = INT32_MIN;
	int32_t x360 = -1;
	volatile int64_t t76 = -212590192035208544LL;

	t76 = (x357&((x358|x359)-x360));

	if (t76 != -2147483647LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x362 = INT16_MIN;
	static int64_t x364 = -36643LL;

	t77 = (x361&((x362|x363)-x364));

	if (t77 != 3946LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x366 = INT64_MIN;
	int8_t x368 = INT8_MAX;
	volatile int64_t t78 = 16003254482LL;

	t78 = (x365&((x366|x367)-x368));

	if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x369 = 1565245U;
	volatile uint64_t x370 = 73112252427027LLU;
	volatile uint8_t x371 = 28U;
	uint16_t x372 = UINT16_MAX;

	t79 = (x369&((x370|x371)-x372));

	if (t79 != 1352224LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x373 = INT8_MIN;
	uint64_t x374 = 710734076LLU;
	uint16_t x375 = UINT16_MAX;
	static volatile uint8_t x376 = 4U;
	volatile uint64_t t80 = 87612LLU;

	t80 = (x373&((x374|x375)-x376));

	if (t80 != 710737792LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x377 = -1;
	volatile int64_t x378 = INT64_MAX;
	int16_t x379 = 42;
	uint32_t x380 = 38673619U;
	volatile int64_t t81 = 3119683572103569LL;

	t81 = (x377&((x378|x379)-x380));

	if (t81 != 9223372036816102188LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x381 = -6;
	int32_t x383 = INT32_MIN;
	uint64_t x384 = 3724100553088352LLU;
	uint64_t t82 = 8339102105540LLU;

	t82 = (x381&((x382|x383)-x384));

	if (t82 != 18443019973156463258LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x385 = INT32_MIN;
	static int32_t x386 = 498837794;
	volatile int16_t x387 = INT16_MIN;
	volatile int64_t x388 = INT64_MIN;
	int64_t t83 = 489374518289LL;

	t83 = (x385&((x386|x387)-x388));

	if (t83 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x389 = -275846207054478579LL;
	int16_t x392 = 8;
	int64_t t84 = 40571520780458449LL;

	t84 = (x389&((x390|x391)-x392));

	if (t84 != -275846207054478587LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = INT32_MAX;
	int8_t x394 = -1;
	volatile int64_t x395 = -55252285786684LL;
	static int64_t x396 = -12205573452LL;
	int64_t t85 = 18211181602178LL;

	t85 = (x393&((x394|x395)-x396));

	if (t85 != 1468155211LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x398 = INT8_MIN;
	volatile uint64_t x399 = 323892789201984141LLU;
	int64_t x400 = 0LL;
	volatile uint64_t t86 = 31983LLU;

	t86 = (x397&((x398|x399)-x400));

	if (t86 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x401 = INT8_MIN;
	int64_t x402 = INT64_MAX;
	uint16_t x404 = UINT16_MAX;
	int64_t t87 = -570780123472521269LL;

	t87 = (x401&((x402|x403)-x404));

	if (t87 != -65536LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x406 = INT64_MAX;
	int16_t x408 = INT16_MIN;
	uint64_t t88 = 709771660501LLU;

	t88 = (x405&((x406|x407)-x408));

	if (t88 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x409 = INT64_MIN;
	volatile uint8_t x410 = 1U;
	static int16_t x411 = -1;
	uint32_t x412 = 41910150U;
	volatile int64_t t89 = 5858438621639624LL;

	t89 = (x409&((x410|x411)-x412));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x413 = -1;
	static int64_t x414 = INT64_MIN;
	uint64_t x415 = 0LLU;
	int64_t x416 = INT64_MAX;
	uint64_t t90 = 16131LLU;

	t90 = (x413&((x414|x415)-x416));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x418 = INT32_MIN;
	static uint16_t x419 = 1U;
	uint32_t x420 = 60U;
	uint32_t t91 = 52U;

	t91 = (x417&((x418|x419)-x420));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x421 = INT32_MAX;
	uint16_t x423 = 29U;
	int32_t x424 = INT32_MAX;

	t92 = (x421&((x422|x423)-x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x426 = -1;
	int32_t x427 = 852;
	static volatile int32_t x428 = -1;
	int32_t t93 = 99316;

	t93 = (x425&((x426|x427)-x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x429 = 13777698806LL;
	int8_t x430 = 1;
	int32_t x431 = 14945806;
	int64_t x432 = -1LL;
	volatile int64_t t94 = 6LL;

	t94 = (x429&((x430|x431)-x432));

	if (t94 != 2362896LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x433 = -1;
	static int16_t x434 = INT16_MIN;
	uint32_t t95 = 1844U;

	t95 = (x433&((x434|x435)-x436));

	if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x437 = INT64_MIN;
	volatile int8_t x438 = 16;
	uint16_t x440 = UINT16_MAX;
	volatile int64_t t96 = -14325867842LL;

	t96 = (x437&((x438|x439)-x440));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x441 = 33936LLU;
	static volatile uint16_t x442 = 1U;
	uint64_t x443 = 32085LLU;
	int64_t x444 = INT64_MIN;
	uint64_t t97 = 9878LLU;

	t97 = (x441&((x442|x443)-x444));

	if (t97 != 1040LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x445 = UINT64_MAX;
	static uint32_t x446 = 80383482U;
	int16_t x447 = -85;
	static uint16_t x448 = 1U;
	static volatile uint64_t t98 = 12LLU;

	t98 = (x445&((x446|x447)-x448));

	if (t98 != 4294967290LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x450 = -1;
	int64_t x452 = 6668525483378967LL;
	volatile int64_t t99 = 628LL;

	t99 = (x449&((x450|x451)-x452));

	if (t99 != -6668525483380576LL) { NG(); } else { ; }
	
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

