#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t2 = 1;
int32_t x15 = INT32_MIN;
static volatile int32_t t3 = -42715;
int32_t t4 = 1374;
volatile int32_t t5 = -2681;
int16_t x33 = INT16_MIN;
int32_t x34 = -1;
volatile uint16_t x40 = 101U;
static uint8_t x47 = UINT8_MAX;
int64_t x51 = 685498805767784532LL;
static volatile int64_t x60 = 353389405588LL;
static volatile int32_t t14 = 685;
static int16_t x62 = 2510;
volatile int8_t x63 = 8;
static int16_t x65 = INT16_MAX;
uint64_t x71 = 555121059906685456LLU;
int32_t x77 = -1;
static int8_t x82 = INT8_MIN;
int8_t x91 = INT8_MIN;
int64_t x95 = INT64_MIN;
int64_t x98 = -1LL;
uint32_t x101 = 4085U;
int64_t x106 = INT64_MIN;
uint8_t x107 = 45U;
int16_t x110 = INT16_MAX;
int32_t x111 = INT32_MIN;
int32_t t27 = 3463;
int64_t x118 = INT64_MIN;
uint8_t x122 = 1U;
int64_t x123 = -1LL;
int32_t x125 = INT32_MIN;
static volatile int32_t t31 = -100851158;
volatile int32_t t32 = -7134754;
int16_t x135 = -124;
int8_t x142 = INT8_MAX;
static uint32_t x147 = 69631339U;
uint16_t x156 = 289U;
int8_t x157 = INT8_MIN;
volatile uint8_t x160 = UINT8_MAX;
volatile int32_t t39 = 232986436;
volatile int32_t t40 = 32397761;
int32_t x167 = 3861;
int16_t x169 = INT16_MIN;
uint16_t x170 = UINT16_MAX;
static int16_t x181 = 0;
static int8_t x183 = -1;
int16_t x188 = INT16_MIN;
int8_t x190 = -2;
static int64_t x192 = -1LL;
int32_t x193 = INT32_MAX;
uint64_t x196 = 4381926473725LLU;
volatile int32_t t48 = -1995746;
static int32_t t51 = -29600;
uint8_t x209 = UINT8_MAX;
int8_t x213 = -1;
static uint16_t x214 = 0U;
static int64_t x219 = INT64_MIN;
static int64_t x223 = -1LL;
int32_t x226 = INT32_MIN;
int64_t x228 = -13456LL;
uint16_t x232 = 730U;
int32_t t58 = -29;
static volatile uint32_t x238 = UINT32_MAX;
int32_t t59 = 4476657;
int16_t x243 = INT16_MAX;
uint8_t x247 = 1U;
int32_t t61 = -16471109;
int16_t x249 = INT16_MAX;
uint64_t x251 = UINT64_MAX;
int16_t x252 = INT16_MIN;
uint64_t x254 = UINT64_MAX;
static uint64_t x262 = 1278269427187395LLU;
volatile uint32_t x264 = UINT32_MAX;
static int8_t x266 = INT8_MAX;
volatile int16_t x267 = -1;
int32_t t66 = 1;
int32_t x282 = -51;
int32_t x283 = INT32_MAX;
uint64_t x285 = 12038695880618LLU;
int8_t x289 = -1;
static uint32_t x291 = UINT32_MAX;
static int8_t x293 = 5;
int64_t x295 = INT64_MAX;
volatile uint8_t x301 = 109U;
static volatile uint8_t x302 = 0U;
int32_t t76 = 398084986;
int32_t x312 = -1;
int64_t x313 = INT64_MIN;
static volatile int32_t t78 = 518314;
static int8_t x323 = INT8_MIN;
volatile int32_t t81 = -229844900;
uint64_t x329 = 8855067354137537LLU;
uint8_t x330 = UINT8_MAX;
volatile int32_t x331 = -3977267;
int32_t t82 = 101;
int32_t x333 = INT32_MIN;
uint64_t x335 = 7733410019305211LLU;
static volatile int32_t x339 = 199686;
int16_t x347 = INT16_MAX;
int32_t t86 = -405281;
uint32_t x349 = 56823U;
static int32_t x352 = -1;
static volatile int8_t x353 = 6;
volatile int32_t x357 = -7209635;
static volatile uint32_t x359 = 174595924U;
volatile int32_t t89 = 57645;
volatile uint8_t x362 = 7U;
int16_t x363 = INT16_MIN;
int64_t x364 = INT64_MAX;
int64_t x366 = -1036323058527678LL;
int32_t t91 = 1;
volatile uint32_t x374 = 822U;
int32_t t93 = -1;
static int32_t x378 = INT32_MIN;
uint16_t x387 = 87U;
volatile int32_t t96 = 3421710;
int16_t x390 = INT16_MAX;
uint32_t x391 = 2004U;
int16_t x392 = INT16_MIN;
static int32_t t97 = -5472788;
static volatile int16_t x394 = -3734;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MIN;
	uint32_t x3 = UINT32_MAX;
	static int16_t x4 = -51;
	static int32_t t0 = 7729;

	t0 = (x1<=(x2<(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	int32_t x6 = INT32_MAX;
	int64_t x7 = -1LL;
	volatile uint32_t x8 = 1U;
	int32_t t1 = 4;

	t1 = (x5<=(x6<(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 8;
	int16_t x10 = -5;
	int8_t x11 = 0;
	int64_t x12 = INT64_MIN;

	t2 = (x9<=(x10<(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	uint16_t x16 = 6U;

	t3 = (x13<=(x14<(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x18 = 5LL;
	static uint8_t x19 = 2U;
	static uint64_t x20 = 147LLU;

	t4 = (x17<=(x18<(x19|x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 0U;
	static int8_t x22 = INT8_MIN;
	int64_t x23 = INT64_MAX;
	uint32_t x24 = 7394456U;

	t5 = (x21<=(x22<(x23|x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	static int16_t x26 = INT16_MAX;
	static int8_t x27 = INT8_MIN;
	int8_t x28 = INT8_MIN;
	int32_t t6 = 2246411;

	t6 = (x25<=(x26<(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x29 = INT32_MIN;
	volatile int64_t x30 = -1LL;
	int64_t x31 = INT64_MIN;
	uint16_t x32 = 30110U;
	volatile int32_t t7 = -14848;

	t7 = (x29<=(x30<(x31|x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x35 = 10LLU;
	int32_t x36 = INT32_MAX;
	int32_t t8 = 3176;

	t8 = (x33<=(x34<(x35|x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = -1;
	int32_t x38 = INT32_MAX;
	uint16_t x39 = 1222U;
	static int32_t t9 = 168100293;

	t9 = (x37<=(x38<(x39|x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = UINT64_MAX;
	uint16_t x42 = UINT16_MAX;
	uint64_t x43 = 6694LLU;
	int64_t x44 = 279577939601066LL;
	volatile int32_t t10 = 90890925;

	t10 = (x41<=(x42<(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 15960;
	volatile int16_t x46 = 897;
	volatile int32_t x48 = -1;
	volatile int32_t t11 = -11;

	t11 = (x45<=(x46<(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 230444857445LLU;
	uint8_t x50 = 82U;
	volatile int32_t x52 = 0;
	volatile int32_t t12 = 0;

	t12 = (x49<=(x50<(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 404301544LLU;
	static int64_t x54 = -676171531LL;
	int8_t x55 = -8;
	static int16_t x56 = INT16_MIN;
	static volatile int32_t t13 = 159;

	t13 = (x53<=(x54<(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static uint8_t x58 = 71U;
	int8_t x59 = INT8_MIN;

	t14 = (x57<=(x58<(x59|x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 1U;
	int16_t x64 = 0;
	volatile int32_t t15 = -10;

	t15 = (x61<=(x62<(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = 939;
	static int32_t x67 = INT32_MAX;
	int32_t x68 = 55;
	volatile int32_t t16 = 151399;

	t16 = (x65<=(x66<(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x69 = 1U;
	int64_t x70 = INT64_MIN;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -1;

	t17 = (x69<=(x70<(x71|x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -2740;
	int16_t x74 = INT16_MAX;
	uint8_t x75 = 58U;
	int16_t x76 = -412;
	int32_t t18 = 33680;

	t18 = (x73<=(x74<(x75|x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = 97141094003332LLU;
	int8_t x79 = INT8_MAX;
	uint8_t x80 = UINT8_MAX;
	static int32_t t19 = -217;

	t19 = (x77<=(x78<(x79|x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x81 = UINT16_MAX;
	int32_t x83 = 2228;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -3736;

	t20 = (x81<=(x82<(x83|x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int64_t x86 = INT64_MIN;
	volatile uint16_t x87 = UINT16_MAX;
	uint8_t x88 = UINT8_MAX;
	static volatile int32_t t21 = 521236864;

	t21 = (x85<=(x86<(x87|x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	static int32_t x90 = INT32_MIN;
	static volatile int32_t x92 = -1;
	int32_t t22 = 3202650;

	t22 = (x89<=(x90<(x91|x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x93 = 1531170U;
	uint16_t x94 = UINT16_MAX;
	int32_t x96 = INT32_MAX;
	volatile int32_t t23 = 272983;

	t23 = (x93<=(x94<(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	int32_t x99 = -30;
	int64_t x100 = -1LL;
	int32_t t24 = -49;

	t24 = (x97<=(x98<(x99|x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = -212;
	volatile int8_t x103 = -15;
	volatile int64_t x104 = INT64_MAX;
	volatile int32_t t25 = -1;

	t25 = (x101<=(x102<(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int64_t x108 = INT64_MIN;
	int32_t t26 = 67337737;

	t26 = (x105<=(x106<(x107|x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MIN;
	int16_t x112 = 2;

	t27 = (x109<=(x110<(x111|x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -26009LL;
	int8_t x114 = -1;
	uint32_t x115 = UINT32_MAX;
	int8_t x116 = -1;
	volatile int32_t t28 = 373578;

	t28 = (x113<=(x114<(x115|x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 242U;
	static uint64_t x119 = UINT64_MAX;
	static int64_t x120 = INT64_MAX;
	volatile int32_t t29 = 112;

	t29 = (x117<=(x118<(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -167072458474370LL;
	volatile uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = -1099;

	t30 = (x121<=(x122<(x123|x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = UINT64_MAX;
	uint16_t x127 = 0U;
	int16_t x128 = INT16_MAX;

	t31 = (x125<=(x126<(x127|x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	volatile int16_t x130 = 7741;
	volatile uint64_t x131 = 2261801111822931711LLU;
	int8_t x132 = -1;

	t32 = (x129<=(x130<(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MIN;
	uint32_t x134 = 7952U;
	uint8_t x136 = UINT8_MAX;
	int32_t t33 = 777675631;

	t33 = (x133<=(x134<(x135|x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 1608955U;
	int16_t x138 = INT16_MAX;
	int32_t x139 = -1;
	int64_t x140 = -3943378048173370053LL;
	static int32_t t34 = 84236;

	t34 = (x137<=(x138<(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int32_t x143 = 1;
	uint64_t x144 = 3800596539921248027LLU;
	int32_t t35 = -29;

	t35 = (x141<=(x142<(x143|x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	uint8_t x146 = 0U;
	int8_t x148 = 0;
	int32_t t36 = 1;

	t36 = (x145<=(x146<(x147|x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 61U;
	volatile uint32_t x150 = 6U;
	volatile int8_t x151 = INT8_MIN;
	volatile uint64_t x152 = 882047922313LLU;
	int32_t t37 = -1206;

	t37 = (x149<=(x150<(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = 574;
	uint8_t x154 = UINT8_MAX;
	int32_t x155 = -1;
	int32_t t38 = 762337256;

	t38 = (x153<=(x154<(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -1;
	uint64_t x159 = UINT64_MAX;

	t39 = (x157<=(x158<(x159|x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = 0;
	uint8_t x162 = UINT8_MAX;
	int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MAX;

	t40 = (x161<=(x162<(x163|x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 11;
	volatile uint32_t x166 = UINT32_MAX;
	int16_t x168 = -1;
	volatile int32_t t41 = -2;

	t41 = (x165<=(x166<(x167|x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x171 = -1070657073;
	int32_t x172 = -1;
	int32_t t42 = -507383;

	t42 = (x169<=(x170<(x171|x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int32_t x174 = INT32_MAX;
	int32_t x175 = INT32_MIN;
	int16_t x176 = -120;
	int32_t t43 = -23512780;

	t43 = (x173<=(x174<(x175|x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 0;
	int64_t x178 = INT64_MAX;
	static int16_t x179 = -1;
	static int32_t x180 = INT32_MAX;
	volatile int32_t t44 = 181415;

	t44 = (x177<=(x178<(x179|x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = 1;
	int16_t x184 = -6691;
	int32_t t45 = -166606452;

	t45 = (x181<=(x182<(x183|x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -1;
	uint64_t x186 = UINT64_MAX;
	int16_t x187 = INT16_MIN;
	int32_t t46 = 21869;

	t46 = (x185<=(x186<(x187|x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	volatile int64_t x191 = INT64_MIN;
	volatile int32_t t47 = 429;

	t47 = (x189<=(x190<(x191|x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x194 = 5U;
	uint8_t x195 = UINT8_MAX;

	t48 = (x193<=(x194<(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	uint32_t x198 = UINT32_MAX;
	uint8_t x199 = 91U;
	uint16_t x200 = 62U;
	volatile int32_t t49 = -51608;

	t49 = (x197<=(x198<(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int64_t x202 = 668343511931087995LL;
	volatile int64_t x203 = INT64_MIN;
	int64_t x204 = 23490650379LL;
	int32_t t50 = -20353;

	t50 = (x201<=(x202<(x203|x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 1473376609050046542LLU;
	int16_t x206 = INT16_MAX;
	volatile int16_t x207 = INT16_MAX;
	int16_t x208 = INT16_MIN;

	t51 = (x205<=(x206<(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 420LLU;
	static int64_t x211 = INT64_MIN;
	int64_t x212 = -1LL;
	volatile int32_t t52 = -13750;

	t52 = (x209<=(x210<(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x215 = 40U;
	static int32_t x216 = 121343;
	int32_t t53 = -21;

	t53 = (x213<=(x214<(x215|x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	uint32_t x218 = 14759435U;
	int8_t x220 = INT8_MIN;
	int32_t t54 = 92333;

	t54 = (x217<=(x218<(x219|x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 48U;
	static int16_t x222 = -1;
	static int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -633569877;

	t55 = (x221<=(x222<(x223|x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	volatile int8_t x227 = -1;
	int32_t t56 = 0;

	t56 = (x225<=(x226<(x227|x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 1;
	int32_t x230 = -1;
	int16_t x231 = -2;
	volatile int32_t t57 = -404223000;

	t57 = (x229<=(x230<(x231|x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = 57593U;
	int64_t x234 = 60870700401LL;
	static int64_t x235 = 281074453LL;
	uint8_t x236 = UINT8_MAX;

	t58 = (x233<=(x234<(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 25851906U;
	volatile uint32_t x239 = UINT32_MAX;
	volatile int64_t x240 = INT64_MIN;

	t59 = (x237<=(x238<(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = -137737027;
	volatile uint32_t x242 = UINT32_MAX;
	int32_t x244 = 13749;
	volatile int32_t t60 = -62484;

	t60 = (x241<=(x242<(x243|x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	int32_t x246 = 22;
	int16_t x248 = INT16_MIN;

	t61 = (x245<=(x246<(x247|x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x250 = INT8_MAX;
	int32_t t62 = -30;

	t62 = (x249<=(x250<(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = 15578LLU;
	int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MAX;
	int32_t t63 = -1332457;

	t63 = (x253<=(x254<(x255|x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 8921405761LLU;
	static uint64_t x258 = UINT64_MAX;
	uint32_t x259 = 220U;
	int16_t x260 = INT16_MAX;
	int32_t t64 = 25857;

	t64 = (x257<=(x258<(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 4042851509146LLU;
	uint32_t x263 = UINT32_MAX;
	volatile int32_t t65 = -143;

	t65 = (x261<=(x262<(x263|x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = 7013228U;
	volatile uint64_t x268 = 0LLU;

	t66 = (x265<=(x266<(x267|x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x269 = 359789;
	int32_t x270 = 5463965;
	int64_t x271 = -41295249510LL;
	int16_t x272 = -1;
	int32_t t67 = 74622;

	t67 = (x269<=(x270<(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MIN;
	volatile int16_t x275 = INT16_MIN;
	int64_t x276 = INT64_MIN;
	int32_t t68 = -435;

	t68 = (x273<=(x274<(x275|x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = -40;
	int8_t x278 = INT8_MAX;
	int32_t x279 = INT32_MAX;
	int64_t x280 = INT64_MIN;
	volatile int32_t t69 = -70814;

	t69 = (x277<=(x278<(x279|x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 337852U;
	int8_t x284 = INT8_MIN;
	volatile int32_t t70 = 0;

	t70 = (x281<=(x282<(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MAX;
	uint8_t x287 = UINT8_MAX;
	int64_t x288 = INT64_MAX;
	int32_t t71 = 102169;

	t71 = (x285<=(x286<(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x290 = -1;
	int32_t x292 = INT32_MAX;
	int32_t t72 = 23;

	t72 = (x289<=(x290<(x291|x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MIN;
	uint8_t x296 = 0U;
	volatile int32_t t73 = 22249944;

	t73 = (x293<=(x294<(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 4304;
	static volatile int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MIN;
	static int64_t x300 = INT64_MIN;
	volatile int32_t t74 = -4235788;

	t74 = (x297<=(x298<(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x303 = -59;
	int32_t x304 = -1;
	int32_t t75 = -395647;

	t75 = (x301<=(x302<(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	static volatile uint16_t x306 = 538U;
	volatile int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;

	t76 = (x305<=(x306<(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = -16380;
	uint32_t x310 = UINT32_MAX;
	volatile int16_t x311 = -1;
	volatile int32_t t77 = -10917471;

	t77 = (x309<=(x310<(x311|x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x314 = 0;
	static uint32_t x315 = UINT32_MAX;
	static int8_t x316 = -1;

	t78 = (x313<=(x314<(x315|x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = 1636089LL;
	uint8_t x318 = UINT8_MAX;
	static int8_t x319 = INT8_MIN;
	int32_t x320 = -1;
	static int32_t t79 = 1;

	t79 = (x317<=(x318<(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x321 = UINT16_MAX;
	static int32_t x322 = -1;
	int64_t x324 = 16156LL;
	int32_t t80 = -122639;

	t80 = (x321<=(x322<(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 2054525;
	volatile int8_t x326 = INT8_MIN;
	int8_t x327 = -29;
	static uint16_t x328 = 5U;

	t81 = (x325<=(x326<(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x332 = 526LLU;

	t82 = (x329<=(x330<(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x334 = 30714152157789LL;
	uint64_t x336 = 10658980233057008LLU;
	static int32_t t83 = 163;

	t83 = (x333<=(x334<(x335|x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	static volatile int32_t x338 = INT32_MIN;
	int32_t x340 = INT32_MIN;
	static int32_t t84 = 17180;

	t84 = (x337<=(x338<(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = 3339U;
	static int16_t x342 = INT16_MIN;
	static int32_t x343 = -1;
	int32_t x344 = -1;
	int32_t t85 = 2704;

	t85 = (x341<=(x342<(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	int32_t x346 = -48079008;
	volatile int8_t x348 = 5;

	t86 = (x345<=(x346<(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = INT64_MIN;
	static volatile uint8_t x351 = 1U;
	volatile int32_t t87 = -56;

	t87 = (x349<=(x350<(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x354 = -137888161;
	volatile int16_t x355 = INT16_MIN;
	int32_t x356 = 77;
	volatile int32_t t88 = -1264;

	t88 = (x353<=(x354<(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x358 = INT64_MIN;
	int64_t x360 = -1LL;

	t89 = (x357<=(x358<(x359|x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 73581U;
	volatile int32_t t90 = -1426;

	t90 = (x361<=(x362<(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 6U;
	uint16_t x367 = UINT16_MAX;
	int32_t x368 = -1;

	t91 = (x365<=(x366<(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = 2U;
	int64_t x370 = -3932964352480692101LL;
	int16_t x371 = INT16_MIN;
	static int8_t x372 = INT8_MAX;
	static volatile int32_t t92 = -109941721;

	t92 = (x369<=(x370<(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = 2216822311506422718LL;
	volatile uint16_t x375 = 13034U;
	uint64_t x376 = UINT64_MAX;

	t93 = (x373<=(x374<(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	volatile int32_t x379 = INT32_MIN;
	uint64_t x380 = 3239291642854963128LLU;
	int32_t t94 = 104261357;

	t94 = (x377<=(x378<(x379|x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	static uint8_t x382 = 3U;
	uint8_t x383 = 1U;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t95 = -2;

	t95 = (x381<=(x382<(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = 0;
	int64_t x386 = 2442507638371079LL;
	uint64_t x388 = 6284712677680139837LLU;

	t96 = (x385<=(x386<(x387|x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;

	t97 = (x389<=(x390<(x391|x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x395 = INT16_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t98 = 452273;

	t98 = (x393<=(x394<(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 7U;
	int8_t x398 = 28;
	int64_t x399 = INT64_MIN;
	int32_t x400 = INT32_MAX;
	volatile int32_t t99 = 19671;

	t99 = (x397<=(x398<(x399|x400)));

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
