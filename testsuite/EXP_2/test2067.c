#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
volatile int32_t x6 = 4;
int64_t x9 = -1LL;
volatile int64_t x16 = INT64_MAX;
static volatile uint64_t x27 = 1053837734289751LLU;
int8_t x29 = 1;
uint32_t x30 = 6U;
static volatile int8_t x31 = INT8_MAX;
int8_t x32 = INT8_MAX;
uint64_t t6 = 677684688415LLU;
uint32_t x47 = 759275870U;
volatile uint16_t x51 = UINT16_MAX;
uint32_t x58 = UINT32_MAX;
int16_t x62 = -1;
int32_t x65 = -1;
uint8_t x67 = UINT8_MAX;
uint32_t x68 = 56925U;
volatile int64_t x71 = INT64_MIN;
uint32_t x73 = 93U;
static int8_t x76 = 3;
int64_t x77 = 179126LL;
int32_t x79 = -1;
uint64_t x87 = 921921LLU;
volatile uint64_t t16 = 3525485881711792LLU;
uint8_t x89 = 4U;
static volatile uint64_t t17 = 535138894145263007LLU;
uint8_t x104 = 83U;
volatile int8_t x106 = 0;
int32_t x108 = INT32_MIN;
int32_t t20 = 765;
static volatile uint64_t t22 = 1308958LLU;
uint8_t x123 = 0U;
static int64_t x144 = INT64_MIN;
volatile int64_t t24 = -14226279180LL;
int64_t t25 = -3100632698LL;
int64_t t26 = 61138316790503LL;
int32_t x161 = -1847;
int16_t x169 = INT16_MIN;
volatile int64_t t29 = 121301270LL;
static volatile int16_t x179 = -1;
int32_t x190 = -1;
int8_t x193 = INT8_MIN;
uint64_t x195 = UINT64_MAX;
volatile int16_t x202 = -1;
static uint32_t x231 = UINT32_MAX;
int8_t x232 = -1;
static int32_t x235 = INT32_MIN;
int32_t x238 = -1;
static uint64_t t42 = 9715909LLU;
uint64_t x251 = UINT64_MAX;
int32_t x261 = INT32_MIN;
static int64_t x271 = INT64_MIN;
uint64_t t47 = 31139801LLU;
uint8_t x279 = 25U;
int8_t x280 = -1;
volatile int64_t t48 = -963245436LL;
uint8_t x285 = UINT8_MAX;
volatile int64_t x303 = INT64_MIN;
uint64_t x305 = 2054900700472884691LLU;
volatile uint32_t t55 = 61574U;
static int32_t t56 = -63291681;
int64_t x333 = -1LL;
int32_t x334 = INT32_MIN;
int32_t x336 = INT32_MIN;
static uint32_t t58 = 859U;
uint64_t x347 = 1861804495781466503LLU;
volatile int8_t x352 = INT8_MIN;
uint64_t x354 = 1166299728814709LLU;
int64_t x363 = 4LL;
int32_t x364 = -1;
static int32_t x374 = INT32_MAX;
int16_t x383 = 314;
int32_t t66 = 42176;
int32_t x385 = INT32_MAX;
volatile uint16_t x395 = UINT16_MAX;
volatile uint32_t x397 = UINT32_MAX;
int8_t x408 = 20;
static int64_t t72 = -153LL;
uint32_t x423 = UINT32_MAX;
int32_t x424 = INT32_MAX;
int16_t x428 = 0;
static volatile uint32_t x434 = UINT32_MAX;
uint16_t x442 = 2U;
int32_t x448 = -12;
int8_t x451 = -1;
volatile uint64_t t79 = 275047526LLU;
volatile int16_t x455 = -1;
uint64_t x473 = 78308912940895LLU;
uint32_t x474 = 11145U;
uint64_t t84 = 240974394671945LLU;
static volatile uint32_t t86 = 468055U;
int64_t x486 = INT64_MAX;
uint32_t x487 = UINT32_MAX;
volatile uint16_t x488 = 7543U;
volatile int8_t x501 = 3;
uint8_t x502 = 0U;
uint64_t x503 = 2152LLU;
uint64_t t90 = 6437LLU;
volatile int16_t x510 = -1;
volatile int16_t x517 = INT16_MIN;
static volatile int8_t x520 = INT8_MIN;
int16_t x524 = -1;
static int32_t t96 = -64252;
static volatile int8_t x541 = -1;
volatile int32_t x543 = INT32_MAX;
static uint16_t x544 = UINT16_MAX;
int64_t x545 = -1LL;
static uint8_t x546 = UINT8_MAX;
int32_t x556 = INT32_MIN;


void f0(void) {
	volatile uint32_t x1 = 24U;
	int32_t x2 = INT32_MIN;
	int8_t x4 = INT8_MIN;
	uint32_t t0 = 76393981U;

	t0 = ((x1*(x2^x3))^x4);

	if (t0 != 4294961256U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	volatile int64_t x7 = -1LL;
	uint8_t x8 = 17U;
	volatile int64_t t1 = 75391666LL;

	t1 = ((x5*(x6^x7))^x8);

	if (t1 != -163820LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MIN;
	uint32_t x12 = UINT32_MAX;
	int64_t t2 = -703662989LL;

	t2 = ((x9*(x10^x11))^x12);

	if (t2 != -4294934657LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint64_t x14 = 840LLU;
	int16_t x15 = INT16_MIN;
	volatile uint64_t t3 = 5LLU;

	t3 = ((x13*(x14^x15))^x16);

	if (t3 != 9223372036858830663LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	volatile int64_t x26 = -1LL;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t4 = 291LLU;

	t4 = ((x25*(x26^x27))^x28);

	if (t4 != 18311852843720463232LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t t5 = 3U;

	t5 = ((x29*(x30^x31))^x32);

	if (t5 != 6U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 3U;
	uint16_t x34 = UINT16_MAX;
	int16_t x35 = INT16_MIN;
	uint64_t x36 = UINT64_MAX;

	t6 = ((x33*(x34^x35))^x36);

	if (t6 != 98306LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = 1;
	int32_t x46 = INT32_MIN;
	static uint16_t x48 = UINT16_MAX;
	uint32_t t7 = 0U;

	t7 = ((x45*(x46^x47))^x48);

	if (t7 != 2906742433U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = 0LLU;
	uint32_t x50 = 21U;
	uint32_t x52 = UINT32_MAX;
	static uint64_t t8 = 15537LLU;

	t8 = ((x49*(x50^x51))^x52);

	if (t8 != 4294967295LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MIN;
	uint16_t x54 = 6384U;
	uint64_t x55 = 256258592632LLU;
	int32_t x56 = -1;
	volatile uint64_t t9 = 187951527LLU;

	t9 = ((x53*(x54^x55))^x56);

	if (t9 != 8397081630998527LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = -1LL;
	int8_t x59 = 1;
	int8_t x60 = 0;
	volatile int64_t t10 = -38LL;

	t10 = ((x57*(x58^x59))^x60);

	if (t10 != -4294967294LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x61 = -1;
	int8_t x63 = -1;
	uint16_t x64 = 37U;
	volatile int32_t t11 = -265537049;

	t11 = ((x61*(x62^x63))^x64);

	if (t11 != 37) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x66 = -1LL;
	static int64_t t12 = 4161385LL;

	t12 = ((x65*(x66^x67))^x68);

	if (t12 != 57181LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = -1;
	static int8_t x70 = -1;
	uint32_t x72 = 8060404U;
	volatile int64_t t13 = -366158031LL;

	t13 = ((x69*(x70^x71))^x72);

	if (t13 != -9223372036846715403LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x74 = 103U;
	uint64_t x75 = UINT64_MAX;
	uint64_t t14 = 21423LLU;

	t14 = ((x73*(x74^x75))^x76);

	if (t14 != 18446744073709541947LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x78 = UINT16_MAX;
	uint8_t x80 = 1U;
	int64_t t15 = 8004275LL;

	t15 = ((x77*(x78^x79))^x80);

	if (t15 != -11739201535LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x85 = 0U;
	int32_t x86 = -7;
	uint32_t x88 = UINT32_MAX;

	t16 = ((x85*(x86^x87))^x88);

	if (t16 != 4294967295LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x90 = 240815273205LLU;
	int32_t x91 = INT32_MAX;
	int8_t x92 = 19;

	t17 = ((x89*(x90^x91))^x92);

	if (t17 != 969474190395LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MIN;
	volatile int8_t x94 = INT8_MAX;
	int8_t x95 = -1;
	int8_t x96 = INT8_MIN;
	static int32_t t18 = 198;

	t18 = ((x93*(x94^x95))^x96);

	if (t18 != -4194432) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x101 = -2802;
	int8_t x102 = INT8_MAX;
	static volatile int32_t x103 = -1;
	volatile int32_t t19 = 2175;

	t19 = ((x101*(x102^x103))^x104);

	if (t19 != 358739) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x105 = UINT8_MAX;
	static int16_t x107 = 13;

	t20 = ((x105*(x106^x107))^x108);

	if (t20 != -2147480333) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = 27834378454839989LLU;
	static volatile uint32_t x110 = 7U;
	int16_t x111 = INT16_MIN;
	int32_t x112 = INT32_MAX;
	uint64_t t21 = 19064654449LLU;

	t21 = ((x109*(x110^x111))^x112);

	if (t21 != 15091642696582896908LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x113 = 30864800;
	static uint64_t x114 = UINT64_MAX;
	int8_t x115 = -1;
	uint64_t x116 = 148083LLU;

	t22 = ((x113*(x114^x115))^x116);

	if (t22 != 148083LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = INT64_MAX;
	uint64_t x122 = UINT64_MAX;
	uint64_t x124 = 7887197889651546842LLU;
	uint64_t t23 = 728121LLU;

	t23 = ((x121*(x122^x123))^x124);

	if (t23 != 17110569926506322651LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x141 = 14560;
	static int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;

	t24 = ((x141*(x142^x143))^x144);

	if (t24 != -9223372036379537408LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x149 = INT16_MIN;
	int64_t x150 = 290LL;
	static int32_t x151 = 979;
	int8_t x152 = INT8_MAX;

	t25 = ((x149*(x150^x151))^x152);

	if (t25 != -24674177LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x153 = INT16_MIN;
	static volatile uint8_t x154 = 0U;
	int64_t x155 = -2648190378917LL;
	int8_t x156 = INT8_MIN;

	t26 = ((x153*(x154^x155))^x156);

	if (t26 != -86775902336352384LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x157 = INT16_MAX;
	int8_t x158 = INT8_MIN;
	uint32_t x159 = 27149430U;
	int8_t x160 = INT8_MIN;
	volatile uint32_t t27 = 60302550U;

	t27 = ((x157*(x158^x159))^x160);

	if (t27 != 543603594U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x162 = UINT8_MAX;
	volatile int8_t x163 = INT8_MIN;
	static int8_t x164 = -1;
	static int32_t t28 = 3474575;

	t28 = ((x161*(x162^x163))^x164);

	if (t28 != -238264) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x170 = 15U;
	int64_t x171 = 515138333LL;
	int8_t x172 = INT8_MAX;

	t29 = ((x169*(x170^x171))^x172);

	if (t29 != -16880052535169LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x173 = INT8_MIN;
	uint8_t x174 = UINT8_MAX;
	uint8_t x175 = 1U;
	int16_t x176 = 138;
	int32_t t30 = -14;

	t30 = ((x173*(x174^x175))^x176);

	if (t30 != -32374) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x177 = 9291466LL;
	int64_t x178 = -6875LL;
	int32_t x180 = INT32_MIN;
	int64_t t31 = -121538574LL;

	t31 = ((x177*(x178^x179))^x180);

	if (t31 != -62831997948LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x189 = -141;
	volatile int64_t x191 = -1LL;
	static int64_t x192 = 6017368425LL;
	int64_t t32 = -79LL;

	t32 = ((x189*(x190^x191))^x192);

	if (t32 != 6017368425LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x194 = 2U;
	static uint64_t x196 = 54671LLU;
	uint64_t t33 = 79934547LLU;

	t33 = ((x193*(x194^x195))^x196);

	if (t33 != 54287LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x201 = 1U;
	static uint8_t x203 = 1U;
	static int32_t x204 = -33373075;
	int32_t t34 = -360;

	t34 = ((x201*(x202^x203))^x204);

	if (t34 != 33373075) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x205 = 848437703LLU;
	int16_t x206 = INT16_MIN;
	static volatile uint16_t x207 = 1816U;
	volatile int16_t x208 = 1;
	uint64_t t35 = 517267502681LLU;

	t35 = ((x205*(x206^x207))^x208);

	if (t35 != 18446717812865768361LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x209 = UINT64_MAX;
	static uint16_t x210 = UINT16_MAX;
	uint8_t x211 = 58U;
	int32_t x212 = INT32_MIN;
	uint64_t t36 = 16695264505839321LLU;

	t36 = ((x209*(x210^x211))^x212);

	if (t36 != 2147418171LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x213 = INT16_MIN;
	int16_t x214 = -14337;
	volatile int16_t x215 = INT16_MIN;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t37 = 1766399;

	t37 = ((x213*(x214^x215))^x216);

	if (t37 != 603914240) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x225 = INT16_MIN;
	volatile uint32_t x226 = UINT32_MAX;
	int8_t x227 = INT8_MAX;
	int16_t x228 = -1;
	volatile uint32_t t38 = 631U;

	t38 = ((x225*(x226^x227))^x228);

	if (t38 != 4290772991U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x229 = 1LLU;
	uint8_t x230 = 29U;
	volatile uint64_t t39 = 807321LLU;

	t39 = ((x229*(x230^x231))^x232);

	if (t39 != 18446744069414584349LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x233 = UINT64_MAX;
	int64_t x234 = INT64_MIN;
	int16_t x236 = 0;
	static volatile uint64_t t40 = 28423740283939LLU;

	t40 = ((x233*(x234^x235))^x236);

	if (t40 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x237 = INT16_MIN;
	int8_t x239 = -15;
	volatile uint32_t x240 = 14U;
	uint32_t t41 = 21557U;

	t41 = ((x237*(x238^x239))^x240);

	if (t41 != 4294508558U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x241 = 746;
	uint8_t x242 = 62U;
	uint64_t x243 = UINT64_MAX;
	volatile uint64_t x244 = UINT64_MAX;

	t42 = ((x241*(x242^x243))^x244);

	if (t42 != 46997LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x245 = UINT32_MAX;
	static volatile int16_t x246 = INT16_MIN;
	uint32_t x247 = UINT32_MAX;
	int16_t x248 = -1;
	uint32_t t43 = 49545U;

	t43 = ((x245*(x246^x247))^x248);

	if (t43 != 32766U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x249 = 8114;
	volatile uint32_t x250 = UINT32_MAX;
	volatile int32_t x252 = INT32_MAX;
	static uint64_t t44 = 3780067092714671LLU;

	t44 = ((x249*(x250^x251))^x252);

	if (t44 != 18446709226492395519LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x262 = 10539214739LLU;
	int8_t x263 = INT8_MIN;
	int16_t x264 = INT16_MIN;
	uint64_t t45 = 937LLU;

	t45 = ((x261*(x262^x263))^x264);

	if (t45 != 14260696639382454272LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x269 = 26647385LLU;
	static uint64_t x270 = UINT64_MAX;
	int16_t x272 = -48;
	volatile uint64_t t46 = 0LLU;

	t46 = ((x269*(x270^x271))^x272);

	if (t46 != 9223372036881423223LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x273 = INT16_MAX;
	uint8_t x274 = 33U;
	uint64_t x275 = 24LLU;
	int16_t x276 = INT16_MIN;

	t47 = ((x273*(x274^x275))^x276);

	if (t47 != 18446744073707716551LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x277 = -1LL;
	int16_t x278 = INT16_MIN;

	t48 = ((x277*(x278^x279))^x280);

	if (t48 != -32744LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x286 = 226416565LLU;
	volatile int64_t x287 = -1LL;
	static volatile int16_t x288 = 11967;
	uint64_t t49 = 1349088661LLU;

	t49 = ((x285*(x286^x287))^x288);

	if (t49 != 18446744015973322505LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x289 = 50950LL;
	int32_t x290 = 91901219;
	volatile uint64_t x291 = 333LLU;
	int32_t x292 = 16761575;
	volatile uint64_t t50 = 173869927258696933LLU;

	t50 = ((x289*(x290^x291))^x292);

	if (t50 != 4682365308531LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x297 = UINT8_MAX;
	int64_t x298 = -13187LL;
	static int16_t x299 = INT16_MIN;
	uint8_t x300 = 2U;
	volatile int64_t t51 = 66966425433739601LL;

	t51 = ((x297*(x298^x299))^x300);

	if (t51 != 4993153LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x301 = -1LL;
	static int16_t x302 = -1;
	static uint16_t x304 = UINT16_MAX;
	volatile int64_t t52 = 1717317378053874LL;

	t52 = ((x301*(x302^x303))^x304);

	if (t52 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x306 = 175445;
	int16_t x307 = 8;
	static uint8_t x308 = UINT8_MAX;
	static uint64_t t53 = 404541LLU;

	t53 = ((x305*(x306^x307))^x308);

	if (t53 != 15326423489560906840LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x313 = 13U;
	int32_t x314 = -1;
	static int8_t x315 = INT8_MIN;
	uint32_t x316 = 1484U;
	uint32_t t54 = 3477789U;

	t54 = ((x313*(x314^x315))^x316);

	if (t54 != 959U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = INT32_MIN;
	uint32_t x319 = UINT32_MAX;
	int8_t x320 = INT8_MIN;

	t55 = ((x317*(x318^x319))^x320);

	if (t55 != 4294967040U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x321 = 0U;
	volatile int16_t x322 = INT16_MAX;
	uint8_t x323 = 53U;
	int8_t x324 = -55;

	t56 = ((x321*(x322^x323))^x324);

	if (t56 != -55) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x335 = INT16_MIN;
	volatile int64_t t57 = 336503321678LL;

	t57 = ((x333*(x334^x335))^x336);

	if (t57 != 32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x341 = 5163;
	int8_t x342 = -1;
	volatile uint32_t x343 = 11U;
	int16_t x344 = -1;

	t58 = ((x341*(x342^x343))^x344);

	if (t58 != 61955U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x345 = INT32_MIN;
	int16_t x346 = -1;
	int16_t x348 = -1;
	volatile uint64_t t59 = 301608884514976786LLU;

	t59 = ((x345*(x346^x347))^x348);

	if (t59 != 8204493351999766527LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x349 = 35LL;
	static int8_t x350 = -15;
	static uint32_t x351 = UINT32_MAX;
	static int64_t t60 = 117154271LL;

	t60 = ((x349*(x350^x351))^x352);

	if (t60 != -406LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x353 = 192U;
	uint8_t x355 = 0U;
	int64_t x356 = INT64_MAX;
	volatile uint64_t t61 = 0LLU;

	t61 = ((x353*(x354^x355))^x356);

	if (t61 != 8999442488922351679LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x357 = INT8_MAX;
	volatile int64_t x358 = 234706317096LL;
	int32_t x359 = INT32_MIN;
	int32_t x360 = -36393;
	static int64_t t62 = -560LL;

	t62 = ((x357*(x358^x359))^x360);

	if (t62 != 29920260396303LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x361 = UINT16_MAX;
	uint64_t x362 = 17044246486LLU;
	static uint64_t t63 = 121379743902LLU;

	t63 = ((x361*(x362^x363))^x364);

	if (t63 != 18445627079016353745LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x373 = UINT64_MAX;
	int16_t x375 = 120;
	volatile uint16_t x376 = UINT16_MAX;
	uint64_t t64 = 250483756385LLU;

	t64 = ((x373*(x374^x375))^x376);

	if (t64 != 18446744071562133382LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x377 = -6726567336948962LL;
	static volatile uint8_t x378 = UINT8_MAX;
	uint8_t x379 = UINT8_MAX;
	uint64_t x380 = UINT64_MAX;
	uint64_t t65 = UINT64_MAX;

	t65 = ((x377*(x378^x379))^x380);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x381 = 59;
	static int32_t x382 = -9984;
	int16_t x384 = INT16_MIN;

	t66 = ((x381*(x382^x383))^x384);

	if (t66 != 611678) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x386 = UINT64_MAX;
	uint8_t x387 = UINT8_MAX;
	int16_t x388 = -33;
	volatile uint64_t t67 = 20LLU;

	t67 = ((x385*(x386^x387))^x388);

	if (t67 != 549755813599LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x393 = -1;
	int16_t x394 = INT16_MIN;
	volatile int16_t x396 = INT16_MAX;
	static volatile int32_t t68 = 11;

	t68 = ((x393*(x394^x395))^x396);

	if (t68 != 65534) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x398 = INT32_MIN;
	int16_t x399 = -1;
	int64_t x400 = 28347364070668LL;
	volatile int64_t t69 = -3565326445664LL;

	t69 = ((x397*(x398^x399))^x400);

	if (t69 != 28349511554317LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x405 = INT64_MAX;
	volatile int8_t x406 = 0;
	int16_t x407 = -1;
	static volatile int64_t t70 = -1LL;

	t70 = ((x405*(x406^x407))^x408);

	if (t70 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x413 = 38;
	int32_t x414 = -1;
	int8_t x415 = INT8_MAX;
	int8_t x416 = -1;
	volatile int32_t t71 = 5780;

	t71 = ((x413*(x414^x415))^x416);

	if (t71 != 4863) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x417 = 0U;
	int8_t x418 = -1;
	int64_t x419 = -1LL;
	static int8_t x420 = INT8_MAX;

	t72 = ((x417*(x418^x419))^x420);

	if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x421 = 0U;
	uint16_t x422 = 29U;
	volatile uint32_t t73 = 14131U;

	t73 = ((x421*(x422^x423))^x424);

	if (t73 != 2147483647U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x425 = 20973635U;
	static int16_t x426 = -3;
	static uint8_t x427 = UINT8_MAX;
	static volatile uint32_t t74 = 2444U;

	t74 = ((x425*(x426^x427))^x428);

	if (t74 != 3262631302U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x433 = -199;
	static int32_t x435 = INT32_MAX;
	int64_t x436 = -1756334174044LL;
	static volatile int64_t t75 = 147236863LL;

	t75 = ((x433*(x434^x435))^x436);

	if (t75 != -1754186690396LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x437 = -1LL;
	uint64_t x438 = 110157250999827LLU;
	static uint16_t x439 = UINT16_MAX;
	static volatile uint64_t x440 = 345914531137LLU;
	uint64_t t76 = 437540LLU;

	t76 = ((x437*(x438^x439))^x440);

	if (t76 != 18446633575176694613LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x441 = 21374LLU;
	static int64_t x443 = -7450758LL;
	uint32_t x444 = UINT32_MAX;
	static uint64_t t77 = 3409826609757114230LLU;

	t77 = ((x441*(x442^x443))^x444);

	if (t77 != 18446743910839548655LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x445 = INT8_MIN;
	int8_t x446 = 6;
	static volatile uint32_t x447 = UINT32_MAX;
	volatile uint32_t t78 = 259255U;

	t78 = ((x445*(x446^x447))^x448);

	if (t78 != 4294966388U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x449 = 3U;
	uint64_t x450 = 26851LLU;
	volatile int64_t x452 = 1666LL;

	t79 = ((x449*(x450^x451))^x452);

	if (t79 != 18446744073709470678LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x453 = -11;
	volatile uint32_t x454 = UINT32_MAX;
	uint64_t x456 = UINT64_MAX;
	uint64_t t80 = UINT64_MAX;

	t80 = ((x453*(x454^x455))^x456);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x457 = INT32_MAX;
	static uint32_t x458 = UINT32_MAX;
	int32_t x459 = INT32_MIN;
	uint16_t x460 = 42U;
	uint32_t t81 = 1585U;

	t81 = ((x457*(x458^x459))^x460);

	if (t81 != 43U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x465 = 408LL;
	uint16_t x466 = 1443U;
	uint8_t x467 = 3U;
	int32_t x468 = -5845584;
	volatile int64_t t82 = -3345193290LL;

	t82 = ((x465*(x466^x467))^x468);

	if (t82 != -5358928LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x469 = 2460U;
	volatile int16_t x470 = -10;
	uint8_t x471 = 5U;
	uint32_t x472 = 1607U;
	static volatile uint32_t t83 = 5U;

	t83 = ((x469*(x470^x471))^x472);

	if (t83 != 4294935891U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x475 = 14;
	int64_t x476 = INT64_MAX;

	t84 = ((x473*(x474^x475))^x476);

	if (t84 != 8350775819954382822LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x477 = -1LL;
	static int64_t x478 = INT64_MAX;
	int16_t x479 = INT16_MIN;
	volatile uint8_t x480 = UINT8_MAX;
	int64_t t85 = 6237502941926LL;

	t85 = ((x477*(x478^x479))^x480);

	if (t85 != 9223372036854743294LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x481 = INT16_MAX;
	static volatile uint8_t x482 = UINT8_MAX;
	int8_t x483 = INT8_MAX;
	uint32_t x484 = UINT32_MAX;

	t86 = ((x481*(x482^x483))^x484);

	if (t86 != 4290773119U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x485 = -1;
	volatile int64_t t87 = -2008397LL;

	t87 = ((x485*(x486^x487))^x488);

	if (t87 != -9223372032559800969LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x493 = UINT32_MAX;
	static uint16_t x494 = 1U;
	volatile uint64_t x495 = 3799726646LLU;
	static int8_t x496 = -55;
	volatile uint64_t t88 = 3304339521LLU;

	t88 = ((x493*(x494^x495))^x496);

	if (t88 != 2127042394904541696LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x497 = INT16_MIN;
	int16_t x498 = INT16_MAX;
	int16_t x499 = INT16_MIN;
	uint16_t x500 = 3U;
	volatile int32_t t89 = 106818;

	t89 = ((x497*(x498^x499))^x500);

	if (t89 != 32771) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x504 = INT32_MIN;

	t90 = ((x501*(x502^x503))^x504);

	if (t90 != 18446744071562074424LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x509 = UINT32_MAX;
	volatile uint8_t x511 = 1U;
	int8_t x512 = INT8_MIN;
	uint32_t t91 = 2206740U;

	t91 = ((x509*(x510^x511))^x512);

	if (t91 != 4294967170U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x518 = 732370580704LL;
	int16_t x519 = -1;
	volatile int64_t t92 = 2187152413162780LL;

	t92 = ((x517*(x518^x519))^x520);

	if (t92 != -23998319188541568LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x521 = 251096923;
	uint16_t x522 = UINT16_MAX;
	uint64_t x523 = UINT64_MAX;
	uint64_t t93 = 27494523910LLU;

	t93 = ((x521*(x522^x523))^x524);

	if (t93 != 16455887945727LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x529 = 12U;
	uint32_t x530 = 681009442U;
	uint64_t x531 = UINT64_MAX;
	uint8_t x532 = 2U;
	static volatile uint64_t t94 = 754LLU;

	t94 = ((x529*(x530^x531))^x532);

	if (t94 != 18446744065537438302LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x533 = 1805273LLU;
	int32_t x534 = 55;
	int64_t x535 = -1LL;
	uint8_t x536 = 1U;
	uint64_t t95 = 7239704664120535LLU;

	t95 = ((x533*(x534^x535))^x536);

	if (t95 != 18446744073608456329LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x537 = -1;
	uint8_t x538 = UINT8_MAX;
	static volatile int16_t x539 = INT16_MAX;
	int16_t x540 = 2510;

	t96 = ((x537*(x538^x539))^x540);

	if (t96 != -30514) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x542 = 18U;
	int32_t t97 = 5006891;

	t97 = ((x541*(x542^x543))^x544);

	if (t97 != -2147418132) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x547 = 1;
	int32_t x548 = INT32_MIN;
	volatile int64_t t98 = -43817467LL;

	t98 = ((x545*(x546^x547))^x548);

	if (t98 != 2147483394LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x553 = -7246;
	volatile int8_t x554 = -1;
	static volatile int16_t x555 = INT16_MAX;
	volatile int32_t t99 = -42898778;

	t99 = ((x553*(x554^x555))^x556);

	if (t99 != -1910046720) { NG(); } else { ; }
	
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

