#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = -1;
int32_t x13 = -1955878;
static volatile int16_t x16 = INT16_MAX;
int32_t t4 = -266074119;
static uint8_t x27 = 0U;
static int64_t x31 = 521361719596LL;
volatile int8_t x32 = INT8_MIN;
static int32_t x34 = INT32_MIN;
volatile int64_t x38 = INT64_MIN;
static int8_t x41 = INT8_MIN;
int32_t x44 = INT32_MIN;
volatile uint32_t t11 = 5U;
int8_t x54 = INT8_MAX;
static uint32_t t14 = 116257U;
int16_t x69 = INT16_MAX;
int32_t x84 = -1170;
static int16_t x89 = INT16_MAX;
uint64_t x93 = UINT64_MAX;
uint32_t x94 = 49755965U;
int8_t x99 = INT8_MIN;
uint8_t x100 = UINT8_MAX;
int64_t x101 = -197674596245438LL;
int16_t x107 = INT16_MAX;
volatile int16_t x119 = INT16_MIN;
static uint64_t x123 = 46584801LLU;
static int16_t x130 = -1;
int16_t x136 = INT16_MAX;
static int64_t t30 = -1588434LL;
int32_t x144 = 41911522;
static uint64_t x146 = UINT64_MAX;
volatile uint64_t t33 = 8185370347381277785LLU;
int32_t x151 = INT32_MIN;
uint64_t x155 = UINT64_MAX;
uint32_t x157 = 216090U;
int16_t x164 = INT16_MIN;
int32_t x175 = INT32_MIN;
int32_t x181 = INT32_MIN;
static uint64_t x182 = 28LLU;
volatile int8_t x183 = INT8_MIN;
volatile int64_t x194 = INT64_MIN;
volatile int64_t t43 = 12LL;
static uint8_t x198 = UINT8_MAX;
static volatile uint32_t x202 = 488957U;
int16_t x204 = -1;
int64_t t46 = -4425607015084767LL;
int64_t x218 = INT64_MIN;
uint8_t x220 = UINT8_MAX;
int64_t t48 = -2035LL;
static int32_t x228 = INT32_MAX;
int8_t x232 = -1;
volatile int64_t x235 = -1LL;
volatile int16_t x250 = INT16_MIN;
volatile uint64_t x266 = UINT64_MAX;
static uint8_t x269 = 3U;
volatile int32_t x273 = 51423569;
int8_t x276 = INT8_MIN;
static uint64_t t63 = 2838948416997LLU;
uint16_t x295 = 13776U;
uint32_t x308 = UINT32_MAX;
int16_t x309 = -8137;
uint32_t x315 = UINT32_MAX;
int16_t x316 = INT16_MIN;
static uint8_t x318 = UINT8_MAX;
static uint32_t t71 = 10759925U;
int8_t x328 = 1;
int64_t t73 = -2809884LL;
static int64_t x330 = -1LL;
int64_t x331 = INT64_MIN;
uint32_t x335 = 20906037U;
volatile uint16_t x338 = 11U;
int64_t x346 = -1LL;
int8_t x355 = -1;
int64_t t79 = -1450997LL;
uint16_t x360 = UINT16_MAX;
volatile int32_t t80 = 71;
uint8_t x361 = 71U;
int32_t t81 = 12132;
static uint32_t x370 = 3069849U;
volatile uint32_t t83 = 445598548U;
int8_t x379 = INT8_MIN;
volatile int8_t x380 = 12;
int16_t x410 = 1738;
volatile uint8_t x416 = UINT8_MAX;
static int32_t t90 = 14554242;
volatile int8_t x419 = INT8_MIN;
int64_t x424 = INT64_MIN;
volatile int32_t t93 = 891732145;
uint64_t t94 = 201546742LLU;
int8_t x438 = INT8_MIN;
uint64_t x442 = 1LLU;
volatile int64_t t97 = 115113366160LL;
static int32_t x452 = -1;
volatile int64_t x454 = INT64_MIN;
static volatile uint16_t x455 = UINT16_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int8_t x2 = 0;
	volatile int32_t x3 = -17;
	static int16_t x4 = INT16_MIN;
	volatile uint64_t t0 = 476LLU;

	t0 = ((x1-(x2|x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MAX;
	volatile int16_t x7 = INT16_MAX;
	int32_t t1 = -267123633;

	t1 = ((x5-(x6|x7))/x8);

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 30U;
	uint8_t x10 = UINT8_MAX;
	int8_t x11 = -7;
	int64_t x12 = INT64_MAX;
	volatile int64_t t2 = 23773577LL;

	t2 = ((x9-(x10|x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x14 = 60507421380024076LLU;
	volatile int32_t x15 = 183173710;
	volatile uint64_t t3 = 60LLU;

	t3 = ((x13-(x14|x15))/x16);

	if (t3 != 561120537500813LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint8_t x18 = 22U;
	static int8_t x19 = -1;
	int16_t x20 = -151;

	t4 = ((x17-(x18|x19))/x20);

	if (t4 != -434) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int8_t x22 = INT8_MIN;
	static uint16_t x23 = 3U;
	int32_t x24 = INT32_MIN;
	int32_t t5 = -2183856;

	t5 = ((x21-(x22|x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MAX;
	static int64_t x26 = -1LL;
	int64_t x28 = -94LL;
	volatile int64_t t6 = -21932190914LL;

	t6 = ((x25-(x26|x27))/x28);

	if (t6 != -348LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int16_t x30 = INT16_MIN;
	int64_t t7 = -85LL;

	t7 = ((x29-(x30|x31))/x32);

	if (t7 != -253LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 12309U;
	volatile int64_t x35 = INT64_MAX;
	volatile int16_t x36 = -1;
	int64_t t8 = 1543LL;

	t8 = ((x33-(x34|x35))/x36);

	if (t8 != -12310LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int8_t x39 = INT8_MIN;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t9 = 350816359908207LLU;

	t9 = ((x37-(x38|x39))/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	uint64_t x43 = UINT64_MAX;
	static volatile uint64_t t10 = 1463835481976042LLU;

	t10 = ((x41-(x42|x43))/x44);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	volatile int32_t x46 = INT32_MIN;
	volatile int16_t x47 = 444;
	int32_t x48 = INT32_MIN;

	t11 = ((x45-(x46|x47))/x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = 13210674;
	static uint32_t x55 = UINT32_MAX;
	int8_t x56 = -1;
	volatile uint32_t t12 = 2127U;

	t12 = ((x53-(x54|x55))/x56);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = -60;
	volatile int16_t x58 = INT16_MIN;
	uint16_t x59 = 229U;
	volatile int32_t x60 = -17391;
	volatile int32_t t13 = 389;

	t13 = ((x57-(x58|x59))/x60);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = INT8_MIN;
	volatile int16_t x62 = -1;
	int8_t x63 = 43;
	uint32_t x64 = UINT32_MAX;

	t14 = ((x61-(x62|x63))/x64);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x70 = 99U;
	int16_t x71 = INT16_MIN;
	static volatile uint8_t x72 = UINT8_MAX;
	int32_t t15 = 254202;

	t15 = ((x69-(x70|x71))/x72);

	if (t15 != 256) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = INT8_MIN;
	uint64_t x78 = 889123368907LLU;
	int32_t x79 = INT32_MAX;
	int8_t x80 = INT8_MAX;
	volatile uint64_t t16 = 20924LLU;

	t16 = ((x77-(x78|x79))/x80);

	if (t16 != 145249946318927854LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = 290625665207LL;
	int64_t x82 = 187089520LL;
	volatile int8_t x83 = INT8_MIN;
	static volatile int64_t t17 = -207696762635044LL;

	t17 = ((x81-(x82|x83))/x84);

	if (t17 != -248398004LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	volatile int64_t x86 = -501582940868635LL;
	uint32_t x87 = UINT32_MAX;
	static int32_t x88 = INT32_MIN;
	volatile int64_t t18 = 43418354007LL;

	t18 = ((x85-(x86|x87))/x88);

	if (t18 != -233565LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x90 = INT64_MAX;
	uint16_t x91 = UINT16_MAX;
	static int64_t x92 = INT64_MIN;
	static volatile int64_t t19 = 330624617950846LL;

	t19 = ((x89-(x90|x91))/x92);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x95 = INT16_MAX;
	int16_t x96 = INT16_MIN;
	uint64_t t20 = 50656568LLU;

	t20 = ((x93-(x94|x95))/x96);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	volatile int32_t x98 = INT32_MIN;
	volatile int32_t t21 = 415861203;

	t21 = ((x97-(x98|x99))/x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x102 = INT32_MIN;
	volatile int32_t x103 = INT32_MIN;
	static int64_t x104 = INT64_MAX;
	int64_t t22 = 10LL;

	t22 = ((x101-(x102|x103))/x104);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -1;
	int16_t x106 = INT16_MIN;
	static uint64_t x108 = 53746508598LLU;
	uint64_t t23 = 403481LLU;

	t23 = ((x105-(x106|x107))/x108);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = 6625698522546677LL;
	static volatile uint8_t x110 = 14U;
	int8_t x111 = INT8_MAX;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t24 = 8028284688862LLU;

	t24 = ((x109-(x110|x111))/x112);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	static int8_t x114 = -1;
	uint16_t x115 = 6922U;
	uint8_t x116 = UINT8_MAX;
	static int32_t t25 = 56671;

	t25 = ((x113-(x114|x115))/x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 335639888U;
	int16_t x118 = INT16_MIN;
	volatile int8_t x120 = INT8_MAX;
	uint32_t t26 = 20U;

	t26 = ((x117-(x118|x119))/x120);

	if (t26 != 2643091U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = INT16_MAX;
	uint16_t x122 = 4067U;
	volatile int64_t x124 = 758598828434692LL;
	uint64_t t27 = 482810692062159LLU;

	t27 = ((x121-(x122|x123))/x124);

	if (t27 != 24316LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x125 = 3U;
	static int8_t x126 = INT8_MIN;
	int64_t x127 = -1LL;
	volatile int64_t x128 = INT64_MIN;
	int64_t t28 = 1272275803LL;

	t28 = ((x125-(x126|x127))/x128);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -1555;
	volatile int64_t x131 = INT64_MAX;
	uint64_t x132 = 5529088LLU;
	volatile uint64_t t29 = 1436267782147893LLU;

	t29 = ((x129-(x130|x131))/x132);

	if (t29 != 3336308641444LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = -1;
	int16_t x134 = INT16_MAX;
	volatile int64_t x135 = INT64_MIN;

	t30 = ((x133-(x134|x135))/x136);

	if (t30 != 281483566907399LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = -1;
	int64_t x138 = -32968074843539340LL;
	int64_t x139 = -1LL;
	int16_t x140 = INT16_MIN;
	volatile int64_t t31 = 4307043554LL;

	t31 = ((x137-(x138|x139))/x140);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = -1;
	static int8_t x142 = -22;
	int64_t x143 = -1LL;
	int64_t t32 = -1955LL;

	t32 = ((x141-(x142|x143))/x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = UINT64_MAX;
	volatile int64_t x147 = INT64_MIN;
	volatile uint32_t x148 = 1941510004U;

	t33 = ((x145-(x146|x147))/x148);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 3977103LLU;
	uint32_t x150 = UINT32_MAX;
	int32_t x152 = INT32_MIN;
	volatile uint64_t t34 = 7695076702385122LLU;

	t34 = ((x149-(x150|x151))/x152);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = 96365494031258267LLU;
	volatile int32_t x154 = -15;
	uint64_t x156 = 1883LLU;
	uint64_t t35 = 15LLU;

	t35 = ((x153-(x154|x155))/x156);

	if (t35 != 51176576755846LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x158 = INT32_MIN;
	uint8_t x159 = 10U;
	static uint8_t x160 = 3U;
	volatile uint32_t t36 = 5U;

	t36 = ((x157-(x158|x159))/x160);

	if (t36 != 715899909U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = 479633;
	uint64_t x162 = 8687961113888LLU;
	static int32_t x163 = INT32_MIN;
	volatile uint64_t t37 = 1191239163430LLU;

	t37 = ((x161-(x162|x163))/x164);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x165 = 2LLU;
	int16_t x166 = INT16_MIN;
	int32_t x167 = -1;
	int64_t x168 = INT64_MIN;
	static volatile uint64_t t38 = 1808478290043041683LLU;

	t38 = ((x165-(x166|x167))/x168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 32874U;
	static int64_t x170 = -1LL;
	volatile uint64_t x171 = 4360953631611714052LLU;
	uint8_t x172 = 1U;
	uint64_t t39 = 487333276324LLU;

	t39 = ((x169-(x170|x171))/x172);

	if (t39 != 32875LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = -14899;
	volatile uint32_t x174 = 362469336U;
	int16_t x176 = 38;
	static uint32_t t40 = 18U;

	t40 = ((x173-(x174|x175))/x176);

	if (t40 != 46973668U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = 7388316853LLU;
	static int8_t x178 = -1;
	int16_t x179 = -1;
	volatile uint32_t x180 = 22039180U;
	uint64_t t41 = 413203LLU;

	t41 = ((x177-(x178|x179))/x180);

	if (t41 != 335LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x184 = INT64_MIN;
	volatile uint64_t t42 = 1821439417279LLU;

	t42 = ((x181-(x182|x183))/x184);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = -63;
	static int16_t x195 = INT16_MIN;
	volatile uint32_t x196 = 191047U;

	t43 = ((x193-(x194|x195))/x196);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x197 = 2U;
	int64_t x199 = INT64_MIN;
	int16_t x200 = -7049;
	int64_t t44 = 1340250463645599260LL;

	t44 = ((x197-(x198|x199))/x200);

	if (t44 != -1308465319457337LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MIN;
	static int32_t x203 = 234752;
	uint32_t t45 = 12U;

	t45 = ((x201-(x202|x203))/x204);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x205 = 0U;
	volatile int8_t x206 = -1;
	int64_t x207 = 4134337LL;
	int8_t x208 = INT8_MIN;

	t46 = ((x205-(x206|x207))/x208);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = UINT64_MAX;
	int8_t x210 = INT8_MAX;
	int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MIN;
	uint64_t t47 = 31065805072LLU;

	t47 = ((x209-(x210|x211))/x212);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = -1;
	static int16_t x219 = 3;

	t48 = ((x217-(x218|x219))/x220);

	if (t48 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x221 = INT32_MIN;
	uint16_t x222 = UINT16_MAX;
	uint32_t x223 = 329385522U;
	uint16_t x224 = UINT16_MAX;
	static volatile uint32_t t49 = 212968404U;

	t49 = ((x221-(x222|x223))/x224);

	if (t49 != 27741U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = INT8_MAX;
	uint8_t x226 = UINT8_MAX;
	int8_t x227 = INT8_MAX;
	volatile int32_t t50 = 231907;

	t50 = ((x225-(x226|x227))/x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = INT8_MAX;
	static int16_t x230 = INT16_MIN;
	uint64_t x231 = 890959104230LLU;
	uint64_t t51 = 239566175381LLU;

	t51 = ((x229-(x230|x231))/x232);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x233 = 28U;
	int64_t x234 = -1LL;
	int32_t x236 = 3085;
	volatile int64_t t52 = -67150090273163964LL;

	t52 = ((x233-(x234|x235))/x236);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = -1;
	volatile uint64_t x242 = 2626236993566279LLU;
	volatile int32_t x243 = INT32_MIN;
	uint64_t x244 = UINT64_MAX;
	uint64_t t53 = 1521076419LLU;

	t53 = ((x241-(x242|x243))/x244);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x245 = 736U;
	int32_t x246 = -242862;
	uint8_t x247 = UINT8_MAX;
	int64_t x248 = 35517415853015695LL;
	static volatile int64_t t54 = -43727LL;

	t54 = ((x245-(x246|x247))/x248);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x249 = 3U;
	int16_t x251 = INT16_MAX;
	uint64_t x252 = UINT64_MAX;
	uint64_t t55 = 13540125705LLU;

	t55 = ((x249-(x250|x251))/x252);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x253 = 9276152LL;
	int8_t x254 = INT8_MIN;
	int64_t x255 = 50182107126LL;
	volatile int16_t x256 = 58;
	volatile int64_t t56 = -19834539264877LL;

	t56 = ((x253-(x254|x255))/x256);

	if (t56 != 159933LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x257 = 5U;
	static volatile int32_t x258 = -58482;
	int8_t x259 = -1;
	int16_t x260 = INT16_MIN;
	volatile int32_t t57 = 411020172;

	t57 = ((x257-(x258|x259))/x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x265 = UINT16_MAX;
	int32_t x267 = INT32_MIN;
	int8_t x268 = -1;
	volatile uint64_t t58 = 4724LLU;

	t58 = ((x265-(x266|x267))/x268);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x270 = 27017LLU;
	volatile int8_t x271 = INT8_MIN;
	static volatile int32_t x272 = 2521972;
	uint64_t t59 = 214140LLU;

	t59 = ((x269-(x270|x271))/x272);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x274 = INT16_MAX;
	volatile uint64_t x275 = UINT64_MAX;
	uint64_t t60 = 84LLU;

	t60 = ((x273-(x274|x275))/x276);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = 2;
	static int64_t x278 = 946871537631LL;
	int64_t x279 = INT64_MAX;
	uint32_t x280 = 168157U;
	volatile int64_t t61 = 114495119244LL;

	t61 = ((x277-(x278|x279))/x280);

	if (t61 != -54849765616981LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x281 = -1LL;
	uint64_t x282 = 216091580866LLU;
	int32_t x283 = INT32_MAX;
	int16_t x284 = INT16_MIN;
	uint64_t t62 = 116295948676592019LLU;

	t62 = ((x281-(x282|x283))/x284);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = 0;
	static int16_t x286 = -6;
	static uint64_t x287 = 216417258142051LLU;
	int16_t x288 = INT16_MIN;

	t63 = ((x285-(x286|x287))/x288);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = -1;
	int64_t x290 = -1LL;
	int64_t x291 = -1LL;
	static int16_t x292 = -7;
	volatile int64_t t64 = -2357LL;

	t64 = ((x289-(x290|x291))/x292);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x293 = 1924734684098698LLU;
	int32_t x294 = INT32_MAX;
	volatile uint32_t x296 = 14693U;
	uint64_t t65 = 10280LLU;

	t65 = ((x293-(x294|x295))/x296);

	if (t65 != 130996565481LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x297 = -1LL;
	uint32_t x298 = UINT32_MAX;
	static int16_t x299 = INT16_MAX;
	int16_t x300 = -2;
	volatile int64_t t66 = 253277958868LL;

	t66 = ((x297-(x298|x299))/x300);

	if (t66 != 2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x301 = 1;
	int8_t x302 = INT8_MAX;
	volatile int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	int32_t t67 = 88498617;

	t67 = ((x301-(x302|x303))/x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x305 = 43709LLU;
	uint8_t x306 = 42U;
	static int64_t x307 = INT64_MAX;
	uint64_t t68 = 388LLU;

	t68 = ((x305-(x306|x307))/x308);

	if (t68 != 2147483648LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x310 = 1U;
	int8_t x311 = 34;
	uint8_t x312 = 28U;
	uint32_t t69 = 2401732U;

	t69 = ((x309-(x310|x311))/x312);

	if (t69 != 153391397U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = -1;
	int8_t x314 = INT8_MIN;
	uint32_t t70 = 10889060U;

	t70 = ((x313-(x314|x315))/x316);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x317 = 146109963U;
	static uint32_t x319 = 51048752U;
	int8_t x320 = -1;

	t71 = ((x317-(x318|x319))/x320);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x321 = -82795139096LL;
	static int32_t x322 = 4;
	static volatile uint32_t x323 = 88320U;
	int8_t x324 = INT8_MIN;
	int64_t t72 = 45207LL;

	t72 = ((x321-(x322|x323))/x324);

	if (t72 != 646837714LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x325 = INT64_MAX;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = 2316;

	t73 = ((x325-(x326|x327))/x328);

	if (t73 != 9223372036854773248LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x329 = 22U;
	volatile int16_t x332 = INT16_MAX;
	int64_t t74 = 26401LL;

	t74 = ((x329-(x330|x331))/x332);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x333 = INT8_MIN;
	int64_t x334 = 56088LL;
	volatile int16_t x336 = INT16_MIN;
	volatile int64_t t75 = -21857LL;

	t75 = ((x333-(x334|x335))/x336);

	if (t75 != 639LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x337 = UINT32_MAX;
	int64_t x339 = INT64_MAX;
	uint8_t x340 = 52U;
	int64_t t76 = 4232937724065663249LL;

	t76 = ((x337-(x338|x339))/x340);

	if (t76 != -177372539087688625LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x341 = -1342648;
	uint64_t x342 = 13472789LLU;
	uint16_t x343 = 2824U;
	static int16_t x344 = INT16_MIN;
	uint64_t t77 = 6LLU;

	t77 = ((x341-(x342|x343))/x344);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x345 = INT64_MIN;
	uint16_t x347 = 1865U;
	uint64_t x348 = 2136870306LLU;
	static uint64_t t78 = 381508106880LLU;

	t78 = ((x345-(x346|x347))/x348);

	if (t78 != 4316299408LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x353 = -15354;
	static int16_t x354 = -1;
	int64_t x356 = INT64_MIN;

	t79 = ((x353-(x354|x355))/x356);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x357 = UINT8_MAX;
	int16_t x358 = 1;
	int8_t x359 = 1;

	t80 = ((x357-(x358|x359))/x360);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x362 = -131;
	static uint16_t x363 = UINT16_MAX;
	static uint8_t x364 = 54U;

	t81 = ((x361-(x362|x363))/x364);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = 3863U;
	uint16_t x366 = 15005U;
	volatile int64_t x367 = INT64_MIN;
	int32_t x368 = -1;
	int64_t t82 = -979LL;

	t82 = ((x365-(x366|x367))/x368);

	if (t82 != -9223372036854764666LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x369 = -2005;
	int8_t x371 = 55;
	uint32_t x372 = UINT32_MAX;

	t83 = ((x369-(x370|x371))/x372);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x373 = INT8_MIN;
	uint32_t x374 = 43U;
	int8_t x375 = -53;
	volatile int32_t x376 = INT32_MIN;
	static uint32_t t84 = 6537742U;

	t84 = ((x373-(x374|x375))/x376);

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = -1;
	int32_t x378 = INT32_MIN;
	int32_t t85 = 282095;

	t85 = ((x377-(x378|x379))/x380);

	if (t85 != 10) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x381 = 12U;
	int32_t x382 = 446;
	volatile int64_t x383 = INT64_MIN;
	static volatile int32_t x384 = -52377460;
	volatile int64_t t86 = -4046487785658490207LL;

	t86 = ((x381-(x382|x383))/x384);

	if (t86 != -176094297754LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = -1;
	volatile int8_t x398 = INT8_MAX;
	int16_t x399 = INT16_MIN;
	uint8_t x400 = 7U;
	int32_t t87 = 0;

	t87 = ((x397-(x398|x399))/x400);

	if (t87 != 4662) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x401 = 255;
	int16_t x402 = INT16_MIN;
	int16_t x403 = 33;
	int16_t x404 = INT16_MIN;
	volatile int32_t t88 = -13238209;

	t88 = ((x401-(x402|x403))/x404);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x409 = INT64_MIN;
	uint64_t x411 = 46473969804770LLU;
	uint32_t x412 = UINT32_MAX;
	volatile uint64_t t89 = 31087LLU;

	t89 = ((x409-(x410|x411))/x412);

	if (t89 != 2147472827LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x413 = INT32_MIN;
	int8_t x414 = -1;
	volatile uint8_t x415 = 102U;

	t90 = ((x413-(x414|x415))/x416);

	if (t90 != -8421504) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x417 = UINT32_MAX;
	int8_t x418 = -1;
	volatile uint32_t x420 = 12717U;
	volatile uint32_t t91 = 840933498U;

	t91 = ((x417-(x418|x419))/x420);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x421 = 30540U;
	int64_t x422 = 25246429LL;
	int16_t x423 = INT16_MAX;
	volatile int64_t t92 = 4431408928425224LL;

	t92 = ((x421-(x422|x423))/x424);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = INT8_MIN;
	static int16_t x426 = -1;
	int16_t x427 = 1;
	int8_t x428 = -9;

	t93 = ((x425-(x426|x427))/x428);

	if (t93 != 14) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x429 = 110U;
	static int8_t x430 = INT8_MIN;
	uint64_t x431 = 7LLU;
	int16_t x432 = INT16_MAX;

	t94 = ((x429-(x430|x431))/x432);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x437 = -1LL;
	int16_t x439 = 14;
	uint8_t x440 = 2U;
	int64_t t95 = 108710719LL;

	t95 = ((x437-(x438|x439))/x440);

	if (t95 != 56LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x441 = 4080U;
	uint32_t x443 = 90623U;
	int16_t x444 = -2554;
	volatile uint64_t t96 = 42182997673150LLU;

	t96 = ((x441-(x442|x443))/x444);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = INT16_MAX;
	int8_t x446 = 1;
	int64_t x447 = INT64_MAX;
	static uint16_t x448 = 2U;

	t97 = ((x445-(x446|x447))/x448);

	if (t97 != -4611686018427371520LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x449 = 33U;
	int16_t x450 = INT16_MAX;
	uint16_t x451 = 43U;
	volatile uint32_t t98 = 1073545442U;

	t98 = ((x449-(x450|x451))/x452);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x453 = INT16_MAX;
	uint32_t x456 = UINT32_MAX;
	volatile int64_t t99 = 3026465LL;

	t99 = ((x453-(x454|x455))/x456);

	if (t99 != 2147483648LL) { NG(); } else { ; }
	
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

