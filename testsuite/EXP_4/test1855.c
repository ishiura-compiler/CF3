#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 16857768772639379LLU;
volatile uint64_t x6 = 644983LLU;
int64_t x7 = 21170013340736LL;
uint64_t x9 = 25492LLU;
uint64_t x16 = 5386128356107652LLU;
int32_t x21 = INT32_MIN;
volatile int32_t t5 = -4264203;
static int8_t x27 = -1;
uint64_t x28 = 204LLU;
volatile int32_t t7 = -844;
int64_t x35 = -1LL;
int32_t t8 = 58;
volatile uint32_t x40 = UINT32_MAX;
uint8_t x44 = 12U;
int64_t x51 = 7585LL;
int32_t t18 = 1;
static int64_t x77 = INT64_MIN;
static int32_t t19 = 207924730;
volatile int16_t x84 = INT16_MIN;
uint32_t x89 = 653166932U;
uint16_t x91 = UINT16_MAX;
int32_t t22 = -102686;
int8_t x97 = -6;
int32_t x99 = -1;
static int32_t t24 = -127570;
static int32_t x110 = 2509;
static int8_t x112 = INT8_MAX;
int32_t x113 = INT32_MIN;
static int32_t x114 = INT32_MAX;
int16_t x119 = -1;
int32_t x124 = INT32_MAX;
int32_t t30 = -167350975;
uint32_t x126 = 2195268U;
int32_t t31 = 853476;
static int16_t x131 = 1;
int8_t x137 = INT8_MIN;
int32_t x141 = INT32_MIN;
uint16_t x146 = UINT16_MAX;
int32_t t37 = 54277881;
int16_t x153 = INT16_MAX;
uint64_t x157 = UINT64_MAX;
volatile uint16_t x162 = 0U;
int16_t x166 = 0;
static int64_t x170 = -1LL;
static int8_t x173 = -30;
int32_t x174 = INT32_MAX;
uint8_t x179 = 1U;
volatile int64_t x180 = -68606419032069LL;
int64_t x182 = INT64_MAX;
static uint8_t x186 = UINT8_MAX;
int8_t x187 = INT8_MIN;
int8_t x191 = INT8_MAX;
static int32_t x198 = -7746;
uint64_t x209 = 3812644LLU;
static volatile int32_t t52 = 3562;
static int64_t x214 = INT64_MAX;
volatile int64_t x217 = INT64_MIN;
int8_t x222 = 0;
int32_t t55 = -257393;
int8_t x225 = INT8_MIN;
uint32_t x226 = UINT32_MAX;
static int16_t x227 = INT16_MIN;
int16_t x228 = -1;
static uint16_t x234 = 465U;
int32_t x244 = INT32_MAX;
int32_t t60 = 413332569;
int32_t x248 = -1;
volatile int32_t t61 = -27;
static uint8_t x249 = 2U;
static int16_t x250 = INT16_MAX;
int32_t t63 = 20541;
int32_t t65 = 61;
int32_t t66 = 1;
static int16_t x270 = INT16_MIN;
int32_t t67 = -3982;
int32_t x277 = INT32_MIN;
volatile int8_t x278 = 61;
int64_t x283 = INT64_MAX;
int8_t x284 = -2;
int16_t x287 = 38;
int64_t x289 = -72617441811806556LL;
int32_t t74 = -3;
uint64_t x303 = 20LLU;
int32_t x305 = -1;
volatile uint32_t x306 = UINT32_MAX;
int16_t x308 = INT16_MAX;
int32_t x312 = -1;
int32_t t77 = 1440;
volatile uint8_t x314 = 50U;
int16_t x315 = INT16_MAX;
static uint32_t x318 = 23U;
volatile int32_t x321 = 1409772;
volatile int8_t x323 = 1;
volatile int16_t x326 = INT16_MIN;
uint8_t x327 = 28U;
int8_t x339 = -1;
volatile int32_t t84 = 2;
volatile int8_t x342 = -1;
uint8_t x351 = 1U;
volatile int16_t x365 = 1;
int32_t x366 = -1;
static volatile uint16_t x367 = 994U;
uint8_t x369 = 1U;
int32_t t92 = -2379876;
int32_t t95 = 81264;
int16_t x388 = -1;
volatile int64_t x390 = INT64_MIN;
int32_t t99 = 726;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	volatile int64_t x2 = -1LL;
	uint32_t x3 = 752597851U;
	volatile int32_t t0 = -2147622;

	t0 = (x1<(x2^(x3&x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 125150;
	volatile int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -12591;

	t1 = (x5<(x6^(x7&x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	int64_t x11 = -1LL;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 768716411;

	t2 = (x9<(x10^(x11&x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	static uint32_t x14 = 213309U;
	uint64_t x15 = 0LLU;
	int32_t t3 = -316;

	t3 = (x13<(x14^(x15&x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile uint64_t x18 = UINT64_MAX;
	static int32_t x19 = INT32_MIN;
	static int8_t x20 = INT8_MIN;
	int32_t t4 = 0;

	t4 = (x17<(x18^(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = 2;
	uint16_t x23 = 319U;
	int8_t x24 = -1;

	t5 = (x21<(x22^(x23&x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint16_t x26 = UINT16_MAX;
	volatile int32_t t6 = 10569104;

	t6 = (x25<(x26^(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint64_t x30 = 36339LLU;
	uint16_t x31 = 43U;
	static uint64_t x32 = 333347385239LLU;

	t7 = (x29<(x30^(x31&x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = 55799984LL;
	int32_t x34 = -231;
	uint32_t x36 = 287061798U;

	t8 = (x33<(x34^(x35&x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -1;
	int8_t x38 = INT8_MAX;
	int8_t x39 = 5;
	int32_t t9 = 111107;

	t9 = (x37<(x38^(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	volatile int8_t x42 = INT8_MIN;
	volatile int8_t x43 = -45;
	volatile int32_t t10 = 339;

	t10 = (x41<(x42^(x43&x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	int64_t x46 = 18045LL;
	volatile uint8_t x47 = 2U;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = -22784;

	t11 = (x45<(x46^(x47&x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	volatile uint8_t x50 = 1U;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = 288338136;

	t12 = (x49<(x50^(x51&x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	int8_t x54 = INT8_MAX;
	volatile uint8_t x55 = UINT8_MAX;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = 1032195;

	t13 = (x53<(x54^(x55&x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 320U;
	int8_t x58 = INT8_MIN;
	static uint16_t x59 = 6U;
	int16_t x60 = INT16_MIN;
	int32_t t14 = -12634910;

	t14 = (x57<(x58^(x59&x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 1800U;
	int8_t x62 = -39;
	static uint16_t x63 = UINT16_MAX;
	int32_t x64 = 10081;
	volatile int32_t t15 = 37;

	t15 = (x61<(x62^(x63&x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 398883777196083928LLU;
	static int32_t x66 = 126246;
	volatile int64_t x67 = 5457465193858LL;
	int64_t x68 = INT64_MIN;
	int32_t t16 = 3695484;

	t16 = (x65<(x66^(x67&x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MIN;
	int64_t x70 = 317414063887535699LL;
	static volatile int64_t x71 = 1079829LL;
	uint64_t x72 = 24091411254LLU;
	volatile int32_t t17 = -10123;

	t17 = (x69<(x70^(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	int32_t x74 = 0;
	int64_t x75 = 61881558233256699LL;
	volatile int32_t x76 = INT32_MAX;

	t18 = (x73<(x74^(x75&x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = INT16_MAX;
	int8_t x79 = INT8_MIN;
	int16_t x80 = -7;

	t19 = (x77<(x78^(x79&x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = UINT64_MAX;
	static int64_t x82 = INT64_MIN;
	uint8_t x83 = 15U;
	int32_t t20 = 1598;

	t20 = (x81<(x82^(x83&x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 4353428464460LL;
	int32_t x86 = -204;
	volatile int16_t x87 = -55;
	static int8_t x88 = INT8_MIN;
	int32_t t21 = -56184;

	t21 = (x85<(x86^(x87&x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = UINT16_MAX;
	static volatile uint16_t x92 = 1490U;

	t22 = (x89<(x90^(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	int64_t x94 = INT64_MIN;
	volatile int16_t x95 = -1;
	volatile int64_t x96 = INT64_MIN;
	int32_t t23 = -2111;

	t23 = (x93<(x94^(x95&x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x98 = INT16_MIN;
	volatile int8_t x100 = INT8_MAX;

	t24 = (x97<(x98^(x99&x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 91U;
	uint64_t x102 = 2LLU;
	uint32_t x103 = 58507U;
	int32_t x104 = 76260;
	volatile int32_t t25 = 11995931;

	t25 = (x101<(x102^(x103&x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	uint64_t x106 = UINT64_MAX;
	int16_t x107 = -3233;
	uint16_t x108 = 0U;
	int32_t t26 = 46211;

	t26 = (x105<(x106^(x107&x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 144231U;
	static volatile int16_t x111 = INT16_MAX;
	volatile int32_t t27 = -3619277;

	t27 = (x109<(x110^(x111&x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x115 = 37;
	static int8_t x116 = INT8_MIN;
	int32_t t28 = -879;

	t28 = (x113<(x114^(x115&x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -13;
	uint32_t x118 = 1147717203U;
	static int8_t x120 = -1;
	volatile int32_t t29 = -261099331;

	t29 = (x117<(x118^(x119&x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int32_t x122 = -40025692;
	int16_t x123 = -37;

	t30 = (x121<(x122^(x123&x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int8_t x127 = 1;
	volatile uint32_t x128 = UINT32_MAX;

	t31 = (x125<(x126^(x127&x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = -1;
	volatile uint32_t x130 = 25002672U;
	uint8_t x132 = 100U;
	static int32_t t32 = -1102;

	t32 = (x129<(x130^(x131&x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -7963;
	int16_t x134 = INT16_MAX;
	uint8_t x135 = UINT8_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 9;

	t33 = (x133<(x134^(x135&x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x138 = 3757633U;
	int16_t x139 = INT16_MIN;
	int32_t x140 = -1;
	volatile int32_t t34 = -218;

	t34 = (x137<(x138^(x139&x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x142 = INT16_MIN;
	static uint32_t x143 = 3U;
	int16_t x144 = -2;
	int32_t t35 = 57466;

	t35 = (x141<(x142^(x143&x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	static int32_t x147 = INT32_MIN;
	static volatile int32_t x148 = INT32_MIN;
	int32_t t36 = -276;

	t36 = (x145<(x146^(x147&x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = -54;
	uint8_t x150 = 0U;
	static volatile uint16_t x151 = UINT16_MAX;
	int16_t x152 = 233;

	t37 = (x149<(x150^(x151&x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = 222U;
	int32_t x155 = 503288050;
	volatile int16_t x156 = INT16_MIN;
	int32_t t38 = 13295;

	t38 = (x153<(x154^(x155&x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x158 = INT16_MAX;
	uint64_t x159 = UINT64_MAX;
	static int8_t x160 = 0;
	volatile int32_t t39 = 248;

	t39 = (x157<(x158^(x159&x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x163 = INT8_MAX;
	int64_t x164 = INT64_MAX;
	int32_t t40 = -30;

	t40 = (x161<(x162^(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	static uint16_t x167 = UINT16_MAX;
	uint64_t x168 = 149292088655207LLU;
	static int32_t t41 = -433139164;

	t41 = (x165<(x166^(x167&x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 5U;
	static volatile uint32_t x171 = UINT32_MAX;
	static int64_t x172 = INT64_MAX;
	int32_t t42 = 1045315028;

	t42 = (x169<(x170^(x171&x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x175 = 1U;
	static int64_t x176 = 2LL;
	int32_t t43 = -5;

	t43 = (x173<(x174^(x175&x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 1U;
	static uint64_t x178 = 7328993737970367130LLU;
	static volatile int32_t t44 = -3623;

	t44 = (x177<(x178^(x179&x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x181 = 866U;
	uint32_t x183 = UINT32_MAX;
	uint32_t x184 = 26886705U;
	volatile int32_t t45 = 112217;

	t45 = (x181<(x182^(x183&x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int16_t x188 = 1;
	static int32_t t46 = -2967;

	t46 = (x185<(x186^(x187&x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MAX;
	volatile uint64_t x190 = 0LLU;
	int8_t x192 = -48;
	int32_t t47 = 458797391;

	t47 = (x189<(x190^(x191&x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 0U;
	uint8_t x194 = 1U;
	uint64_t x195 = UINT64_MAX;
	uint32_t x196 = 8472477U;
	int32_t t48 = -2016;

	t48 = (x193<(x194^(x195&x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 3U;
	int64_t x199 = INT64_MIN;
	static int8_t x200 = INT8_MAX;
	int32_t t49 = 500;

	t49 = (x197<(x198^(x199&x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x201 = 10901551U;
	int16_t x202 = INT16_MIN;
	uint16_t x203 = 122U;
	int16_t x204 = -1;
	volatile int32_t t50 = -1944;

	t50 = (x201<(x202^(x203&x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 3742;
	static int32_t x206 = -1;
	int16_t x207 = 3796;
	static volatile int16_t x208 = INT16_MAX;
	static volatile int32_t t51 = -92389;

	t51 = (x205<(x206^(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;
	int8_t x212 = -1;

	t52 = (x209<(x210^(x211&x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static int8_t x215 = 2;
	int16_t x216 = INT16_MIN;
	int32_t t53 = 1573134;

	t53 = (x213<(x214^(x215&x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x218 = INT32_MAX;
	int32_t x219 = -90;
	uint64_t x220 = 29771886126343347LLU;
	int32_t t54 = 478;

	t54 = (x217<(x218^(x219&x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 101U;
	static uint64_t x223 = 33748001812840LLU;
	int64_t x224 = -1077599650037434936LL;

	t55 = (x221<(x222^(x223&x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t t56 = -437428696;

	t56 = (x225<(x226^(x227&x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MAX;
	int64_t x230 = INT64_MIN;
	int8_t x231 = 3;
	int16_t x232 = INT16_MIN;
	int32_t t57 = -240;

	t57 = (x229<(x230^(x231&x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	uint16_t x236 = 44U;
	volatile int32_t t58 = -124090951;

	t58 = (x233<(x234^(x235&x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x237 = 452383468LLU;
	int64_t x238 = INT64_MAX;
	static uint8_t x239 = 2U;
	static int32_t x240 = -1;
	int32_t t59 = 0;

	t59 = (x237<(x238^(x239&x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 0;
	static volatile int8_t x242 = -1;
	int64_t x243 = INT64_MIN;

	t60 = (x241<(x242^(x243&x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 111245U;
	volatile uint32_t x246 = 201787U;
	volatile int8_t x247 = INT8_MAX;

	t61 = (x245<(x246^(x247&x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x251 = INT32_MIN;
	int8_t x252 = -1;
	static int32_t t62 = -16058;

	t62 = (x249<(x250^(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -2491;
	volatile uint64_t x254 = 5767971011462LLU;
	int8_t x255 = 5;
	volatile int64_t x256 = -990115LL;

	t63 = (x253<(x254^(x255&x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = 15;
	int16_t x258 = -1;
	int32_t x259 = -1;
	int16_t x260 = -1;
	int32_t t64 = 14941941;

	t64 = (x257<(x258^(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 12U;
	volatile uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;

	t65 = (x261<(x262^(x263&x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MAX;
	int16_t x266 = INT16_MIN;
	static volatile int16_t x267 = -1;
	int64_t x268 = INT64_MIN;

	t66 = (x265<(x266^(x267&x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = 1;
	int16_t x271 = INT16_MIN;
	int64_t x272 = INT64_MAX;

	t67 = (x269<(x270^(x271&x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	int32_t x274 = 120;
	int16_t x275 = -1;
	int16_t x276 = INT16_MIN;
	int32_t t68 = -103459948;

	t68 = (x273<(x274^(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x279 = UINT32_MAX;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = -1;

	t69 = (x277<(x278^(x279&x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	static int8_t x282 = -1;
	int32_t t70 = 0;

	t70 = (x281<(x282^(x283&x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	volatile int64_t x286 = -410220LL;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t71 = 32;

	t71 = (x285<(x286^(x287&x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x290 = UINT16_MAX;
	uint32_t x291 = 70738133U;
	int16_t x292 = INT16_MAX;
	volatile int32_t t72 = 683243;

	t72 = (x289<(x290^(x291&x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 3U;
	static volatile int8_t x294 = 1;
	uint64_t x295 = 965LLU;
	int64_t x296 = -1LL;
	int32_t t73 = 1042346634;

	t73 = (x293<(x294^(x295&x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 4U;
	int64_t x298 = -1LL;
	int32_t x299 = -1;
	volatile uint32_t x300 = UINT32_MAX;

	t74 = (x297<(x298^(x299&x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	static int32_t x302 = -1;
	static volatile int8_t x304 = INT8_MAX;
	static volatile int32_t t75 = 2339435;

	t75 = (x301<(x302^(x303&x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x307 = -1;
	static volatile int32_t t76 = -164207765;

	t76 = (x305<(x306^(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 932U;
	uint8_t x310 = UINT8_MAX;
	volatile uint8_t x311 = UINT8_MAX;

	t77 = (x309<(x310^(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x313 = 16U;
	volatile uint16_t x316 = UINT16_MAX;
	static volatile int32_t t78 = -376;

	t78 = (x313<(x314^(x315&x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = INT32_MAX;
	volatile int64_t x319 = INT64_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = 2978;

	t79 = (x317<(x318^(x319&x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = -5;
	int64_t x324 = -31LL;
	static int32_t t80 = 247;

	t80 = (x321<(x322^(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 144101518LLU;
	uint64_t x328 = 144LLU;
	volatile int32_t t81 = 1838;

	t81 = (x325<(x326^(x327&x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	int16_t x330 = INT16_MAX;
	int64_t x331 = -1LL;
	static volatile uint64_t x332 = 53299LLU;
	volatile int32_t t82 = -65;

	t82 = (x329<(x330^(x331&x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -1;
	static int16_t x334 = 31;
	volatile uint64_t x335 = 29133795964184084LLU;
	uint8_t x336 = 1U;
	int32_t t83 = 5;

	t83 = (x333<(x334^(x335&x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	uint8_t x338 = UINT8_MAX;
	static int32_t x340 = INT32_MIN;

	t84 = (x337<(x338^(x339&x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x341 = 182518304;
	static int16_t x343 = INT16_MIN;
	uint8_t x344 = UINT8_MAX;
	int32_t t85 = -60520;

	t85 = (x341<(x342^(x343&x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MIN;
	volatile uint8_t x347 = UINT8_MAX;
	int32_t x348 = -63030750;
	volatile int32_t t86 = 1717292;

	t86 = (x345<(x346^(x347&x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MIN;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 2752;

	t87 = (x349<(x350^(x351&x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 3U;
	uint32_t x354 = 1044281442U;
	volatile uint64_t x355 = 2LLU;
	volatile int32_t x356 = INT32_MIN;
	int32_t t88 = -923797014;

	t88 = (x353<(x354^(x355&x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 1;
	static volatile int16_t x358 = -29;
	uint8_t x359 = 2U;
	uint64_t x360 = 433008509820LLU;
	int32_t t89 = 105210;

	t89 = (x357<(x358^(x359&x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = -27;
	int64_t x363 = -17480136979821LL;
	int16_t x364 = INT16_MIN;
	static int32_t t90 = 1;

	t90 = (x361<(x362^(x363&x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x368 = -1;
	static volatile int32_t t91 = -3800452;

	t91 = (x365<(x366^(x367&x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x370 = 76U;
	volatile int16_t x371 = 0;
	static int16_t x372 = 11;

	t92 = (x369<(x370^(x371&x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 0U;
	int64_t x374 = 2121502713622198LL;
	volatile int16_t x375 = INT16_MIN;
	volatile int8_t x376 = INT8_MIN;
	int32_t t93 = -3;

	t93 = (x373<(x374^(x375&x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MAX;
	uint16_t x379 = 4692U;
	uint16_t x380 = 0U;
	int32_t t94 = -431;

	t94 = (x377<(x378^(x379&x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = INT8_MAX;
	static uint8_t x382 = 2U;
	uint8_t x383 = 6U;
	int64_t x384 = INT64_MIN;

	t95 = (x381<(x382^(x383&x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = -3724346;
	int64_t x386 = INT64_MIN;
	int64_t x387 = INT64_MIN;
	int32_t t96 = -103572883;

	t96 = (x385<(x386^(x387&x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x389 = 4LLU;
	static int8_t x391 = 2;
	static uint64_t x392 = 3218806368203446LLU;
	int32_t t97 = 70;

	t97 = (x389<(x390^(x391&x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 54LLU;
	uint64_t x394 = 22856229659561LLU;
	int64_t x395 = -250954795413985674LL;
	volatile int8_t x396 = -1;
	volatile int32_t t98 = 5;

	t98 = (x393<(x394^(x395&x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = -1LL;
	int8_t x398 = INT8_MAX;
	uint32_t x399 = 84U;
	volatile uint64_t x400 = UINT64_MAX;

	t99 = (x397<(x398^(x399&x400)));

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

