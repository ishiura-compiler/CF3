#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 4942U;
volatile int32_t t0 = 1690;
volatile int16_t x6 = -1;
volatile uint64_t x9 = UINT64_MAX;
static int8_t x13 = 0;
static volatile int16_t x15 = INT16_MIN;
int16_t x19 = -1;
uint16_t x22 = 63U;
int32_t x34 = -313711;
volatile uint64_t t7 = 6259861191081417LLU;
static int8_t x48 = INT8_MIN;
uint32_t t9 = 834294U;
uint8_t x55 = UINT8_MAX;
int8_t x60 = 1;
int32_t x69 = 94623;
int32_t x72 = INT32_MIN;
uint16_t x78 = UINT16_MAX;
static int64_t t16 = -1690516551LL;
uint8_t x101 = UINT8_MAX;
static uint16_t x106 = 23U;
uint16_t x107 = 1U;
int32_t x108 = 12;
uint16_t x114 = 955U;
uint64_t t20 = 161LLU;
int16_t x123 = -48;
uint16_t x125 = 0U;
static volatile int8_t x129 = -3;
uint16_t x136 = 16U;
uint8_t x144 = 58U;
uint16_t x146 = UINT16_MAX;
volatile uint64_t x156 = 19LLU;
uint64_t t28 = 6487LLU;
static uint32_t x158 = 218607U;
uint8_t x162 = 2U;
int64_t x164 = INT64_MAX;
uint8_t x169 = 5U;
static uint16_t x170 = 4651U;
static int8_t x171 = INT8_MIN;
static int32_t t31 = 539267;
static volatile uint64_t x184 = 15555599734LLU;
volatile uint8_t x189 = 6U;
static volatile int64_t x190 = -1LL;
int32_t x197 = 794386076;
volatile int64_t t38 = -143332353LL;
uint64_t x221 = 114LLU;
int8_t x224 = -1;
uint64_t t40 = 8594928LLU;
volatile int64_t x228 = 15621827LL;
uint64_t x236 = UINT64_MAX;
int16_t x241 = -1;
static volatile uint32_t x244 = UINT32_MAX;
static int32_t x248 = 123895;
volatile int64_t x251 = -3LL;
int8_t x268 = INT8_MIN;
static volatile uint32_t x273 = UINT32_MAX;
int32_t x276 = -194;
int16_t x288 = -1;
int32_t x292 = -1;
uint64_t t51 = 1097499589427LLU;
volatile uint8_t x294 = 60U;
volatile uint64_t t52 = 1056923063172LLU;
static volatile uint32_t x299 = UINT32_MAX;
static volatile uint32_t t53 = 1885U;
int32_t x304 = INT32_MIN;
int64_t t54 = 333622LL;
int64_t x307 = INT64_MIN;
volatile int64_t x308 = INT64_MIN;
uint16_t x313 = 6283U;
static uint32_t t56 = 693133380U;
int64_t x320 = -1LL;
volatile int64_t t57 = -34160311570832697LL;
volatile uint32_t t58 = 30540U;
int16_t x331 = -3;
uint32_t t60 = 146029U;
int64_t x333 = 4502187058389339LL;
volatile int64_t t61 = -840834LL;
int64_t x346 = INT64_MIN;
uint64_t x347 = UINT64_MAX;
uint64_t t64 = 17583347513LLU;
int16_t x357 = 148;
static int16_t x358 = INT16_MAX;
int32_t x361 = INT32_MAX;
volatile uint64_t t69 = 213790200714482LLU;
int16_t x377 = -10;
static int8_t x386 = INT8_MIN;
int16_t x399 = INT16_MAX;
int64_t x403 = INT64_MIN;
uint16_t x409 = 999U;
uint64_t x410 = 35015443LLU;
int64_t x413 = -1LL;
int64_t t77 = -163638907833177488LL;
volatile uint8_t x420 = 126U;
int32_t x429 = -1;
static int64_t x430 = INT64_MIN;
uint64_t t82 = 3409LLU;
int32_t x464 = -1;
int32_t x473 = -1;
volatile int64_t x484 = -1LL;
int64_t x496 = 321033LL;
uint64_t x507 = UINT64_MAX;
uint64_t t95 = 16757315771LLU;
int16_t x510 = -3;
int32_t x524 = -217068532;
volatile uint16_t x527 = 6264U;
int16_t x529 = INT16_MIN;
int16_t x530 = -1;
int64_t x531 = -1LL;
int8_t x532 = INT8_MIN;


void f0(void) {
	int16_t x2 = -8;
	static uint16_t x3 = UINT16_MAX;
	int8_t x4 = INT8_MAX;

	t0 = (x1*(x2&(x3-x4)));

	if (t0 != 323246336) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 40651LL;
	int32_t x7 = -1;
	uint16_t x8 = 1U;
	static volatile int64_t t1 = -945LL;

	t1 = (x5*(x6&(x7-x8)));

	if (t1 != -81302LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 0;
	int8_t x11 = -1;
	static uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 8567153934576LLU;

	t2 = (x9*(x10&(x11-x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -118003282;
	int64_t x16 = -14022226LL;
	static int64_t t3 = -4028612228863LL;

	t3 = (x13*(x14&(x15-x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 21;
	int8_t x18 = -1;
	volatile int16_t x20 = INT16_MIN;
	int32_t t4 = 1;

	t4 = (x17*(x18&(x19-x20)));

	if (t4 != 688107) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -1;
	static volatile int8_t x23 = -1;
	int32_t x24 = 1;
	static int32_t t5 = -674893510;

	t5 = (x21*(x22&(x23-x24)));

	if (t5 != -62) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = UINT64_MAX;
	static int32_t x30 = -1;
	uint64_t x31 = 24189391691LLU;
	static int64_t x32 = -1LL;
	uint64_t t6 = 227022LLU;

	t6 = (x29*(x30&(x31-x32)));

	if (t6 != 18446744049520159924LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 2LLU;
	int8_t x35 = -1;
	static uint8_t x36 = 35U;

	t7 = (x33*(x34&(x35-x36)));

	if (t7 != 18446744073708924192LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 2U;
	uint8_t x42 = UINT8_MAX;
	int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MIN;
	int64_t t8 = -35624871371157LL;

	t8 = (x41*(x42&(x43-x44)));

	if (t8 != 256LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x45 = 987U;
	int32_t x46 = INT32_MAX;
	static uint8_t x47 = UINT8_MAX;

	t9 = (x45*(x46&(x47-x48)));

	if (t9 != 378021U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 6878U;
	volatile int32_t x50 = -1;
	uint32_t x51 = UINT32_MAX;
	static uint8_t x52 = 1U;
	volatile uint32_t t10 = 193U;

	t10 = (x49*(x50&(x51-x52)));

	if (t10 != 4294953540U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = 506533795;
	static int16_t x54 = INT16_MIN;
	volatile uint64_t x56 = UINT64_MAX;
	volatile uint64_t t11 = 709049170080329201LLU;

	t11 = (x53*(x54&(x55-x56)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x57 = UINT16_MAX;
	int8_t x58 = INT8_MIN;
	volatile int8_t x59 = -56;
	static int32_t t12 = 10586;

	t12 = (x57*(x58&(x59-x60)));

	if (t12 != -8388480) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -4;
	volatile uint64_t x62 = UINT64_MAX;
	int16_t x63 = INT16_MAX;
	static volatile int64_t x64 = INT64_MAX;
	volatile uint64_t t13 = 3426099278109754153LLU;

	t13 = (x61*(x62&(x63-x64)));

	if (t13 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x70 = UINT64_MAX;
	int16_t x71 = -497;
	uint64_t t14 = 3190942LLU;

	t14 = (x69*(x70&(x71-x72)));

	if (t14 != 203201298197073LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1LL;
	uint8_t x74 = 2U;
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = -1;
	int64_t t15 = -270849217411LL;

	t15 = (x73*(x74&(x75-x76)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -398381949LL;
	int64_t x79 = -1LL;
	int32_t x80 = INT32_MAX;

	t16 = (x77*(x78&(x79-x80)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = -9323;
	volatile uint16_t x98 = 2U;
	int8_t x99 = 0;
	static int8_t x100 = -1;
	volatile int32_t t17 = -123962761;

	t17 = (x97*(x98&(x99-x100)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x102 = UINT64_MAX;
	volatile int32_t x103 = -1;
	volatile int32_t x104 = 3830;
	uint64_t t18 = 500LLU;

	t18 = (x101*(x102&(x103-x104)));

	if (t18 != 18446744073708574711LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = 8;
	int32_t t19 = 75600;

	t19 = (x105*(x106&(x107-x108)));

	if (t19 != 168) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x113 = UINT64_MAX;
	volatile int16_t x115 = INT16_MAX;
	int16_t x116 = INT16_MIN;

	t20 = (x113*(x114&(x115-x116)));

	if (t20 != 18446744073709550661LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x117 = -497275160534LL;
	uint32_t x118 = 28543U;
	int64_t x119 = 1292LL;
	int64_t x120 = -1LL;
	int64_t t21 = 64982734LL;

	t21 = (x117*(x118&(x119-x120)));

	if (t21 != -642976782570462LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x121 = 1061U;
	int32_t x122 = INT32_MIN;
	volatile uint64_t x124 = UINT64_MAX;
	uint64_t t22 = 56557855232LLU;

	t22 = (x121*(x122&(x123-x124)));

	if (t22 != 18446741795229401088LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x126 = UINT16_MAX;
	volatile int32_t x127 = INT32_MIN;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t23 = 9712LLU;

	t23 = (x125*(x126&(x127-x128)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x130 = UINT16_MAX;
	volatile int64_t x131 = -1514229836554LL;
	int16_t x132 = -1;
	volatile int64_t t24 = 1280LL;

	t24 = (x129*(x130&(x131-x132)));

	if (t24 != -65253LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = 243103301912602LLU;
	uint16_t x134 = 1206U;
	volatile uint64_t x135 = UINT64_MAX;
	uint64_t t25 = 541256350397LLU;

	t25 = (x133*(x134&(x135-x136)));

	if (t25 != 289292929275996380LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x141 = -117924;
	int16_t x142 = INT16_MAX;
	uint64_t x143 = UINT64_MAX;
	uint64_t t26 = 105LLU;

	t26 = (x141*(x142&(x143-x144)));

	if (t26 != 18446744069852375500LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = INT8_MAX;
	volatile int8_t x147 = -1;
	static int64_t x148 = INT64_MIN;
	int64_t t27 = -1072315573119888LL;

	t27 = (x145*(x146&(x147-x148)));

	if (t27 != 8322945LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = -1;
	uint16_t x154 = 122U;
	int8_t x155 = INT8_MIN;

	t28 = (x153*(x154&(x155-x156)));

	if (t28 != 18446744073709551512LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x157 = INT8_MAX;
	volatile int64_t x159 = INT64_MIN;
	int32_t x160 = INT32_MIN;
	int64_t t29 = -8802LL;

	t29 = (x157*(x158&(x159-x160)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x161 = -42;
	static uint64_t x163 = 3877777851937874954LLU;
	static uint64_t t30 = 135441LLU;

	t30 = (x161*(x162&(x163-x164)));

	if (t30 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x172 = 1U;

	t31 = (x169*(x170&(x171-x172)));

	if (t31 != 23255) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x173 = -12;
	static int8_t x174 = -1;
	static int64_t x175 = -234012LL;
	int8_t x176 = INT8_MIN;
	volatile int64_t t32 = 87517527287689114LL;

	t32 = (x173*(x174&(x175-x176)));

	if (t32 != 2806608LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x177 = -2;
	int32_t x178 = INT32_MAX;
	volatile int32_t x179 = -1;
	int16_t x180 = -16319;
	volatile int32_t t33 = 50489927;

	t33 = (x177*(x178&(x179-x180)));

	if (t33 != -32636) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x181 = -199181781;
	static uint64_t x182 = 2168464912820LLU;
	uint64_t x183 = 1006LLU;
	uint64_t t34 = 14980LLU;

	t34 = (x181*(x182&(x183-x184)));

	if (t34 != 11237637080963631120LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x185 = INT32_MAX;
	volatile uint32_t x186 = 2132383U;
	uint64_t x187 = 139144244974LLU;
	uint32_t x188 = 119434774U;
	uint64_t t35 = 32945614289343449LLU;

	t35 = (x185*(x186&(x187-x188)));

	if (t35 != 326417514344LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x191 = -1035;
	static uint8_t x192 = 53U;
	volatile int64_t t36 = 0LL;

	t36 = (x189*(x190&(x191-x192)));

	if (t36 != -6528LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x198 = INT8_MIN;
	static uint64_t x199 = 18438981282LLU;
	int64_t x200 = -1LL;
	static uint64_t t37 = 74015106LLU;

	t37 = (x197*(x198&(x199-x200)));

	if (t37 != 14647669959036302848LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x205 = -39;
	volatile int16_t x206 = 14;
	int64_t x207 = -135469858562853393LL;
	volatile uint32_t x208 = 128494560U;

	t38 = (x205*(x206&(x207-x208)));

	if (t38 != -546LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x209 = INT16_MIN;
	uint32_t x210 = 6799U;
	int32_t x211 = INT32_MIN;
	int8_t x212 = -28;
	uint32_t t39 = 6102U;

	t39 = (x209*(x210&(x211-x212)));

	if (t39 != 4294574080U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x222 = -39456912LL;
	static int8_t x223 = -1;

	t40 = (x221*(x222&(x223-x224)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = -1;
	int32_t x227 = INT32_MIN;
	static volatile int64_t t41 = -1LL;

	t41 = (x225*(x226&(x227-x228)));

	if (t41 != 276877500800LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x233 = INT64_MAX;
	uint8_t x234 = 1U;
	uint64_t x235 = 301902975519026LLU;
	static uint64_t t42 = 48LLU;

	t42 = (x233*(x234&(x235-x236)));

	if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x237 = UINT64_MAX;
	static int32_t x238 = -1016847370;
	uint32_t x239 = 56U;
	static int64_t x240 = INT64_MAX;
	uint64_t t43 = 34750557512851097LLU;

	t43 = (x237*(x238&(x239-x240)));

	if (t43 != 9223372036854775760LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x242 = UINT64_MAX;
	int64_t x243 = -1LL;
	volatile uint64_t t44 = 876362883280619LLU;

	t44 = (x241*(x242&(x243-x244)));

	if (t44 != 4294967296LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x245 = -1;
	uint16_t x246 = 32039U;
	static int8_t x247 = INT8_MAX;
	volatile int32_t t45 = -3452;

	t45 = (x245*(x246&(x247-x248)));

	if (t45 != -7168) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x249 = 186525036U;
	int8_t x250 = -1;
	static int32_t x252 = INT32_MAX;
	static int64_t t46 = 27LL;

	t46 = (x249*(x250&(x251-x252)));

	if (t46 != -400559465125661400LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x253 = UINT32_MAX;
	int16_t x254 = INT16_MIN;
	uint32_t x255 = 92349978U;
	static int8_t x256 = -13;
	static uint32_t t47 = 111187917U;

	t47 = (x253*(x254&(x255-x256)));

	if (t47 != 4202627072U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x265 = 5612699486631466LL;
	static int8_t x266 = INT8_MIN;
	int32_t x267 = -255;
	int64_t t48 = 447109LL;

	t48 = (x265*(x266&(x267-x268)));

	if (t48 != -718425534288827648LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x274 = INT64_MIN;
	uint32_t x275 = UINT32_MAX;
	static int64_t t49 = 251943568623560306LL;

	t49 = (x273*(x274&(x275-x276)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x285 = 7883085409453284LLU;
	int64_t x286 = -1LL;
	int8_t x287 = -1;
	volatile uint64_t t50 = 23173948875595LLU;

	t50 = (x285*(x286&(x287-x288)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x289 = 0;
	uint64_t x290 = UINT64_MAX;
	int8_t x291 = INT8_MIN;

	t51 = (x289*(x290&(x291-x292)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x293 = INT32_MIN;
	uint64_t x295 = 5991167LLU;
	int16_t x296 = 131;

	t52 = (x293*(x294&(x295-x296)));

	if (t52 != 18446743944860532736LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x297 = UINT32_MAX;
	int32_t x298 = -1;
	int16_t x300 = -1;

	t53 = (x297*(x298&(x299-x300)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x301 = 1118297LL;
	int32_t x302 = 4211170;
	static int32_t x303 = INT32_MIN;

	t54 = (x301*(x302&(x303-x304)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x305 = UINT16_MAX;
	uint8_t x306 = UINT8_MAX;
	static volatile int64_t t55 = 321LL;

	t55 = (x305*(x306&(x307-x308)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x314 = 1;
	static int8_t x315 = INT8_MIN;
	uint32_t x316 = 11130U;

	t56 = (x313*(x314&(x315-x316)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x317 = -187;
	uint8_t x318 = 108U;
	int64_t x319 = -1LL;

	t57 = (x317*(x318&(x319-x320)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x321 = INT16_MIN;
	volatile int32_t x322 = 151;
	uint32_t x323 = 0U;
	static volatile uint8_t x324 = 7U;

	t58 = (x321*(x322&(x323-x324)));

	if (t58 != 4290215936U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x325 = -44;
	static int16_t x326 = 5713;
	int64_t x327 = INT64_MIN;
	uint64_t x328 = 0LLU;
	volatile uint64_t t59 = 1541271LLU;

	t59 = (x325*(x326&(x327-x328)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x329 = INT8_MIN;
	uint32_t x330 = 30U;
	int16_t x332 = -1;

	t60 = (x329*(x330&(x331-x332)));

	if (t60 != 4294963456U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x334 = 4U;
	volatile int16_t x335 = 373;
	static int32_t x336 = INT32_MAX;

	t61 = (x333*(x334&(x335-x336)));

	if (t61 != 18008748233557356LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x337 = 24771543LL;
	int8_t x338 = -1;
	uint32_t x339 = UINT32_MAX;
	int32_t x340 = INT32_MAX;
	volatile int64_t t62 = -23246029LL;

	t62 = (x337*(x338&(x339-x340)));

	if (t62 != 53196483528228864LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x341 = INT32_MIN;
	volatile uint16_t x342 = 468U;
	uint16_t x343 = 6970U;
	int64_t x344 = 2201726567760390LL;
	int64_t t63 = -890166LL;

	t63 = (x341*(x342&(x343-x344)));

	if (t63 != -592705486848LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x345 = UINT8_MAX;
	static uint16_t x348 = 1U;

	t64 = (x345*(x346&(x347-x348)));

	if (t64 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x349 = 1;
	int32_t x350 = -30741;
	int32_t x351 = -39;
	uint8_t x352 = 127U;
	volatile int32_t t65 = -20;

	t65 = (x349*(x350&(x351-x352)));

	if (t65 != -30902) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x359 = -1;
	int16_t x360 = 7;
	int32_t t66 = 228;

	t66 = (x357*(x358&(x359-x360)));

	if (t66 != 4848480) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x362 = 1835647170383377LLU;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MAX;
	volatile uint64_t t67 = 29532999692860044LLU;

	t67 = (x361*(x362&(x363-x364)));

	if (t67 != 8411740580416713215LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x365 = INT16_MIN;
	volatile int32_t x366 = INT32_MIN;
	volatile uint16_t x367 = 92U;
	volatile int8_t x368 = INT8_MIN;
	int32_t t68 = 0;

	t68 = (x365*(x366&(x367-x368)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x373 = -166560;
	uint64_t x374 = UINT64_MAX;
	int16_t x375 = 58;
	int16_t x376 = INT16_MAX;

	t69 = (x373*(x374&(x375-x376)));

	if (t69 != 5448011040LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x378 = 118201024790465LL;
	int8_t x379 = INT8_MAX;
	uint16_t x380 = 129U;
	static volatile int64_t t70 = 28511LL;

	t70 = (x377*(x378&(x379-x380)));

	if (t70 != -1182010247904640LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x381 = 484708353960LLU;
	int8_t x382 = INT8_MIN;
	uint8_t x383 = UINT8_MAX;
	static uint8_t x384 = UINT8_MAX;
	volatile uint64_t t71 = 20413181LLU;

	t71 = (x381*(x382&(x383-x384)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x385 = INT16_MIN;
	uint32_t x387 = UINT32_MAX;
	int16_t x388 = INT16_MAX;
	static volatile uint32_t t72 = 1287U;

	t72 = (x385*(x386&(x387-x388)));

	if (t72 != 1073741824U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x389 = 468U;
	int16_t x390 = -1;
	int8_t x391 = INT8_MIN;
	int32_t x392 = -1;
	volatile int32_t t73 = 120972;

	t73 = (x389*(x390&(x391-x392)));

	if (t73 != -59436) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x397 = 0U;
	int64_t x398 = -1LL;
	int32_t x400 = -10;
	int64_t t74 = 565619728527LL;

	t74 = (x397*(x398&(x399-x400)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x401 = INT32_MAX;
	int64_t x402 = INT64_MAX;
	volatile int8_t x404 = INT8_MIN;
	int64_t t75 = 3480899843336LL;

	t75 = (x401*(x402&(x403-x404)));

	if (t75 != 274877906816LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x411 = 0;
	int32_t x412 = 438221;
	uint64_t t76 = 1859084013610468LLU;

	t76 = (x409*(x410&(x411-x412)));

	if (t76 != 34584791589LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x414 = UINT16_MAX;
	int32_t x415 = INT32_MAX;
	static int64_t x416 = 45956792016661819LL;

	t77 = (x413*(x414&(x415-x416)));

	if (t77 != -37572LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x417 = INT32_MIN;
	volatile int32_t x418 = -22489;
	uint32_t x419 = UINT32_MAX;
	uint32_t t78 = 0U;

	t78 = (x417*(x418&(x419-x420)));

	if (t78 != 2147483648U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x421 = -1;
	static int64_t x422 = 2825316760402542361LL;
	uint64_t x423 = 53520091797280LLU;
	uint32_t x424 = 729758821U;
	static volatile uint64_t t79 = 6938581LLU;

	t79 = (x421*(x422&(x423-x424)));

	if (t79 != 18446743468916073959LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x431 = 5926394U;
	static uint16_t x432 = 6171U;
	volatile int64_t t80 = -389202119LL;

	t80 = (x429*(x430&(x431-x432)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x433 = INT16_MIN;
	volatile uint64_t x434 = UINT64_MAX;
	static int8_t x435 = INT8_MIN;
	static int16_t x436 = INT16_MIN;
	uint64_t t81 = 84995LLU;

	t81 = (x433*(x434&(x435-x436)));

	if (t81 != 18446744072640004096LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x437 = -14;
	volatile uint64_t x438 = 12555LLU;
	int64_t x439 = -1214980894427LL;
	int32_t x440 = 2;

	t82 = (x437*(x438&(x439-x440)));

	if (t82 != 18446744073709490646LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x441 = -6;
	volatile uint16_t x442 = 41U;
	static int64_t x443 = -34905990898028160LL;
	uint8_t x444 = 42U;
	int64_t t83 = -11178LL;

	t83 = (x441*(x442&(x443-x444)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x445 = -1LL;
	volatile uint32_t x446 = UINT32_MAX;
	int32_t x447 = INT32_MAX;
	static int64_t x448 = -1LL;
	volatile int64_t t84 = 3343775653746LL;

	t84 = (x445*(x446&(x447-x448)));

	if (t84 != -2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x453 = 57U;
	static int32_t x454 = INT32_MAX;
	int16_t x455 = INT16_MAX;
	int32_t x456 = -1;
	volatile int32_t t85 = 465715;

	t85 = (x453*(x454&(x455-x456)));

	if (t85 != 1867776) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x457 = 1480LL;
	static int64_t x458 = -3740LL;
	int16_t x459 = 711;
	int32_t x460 = 28538452;
	int64_t t86 = 749361259143LL;

	t86 = (x457*(x458&(x459-x460)));

	if (t86 != -42240431360LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x461 = 16130;
	static volatile int8_t x462 = -1;
	static int16_t x463 = 116;
	volatile int32_t t87 = 129486385;

	t87 = (x461*(x462&(x463-x464)));

	if (t87 != 1887210) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x465 = -328882;
	volatile uint16_t x466 = 788U;
	uint32_t x467 = UINT32_MAX;
	uint32_t x468 = 171313404U;
	volatile uint32_t t88 = 2015358U;

	t88 = (x465*(x466&(x467-x468)));

	if (t88 != 4042385920U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x474 = UINT16_MAX;
	int16_t x475 = INT16_MIN;
	static uint16_t x476 = 0U;
	volatile int32_t t89 = 953679;

	t89 = (x473*(x474&(x475-x476)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x477 = 1;
	static int32_t x478 = -103;
	int32_t x479 = INT32_MIN;
	int64_t x480 = -219LL;
	volatile int64_t t90 = 391LL;

	t90 = (x477*(x478&(x479-x480)));

	if (t90 != -2147483495LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x481 = INT8_MIN;
	volatile uint64_t x482 = 6732547263877965604LLU;
	static int16_t x483 = INT16_MIN;
	volatile uint64_t t91 = 100714038480LLU;

	t91 = (x481*(x482&(x483-x484)));

	if (t91 != 5230921687972708352LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x489 = INT8_MIN;
	uint32_t x490 = UINT32_MAX;
	volatile uint32_t x491 = 291580U;
	volatile int64_t x492 = -1LL;
	static volatile int64_t t92 = 69553412192LL;

	t92 = (x489*(x490&(x491-x492)));

	if (t92 != -37322368LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x493 = 23U;
	uint32_t x494 = UINT32_MAX;
	static int64_t x495 = 8674432LL;
	int64_t t93 = 73970153LL;

	t93 = (x493*(x494&(x495-x496)));

	if (t93 != 192128177LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x501 = INT8_MIN;
	int16_t x502 = INT16_MIN;
	int8_t x503 = 0;
	int32_t x504 = 419325;
	int32_t t94 = -1934280;

	t94 = (x501*(x502&(x503-x504)));

	if (t94 != 54525952) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x505 = INT32_MIN;
	static int8_t x506 = INT8_MIN;
	volatile uint16_t x508 = 45U;

	t95 = (x505*(x506&(x507-x508)));

	if (t95 != 274877906944LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x509 = 160711LLU;
	uint32_t x511 = 7555U;
	uint16_t x512 = 0U;
	uint64_t t96 = 15525770255345885LLU;

	t96 = (x509*(x510&(x511-x512)));

	if (t96 != 1213850183LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x521 = 42219686274LL;
	int8_t x522 = INT8_MIN;
	int64_t x523 = -1LL;
	volatile int64_t t97 = -6440203573065119LL;

	t97 = (x521*(x522&(x523-x524)));

	if (t97 != 9164560423514121984LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x525 = INT8_MIN;
	static int64_t x526 = -1LL;
	static int8_t x528 = 58;
	int64_t t98 = 5445201429LL;

	t98 = (x525*(x526&(x527-x528)));

	if (t98 != -794368LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t t99 = -2226LL;

	t99 = (x529*(x530&(x531-x532)));

	if (t99 != -4161536LL) { NG(); } else { ; }
	
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

