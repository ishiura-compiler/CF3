#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x12 = -1567;
uint32_t t3 = 3166728U;
int16_t x17 = -1;
static int16_t x29 = INT16_MAX;
volatile int64_t t6 = 0LL;
uint64_t t7 = 10LLU;
int16_t x39 = INT16_MIN;
static uint16_t x40 = 11379U;
uint64_t t9 = 23245296465LLU;
static int64_t x45 = INT64_MIN;
uint64_t x58 = 21862802296351239LLU;
int16_t x61 = -5;
static int32_t x63 = -339801540;
volatile uint16_t x66 = 2U;
static int8_t x68 = INT8_MIN;
int16_t x69 = INT16_MIN;
int64_t x71 = INT64_MIN;
int32_t t18 = -140372;
int32_t x85 = 971;
uint8_t x99 = 1U;
int16_t x100 = -67;
int16_t x111 = INT16_MIN;
int8_t x113 = INT8_MAX;
uint64_t t26 = 5307347464073649LLU;
volatile uint64_t t27 = 95759782557LLU;
static volatile int64_t x129 = -205593LL;
uint32_t x137 = 338U;
static uint32_t t30 = 468424U;
static volatile int32_t t33 = -1687;
int32_t x160 = INT32_MIN;
int16_t x162 = -1;
int64_t x164 = -1LL;
uint16_t x167 = UINT16_MAX;
int64_t t36 = 86150285208LL;
volatile uint32_t t37 = UINT32_MAX;
static int16_t x178 = INT16_MAX;
uint8_t x180 = 26U;
uint32_t x181 = 12320U;
static int32_t x186 = INT32_MIN;
volatile uint16_t x191 = 3U;
uint16_t x192 = 6404U;
static int8_t x193 = INT8_MAX;
static int32_t x194 = 5774494;
uint8_t x200 = 120U;
int8_t x203 = INT8_MAX;
uint16_t x205 = 25U;
static int32_t x208 = INT32_MIN;
uint16_t x232 = 618U;
int8_t x235 = -1;
int32_t x239 = INT32_MIN;
uint8_t x243 = 4U;
uint16_t x250 = UINT16_MAX;
static uint32_t x257 = UINT32_MAX;
uint32_t t57 = 5206208U;
volatile uint32_t x263 = UINT32_MAX;
volatile int64_t t59 = -41706421902664907LL;
uint32_t x269 = 533595816U;
static volatile int16_t x272 = -1;
int8_t x276 = INT8_MIN;
volatile int32_t t61 = -3380;
volatile uint64_t x289 = 263820612365LLU;
static volatile uint64_t t64 = 1386042525690564487LLU;
uint64_t x296 = 628901LLU;
volatile uint64_t x299 = 313831831281908251LLU;
static volatile uint64_t t66 = 2496047356137297LLU;
int64_t x303 = INT64_MIN;
int8_t x307 = -1;
int32_t t68 = 1623872;
volatile int32_t t69 = 1888;
int8_t x323 = 1;
int16_t x335 = -1;
int32_t x339 = -9270083;
static volatile uint32_t x340 = UINT32_MAX;
static int64_t t74 = -1LL;
volatile int8_t x347 = INT8_MIN;
int64_t x352 = INT64_MAX;
uint64_t t76 = UINT64_MAX;
static int16_t x353 = INT16_MAX;
uint16_t x354 = UINT16_MAX;
int64_t x358 = INT64_MIN;
volatile int8_t x361 = -1;
int64_t x368 = INT64_MAX;
uint64_t t81 = 130392362443LLU;
volatile int64_t t82 = -15289300LL;
int32_t x377 = INT32_MIN;
int16_t x378 = -5;
static int64_t x379 = -75132394123LL;
static int64_t x382 = INT64_MIN;
uint64_t x384 = 351554327551163125LLU;
uint64_t x395 = 211LLU;
uint64_t t87 = 2086721LLU;
int64_t x397 = INT64_MIN;
volatile int32_t x400 = INT32_MIN;
volatile int64_t t88 = INT64_MIN;
uint32_t x415 = 7728U;
static int16_t x418 = INT16_MAX;
int8_t x420 = -1;
uint8_t x421 = 7U;
int16_t x422 = -22;
int16_t x423 = INT16_MIN;
int64_t t91 = 536772983497359LL;
volatile uint64_t t92 = 6LLU;
static uint64_t x441 = UINT64_MAX;
static int8_t x442 = -1;
static volatile int32_t x443 = INT32_MIN;
uint16_t x447 = UINT16_MAX;
static int16_t x449 = INT16_MIN;
volatile int32_t t97 = 775299182;
volatile uint64_t x453 = 1352531737303LLU;


void f0(void) {
	int64_t x1 = -18584705LL;
	int64_t x2 = -1LL;
	uint16_t x3 = UINT16_MAX;
	int32_t x4 = INT32_MIN;
	int64_t t0 = -64415264LL;

	t0 = (x1+(x2*(x3/x4)));

	if (t0 != -18584705LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 108192771LLU;
	static uint64_t x6 = 1203106888LLU;
	static int64_t x7 = -5LL;
	volatile int16_t x8 = INT16_MIN;
	uint64_t t1 = 50320254784962058LLU;

	t1 = (x5+(x6*(x7/x8)));

	if (t1 != 108192771LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 3378043693493716LLU;
	int32_t x10 = 2989;
	int8_t x11 = 24;
	uint64_t t2 = 4684736LLU;

	t2 = (x9+(x10*(x11/x12)));

	if (t2 != 3378043693493716LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = 744921313U;
	uint32_t x14 = 285018827U;
	int16_t x15 = 859;
	int16_t x16 = -1;

	t3 = (x13+(x14*(x15/x16)));

	if (t3 != 726884792U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 526427051U;
	static int8_t x19 = -1;
	int64_t x20 = INT64_MAX;
	int64_t t4 = 5209864382918LL;

	t4 = (x17+(x18*(x19/x20)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	volatile int16_t x22 = INT16_MIN;
	volatile int64_t x23 = -2016LL;
	uint8_t x24 = 102U;
	int64_t t5 = 63111034529051LL;

	t5 = (x21+(x22*(x23/x24)));

	if (t5 != 589824LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x30 = INT32_MAX;
	static int8_t x31 = INT8_MAX;
	volatile int64_t x32 = 271637LL;

	t6 = (x29+(x30*(x31/x32)));

	if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = -1;
	static uint64_t x36 = UINT64_MAX;

	t7 = (x33+(x34*(x35/x36)));

	if (t7 != 32766LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	uint8_t x38 = 1U;
	int32_t t8 = -15640938;

	t8 = (x37+(x38*(x39/x40)));

	if (t8 != 253) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MIN;
	int64_t x42 = INT64_MIN;
	static volatile int32_t x43 = INT32_MIN;
	uint64_t x44 = 429LLU;

	t9 = (x41+(x42*(x43/x44)));

	if (t9 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = INT32_MIN;
	uint64_t x47 = 56524409489424878LLU;
	static int64_t x48 = INT64_MIN;
	static uint64_t t10 = 14198053705411046LLU;

	t10 = (x45+(x46*(x47/x48)));

	if (t10 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 3U;
	static uint64_t x50 = 1LLU;
	int8_t x51 = -1;
	int32_t x52 = INT32_MIN;
	uint64_t t11 = 3733860470461942007LLU;

	t11 = (x49+(x50*(x51/x52)));

	if (t11 != 3LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = -1491;
	static int8_t x54 = -1;
	uint8_t x55 = 4U;
	int32_t x56 = -5344212;
	volatile int32_t t12 = -1;

	t12 = (x53+(x54*(x55/x56)));

	if (t12 != -1491) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 25U;
	uint8_t x59 = 1U;
	uint8_t x60 = UINT8_MAX;
	volatile uint64_t t13 = 31378071LLU;

	t13 = (x57+(x58*(x59/x60)));

	if (t13 != 25LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x62 = -1;
	uint32_t x64 = 17U;
	volatile uint32_t t14 = 56630U;

	t14 = (x61+(x62*(x63/x64)));

	if (t14 != 4062310482U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x65 = -1LL;
	volatile int8_t x67 = INT8_MIN;
	volatile int64_t t15 = -110290366356LL;

	t15 = (x65+(x66*(x67/x68)));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = -1LL;
	volatile int32_t x72 = INT32_MAX;
	volatile int64_t t16 = -3653062264LL;

	t16 = (x69+(x70*(x71/x72)));

	if (t16 != 4294934530LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = -1307183659969813LL;
	volatile int16_t x74 = INT16_MIN;
	volatile int16_t x75 = 46;
	uint64_t x76 = UINT64_MAX;
	uint64_t t17 = 29LLU;

	t17 = (x73+(x74*(x75/x76)));

	if (t17 != 18445436890049581803LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 57;
	int8_t x78 = -10;
	int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MAX;

	t18 = (x77+(x78*(x79/x80)));

	if (t18 != 57) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = 41;
	static int64_t x82 = INT64_MIN;
	uint16_t x83 = 126U;
	uint32_t x84 = UINT32_MAX;
	volatile int64_t t19 = 5LL;

	t19 = (x81+(x82*(x83/x84)));

	if (t19 != 41LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x86 = 0U;
	volatile int16_t x87 = -244;
	uint8_t x88 = 2U;
	volatile int32_t t20 = -4131;

	t20 = (x85+(x86*(x87/x88)));

	if (t20 != 971) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	uint16_t x90 = 95U;
	int8_t x91 = -1;
	int16_t x92 = INT16_MIN;
	volatile int32_t t21 = INT32_MIN;

	t21 = (x89+(x90*(x91/x92)));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -1LL;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = UINT16_MAX;
	static int16_t x96 = 1083;
	volatile int64_t t22 = -1428204LL;

	t22 = (x93+(x94*(x95/x96)));

	if (t22 != -7681LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	int16_t x98 = 13;
	static volatile int32_t t23 = -213712;

	t23 = (x97+(x98*(x99/x100)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	uint8_t x102 = 10U;
	static volatile int32_t x103 = -3;
	int64_t x104 = INT64_MIN;
	static int64_t t24 = 10449461463170731LL;

	t24 = (x101+(x102*(x103/x104)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = UINT32_MAX;
	int64_t x110 = INT64_MIN;
	int64_t x112 = INT64_MIN;
	volatile int64_t t25 = 721312964547993LL;

	t25 = (x109+(x110*(x111/x112)));

	if (t25 != 4294967295LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x114 = 244529U;
	static uint64_t x115 = 0LLU;
	int64_t x116 = -1076668348834838424LL;

	t26 = (x113+(x114*(x115/x116)));

	if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MIN;
	volatile uint16_t x122 = 2U;
	static uint64_t x123 = UINT64_MAX;
	int16_t x124 = 3;

	t27 = (x121+(x122*(x123/x124)));

	if (t27 != 12297829382473001642LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MIN;
	static uint64_t x126 = 5804366051912791LLU;
	static int64_t x127 = 261333554378054LL;
	int16_t x128 = -1;
	static uint64_t t28 = 769730481106781298LLU;

	t28 = (x125+(x126*(x127/x128)));

	if (t28 != 3821904869981543734LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x130 = 35384;
	int8_t x131 = INT8_MIN;
	uint16_t x132 = UINT16_MAX;
	volatile int64_t t29 = 11818LL;

	t29 = (x129+(x130*(x131/x132)));

	if (t29 != -205593LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x138 = UINT8_MAX;
	int8_t x139 = -9;
	int16_t x140 = INT16_MIN;

	t30 = (x137+(x138*(x139/x140)));

	if (t30 != 338U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x141 = INT32_MAX;
	uint32_t x142 = UINT32_MAX;
	int32_t x143 = 301459936;
	static uint8_t x144 = UINT8_MAX;
	uint32_t t31 = 7U;

	t31 = (x141+(x142*(x143/x144)));

	if (t31 != 2146301452U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x145 = INT64_MIN;
	static volatile uint32_t x146 = 9416940U;
	uint16_t x147 = 1U;
	int8_t x148 = INT8_MAX;
	volatile int64_t t32 = INT64_MIN;

	t32 = (x145+(x146*(x147/x148)));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = 3841864;
	static uint8_t x150 = 37U;
	volatile int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MAX;

	t33 = (x149+(x150*(x151/x152)));

	if (t33 != 3841864) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x157 = INT16_MAX;
	uint64_t x158 = UINT64_MAX;
	int8_t x159 = -1;
	static uint64_t t34 = 2674877LLU;

	t34 = (x157+(x158*(x159/x160)));

	if (t34 != 32767LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x161 = UINT32_MAX;
	static uint16_t x163 = UINT16_MAX;
	volatile int64_t t35 = 3LL;

	t35 = (x161+(x162*(x163/x164)));

	if (t35 != 4295032830LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -1LL;
	static volatile int16_t x166 = INT16_MIN;
	uint16_t x168 = UINT16_MAX;

	t36 = (x165+(x166*(x167/x168)));

	if (t36 != -32769LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x169 = UINT32_MAX;
	volatile int8_t x170 = -2;
	uint8_t x171 = 12U;
	static uint16_t x172 = UINT16_MAX;

	t37 = (x169+(x170*(x171/x172)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = 15921360U;
	volatile int8_t x174 = -1;
	int16_t x175 = INT16_MIN;
	int8_t x176 = -21;
	static uint32_t t38 = 37343U;

	t38 = (x173+(x174*(x175/x176)));

	if (t38 != 15919800U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = INT16_MAX;
	int64_t x179 = -194768LL;
	static int64_t t39 = -43047150920057582LL;

	t39 = (x177+(x178*(x179/x180)));

	if (t39 != -245424830LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x182 = -1LL;
	int16_t x183 = INT16_MAX;
	int16_t x184 = INT16_MIN;
	static int64_t t40 = 211952LL;

	t40 = (x181+(x182*(x183/x184)));

	if (t40 != 12320LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = 0LLU;
	uint32_t x187 = UINT32_MAX;
	int32_t x188 = -23155501;
	uint64_t t41 = 108296186LLU;

	t41 = (x185+(x186*(x187/x188)));

	if (t41 != 2147483648LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x189 = 97U;
	int16_t x190 = 482;
	volatile int32_t t42 = 0;

	t42 = (x189+(x190*(x191/x192)));

	if (t42 != 97) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x195 = 0U;
	int8_t x196 = INT8_MIN;
	volatile int32_t t43 = 8090398;

	t43 = (x193+(x194*(x195/x196)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = 8U;
	uint64_t x198 = 9759794646091450LLU;
	volatile int8_t x199 = INT8_MAX;
	static volatile uint64_t t44 = 25829617LLU;

	t44 = (x197+(x198*(x199/x200)));

	if (t44 != 9759794646091458LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = -1;
	static int8_t x202 = INT8_MIN;
	static uint64_t x204 = UINT64_MAX;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = (x201+(x202*(x203/x204)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x206 = 3874U;
	static uint16_t x207 = 5U;
	uint32_t t46 = 558335936U;

	t46 = (x205+(x206*(x207/x208)));

	if (t46 != 25U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = UINT32_MAX;
	uint16_t x210 = 5U;
	static int8_t x211 = INT8_MIN;
	static int16_t x212 = INT16_MAX;
	uint32_t t47 = UINT32_MAX;

	t47 = (x209+(x210*(x211/x212)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = -1;
	volatile int64_t x214 = -205946749LL;
	uint32_t x215 = 509354569U;
	volatile int16_t x216 = INT16_MAX;
	volatile int64_t t48 = -58691083388LL;

	t48 = (x213+(x214*(x215/x216)));

	if (t48 != -3201236266457LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x217 = 13581LLU;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MAX;
	uint8_t x220 = UINT8_MAX;
	volatile uint64_t t49 = 139817298758LLU;

	t49 = (x217+(x218*(x219/x220)));

	if (t49 != 13581LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = -1;
	volatile int8_t x230 = -1;
	uint64_t x231 = UINT64_MAX;
	uint64_t t50 = 0LLU;

	t50 = (x229+(x230*(x231/x232)));

	if (t50 != 18416894973266655901LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x233 = 77783713U;
	uint16_t x234 = 0U;
	uint8_t x236 = 3U;
	volatile uint32_t t51 = 167163U;

	t51 = (x233+(x234*(x235/x236)));

	if (t51 != 77783713U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x237 = 9;
	static int32_t x238 = -1;
	int64_t x240 = INT64_MIN;
	int64_t t52 = 9936236759835836LL;

	t52 = (x237+(x238*(x239/x240)));

	if (t52 != 9LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = INT32_MIN;
	static int16_t x242 = 1693;
	uint32_t x244 = 30752U;
	uint32_t t53 = 791986222U;

	t53 = (x241+(x242*(x243/x244)));

	if (t53 != 2147483648U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x245 = INT64_MAX;
	volatile int64_t x246 = -3041LL;
	int16_t x247 = INT16_MIN;
	static uint64_t x248 = UINT64_MAX;
	uint64_t t54 = 336744LLU;

	t54 = (x245+(x246*(x247/x248)));

	if (t54 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x249 = UINT16_MAX;
	uint8_t x251 = UINT8_MAX;
	uint32_t x252 = UINT32_MAX;
	uint32_t t55 = 0U;

	t55 = (x249+(x250*(x251/x252)));

	if (t55 != 65535U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = INT32_MIN;
	int16_t x255 = -1;
	int8_t x256 = INT8_MAX;
	int32_t t56 = INT32_MIN;

	t56 = (x253+(x254*(x255/x256)));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x258 = 15U;
	int32_t x259 = -205552;
	static int32_t x260 = -1;

	t57 = (x257+(x258*(x259/x260)));

	if (t57 != 3083279U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x261 = UINT8_MAX;
	int8_t x262 = INT8_MIN;
	volatile uint32_t x264 = UINT32_MAX;
	static volatile uint32_t t58 = 1635U;

	t58 = (x261+(x262*(x263/x264)));

	if (t58 != 127U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x265 = -60;
	int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	int64_t x268 = 88LL;

	t59 = (x265+(x266*(x267/x268)));

	if (t59 != 798863916996LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x270 = UINT16_MAX;
	int16_t x271 = INT16_MAX;
	static uint32_t t60 = 3236U;

	t60 = (x269+(x270*(x271/x272)));

	if (t60 != 2681177767U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x273 = 170U;
	volatile uint8_t x274 = 91U;
	int32_t x275 = INT32_MAX;

	t61 = (x273+(x274*(x275/x276)));

	if (t61 != -1526726395) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x277 = UINT32_MAX;
	int64_t x278 = INT64_MIN;
	int8_t x279 = -1;
	int16_t x280 = -5;
	static int64_t t62 = 43LL;

	t62 = (x277+(x278*(x279/x280)));

	if (t62 != 4294967295LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x285 = INT8_MAX;
	volatile uint64_t x286 = UINT64_MAX;
	volatile int64_t x287 = INT64_MIN;
	int8_t x288 = INT8_MIN;
	uint64_t t63 = 686LLU;

	t63 = (x285+(x286*(x287/x288)));

	if (t63 != 18374686479671623807LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x290 = -1;
	static uint32_t x291 = UINT32_MAX;
	uint16_t x292 = UINT16_MAX;

	t64 = (x289+(x290*(x291/x292)));

	if (t64 != 268115514124LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x293 = INT64_MAX;
	volatile uint32_t x294 = 2U;
	volatile uint32_t x295 = UINT32_MAX;
	volatile uint64_t t65 = 1714159881881LLU;

	t65 = (x293+(x294*(x295/x296)));

	if (t65 != 9223372036854789465LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x297 = INT64_MIN;
	int64_t x298 = INT64_MIN;
	int32_t x300 = INT32_MAX;

	t66 = (x297+(x298*(x299/x300)));

	if (t66 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = -1;
	volatile uint16_t x302 = 476U;
	volatile int32_t x304 = 1758953;
	int64_t t67 = -11414LL;

	t67 = (x301+(x302*(x303/x304)));

	if (t67 != -2495987720844297LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = INT8_MAX;
	static int16_t x306 = -1;
	static uint8_t x308 = 1U;

	t68 = (x305+(x306*(x307/x308)));

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x309 = UINT16_MAX;
	int8_t x310 = -1;
	int32_t x311 = -1;
	volatile int32_t x312 = 32631998;

	t69 = (x309+(x310*(x311/x312)));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x313 = UINT16_MAX;
	volatile int16_t x314 = -969;
	int16_t x315 = 14;
	int8_t x316 = 1;
	volatile int32_t t70 = -159658;

	t70 = (x313+(x314*(x315/x316)));

	if (t70 != 51969) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MIN;
	volatile int32_t x318 = INT32_MAX;
	int64_t x319 = INT64_MAX;
	int64_t x320 = 6600700034LL;
	static int64_t t71 = -764888LL;

	t71 = (x317+(x318*(x319/x320)));

	if (t71 != 3000748482718197326LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = INT64_MAX;
	volatile int64_t x322 = -1LL;
	uint16_t x324 = 2189U;
	int64_t t72 = INT64_MAX;

	t72 = (x321+(x322*(x323/x324)));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x333 = INT8_MIN;
	uint8_t x334 = UINT8_MAX;
	int32_t x336 = INT32_MAX;
	int32_t t73 = 131459270;

	t73 = (x333+(x334*(x335/x336)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x337 = -78145942362LL;
	int64_t x338 = INT64_MIN;

	t74 = (x337+(x338*(x339/x340)));

	if (t74 != -78145942362LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = 1;
	uint64_t x346 = UINT64_MAX;
	static int64_t x348 = 65862365006457LL;
	uint64_t t75 = 5924444LLU;

	t75 = (x345+(x346*(x347/x348)));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x349 = UINT64_MAX;
	int64_t x350 = -1LL;
	int8_t x351 = -21;

	t76 = (x349+(x350*(x351/x352)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x355 = 7;
	int8_t x356 = INT8_MIN;
	volatile int32_t t77 = 124;

	t77 = (x353+(x354*(x355/x356)));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x357 = -58;
	int8_t x359 = INT8_MAX;
	int8_t x360 = INT8_MIN;
	volatile int64_t t78 = -839986046LL;

	t78 = (x357+(x358*(x359/x360)));

	if (t78 != -58LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x362 = -1LL;
	int16_t x363 = INT16_MAX;
	uint16_t x364 = 393U;
	int64_t t79 = -81194914483707375LL;

	t79 = (x361+(x362*(x363/x364)));

	if (t79 != -84LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = INT32_MAX;
	int32_t x366 = INT32_MIN;
	uint32_t x367 = UINT32_MAX;
	int64_t t80 = -3728LL;

	t80 = (x365+(x366*(x367/x368)));

	if (t80 != 2147483647LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = INT32_MAX;
	uint32_t x370 = 31U;
	static uint64_t x371 = UINT64_MAX;
	int8_t x372 = INT8_MAX;

	t81 = (x369+(x370*(x371/x372)));

	if (t81 != 4502748555572649789LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x373 = INT64_MAX;
	volatile int16_t x374 = INT16_MIN;
	volatile int8_t x375 = INT8_MIN;
	int8_t x376 = INT8_MIN;

	t82 = (x373+(x374*(x375/x376)));

	if (t82 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x380 = -1179LL;
	static int64_t t83 = -27LL;

	t83 = (x377+(x378*(x379/x380)));

	if (t83 != -2466111273LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = -1;
	int16_t x383 = INT16_MAX;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x381+(x382*(x383/x384)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = -1;
	volatile int32_t x386 = INT32_MAX;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = 3758101919808446617LLU;
	volatile uint64_t t85 = 381267590LLU;

	t85 = (x385+(x386*(x387/x388)));

	if (t85 != 8589934587LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x389 = 2553U;
	uint64_t x390 = 55346473999121LLU;
	int8_t x391 = INT8_MIN;
	uint32_t x392 = UINT32_MAX;
	uint64_t t86 = 226873709LLU;

	t86 = (x389+(x390*(x391/x392)));

	if (t86 != 2553LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x393 = 1758379LLU;
	int8_t x394 = INT8_MIN;
	uint32_t x396 = UINT32_MAX;

	t87 = (x393+(x394*(x395/x396)));

	if (t87 != 1758379LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x398 = 481LL;
	int16_t x399 = -2032;

	t88 = (x397+(x398*(x399/x400)));

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x413 = 3U;
	static uint16_t x414 = 8175U;
	int64_t x416 = INT64_MIN;
	volatile int64_t t89 = 1266217LL;

	t89 = (x413+(x414*(x415/x416)));

	if (t89 != 3LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x417 = 421U;
	int8_t x419 = INT8_MIN;
	int32_t t90 = 66232;

	t90 = (x417+(x418*(x419/x420)));

	if (t90 != 4194597) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x424 = INT64_MIN;

	t91 = (x421+(x422*(x423/x424)));

	if (t91 != 7LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x425 = 151U;
	static int64_t x426 = 351731272278328LL;
	int8_t x427 = INT8_MIN;
	uint64_t x428 = 14948160LLU;

	t92 = (x425+(x426*(x427/x428)));

	if (t92 != 7600137545822587247LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x429 = INT64_MIN;
	volatile int64_t x430 = INT64_MIN;
	static uint32_t x431 = 3138945U;
	int8_t x432 = -27;
	volatile int64_t t93 = INT64_MIN;

	t93 = (x429+(x430*(x431/x432)));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x437 = 3U;
	static volatile int64_t x438 = -3977119424983787206LL;
	int16_t x439 = INT16_MIN;
	volatile uint64_t x440 = 4162673235626271909LLU;
	uint64_t t94 = 7281239438LLU;

	t94 = (x437+(x438*(x439/x440)));

	if (t94 != 2538266373774402795LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x444 = 7704704195LL;
	uint64_t t95 = UINT64_MAX;

	t95 = (x441+(x442*(x443/x444)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MAX;
	uint16_t x448 = 3U;
	volatile int32_t t96 = -3225766;

	t96 = (x445+(x446*(x447/x448)));

	if (t96 != 2774187) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x450 = INT16_MIN;
	static int16_t x451 = INT16_MIN;
	uint8_t x452 = UINT8_MAX;

	t97 = (x449+(x450*(x451/x452)));

	if (t97 != 4161536) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x454 = INT8_MIN;
	uint16_t x455 = 26U;
	uint32_t x456 = 1U;
	static uint64_t t98 = 15723056810910LLU;

	t98 = (x453+(x454*(x455/x456)));

	if (t98 != 1356826701271LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x457 = 1U;
	int64_t x458 = INT64_MIN;
	static volatile int8_t x459 = 31;
	int64_t x460 = INT64_MIN;
	int64_t t99 = 26801747015516LL;

	t99 = (x457+(x458*(x459/x460)));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

