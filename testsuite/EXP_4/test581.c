#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -432316;
int32_t t2 = 9628161;
uint32_t x101 = 21U;
static uint8_t x123 = 3U;
int64_t x157 = 30750499887320LL;
static int64_t x160 = -53502125LL;
uint64_t x174 = 124LLU;
int32_t x176 = INT32_MAX;
volatile int32_t t10 = 434;
static uint64_t x179 = 20079459888363202LLU;
int32_t t11 = -1713041;
uint8_t x183 = 4U;
static int32_t t12 = 30127126;
int64_t x205 = 17308545744181LL;
volatile int64_t x206 = INT64_MAX;
int64_t x229 = -1LL;
uint32_t x231 = 20U;
uint32_t x234 = UINT32_MAX;
static int8_t x253 = -1;
static uint16_t x268 = UINT16_MAX;
uint8_t x274 = 1U;
volatile int32_t x276 = -1;
int64_t x284 = INT64_MAX;
int32_t x296 = 964;
int32_t t23 = 2;
uint32_t x297 = 141U;
volatile uint8_t x298 = 1U;
uint32_t x315 = 1279U;
int32_t x316 = -1;
static volatile int32_t x332 = INT32_MIN;
int32_t x335 = 426629903;
volatile uint32_t x381 = 1718U;
uint64_t x384 = 22268LLU;
int8_t x402 = 6;
volatile int8_t x415 = -1;
uint8_t x426 = 77U;
volatile int8_t x428 = INT8_MAX;
volatile int32_t t36 = 0;
int16_t x460 = -5;
uint64_t x477 = 54394372042941LLU;
int16_t x480 = INT16_MIN;
volatile int32_t t39 = -2559938;
static int8_t x481 = INT8_MAX;
volatile int32_t t41 = 699;
volatile int64_t x512 = -3985607579330497LL;
int32_t t42 = -234953696;
volatile int16_t x520 = -7866;
uint16_t x522 = 494U;
int8_t x546 = 2;
int32_t t45 = -956;
static int16_t x576 = INT16_MIN;
int16_t x586 = 30;
int16_t x601 = -1;
int64_t x602 = INT64_MAX;
static volatile int32_t t49 = 30664167;
static uint8_t x655 = UINT8_MAX;
int16_t x680 = 2;
int32_t x726 = INT32_MAX;
volatile int32_t t58 = -7817;
volatile int16_t x741 = INT16_MIN;
int8_t x751 = 50;
int32_t x773 = INT32_MIN;
static uint32_t x798 = 1030434546U;
static int8_t x820 = INT8_MIN;
volatile int32_t t65 = 955652647;
uint64_t x825 = 1762005LLU;
static int8_t x866 = INT8_MAX;
int8_t x881 = INT8_MIN;
int32_t x884 = INT32_MIN;
volatile uint16_t x906 = 16093U;
uint64_t x930 = 2422069889244LLU;
int64_t x936 = INT64_MAX;
int32_t t74 = -27;
volatile uint64_t x949 = 142218181377346LLU;
uint64_t x951 = 40437828597LLU;
uint16_t x965 = UINT16_MAX;
uint32_t x967 = 1633U;
volatile uint16_t x970 = 6U;
int16_t x972 = INT16_MIN;
volatile int32_t t77 = 257545259;
volatile int32_t t78 = 254074;
int32_t x993 = -108;
volatile int32_t t79 = -121755;
int8_t x1003 = INT8_MIN;
int32_t x1020 = -2321;
int64_t x1025 = INT64_MIN;
static int32_t x1080 = -1;
int16_t x1095 = -1;
int32_t t87 = 85;
static int64_t x1109 = INT64_MIN;
static volatile int32_t t89 = -1;
static uint64_t x1126 = 679927613080035582LLU;
static uint16_t x1127 = 4016U;
volatile int32_t t90 = 1740;
volatile int64_t x1170 = 759725179208431597LL;
int16_t x1172 = INT16_MIN;
uint32_t x1180 = 104256226U;
volatile int32_t t94 = 793;
int32_t x1193 = -1;
int64_t x1195 = -1LL;
uint64_t x1222 = UINT64_MAX;
int8_t x1223 = 2;
static int8_t x1249 = INT8_MIN;
int16_t x1269 = 4692;
volatile int8_t x1274 = INT8_MAX;


void f0(void) {
	static int32_t x1 = -1549126;
	uint16_t x2 = 0U;
	int8_t x3 = INT8_MIN;
	volatile uint8_t x4 = UINT8_MAX;
	int32_t t0 = -102598424;

	t0 = (x1<(x2<<(x3/x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x33 = -16;
	uint16_t x34 = 2041U;
	int64_t x35 = 17051409983093179LL;
	volatile int64_t x36 = INT64_MIN;

	t1 = (x33<(x34<<(x35/x36)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x53 = 15291771096979434LL;
	int64_t x54 = 44065LL;
	uint64_t x55 = UINT64_MAX;
	int64_t x56 = -1LL;

	t2 = (x53<(x54<<(x55/x56)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x85 = UINT64_MAX;
	volatile int32_t x86 = 287;
	volatile int8_t x87 = 1;
	static int8_t x88 = INT8_MAX;
	volatile int32_t t3 = -1;

	t3 = (x85<(x86<<(x87/x88)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x89 = INT16_MIN;
	uint32_t x90 = 533257U;
	volatile int8_t x91 = INT8_MIN;
	volatile int16_t x92 = INT16_MIN;
	volatile int32_t t4 = 0;

	t4 = (x89<(x90<<(x91/x92)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x102 = INT64_MAX;
	int16_t x103 = INT16_MIN;
	volatile int64_t x104 = INT64_MIN;
	static int32_t t5 = 34316;

	t5 = (x101<(x102<<(x103/x104)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x113 = INT16_MAX;
	volatile uint64_t x114 = UINT64_MAX;
	int64_t x115 = -3769413LL;
	volatile int32_t x116 = INT32_MIN;
	static int32_t t6 = -4840;

	t6 = (x113<(x114<<(x115/x116)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x121 = UINT8_MAX;
	uint16_t x122 = 55U;
	static volatile int8_t x124 = INT8_MAX;
	volatile int32_t t7 = -182251819;

	t7 = (x121<(x122<<(x123/x124)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x141 = INT64_MIN;
	static uint32_t x142 = 27U;
	uint16_t x143 = 0U;
	volatile uint8_t x144 = 8U;
	volatile int32_t t8 = 51224;

	t8 = (x141<(x142<<(x143/x144)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x158 = 4U;
	int8_t x159 = -1;
	int32_t t9 = 80532389;

	t9 = (x157<(x158<<(x159/x160)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x173 = -114;
	int8_t x175 = -1;

	t10 = (x173<(x174<<(x175/x176)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x177 = 0;
	static int64_t x178 = INT64_MAX;
	static volatile int16_t x180 = -1;

	t11 = (x177<(x178<<(x179/x180)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x181 = 427U;
	uint8_t x182 = UINT8_MAX;
	int16_t x184 = INT16_MAX;

	t12 = (x181<(x182<<(x183/x184)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x207 = 68903134280942459LLU;
	volatile int8_t x208 = INT8_MIN;
	int32_t t13 = 105389740;

	t13 = (x205<(x206<<(x207/x208)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x225 = INT32_MIN;
	int16_t x226 = 22;
	volatile uint64_t x227 = UINT64_MAX;
	int64_t x228 = -228920404024586LL;
	int32_t t14 = -1;

	t14 = (x225<(x226<<(x227/x228)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x230 = 7;
	uint32_t x232 = 87459070U;
	volatile int32_t t15 = -54871;

	t15 = (x229<(x230<<(x231/x232)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x233 = INT64_MIN;
	int16_t x235 = -1;
	int16_t x236 = INT16_MIN;
	int32_t t16 = 275883061;

	t16 = (x233<(x234<<(x235/x236)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x245 = 641935923U;
	int8_t x246 = INT8_MAX;
	volatile int64_t x247 = -1LL;
	int32_t x248 = 15;
	int32_t t17 = 405377;

	t17 = (x245<(x246<<(x247/x248)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x254 = 14782U;
	volatile int8_t x255 = INT8_MIN;
	static int64_t x256 = INT64_MAX;
	volatile int32_t t18 = 7599;

	t18 = (x253<(x254<<(x255/x256)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x265 = 0U;
	uint32_t x266 = UINT32_MAX;
	static volatile uint8_t x267 = 9U;
	volatile int32_t t19 = 177940;

	t19 = (x265<(x266<<(x267/x268)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x273 = UINT64_MAX;
	int8_t x275 = 0;
	volatile int32_t t20 = 471638536;

	t20 = (x273<(x274<<(x275/x276)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x281 = 248U;
	volatile int16_t x282 = INT16_MAX;
	uint8_t x283 = UINT8_MAX;
	static volatile int32_t t21 = -18824;

	t21 = (x281<(x282<<(x283/x284)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x285 = -21;
	int64_t x286 = INT64_MAX;
	int16_t x287 = -1;
	int8_t x288 = -33;
	int32_t t22 = -4151276;

	t22 = (x285<(x286<<(x287/x288)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	int64_t x295 = -1LL;

	t23 = (x293<(x294<<(x295/x296)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x299 = 7893;
	int64_t x300 = INT64_MAX;
	volatile int32_t t24 = -30004;

	t24 = (x297<(x298<<(x299/x300)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x313 = 15744461LLU;
	volatile uint16_t x314 = UINT16_MAX;
	int32_t t25 = 48644123;

	t25 = (x313<(x314<<(x315/x316)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x329 = 3464U;
	uint16_t x330 = 16028U;
	int16_t x331 = INT16_MIN;
	volatile int32_t t26 = 19155852;

	t26 = (x329<(x330<<(x331/x332)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x333 = INT16_MIN;
	static uint32_t x334 = 432352050U;
	int64_t x336 = INT64_MIN;
	int32_t t27 = 447612;

	t27 = (x333<(x334<<(x335/x336)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x345 = -3668562;
	volatile int64_t x346 = 296535LL;
	int8_t x347 = INT8_MIN;
	int64_t x348 = -3501813919738LL;
	static volatile int32_t t28 = -7;

	t28 = (x345<(x346<<(x347/x348)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x361 = UINT8_MAX;
	uint8_t x362 = 55U;
	int8_t x363 = INT8_MAX;
	int32_t x364 = 23;
	int32_t t29 = 1521;

	t29 = (x361<(x362<<(x363/x364)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x373 = INT64_MIN;
	static uint64_t x374 = 454096851606243LLU;
	static volatile int8_t x375 = -1;
	uint16_t x376 = 3145U;
	static volatile int32_t t30 = -449;

	t30 = (x373<(x374<<(x375/x376)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x382 = 25769;
	uint16_t x383 = 11U;
	static int32_t t31 = -20915556;

	t31 = (x381<(x382<<(x383/x384)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MAX;
	static int16_t x395 = INT16_MIN;
	uint32_t x396 = UINT32_MAX;
	static volatile int32_t t32 = 115328456;

	t32 = (x393<(x394<<(x395/x396)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x401 = -1;
	static uint8_t x403 = UINT8_MAX;
	int8_t x404 = 28;
	volatile int32_t t33 = -950218044;

	t33 = (x401<(x402<<(x403/x404)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x413 = -1LL;
	uint32_t x414 = 90042590U;
	int64_t x416 = INT64_MIN;
	volatile int32_t t34 = 17;

	t34 = (x413<(x414<<(x415/x416)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x425 = INT16_MAX;
	volatile int8_t x427 = INT8_MAX;
	int32_t t35 = -76957;

	t35 = (x425<(x426<<(x427/x428)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x433 = 235715;
	volatile int16_t x434 = INT16_MAX;
	int8_t x435 = INT8_MAX;
	int32_t x436 = INT32_MIN;

	t36 = (x433<(x434<<(x435/x436)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x457 = -9686230840LL;
	uint64_t x458 = 35930063350188729LLU;
	uint64_t x459 = 4387259690634318LLU;
	static volatile int32_t t37 = -128801;

	t37 = (x457<(x458<<(x459/x460)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x473 = -6;
	int64_t x474 = INT64_MAX;
	static volatile uint16_t x475 = 61U;
	volatile int16_t x476 = INT16_MIN;
	volatile int32_t t38 = 1658360;

	t38 = (x473<(x474<<(x475/x476)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x478 = INT64_MAX;
	uint32_t x479 = 378U;

	t39 = (x477<(x478<<(x479/x480)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x482 = 0U;
	int8_t x483 = INT8_MAX;
	int64_t x484 = -86342LL;
	volatile int32_t t40 = -334;

	t40 = (x481<(x482<<(x483/x484)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x497 = INT8_MIN;
	volatile uint8_t x498 = 69U;
	int8_t x499 = INT8_MIN;
	int16_t x500 = INT16_MIN;

	t41 = (x497<(x498<<(x499/x500)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x509 = -1;
	uint8_t x510 = 1U;
	volatile int8_t x511 = INT8_MAX;

	t42 = (x509<(x510<<(x511/x512)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x517 = -1;
	volatile int8_t x518 = 18;
	int32_t x519 = -1;
	int32_t t43 = 427290;

	t43 = (x517<(x518<<(x519/x520)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x521 = INT64_MIN;
	uint32_t x523 = UINT32_MAX;
	volatile int32_t x524 = -1;
	volatile int32_t t44 = -9;

	t44 = (x521<(x522<<(x523/x524)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x545 = 5417384;
	static uint16_t x547 = 14U;
	static volatile int16_t x548 = INT16_MIN;

	t45 = (x545<(x546<<(x547/x548)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x573 = INT8_MAX;
	int8_t x574 = INT8_MAX;
	static uint64_t x575 = 42LLU;
	static volatile int32_t t46 = -26174653;

	t46 = (x573<(x574<<(x575/x576)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x581 = UINT16_MAX;
	int8_t x582 = 1;
	int64_t x583 = INT64_MIN;
	volatile int64_t x584 = INT64_MIN;
	static volatile int32_t t47 = 1974690;

	t47 = (x581<(x582<<(x583/x584)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x585 = UINT32_MAX;
	static uint32_t x587 = UINT32_MAX;
	int64_t x588 = 222685667098LL;
	volatile int32_t t48 = 20259142;

	t48 = (x585<(x586<<(x587/x588)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x603 = INT64_MIN;
	uint64_t x604 = UINT64_MAX;

	t49 = (x601<(x602<<(x603/x604)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x625 = 4577970100075189144LLU;
	static int16_t x626 = INT16_MAX;
	uint8_t x627 = 2U;
	uint16_t x628 = UINT16_MAX;
	int32_t t50 = 463268682;

	t50 = (x625<(x626<<(x627/x628)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x629 = INT64_MAX;
	static int32_t x630 = 41382;
	volatile int64_t x631 = -826074311LL;
	int64_t x632 = INT64_MAX;
	int32_t t51 = 522;

	t51 = (x629<(x630<<(x631/x632)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x653 = -1001272LL;
	volatile uint64_t x654 = 4134LLU;
	int32_t x656 = -2098158;
	volatile int32_t t52 = -709;

	t52 = (x653<(x654<<(x655/x656)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x657 = INT32_MIN;
	volatile uint8_t x658 = UINT8_MAX;
	uint16_t x659 = 8759U;
	uint32_t x660 = 491U;
	int32_t t53 = 7234532;

	t53 = (x657<(x658<<(x659/x660)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x665 = UINT16_MAX;
	volatile uint16_t x666 = 19954U;
	int8_t x667 = INT8_MIN;
	uint64_t x668 = UINT64_MAX;
	static int32_t t54 = -24813950;

	t54 = (x665<(x666<<(x667/x668)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x677 = INT64_MIN;
	int8_t x678 = INT8_MAX;
	int32_t x679 = -1;
	static int32_t t55 = 941888;

	t55 = (x677<(x678<<(x679/x680)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x693 = 5159;
	uint32_t x694 = 380641023U;
	int16_t x695 = 739;
	static int64_t x696 = 1377LL;
	volatile int32_t t56 = -169204644;

	t56 = (x693<(x694<<(x695/x696)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x725 = 0;
	uint32_t x727 = 3226U;
	int64_t x728 = INT64_MIN;
	volatile int32_t t57 = 199;

	t57 = (x725<(x726<<(x727/x728)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x737 = UINT32_MAX;
	static int64_t x738 = INT64_MAX;
	int32_t x739 = INT32_MIN;
	uint32_t x740 = UINT32_MAX;

	t58 = (x737<(x738<<(x739/x740)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x742 = 7681U;
	int64_t x743 = -1LL;
	int64_t x744 = INT64_MAX;
	volatile int32_t t59 = 14;

	t59 = (x741<(x742<<(x743/x744)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x749 = INT64_MIN;
	static uint64_t x750 = 1LLU;
	int8_t x752 = INT8_MAX;
	int32_t t60 = -858;

	t60 = (x749<(x750<<(x751/x752)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x757 = INT16_MIN;
	int16_t x758 = INT16_MAX;
	static int8_t x759 = -1;
	static volatile int16_t x760 = INT16_MIN;
	static volatile int32_t t61 = 0;

	t61 = (x757<(x758<<(x759/x760)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x774 = UINT16_MAX;
	static uint8_t x775 = 124U;
	int8_t x776 = INT8_MIN;
	volatile int32_t t62 = 398;

	t62 = (x773<(x774<<(x775/x776)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x785 = INT16_MAX;
	static int32_t x786 = 11;
	int8_t x787 = INT8_MAX;
	uint32_t x788 = UINT32_MAX;
	int32_t t63 = 1237835;

	t63 = (x785<(x786<<(x787/x788)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x797 = INT32_MIN;
	int16_t x799 = -1;
	volatile int8_t x800 = INT8_MAX;
	volatile int32_t t64 = 14;

	t64 = (x797<(x798<<(x799/x800)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x817 = INT16_MIN;
	static uint64_t x818 = UINT64_MAX;
	uint64_t x819 = 20392LLU;

	t65 = (x817<(x818<<(x819/x820)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x826 = INT32_MAX;
	uint32_t x827 = 66U;
	volatile int32_t x828 = INT32_MIN;
	static int32_t t66 = 20750998;

	t66 = (x825<(x826<<(x827/x828)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x845 = -1;
	uint8_t x846 = 19U;
	static int8_t x847 = -5;
	volatile int8_t x848 = INT8_MAX;
	volatile int32_t t67 = -7;

	t67 = (x845<(x846<<(x847/x848)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x865 = INT8_MIN;
	int16_t x867 = -1;
	uint16_t x868 = UINT16_MAX;
	int32_t t68 = -1;

	t68 = (x865<(x866<<(x867/x868)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x882 = 6957941LL;
	volatile int8_t x883 = -1;
	volatile int32_t t69 = -101443123;

	t69 = (x881<(x882<<(x883/x884)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x905 = INT32_MAX;
	uint32_t x907 = 0U;
	static uint64_t x908 = UINT64_MAX;
	volatile int32_t t70 = 2;

	t70 = (x905<(x906<<(x907/x908)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x909 = UINT16_MAX;
	uint16_t x910 = 1679U;
	static uint16_t x911 = 1U;
	volatile uint32_t x912 = 687U;
	volatile int32_t t71 = 771710503;

	t71 = (x909<(x910<<(x911/x912)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x929 = -1217567;
	volatile uint64_t x931 = 7770218494458537460LLU;
	int64_t x932 = INT64_MIN;
	static int32_t t72 = 5;

	t72 = (x929<(x930<<(x931/x932)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x933 = 957197U;
	uint8_t x934 = UINT8_MAX;
	volatile uint16_t x935 = UINT16_MAX;
	int32_t t73 = 0;

	t73 = (x933<(x934<<(x935/x936)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x945 = UINT64_MAX;
	static volatile uint64_t x946 = UINT64_MAX;
	static int16_t x947 = 3;
	int16_t x948 = INT16_MIN;

	t74 = (x945<(x946<<(x947/x948)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x950 = 0;
	int64_t x952 = INT64_MIN;
	volatile int32_t t75 = 2897934;

	t75 = (x949<(x950<<(x951/x952)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x966 = 1383U;
	volatile uint64_t x968 = 3828938070LLU;
	volatile int32_t t76 = -23655;

	t76 = (x965<(x966<<(x967/x968)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x969 = UINT16_MAX;
	int8_t x971 = -1;

	t77 = (x969<(x970<<(x971/x972)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x985 = -1;
	uint64_t x986 = UINT64_MAX;
	static int8_t x987 = -1;
	uint8_t x988 = UINT8_MAX;

	t78 = (x985<(x986<<(x987/x988)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x994 = 2061;
	static volatile int8_t x995 = INT8_MAX;
	int64_t x996 = INT64_MAX;

	t79 = (x993<(x994<<(x995/x996)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x1001 = 613970942522LLU;
	uint32_t x1002 = 15U;
	static int8_t x1004 = -17;
	volatile int32_t t80 = 3701924;

	t80 = (x1001<(x1002<<(x1003/x1004)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1017 = 634256840U;
	uint16_t x1018 = UINT16_MAX;
	static int32_t x1019 = -1;
	int32_t t81 = -951826164;

	t81 = (x1017<(x1018<<(x1019/x1020)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1026 = 285LLU;
	uint64_t x1027 = UINT64_MAX;
	volatile int64_t x1028 = INT64_MAX;
	volatile int32_t t82 = -38683313;

	t82 = (x1025<(x1026<<(x1027/x1028)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x1061 = -158654;
	int16_t x1062 = INT16_MAX;
	int32_t x1063 = INT32_MAX;
	static uint32_t x1064 = UINT32_MAX;
	int32_t t83 = 420;

	t83 = (x1061<(x1062<<(x1063/x1064)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1069 = INT32_MAX;
	uint32_t x1070 = UINT32_MAX;
	uint8_t x1071 = 123U;
	int16_t x1072 = 4;
	static volatile int32_t t84 = 16183929;

	t84 = (x1069<(x1070<<(x1071/x1072)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x1077 = INT32_MIN;
	int16_t x1078 = INT16_MAX;
	volatile int32_t x1079 = -1;
	int32_t t85 = 218789910;

	t85 = (x1077<(x1078<<(x1079/x1080)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x1093 = INT16_MIN;
	int32_t x1094 = 11;
	int32_t x1096 = -1;
	int32_t t86 = 26003861;

	t86 = (x1093<(x1094<<(x1095/x1096)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x1101 = INT8_MAX;
	static uint32_t x1102 = UINT32_MAX;
	int16_t x1103 = -2;
	int32_t x1104 = INT32_MIN;

	t87 = (x1101<(x1102<<(x1103/x1104)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1105 = 1497360612876LLU;
	int8_t x1106 = INT8_MAX;
	int8_t x1107 = -11;
	static int16_t x1108 = -113;
	int32_t t88 = 836708161;

	t88 = (x1105<(x1106<<(x1107/x1108)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x1110 = INT32_MAX;
	volatile int64_t x1111 = -1LL;
	uint32_t x1112 = UINT32_MAX;

	t89 = (x1109<(x1110<<(x1111/x1112)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x1125 = -1LL;
	volatile int16_t x1128 = INT16_MAX;

	t90 = (x1125<(x1126<<(x1127/x1128)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x1149 = 159723U;
	static uint32_t x1150 = UINT32_MAX;
	uint8_t x1151 = 101U;
	volatile int32_t x1152 = INT32_MIN;
	volatile int32_t t91 = -3;

	t91 = (x1149<(x1150<<(x1151/x1152)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x1169 = UINT8_MAX;
	volatile int64_t x1171 = -1LL;
	static volatile int32_t t92 = -321396027;

	t92 = (x1169<(x1170<<(x1171/x1172)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1177 = -1;
	volatile uint8_t x1178 = 0U;
	uint16_t x1179 = 174U;
	static int32_t t93 = 1;

	t93 = (x1177<(x1178<<(x1179/x1180)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x1189 = INT64_MIN;
	uint16_t x1190 = 295U;
	uint32_t x1191 = 80313U;
	int8_t x1192 = INT8_MIN;

	t94 = (x1189<(x1190<<(x1191/x1192)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1194 = 27156782;
	volatile int8_t x1196 = INT8_MAX;
	int32_t t95 = 122;

	t95 = (x1193<(x1194<<(x1195/x1196)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x1221 = INT16_MIN;
	int16_t x1224 = 6703;
	volatile int32_t t96 = -1;

	t96 = (x1221<(x1222<<(x1223/x1224)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x1250 = INT32_MAX;
	uint8_t x1251 = UINT8_MAX;
	int16_t x1252 = INT16_MIN;
	volatile int32_t t97 = 578178500;

	t97 = (x1249<(x1250<<(x1251/x1252)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x1270 = 9U;
	int32_t x1271 = INT32_MAX;
	volatile uint64_t x1272 = 8786238715591998594LLU;
	static int32_t t98 = 48165;

	t98 = (x1269<(x1270<<(x1271/x1272)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1273 = INT16_MIN;
	static int64_t x1275 = -1LL;
	volatile int16_t x1276 = -1;
	static volatile int32_t t99 = 2043;

	t99 = (x1273<(x1274<<(x1275/x1276)));

	if (t99 != 1) { NG(); } else { ; }
	
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

