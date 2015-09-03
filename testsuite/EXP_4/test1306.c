#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x9 = 8166670431107LLU;
int16_t x10 = INT16_MIN;
static int16_t x12 = INT16_MAX;
int64_t x15 = -1LL;
int8_t x21 = 1;
static int32_t t3 = 72;
uint64_t x31 = 552LLU;
int32_t x44 = INT32_MIN;
uint8_t x48 = 97U;
static volatile int32_t t7 = 1;
int16_t x61 = INT16_MAX;
int64_t x79 = INT64_MAX;
volatile int8_t x89 = 1;
int32_t t14 = 226514637;
static int64_t x104 = INT64_MIN;
uint32_t t17 = UINT32_MAX;
int16_t x108 = -449;
int32_t x112 = -30961462;
static volatile int16_t x144 = 1493;
uint32_t x145 = UINT32_MAX;
int64_t x150 = 77166525987LL;
volatile int8_t x161 = 30;
uint16_t x163 = UINT16_MAX;
uint32_t x180 = 12914319U;
volatile uint64_t x197 = 3175089LLU;
int16_t x198 = 278;
int8_t x203 = INT8_MIN;
int32_t x216 = 2;
volatile int64_t x220 = -1LL;
int32_t x230 = INT32_MIN;
volatile int32_t x253 = INT32_MAX;
int8_t x290 = -3;
static volatile uint64_t t38 = 13712LLU;
static int64_t x302 = -2LL;
int32_t t39 = 108;
static uint64_t x308 = 2LLU;
int64_t t40 = 17760344LL;
uint16_t x346 = 3117U;
volatile uint16_t x348 = 22U;
int32_t t42 = -24010769;
static int64_t x397 = 18294208556110LL;
uint8_t x404 = 3U;
int8_t x408 = 54;
int16_t x431 = -1;
volatile uint64_t t52 = 16236306591LLU;
volatile int32_t t55 = 28682799;
static int8_t x470 = 19;
volatile uint32_t x489 = 385U;
uint32_t x497 = 223U;
static volatile uint32_t x501 = UINT32_MAX;
int64_t x510 = 58861707LL;
int8_t x511 = INT8_MIN;
static int8_t x516 = -7;
volatile int32_t t62 = -2;
static volatile int16_t x540 = -1;
volatile uint64_t x541 = UINT64_MAX;
volatile uint32_t x544 = 1674U;
static uint16_t x546 = 52U;
uint16_t x557 = 0U;
static int64_t x572 = INT64_MIN;
int32_t t69 = 69174;
static int16_t x583 = INT16_MIN;
static uint32_t x585 = 25840U;
int16_t x597 = INT16_MAX;
static int64_t x604 = -1LL;
int32_t x614 = INT32_MIN;
volatile uint32_t x616 = UINT32_MAX;
int32_t t76 = -215089002;
int8_t x623 = INT8_MIN;
int16_t x638 = INT16_MIN;
uint16_t x648 = UINT16_MAX;
int32_t x660 = 14;
static uint32_t x665 = 101930U;
uint32_t t83 = 7U;
int64_t x676 = -1LL;
volatile int8_t x679 = INT8_MIN;
uint32_t x692 = 94U;
volatile int64_t t87 = INT64_MAX;
int64_t x699 = INT64_MAX;
int8_t x705 = 6;
static volatile int8_t x724 = INT8_MIN;
int16_t x739 = -7505;
static uint8_t x753 = 113U;
static int32_t x755 = INT32_MIN;
static volatile uint32_t x756 = 1919491U;
uint8_t x772 = UINT8_MAX;
int8_t x785 = 0;
volatile int32_t t97 = -52417;
int64_t x797 = 380951733LL;
volatile int16_t x800 = INT16_MIN;
uint16_t x810 = 46U;
int32_t t99 = -1876;


void f0(void) {
	volatile uint32_t x5 = 888790790U;
	int16_t x6 = -1;
	static uint8_t x7 = 2U;
	volatile uint64_t x8 = UINT64_MAX;
	static volatile uint32_t t0 = 115U;

	t0 = (x5<<(x6<=(x7==x8)));

	if (t0 != 1777581580U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x11 = UINT8_MAX;
	static volatile uint64_t t1 = 1869121069LLU;

	t1 = (x9<<(x10<=(x11==x12)));

	if (t1 != 16333340862214LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MIN;
	static volatile int64_t x16 = -271387592687566LL;
	volatile uint32_t t2 = 1967U;

	t2 = (x13<<(x14<=(x15==x16)));

	if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x22 = 6;
	static volatile int32_t x23 = -236639534;
	uint16_t x24 = 12325U;

	t3 = (x21<<(x22<=(x23==x24)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x29 = 1357597789750471LLU;
	uint64_t x30 = 573988957084930LLU;
	int64_t x32 = -686317346130002LL;
	uint64_t t4 = 23LLU;

	t4 = (x29<<(x30<=(x31==x32)));

	if (t4 != 1357597789750471LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x41 = 179608338U;
	uint32_t x42 = 1U;
	static int16_t x43 = 0;
	uint32_t t5 = 1049U;

	t5 = (x41<<(x42<=(x43==x44)));

	if (t5 != 179608338U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = 4U;
	uint8_t x46 = 50U;
	volatile int32_t x47 = INT32_MIN;
	int32_t t6 = 1;

	t6 = (x45<<(x46<=(x47==x48)));

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x49 = 6U;
	int8_t x50 = INT8_MIN;
	int64_t x51 = -28930915424992LL;
	static int32_t x52 = INT32_MIN;

	t7 = (x49<<(x50<=(x51==x52)));

	if (t7 != 12) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x53 = 106U;
	uint16_t x54 = 14569U;
	volatile int16_t x55 = INT16_MAX;
	int32_t x56 = INT32_MIN;
	volatile int32_t t8 = 20033508;

	t8 = (x53<<(x54<=(x55==x56)));

	if (t8 != 106) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x62 = INT64_MAX;
	static uint8_t x63 = UINT8_MAX;
	uint64_t x64 = 609130854388LLU;
	int32_t t9 = 1005385;

	t9 = (x61<<(x62<=(x63==x64)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = 9;
	uint32_t x66 = 243U;
	static int32_t x67 = INT32_MIN;
	uint64_t x68 = 4103140670388LLU;
	volatile int32_t t10 = -950566;

	t10 = (x65<<(x66<=(x67==x68)));

	if (t10 != 9) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x77 = 0U;
	volatile int64_t x78 = -1LL;
	static int8_t x80 = INT8_MAX;
	volatile int32_t t11 = 1406740;

	t11 = (x77<<(x78<=(x79==x80)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x81 = 272129938009142LLU;
	volatile uint8_t x82 = 1U;
	static int8_t x83 = -1;
	uint64_t x84 = 78632818304375816LLU;
	static uint64_t t12 = 8771823398LLU;

	t12 = (x81<<(x82<=(x83==x84)));

	if (t12 != 272129938009142LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x85 = 985830388U;
	uint64_t x86 = 1LLU;
	uint8_t x87 = 12U;
	int64_t x88 = -1LL;
	volatile uint32_t t13 = 847179431U;

	t13 = (x85<<(x86<=(x87==x88)));

	if (t13 != 985830388U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x90 = -51365721LL;
	static int64_t x91 = 4423602514628LL;
	int16_t x92 = INT16_MIN;

	t14 = (x89<<(x90<=(x91==x92)));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x93 = 376596838LL;
	uint16_t x94 = 3U;
	volatile int32_t x95 = -1;
	int16_t x96 = 3;
	volatile int64_t t15 = -104247573648776620LL;

	t15 = (x93<<(x94<=(x95==x96)));

	if (t15 != 376596838LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x97 = UINT32_MAX;
	int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	int64_t x100 = -1LL;
	volatile uint32_t t16 = 106929458U;

	t16 = (x97<<(x98<=(x99==x100)));

	if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x101 = UINT32_MAX;
	int16_t x102 = 3269;
	uint32_t x103 = 1323U;

	t17 = (x101<<(x102<=(x103==x104)));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x105 = 27U;
	uint64_t x106 = 543965079712LLU;
	static uint64_t x107 = 2882907441512LLU;
	int32_t t18 = 12;

	t18 = (x105<<(x106<=(x107==x108)));

	if (t18 != 27) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x109 = 16191;
	int64_t x110 = -431108039189204443LL;
	static uint64_t x111 = 3330875341LLU;
	int32_t t19 = 30;

	t19 = (x109<<(x110<=(x111==x112)));

	if (t19 != 32382) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x141 = 16U;
	int16_t x142 = INT16_MIN;
	int16_t x143 = -1;
	static int32_t t20 = -4160;

	t20 = (x141<<(x142<=(x143==x144)));

	if (t20 != 32) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x146 = 7633968LL;
	uint8_t x147 = UINT8_MAX;
	static int32_t x148 = -37608;
	volatile uint32_t t21 = UINT32_MAX;

	t21 = (x145<<(x146<=(x147==x148)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x149 = 36;
	int32_t x151 = INT32_MIN;
	int32_t x152 = INT32_MAX;
	int32_t t22 = 30;

	t22 = (x149<<(x150<=(x151==x152)));

	if (t22 != 36) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x153 = UINT32_MAX;
	volatile uint8_t x154 = UINT8_MAX;
	uint64_t x155 = 1134437LLU;
	static uint32_t x156 = UINT32_MAX;
	volatile uint32_t t23 = UINT32_MAX;

	t23 = (x153<<(x154<=(x155==x156)));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x162 = INT32_MIN;
	static int16_t x164 = INT16_MIN;
	int32_t t24 = 72041697;

	t24 = (x161<<(x162<=(x163==x164)));

	if (t24 != 60) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int8_t x170 = INT8_MIN;
	volatile int64_t x171 = 699749833606LL;
	volatile int32_t x172 = INT32_MIN;
	volatile int32_t t25 = 0;

	t25 = (x169<<(x170<=(x171==x172)));

	if (t25 != 510) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x177 = 0;
	uint64_t x178 = 347568510LLU;
	static uint32_t x179 = 94466U;
	int32_t t26 = 28;

	t26 = (x177<<(x178<=(x179==x180)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x185 = 144U;
	int16_t x186 = 114;
	int32_t x187 = INT32_MIN;
	volatile int64_t x188 = 29580447637440636LL;
	static volatile uint32_t t27 = 58U;

	t27 = (x185<<(x186<=(x187==x188)));

	if (t27 != 144U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x199 = INT16_MAX;
	uint8_t x200 = 0U;
	volatile uint64_t t28 = 2294110751583965158LLU;

	t28 = (x197<<(x198<=(x199==x200)));

	if (t28 != 3175089LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x201 = UINT8_MAX;
	int16_t x202 = INT16_MIN;
	uint16_t x204 = UINT16_MAX;
	int32_t t29 = 73609083;

	t29 = (x201<<(x202<=(x203==x204)));

	if (t29 != 510) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x213 = 1U;
	static int64_t x214 = -1LL;
	uint8_t x215 = 24U;
	volatile int32_t t30 = 571765;

	t30 = (x213<<(x214<=(x215==x216)));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x217 = 399107;
	int32_t x218 = INT32_MAX;
	uint64_t x219 = 2LLU;
	volatile int32_t t31 = 398273;

	t31 = (x217<<(x218<=(x219==x220)));

	if (t31 != 399107) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x221 = 15U;
	uint64_t x222 = 156212423105627LLU;
	int16_t x223 = INT16_MIN;
	int8_t x224 = -14;
	static volatile int32_t t32 = 151;

	t32 = (x221<<(x222<=(x223==x224)));

	if (t32 != 15) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x225 = 1408117324859LLU;
	static uint64_t x226 = UINT64_MAX;
	uint8_t x227 = 109U;
	int64_t x228 = INT64_MIN;
	uint64_t t33 = 3048122224157LLU;

	t33 = (x225<<(x226<=(x227==x228)));

	if (t33 != 1408117324859LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x229 = 473LLU;
	int64_t x231 = -26370005814332LL;
	int64_t x232 = INT64_MIN;
	volatile uint64_t t34 = 144LLU;

	t34 = (x229<<(x230<=(x231==x232)));

	if (t34 != 946LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x249 = UINT32_MAX;
	int32_t x250 = -5861;
	uint64_t x251 = 4729953605026623LLU;
	uint8_t x252 = 35U;
	volatile uint32_t t35 = 23520437U;

	t35 = (x249<<(x250<=(x251==x252)));

	if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MIN;
	volatile int64_t x256 = 12685895LL;
	volatile int32_t t36 = INT32_MAX;

	t36 = (x253<<(x254<=(x255==x256)));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x289 = 1U;
	volatile int16_t x291 = 41;
	int32_t x292 = INT32_MIN;
	static int32_t t37 = -9578;

	t37 = (x289<<(x290<=(x291==x292)));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x297 = 16506497LLU;
	int32_t x298 = -41050008;
	int16_t x299 = INT16_MIN;
	int16_t x300 = -1;

	t38 = (x297<<(x298<=(x299==x300)));

	if (t38 != 33012994LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x301 = 5739U;
	volatile int8_t x303 = 0;
	uint32_t x304 = 42071U;

	t39 = (x301<<(x302<=(x303==x304)));

	if (t39 != 11478) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x305 = 8207499197LL;
	static int8_t x306 = INT8_MIN;
	uint8_t x307 = UINT8_MAX;

	t40 = (x305<<(x306<=(x307==x308)));

	if (t40 != 16414998394LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x313 = 11U;
	static volatile uint16_t x314 = 9986U;
	uint64_t x315 = 580339435LLU;
	static int32_t x316 = INT32_MIN;
	volatile int32_t t41 = 34351;

	t41 = (x313<<(x314<=(x315==x316)));

	if (t41 != 11) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x345 = 3U;
	volatile int64_t x347 = 103277857274LL;

	t42 = (x345<<(x346<=(x347==x348)));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x357 = INT8_MAX;
	int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MIN;
	int16_t x360 = -13;
	volatile int32_t t43 = 56992272;

	t43 = (x357<<(x358<=(x359==x360)));

	if (t43 != 254) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x361 = UINT16_MAX;
	int8_t x362 = INT8_MIN;
	static int8_t x363 = 2;
	int64_t x364 = INT64_MIN;
	volatile int32_t t44 = 419537322;

	t44 = (x361<<(x362<=(x363==x364)));

	if (t44 != 131070) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x365 = UINT32_MAX;
	static int16_t x366 = -91;
	static uint64_t x367 = 24676438674LLU;
	int64_t x368 = INT64_MIN;
	uint32_t t45 = 123008U;

	t45 = (x365<<(x366<=(x367==x368)));

	if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x369 = 121702166U;
	uint64_t x370 = 3574037133616LLU;
	static int32_t x371 = 51772193;
	volatile int16_t x372 = INT16_MAX;
	uint32_t t46 = 848U;

	t46 = (x369<<(x370<=(x371==x372)));

	if (t46 != 121702166U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x377 = 20;
	static volatile int64_t x378 = INT64_MIN;
	int64_t x379 = -7768LL;
	uint16_t x380 = 20656U;
	volatile int32_t t47 = -1503;

	t47 = (x377<<(x378<=(x379==x380)));

	if (t47 != 40) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x398 = 7000626;
	uint64_t x399 = 887019LLU;
	volatile int8_t x400 = INT8_MAX;
	volatile int64_t t48 = -3246340262574LL;

	t48 = (x397<<(x398<=(x399==x400)));

	if (t48 != 18294208556110LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x401 = 1;
	int64_t x402 = INT64_MAX;
	static uint32_t x403 = 3372U;
	volatile int32_t t49 = -3003463;

	t49 = (x401<<(x402<=(x403==x404)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x405 = 4U;
	int64_t x406 = INT64_MIN;
	int8_t x407 = INT8_MIN;
	int32_t t50 = 19748247;

	t50 = (x405<<(x406<=(x407==x408)));

	if (t50 != 8) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x429 = 2U;
	uint64_t x430 = UINT64_MAX;
	static int32_t x432 = -80776758;
	volatile int32_t t51 = 7;

	t51 = (x429<<(x430<=(x431==x432)));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x437 = 45LLU;
	uint32_t x438 = 22U;
	int64_t x439 = 7199949LL;
	int8_t x440 = -1;

	t52 = (x437<<(x438<=(x439==x440)));

	if (t52 != 45LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x445 = 9U;
	int32_t x446 = INT32_MIN;
	volatile uint16_t x447 = UINT16_MAX;
	volatile int64_t x448 = -1LL;
	volatile int32_t t53 = -10;

	t53 = (x445<<(x446<=(x447==x448)));

	if (t53 != 18) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x449 = 1031U;
	uint64_t x450 = 467308347LLU;
	int32_t x451 = -1;
	int64_t x452 = -1LL;
	volatile int32_t t54 = -1392666;

	t54 = (x449<<(x450<=(x451==x452)));

	if (t54 != 1031) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x461 = UINT8_MAX;
	static uint16_t x462 = UINT16_MAX;
	int32_t x463 = -1;
	static int32_t x464 = INT32_MIN;

	t55 = (x461<<(x462<=(x463==x464)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x469 = 10U;
	int16_t x471 = -416;
	int16_t x472 = INT16_MIN;
	volatile int32_t t56 = -692;

	t56 = (x469<<(x470<=(x471==x472)));

	if (t56 != 10) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x490 = INT64_MIN;
	static uint64_t x491 = UINT64_MAX;
	uint32_t x492 = 1761017U;
	volatile uint32_t t57 = 3089U;

	t57 = (x489<<(x490<=(x491==x492)));

	if (t57 != 770U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x498 = INT16_MAX;
	volatile int16_t x499 = 12;
	uint64_t x500 = 10483987104844LLU;
	uint32_t t58 = 5023U;

	t58 = (x497<<(x498<=(x499==x500)));

	if (t58 != 223U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x502 = INT32_MIN;
	static int64_t x503 = -75774191LL;
	uint16_t x504 = 12U;
	uint32_t t59 = 506313460U;

	t59 = (x501<<(x502<=(x503==x504)));

	if (t59 != 4294967294U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x505 = 3759922815LLU;
	int32_t x506 = -1;
	static uint16_t x507 = 744U;
	static volatile int8_t x508 = -53;
	volatile uint64_t t60 = 9120553LLU;

	t60 = (x505<<(x506<=(x507==x508)));

	if (t60 != 7519845630LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x509 = INT64_MAX;
	int16_t x512 = -1;
	volatile int64_t t61 = INT64_MAX;

	t61 = (x509<<(x510<=(x511==x512)));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x513 = 506U;
	uint32_t x514 = 87001U;
	int16_t x515 = INT16_MAX;

	t62 = (x513<<(x514<=(x515==x516)));

	if (t62 != 506) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x525 = INT32_MAX;
	volatile uint8_t x526 = 15U;
	static uint64_t x527 = 50LLU;
	static int16_t x528 = -1;
	volatile int32_t t63 = INT32_MAX;

	t63 = (x525<<(x526<=(x527==x528)));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x529 = 1860LLU;
	volatile uint8_t x530 = 5U;
	int64_t x531 = INT64_MAX;
	int64_t x532 = INT64_MIN;
	uint64_t t64 = 517677393LLU;

	t64 = (x529<<(x530<=(x531==x532)));

	if (t64 != 1860LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x537 = UINT8_MAX;
	static int16_t x538 = INT16_MAX;
	static int8_t x539 = INT8_MIN;
	int32_t t65 = -634;

	t65 = (x537<<(x538<=(x539==x540)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x542 = INT64_MAX;
	int8_t x543 = -1;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x541<<(x542<=(x543==x544)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x545 = 234886716053801994LLU;
	int16_t x547 = 30;
	int8_t x548 = INT8_MAX;
	volatile uint64_t t67 = 5LLU;

	t67 = (x545<<(x546<=(x547==x548)));

	if (t67 != 234886716053801994LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x558 = INT8_MIN;
	static uint64_t x559 = UINT64_MAX;
	int16_t x560 = INT16_MIN;
	int32_t t68 = 98;

	t68 = (x557<<(x558<=(x559==x560)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x569 = 1U;
	int64_t x570 = -31563LL;
	uint16_t x571 = 15U;

	t69 = (x569<<(x570<=(x571==x572)));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x573 = 0U;
	uint64_t x574 = 873147469269557LLU;
	int32_t x575 = 146;
	static int16_t x576 = -15201;
	uint32_t t70 = 2U;

	t70 = (x573<<(x574<=(x575==x576)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x581 = 15456529251322294LLU;
	int8_t x582 = 16;
	volatile uint32_t x584 = UINT32_MAX;
	volatile uint64_t t71 = 41115017852LLU;

	t71 = (x581<<(x582<=(x583==x584)));

	if (t71 != 15456529251322294LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x586 = INT64_MIN;
	static uint8_t x587 = UINT8_MAX;
	static int16_t x588 = -622;
	volatile uint32_t t72 = 6U;

	t72 = (x585<<(x586<=(x587==x588)));

	if (t72 != 51680U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x598 = INT16_MIN;
	int32_t x599 = -257334;
	static uint32_t x600 = 25991181U;
	volatile int32_t t73 = -2567;

	t73 = (x597<<(x598<=(x599==x600)));

	if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x601 = 7;
	int32_t x602 = INT32_MAX;
	int64_t x603 = INT64_MAX;
	static volatile int32_t t74 = -447171241;

	t74 = (x601<<(x602<=(x603==x604)));

	if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x609 = 1;
	volatile uint32_t x610 = UINT32_MAX;
	int64_t x611 = -1LL;
	volatile int16_t x612 = 506;
	volatile int32_t t75 = 0;

	t75 = (x609<<(x610<=(x611==x612)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x613 = 231U;
	static int8_t x615 = INT8_MIN;

	t76 = (x613<<(x614<=(x615==x616)));

	if (t76 != 462) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x621 = 2;
	int64_t x622 = 371LL;
	volatile uint64_t x624 = 755468LLU;
	int32_t t77 = -1471762;

	t77 = (x621<<(x622<=(x623==x624)));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x637 = 0;
	volatile uint16_t x639 = UINT16_MAX;
	int32_t x640 = INT32_MIN;
	int32_t t78 = 6254;

	t78 = (x637<<(x638<=(x639==x640)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x645 = 6U;
	int64_t x646 = -1LL;
	uint16_t x647 = 3807U;
	volatile int32_t t79 = 8964;

	t79 = (x645<<(x646<=(x647==x648)));

	if (t79 != 12) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x649 = 5471666717076153539LLU;
	uint16_t x650 = 248U;
	static uint64_t x651 = 54679605LLU;
	int32_t x652 = 88143;
	uint64_t t80 = 4909LLU;

	t80 = (x649<<(x650<=(x651==x652)));

	if (t80 != 5471666717076153539LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x653 = 164U;
	int64_t x654 = -1LL;
	uint8_t x655 = 13U;
	int16_t x656 = -1;
	static volatile int32_t t81 = -65452959;

	t81 = (x653<<(x654<=(x655==x656)));

	if (t81 != 328) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x657 = INT64_MAX;
	volatile uint32_t x658 = UINT32_MAX;
	uint8_t x659 = 0U;
	int64_t t82 = INT64_MAX;

	t82 = (x657<<(x658<=(x659==x660)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x666 = INT8_MIN;
	uint8_t x667 = 28U;
	static int32_t x668 = 53827473;

	t83 = (x665<<(x666<=(x667==x668)));

	if (t83 != 203860U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x673 = 3U;
	int64_t x674 = INT64_MIN;
	int64_t x675 = -1LL;
	int32_t t84 = 213607;

	t84 = (x673<<(x674<=(x675==x676)));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x677 = UINT16_MAX;
	static int16_t x678 = -260;
	static int32_t x680 = -1;
	volatile int32_t t85 = 49546168;

	t85 = (x677<<(x678<=(x679==x680)));

	if (t85 != 131070) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x685 = 1U;
	static volatile int8_t x686 = -44;
	volatile uint8_t x687 = 6U;
	static int32_t x688 = INT32_MIN;
	volatile int32_t t86 = -627037;

	t86 = (x685<<(x686<=(x687==x688)));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x689 = INT64_MAX;
	static volatile uint8_t x690 = UINT8_MAX;
	uint64_t x691 = 45778058LLU;

	t87 = (x689<<(x690<=(x691==x692)));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x693 = UINT64_MAX;
	int16_t x694 = INT16_MIN;
	int16_t x695 = 1622;
	int8_t x696 = 16;
	static volatile uint64_t t88 = 2745470763223LLU;

	t88 = (x693<<(x694<=(x695==x696)));

	if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x697 = 1679760625LLU;
	uint16_t x698 = UINT16_MAX;
	volatile int16_t x700 = INT16_MIN;
	static volatile uint64_t t89 = 878405594160150590LLU;

	t89 = (x697<<(x698<=(x699==x700)));

	if (t89 != 1679760625LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x706 = -1;
	volatile int8_t x707 = INT8_MIN;
	int8_t x708 = INT8_MIN;
	int32_t t90 = -4850;

	t90 = (x705<<(x706<=(x707==x708)));

	if (t90 != 12) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x721 = 5236;
	uint64_t x722 = 4473877213221954LLU;
	volatile uint16_t x723 = 1U;
	volatile int32_t t91 = 474;

	t91 = (x721<<(x722<=(x723==x724)));

	if (t91 != 5236) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x733 = INT8_MAX;
	uint16_t x734 = 11837U;
	uint32_t x735 = 262528604U;
	int16_t x736 = -1;
	int32_t t92 = -3;

	t92 = (x733<<(x734<=(x735==x736)));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x737 = 44U;
	int16_t x738 = 167;
	volatile int16_t x740 = INT16_MIN;
	volatile uint32_t t93 = 1281296043U;

	t93 = (x737<<(x738<=(x739==x740)));

	if (t93 != 44U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x754 = 285263LL;
	volatile int32_t t94 = -5620577;

	t94 = (x753<<(x754<=(x755==x756)));

	if (t94 != 113) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x769 = 20330078U;
	int32_t x770 = INT32_MAX;
	int8_t x771 = -17;
	volatile uint32_t t95 = 31008138U;

	t95 = (x769<<(x770<=(x771==x772)));

	if (t95 != 20330078U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x773 = 15254832449709LL;
	uint64_t x774 = 15281063031669858LLU;
	static volatile uint8_t x775 = 4U;
	static volatile int64_t x776 = INT64_MIN;
	int64_t t96 = 8346313LL;

	t96 = (x773<<(x774<=(x775==x776)));

	if (t96 != 15254832449709LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x786 = INT32_MIN;
	int16_t x787 = -1;
	uint8_t x788 = 34U;

	t97 = (x785<<(x786<=(x787==x788)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x798 = -1;
	uint32_t x799 = 24U;
	int64_t t98 = 13727034340209LL;

	t98 = (x797<<(x798<=(x799==x800)));

	if (t98 != 761903466LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x809 = 0;
	int64_t x811 = INT64_MIN;
	volatile uint32_t x812 = UINT32_MAX;

	t99 = (x809<<(x810<=(x811==x812)));

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

