#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = -585;
int8_t x6 = INT8_MIN;
int8_t x7 = -1;
static uint32_t x14 = 3352U;
volatile int64_t t3 = 17864312LL;
static uint64_t x21 = UINT64_MAX;
uint16_t x24 = 616U;
static int8_t x27 = INT8_MIN;
static uint8_t x28 = 44U;
volatile uint64_t t5 = 1501373LLU;
int32_t x44 = INT32_MIN;
uint16_t x45 = 0U;
static volatile int32_t t9 = 0;
int64_t x56 = -1LL;
uint32_t x60 = UINT32_MAX;
uint32_t x62 = 26U;
int16_t x73 = INT16_MIN;
uint32_t x75 = 0U;
volatile int32_t x76 = INT32_MIN;
int8_t x78 = INT8_MIN;
volatile int8_t x79 = INT8_MIN;
static uint16_t x81 = 1015U;
volatile uint64_t x83 = 215LLU;
int8_t x84 = -6;
volatile uint8_t x86 = 7U;
volatile uint8_t x90 = UINT8_MAX;
int32_t t20 = -884;
int32_t x94 = -1;
int32_t t21 = 77814590;
volatile int8_t x97 = INT8_MAX;
int64_t x101 = 51141516516LL;
volatile int16_t x104 = -790;
volatile int64_t x105 = -1LL;
int32_t x106 = INT32_MIN;
uint8_t x111 = 6U;
volatile int16_t x122 = INT16_MAX;
int64_t t27 = -4LL;
static int8_t x127 = -1;
static int64_t x132 = -1082718236LL;
int16_t x139 = INT16_MAX;
int64_t x141 = 6721216LL;
static int64_t x142 = INT64_MIN;
int64_t x144 = 945596032449540403LL;
uint64_t x146 = UINT64_MAX;
static uint16_t x153 = UINT16_MAX;
static volatile uint8_t x160 = 34U;
static volatile int32_t t36 = -8;
int64_t x165 = INT64_MIN;
uint32_t x173 = 13541U;
int32_t x174 = INT32_MAX;
static int32_t t41 = -40;
static int32_t t42 = 1407;
static int8_t x195 = INT8_MAX;
uint16_t x196 = 335U;
int8_t x197 = 14;
int8_t x198 = INT8_MIN;
int8_t x200 = 1;
int8_t x202 = -21;
uint32_t x207 = 3408U;
int32_t x210 = 6;
int64_t x218 = -122LL;
uint32_t x221 = UINT32_MAX;
uint16_t x223 = 3241U;
volatile uint64_t x233 = 35LLU;
volatile uint64_t t53 = 490018399LLU;
int16_t x241 = -11;
int32_t x266 = INT32_MIN;
static uint32_t x267 = 1U;
int32_t t59 = -692182912;
int16_t x272 = INT16_MAX;
uint32_t t62 = 111030925U;
static uint16_t x283 = 8463U;
int16_t x286 = INT16_MIN;
uint64_t x287 = 171722789973787LLU;
volatile int32_t t64 = -96659;
int16_t x291 = 11039;
int64_t x298 = INT64_MIN;
int8_t x300 = -1;
volatile int32_t t67 = 86;
static volatile int32_t x302 = INT32_MIN;
volatile int64_t t68 = 118374107738LL;
uint32_t x314 = UINT32_MAX;
volatile uint32_t x316 = 243U;
static uint32_t x319 = UINT32_MAX;
int32_t t72 = 589970;
int8_t x323 = INT8_MIN;
int64_t x330 = INT64_MAX;
static int8_t x332 = INT8_MAX;
int32_t t74 = 6;
int64_t t76 = 5780LL;
int8_t x354 = -2;
volatile uint64_t t79 = 0LLU;
int64_t x358 = INT64_MIN;
static int64_t x363 = INT64_MAX;
static int8_t x366 = -5;
volatile int32_t t82 = -34786458;
int64_t x374 = -605LL;
int32_t t83 = 0;
volatile uint32_t x385 = 196702U;
int64_t x387 = 3LL;
int64_t x389 = INT64_MAX;
int32_t x391 = -19976;
volatile int32_t x392 = -1119;
volatile int64_t t87 = INT64_MAX;
int32_t t88 = 0;
uint32_t x404 = 1142597949U;
volatile uint16_t x406 = 134U;
static volatile int32_t x410 = INT32_MAX;
static uint32_t x411 = 1581U;
int32_t t92 = -11;
volatile uint32_t x413 = UINT32_MAX;
volatile int8_t x415 = INT8_MIN;
uint32_t t93 = UINT32_MAX;
int64_t x417 = 0LL;
volatile uint64_t x420 = UINT64_MAX;
static int64_t t94 = 243385LL;
uint32_t x421 = UINT32_MAX;
int16_t x430 = INT16_MIN;
int8_t x431 = 6;
uint8_t x433 = 26U;
uint32_t x435 = UINT32_MAX;
uint8_t x445 = 3U;
int16_t x447 = INT16_MIN;


void f0(void) {
	int32_t x1 = -1;
	uint32_t x2 = UINT32_MAX;
	int8_t x3 = 0;
	static int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 45;

	t0 = (x1+(x2<(x3+x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -1;

	t1 = (x5+(x6<(x7+x8)));

	if (t1 != -585) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 8150945;
	static uint64_t x10 = UINT64_MAX;
	static volatile uint32_t x11 = 1285U;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -501152884;

	t2 = (x9+(x10<(x11+x12)));

	if (t2 != 8150945) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -56589987764146LL;
	uint32_t x15 = 894U;
	static int32_t x16 = INT32_MIN;

	t3 = (x13+(x14<(x15+x16)));

	if (t3 != -56589987764145LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = 1;
	static int64_t x23 = -903440930982546926LL;
	uint64_t t4 = UINT64_MAX;

	t4 = (x21+(x22<(x23+x24)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 59139LLU;
	int32_t x26 = INT32_MIN;

	t5 = (x25+(x26<(x27+x28)));

	if (t5 != 59140LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -1LL;
	uint32_t x34 = 679001650U;
	int16_t x35 = -1;
	uint16_t x36 = 30841U;
	volatile int64_t t6 = -1498057681LL;

	t6 = (x33+(x34<(x35+x36)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = UINT8_MAX;
	static uint32_t x38 = UINT32_MAX;
	int32_t x39 = INT32_MIN;
	volatile int8_t x40 = INT8_MAX;
	static volatile int32_t t7 = -24;

	t7 = (x37+(x38<(x39+x40)));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = 1;
	uint8_t x42 = UINT8_MAX;
	int16_t x43 = INT16_MAX;
	int32_t t8 = -33;

	t8 = (x41+(x42<(x43+x44)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x46 = 1647;
	int8_t x47 = INT8_MAX;
	static uint8_t x48 = 6U;

	t9 = (x45+(x46<(x47+x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -75793315173LL;
	int64_t x50 = INT64_MIN;
	static volatile int32_t x51 = -1;
	int32_t x52 = INT32_MAX;
	int64_t t10 = -55095LL;

	t10 = (x49+(x50<(x51+x52)));

	if (t10 != -75793315172LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = UINT32_MAX;
	int16_t x54 = -1;
	int16_t x55 = INT16_MIN;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = (x53+(x54<(x55+x56)));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -287742LL;
	int64_t x58 = 1LL;
	static volatile uint16_t x59 = 337U;
	int64_t t12 = -1LL;

	t12 = (x57+(x58<(x59+x60)));

	if (t12 != -287741LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = INT64_MIN;
	volatile int32_t x63 = 78237569;
	static volatile int32_t x64 = -8852930;
	volatile int64_t t13 = -12345976LL;

	t13 = (x61+(x62<(x63+x64)));

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = 7;
	static uint16_t x66 = UINT16_MAX;
	int32_t x67 = INT32_MIN;
	uint64_t x68 = 14741140961575LLU;
	int32_t t14 = 383953;

	t14 = (x65+(x66<(x67+x68)));

	if (t14 != 8) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = -1;
	int32_t x70 = INT32_MIN;
	static int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MAX;
	int32_t t15 = 417565;

	t15 = (x69+(x70<(x71+x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x74 = 102342U;
	volatile int32_t t16 = 566;

	t16 = (x73+(x74<(x75+x76)));

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = -1;
	static int8_t x80 = INT8_MIN;
	volatile int32_t t17 = 15457649;

	t17 = (x77+(x78<(x79+x80)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x82 = UINT16_MAX;
	volatile int32_t t18 = 0;

	t18 = (x81+(x82<(x83+x84)));

	if (t18 != 1015) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 11U;
	static uint16_t x87 = 118U;
	uint32_t x88 = UINT32_MAX;
	static int32_t t19 = -1;

	t19 = (x85+(x86<(x87+x88)));

	if (t19 != 12) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x89 = 9U;
	int16_t x91 = 0;
	uint8_t x92 = 8U;

	t20 = (x89+(x90<(x91+x92)));

	if (t20 != 9) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -1;
	int64_t x95 = INT64_MIN;
	uint64_t x96 = UINT64_MAX;

	t21 = (x93+(x94<(x95+x96)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x98 = -1;
	static int16_t x99 = 7218;
	uint32_t x100 = 414657214U;
	int32_t t22 = -1;

	t22 = (x97+(x98<(x99+x100)));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x102 = 3979997502148LLU;
	volatile uint32_t x103 = UINT32_MAX;
	static int64_t t23 = -606969077701190LL;

	t23 = (x101+(x102<(x103+x104)));

	if (t23 != 51141516516LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x107 = INT64_MIN;
	uint16_t x108 = UINT16_MAX;
	int64_t t24 = 3081401394LL;

	t24 = (x105+(x106<(x107+x108)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 364764;
	int8_t x110 = INT8_MIN;
	volatile int32_t x112 = -1961;
	int32_t t25 = 834382;

	t25 = (x109+(x110<(x111+x112)));

	if (t25 != 364764) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MIN;
	uint16_t x114 = UINT16_MAX;
	uint8_t x115 = 9U;
	volatile int64_t x116 = -1LL;
	int32_t t26 = -18;

	t26 = (x113+(x114<(x115+x116)));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x121 = -1LL;
	uint16_t x123 = 3405U;
	int8_t x124 = 0;

	t27 = (x121+(x122<(x123+x124)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = -1666455140392LL;
	int32_t x126 = 161281649;
	static int16_t x128 = -1;
	static volatile int64_t t28 = -478827668443192029LL;

	t28 = (x125+(x126<(x127+x128)));

	if (t28 != -1666455140392LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = 19;
	static int8_t x130 = INT8_MIN;
	uint16_t x131 = UINT16_MAX;
	static volatile int32_t t29 = 0;

	t29 = (x129+(x130<(x131+x132)));

	if (t29 != 19) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = 122U;
	int64_t x134 = INT64_MAX;
	volatile uint8_t x135 = 38U;
	volatile uint32_t x136 = UINT32_MAX;
	volatile uint32_t t30 = 83688U;

	t30 = (x133+(x134<(x135+x136)));

	if (t30 != 122U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x137 = UINT8_MAX;
	int8_t x138 = 54;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t31 = 192;

	t31 = (x137+(x138<(x139+x140)));

	if (t31 != 256) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x143 = 8143814395467LLU;
	static int64_t t32 = -3404390207989197LL;

	t32 = (x141+(x142<(x143+x144)));

	if (t32 != 6721216LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = INT64_MIN;
	int64_t x147 = -68413286LL;
	int8_t x148 = INT8_MAX;
	volatile int64_t t33 = INT64_MIN;

	t33 = (x145+(x146<(x147+x148)));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x154 = -1LL;
	static int16_t x155 = -1;
	int64_t x156 = INT64_MAX;
	volatile int32_t t34 = -968;

	t34 = (x153+(x154<(x155+x156)));

	if (t34 != 65536) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 40U;
	int32_t x158 = -1;
	int32_t x159 = INT32_MIN;
	volatile int32_t t35 = -209;

	t35 = (x157+(x158<(x159+x160)));

	if (t35 != 40) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x161 = 5U;
	volatile int64_t x162 = INT64_MAX;
	int16_t x163 = INT16_MAX;
	uint16_t x164 = 57U;

	t36 = (x161+(x162<(x163+x164)));

	if (t36 != 5) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x166 = INT64_MIN;
	int8_t x167 = INT8_MIN;
	volatile int32_t x168 = 410;
	int64_t t37 = -221944428660770067LL;

	t37 = (x165+(x166<(x167+x168)));

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 3338U;
	int32_t x170 = INT32_MIN;
	int16_t x171 = 11490;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t38 = -966596324;

	t38 = (x169+(x170<(x171+x172)));

	if (t38 != 3339) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x175 = INT64_MIN;
	volatile uint64_t x176 = UINT64_MAX;
	volatile uint32_t t39 = 33U;

	t39 = (x173+(x174<(x175+x176)));

	if (t39 != 13542U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = INT64_MIN;
	uint16_t x178 = UINT16_MAX;
	volatile int32_t x179 = INT32_MAX;
	volatile int32_t x180 = 0;
	static volatile int64_t t40 = -7365992978LL;

	t40 = (x177+(x178<(x179+x180)));

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = -91;
	uint8_t x187 = 69U;
	static int8_t x188 = INT8_MIN;

	t41 = (x185+(x186<(x187+x188)));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x189 = 0U;
	volatile uint64_t x190 = UINT64_MAX;
	int8_t x191 = INT8_MAX;
	int16_t x192 = INT16_MIN;

	t42 = (x189+(x190<(x191+x192)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x193 = -1;
	static int16_t x194 = 2;
	static int32_t t43 = -243266352;

	t43 = (x193+(x194<(x195+x196)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x199 = INT16_MAX;
	static int32_t t44 = 226;

	t44 = (x197+(x198<(x199+x200)));

	if (t44 != 15) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = -4135512;
	static int64_t x203 = -10572LL;
	volatile int64_t x204 = 1647538572LL;
	int32_t t45 = -22048846;

	t45 = (x201+(x202<(x203+x204)));

	if (t45 != -4135511) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = 1;
	uint64_t x206 = 129827286969LLU;
	static uint16_t x208 = 1973U;
	int32_t t46 = -15342;

	t46 = (x205+(x206<(x207+x208)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MIN;
	int8_t x211 = 30;
	volatile int64_t x212 = -1LL;
	static volatile int32_t t47 = 265134577;

	t47 = (x209+(x210<(x211+x212)));

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x213 = 19800296800LLU;
	int8_t x214 = -60;
	int64_t x215 = -873309555733LL;
	volatile uint32_t x216 = UINT32_MAX;
	static uint64_t t48 = 1354327LLU;

	t48 = (x213+(x214<(x215+x216)));

	if (t48 != 19800296800LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = INT32_MIN;
	int32_t x219 = -1;
	static int64_t x220 = -430345LL;
	int32_t t49 = INT32_MIN;

	t49 = (x217+(x218<(x219+x220)));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x222 = INT32_MIN;
	volatile int32_t x224 = 94;
	uint32_t t50 = 24117U;

	t50 = (x221+(x222<(x223+x224)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x225 = UINT16_MAX;
	volatile int32_t x226 = -1;
	int16_t x227 = 0;
	uint32_t x228 = 1672429091U;
	static int32_t t51 = -89655007;

	t51 = (x225+(x226<(x227+x228)));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x229 = -1;
	static uint16_t x230 = 11U;
	static int16_t x231 = INT16_MIN;
	int16_t x232 = INT16_MIN;
	int32_t t52 = -357;

	t52 = (x229+(x230<(x231+x232)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x234 = UINT64_MAX;
	uint16_t x235 = UINT16_MAX;
	uint32_t x236 = 56U;

	t53 = (x233+(x234<(x235+x236)));

	if (t53 != 35LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x242 = INT32_MAX;
	int8_t x243 = 1;
	int16_t x244 = 891;
	static volatile int32_t t54 = 3916;

	t54 = (x241+(x242<(x243+x244)));

	if (t54 != -11) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = -1;
	uint32_t x246 = 3570U;
	static int8_t x247 = INT8_MIN;
	volatile int16_t x248 = 63;
	volatile int32_t t55 = -4231528;

	t55 = (x245+(x246<(x247+x248)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x249 = UINT8_MAX;
	volatile int32_t x250 = -26;
	int64_t x251 = INT64_MIN;
	volatile uint64_t x252 = UINT64_MAX;
	volatile int32_t t56 = 172697;

	t56 = (x249+(x250<(x251+x252)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = INT8_MAX;
	static volatile uint8_t x254 = 30U;
	int16_t x255 = INT16_MAX;
	int32_t x256 = 592059289;
	int32_t t57 = 168769;

	t57 = (x253+(x254<(x255+x256)));

	if (t57 != 128) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = -3;
	uint16_t x262 = UINT16_MAX;
	uint16_t x263 = 0U;
	int32_t x264 = INT32_MIN;
	int32_t t58 = -72;

	t58 = (x261+(x262<(x263+x264)));

	if (t58 != -3) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x265 = 7U;
	int16_t x268 = 0;

	t59 = (x265+(x266<(x267+x268)));

	if (t59 != 7) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MIN;
	volatile int16_t x270 = INT16_MIN;
	int8_t x271 = -1;
	static int32_t t60 = 484065647;

	t60 = (x269+(x270<(x271+x272)));

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x273 = -1;
	int8_t x274 = -1;
	static int8_t x275 = -1;
	static int32_t x276 = -1;
	int32_t t61 = 10047;

	t61 = (x273+(x274<(x275+x276)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x277 = 194850U;
	int32_t x278 = INT32_MAX;
	int8_t x279 = -1;
	int16_t x280 = INT16_MIN;

	t62 = (x277+(x278<(x279+x280)));

	if (t62 != 194850U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = INT16_MIN;
	static int16_t x282 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	int32_t t63 = -3;

	t63 = (x281+(x282<(x283+x284)));

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x285 = UINT8_MAX;
	static int64_t x288 = INT64_MAX;

	t64 = (x285+(x286<(x287+x288)));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = -428041021706546LL;
	volatile int32_t x290 = INT32_MIN;
	static int32_t x292 = INT32_MIN;
	int64_t t65 = -161230139927417754LL;

	t65 = (x289+(x290<(x291+x292)));

	if (t65 != -428041021706545LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = -1;
	int64_t x294 = INT64_MIN;
	uint8_t x295 = UINT8_MAX;
	int16_t x296 = 10856;
	int32_t t66 = 14466;

	t66 = (x293+(x294<(x295+x296)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x299 = UINT16_MAX;

	t67 = (x297+(x298<(x299+x300)));

	if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = -1LL;
	int16_t x303 = -1;
	static volatile int8_t x304 = INT8_MIN;

	t68 = (x301+(x302<(x303+x304)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x305 = 393419134458119818LL;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = INT8_MIN;
	int32_t x308 = -1;
	volatile int64_t t69 = 22881863842754963LL;

	t69 = (x305+(x306<(x307+x308)));

	if (t69 != 393419134458119818LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x309 = 687U;
	volatile uint32_t x310 = UINT32_MAX;
	int8_t x311 = -1;
	int32_t x312 = -4;
	int32_t t70 = -1;

	t70 = (x309+(x310<(x311+x312)));

	if (t70 != 687) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x313 = INT32_MAX;
	uint32_t x315 = UINT32_MAX;
	int32_t t71 = INT32_MAX;

	t71 = (x313+(x314<(x315+x316)));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x317 = INT16_MIN;
	int8_t x318 = INT8_MIN;
	static uint32_t x320 = 217494U;

	t72 = (x317+(x318<(x319+x320)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x321 = UINT16_MAX;
	int64_t x322 = INT64_MIN;
	volatile uint8_t x324 = UINT8_MAX;
	volatile int32_t t73 = -628420406;

	t73 = (x321+(x322<(x323+x324)));

	if (t73 != 65536) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x329 = UINT8_MAX;
	uint16_t x331 = 25U;

	t74 = (x329+(x330<(x331+x332)));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = -55516940166063004LL;
	volatile int16_t x334 = -1;
	int8_t x335 = -1;
	int32_t x336 = 1;
	volatile int64_t t75 = 416337404493LL;

	t75 = (x333+(x334<(x335+x336)));

	if (t75 != -55516940166063003LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = -1LL;
	int16_t x338 = -1;
	volatile uint8_t x339 = 3U;
	static uint8_t x340 = UINT8_MAX;

	t76 = (x337+(x338<(x339+x340)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x341 = 0U;
	volatile int8_t x342 = 0;
	uint64_t x343 = 468495LLU;
	static uint64_t x344 = 44LLU;
	static uint32_t t77 = 1570521U;

	t77 = (x341+(x342<(x343+x344)));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = 57U;
	int8_t x346 = INT8_MIN;
	int16_t x347 = -1;
	volatile int64_t x348 = 149631LL;
	volatile int32_t t78 = -636367;

	t78 = (x345+(x346<(x347+x348)));

	if (t78 != 58) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x353 = 5626LLU;
	uint32_t x355 = UINT32_MAX;
	static uint16_t x356 = 8280U;

	t79 = (x353+(x354<(x355+x356)));

	if (t79 != 5626LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x357 = INT64_MIN;
	int16_t x359 = INT16_MAX;
	uint32_t x360 = 47U;
	int64_t t80 = 12757974359LL;

	t80 = (x357+(x358<(x359+x360)));

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = -1;
	uint64_t x362 = UINT64_MAX;
	uint64_t x364 = 31751966647676LLU;
	volatile int32_t t81 = -1319751;

	t81 = (x361+(x362<(x363+x364)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x365 = INT8_MIN;
	static int64_t x367 = -950362446888LL;
	int16_t x368 = INT16_MIN;

	t82 = (x365+(x366<(x367+x368)));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x373 = UINT8_MAX;
	int32_t x375 = INT32_MIN;
	static int32_t x376 = 73;

	t83 = (x373+(x374<(x375+x376)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = 0;
	int8_t x378 = -1;
	uint16_t x379 = UINT16_MAX;
	int16_t x380 = -1;
	static volatile int32_t t84 = -8105590;

	t84 = (x377+(x378<(x379+x380)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x381 = -2317;
	int32_t x382 = INT32_MIN;
	uint64_t x383 = 315LLU;
	uint64_t x384 = 4292978152442LLU;
	int32_t t85 = -216130283;

	t85 = (x381+(x382<(x383+x384)));

	if (t85 != -2317) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x386 = 111U;
	int32_t x388 = INT32_MIN;
	uint32_t t86 = 15647950U;

	t86 = (x385+(x386<(x387+x388)));

	if (t86 != 196702U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x390 = UINT8_MAX;

	t87 = (x389+(x390<(x391+x392)));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x393 = INT32_MIN;
	uint16_t x394 = 2U;
	int8_t x395 = INT8_MIN;
	volatile int64_t x396 = 48140039245LL;

	t88 = (x393+(x394<(x395+x396)));

	if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x397 = 2086407424937764282LLU;
	volatile int16_t x398 = INT16_MIN;
	uint32_t x399 = 36954U;
	uint8_t x400 = UINT8_MAX;
	static volatile uint64_t t89 = 92LLU;

	t89 = (x397+(x398<(x399+x400)));

	if (t89 != 2086407424937764282LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x401 = 12202508LLU;
	uint8_t x402 = UINT8_MAX;
	static int16_t x403 = -1;
	volatile uint64_t t90 = 4945284429095LLU;

	t90 = (x401+(x402<(x403+x404)));

	if (t90 != 12202509LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x405 = UINT8_MAX;
	volatile uint16_t x407 = 1U;
	uint64_t x408 = 796LLU;
	volatile int32_t t91 = -135179852;

	t91 = (x405+(x406<(x407+x408)));

	if (t91 != 256) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = INT16_MIN;
	volatile int16_t x412 = 25;

	t92 = (x409+(x410<(x411+x412)));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x414 = 58LL;
	static int16_t x416 = INT16_MIN;

	t93 = (x413+(x414<(x415+x416)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x418 = 1U;
	volatile int16_t x419 = INT16_MIN;

	t94 = (x417+(x418<(x419+x420)));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x422 = INT32_MIN;
	static uint32_t x423 = 3958U;
	int32_t x424 = INT32_MIN;
	static volatile uint32_t t95 = 31798433U;

	t95 = (x421+(x422<(x423+x424)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x429 = -503925526LL;
	static uint8_t x432 = 2U;
	int64_t t96 = 2071673LL;

	t96 = (x429+(x430<(x431+x432)));

	if (t96 != -503925525LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x434 = INT32_MIN;
	static int64_t x436 = -14060LL;
	volatile int32_t t97 = 2;

	t97 = (x433+(x434<(x435+x436)));

	if (t97 != 27) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x437 = -9;
	int8_t x438 = -1;
	volatile int8_t x439 = -1;
	static int32_t x440 = INT32_MAX;
	volatile int32_t t98 = 805163480;

	t98 = (x437+(x438<(x439+x440)));

	if (t98 != -8) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x446 = 4547LL;
	volatile uint8_t x448 = 0U;
	volatile int32_t t99 = -13;

	t99 = (x445+(x446<(x447+x448)));

	if (t99 != 3) { NG(); } else { ; }
	
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

