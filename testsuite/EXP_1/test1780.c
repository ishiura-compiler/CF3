
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
volatile int16_t x8 = INT16_MIN;
static volatile int32_t x24 = INT32_MAX;
int32_t t3 = 11;
volatile int32_t t7 = -5422;
int32_t x48 = INT32_MIN;
volatile int32_t x54 = 78304240;
int32_t x63 = -1;
uint32_t x65 = 1U;
int32_t t15 = 0;
uint32_t x93 = 45057U;
volatile uint32_t t16 = 2U;
volatile int8_t x102 = INT8_MAX;
uint16_t x103 = 586U;
volatile int8_t x107 = INT8_MIN;
volatile int64_t x115 = 153861204156LL;
int16_t x116 = INT16_MIN;
static volatile uint64_t x117 = UINT64_MAX;
static int64_t x120 = INT64_MIN;
static int32_t x123 = 9554;
volatile int32_t t23 = 584121639;
int64_t t24 = 2456346628165LL;
uint32_t x160 = UINT32_MAX;
int8_t x161 = 39;
int64_t x164 = INT64_MAX;
static volatile uint32_t t31 = 42362U;
int32_t x182 = -351;
uint16_t x185 = 1U;
int32_t x188 = -1;
int16_t x192 = -4;
uint8_t x193 = 116U;
volatile uint32_t t35 = 2U;
int16_t x231 = INT16_MIN;
int16_t x232 = -1;
int8_t x252 = -1;
int32_t t47 = -969417898;
static uint32_t x258 = UINT32_MAX;
uint16_t x259 = 2U;
static int64_t x260 = -1LL;
int32_t x265 = INT32_MIN;
uint16_t x275 = UINT16_MAX;
uint8_t x278 = 10U;
uint16_t x288 = UINT16_MAX;
int64_t x290 = INT64_MIN;
int8_t x292 = -2;
static int8_t x295 = INT8_MIN;
int8_t x302 = -1;
static volatile int32_t x315 = -1;
static volatile int16_t x340 = 1;
int32_t x350 = -1;
volatile int64_t t68 = 459900LL;
int32_t x363 = 24317051;
static uint64_t x367 = 364959LLU;
volatile uint64_t t70 = 1589894064LLU;
static volatile uint8_t x372 = 2U;
int32_t t73 = -139899032;
int64_t x394 = 82299621536LL;
static volatile int32_t x399 = -1;
uint32_t t76 = 0U;
uint32_t x407 = UINT32_MAX;
volatile int64_t t80 = -213LL;
volatile int64_t x433 = -80723569544874LL;
static volatile int32_t t82 = -677;
int64_t x438 = -1168759571LL;
static uint16_t x443 = UINT16_MAX;
int16_t x449 = INT16_MIN;
int16_t x450 = INT16_MIN;
volatile int16_t x451 = INT16_MIN;
int64_t x452 = INT64_MAX;
static int8_t x457 = -1;
static volatile int32_t x476 = INT32_MIN;
int64_t t91 = 1LL;
int64_t x478 = 59373266309LL;
volatile int32_t t92 = 1;
uint8_t x487 = 3U;
volatile uint64_t t94 = 225446718952446445LLU;
int16_t x490 = -92;
static uint64_t x491 = 32087LLU;
volatile uint8_t x508 = UINT8_MAX;
int64_t x509 = INT64_MAX;
int32_t x528 = INT32_MIN;
int32_t t104 = -2001665;
int8_t x545 = INT8_MAX;
volatile uint64_t t105 = 357428355986452LLU;
volatile int8_t x549 = INT8_MAX;
int8_t x551 = -1;
volatile int32_t t106 = -7745;
volatile int16_t x559 = INT16_MIN;
int64_t x562 = INT64_MAX;
static volatile uint32_t x567 = UINT32_MAX;
static volatile int64_t x568 = -1LL;
static volatile uint64_t t111 = 10923347101824LLU;
static int8_t x574 = INT8_MIN;
static int32_t x577 = -705673;
volatile int32_t x579 = -1;
int32_t t114 = -101;
int64_t x590 = INT64_MAX;
uint8_t x591 = 43U;
int8_t x596 = 1;
int16_t x608 = -1;
int32_t t118 = -1;
static int64_t x624 = -1LL;
uint16_t x628 = UINT16_MAX;
int32_t x632 = -1;
uint64_t x639 = UINT64_MAX;
volatile uint64_t t123 = 381014053LLU;
static uint64_t x641 = 7970048511754LLU;
static int64_t x647 = 226723LL;
int16_t x649 = 1191;
int32_t x651 = INT32_MAX;
uint16_t x658 = 3848U;
uint64_t t127 = 112375LLU;
int64_t x682 = INT64_MIN;
volatile int64_t x688 = INT64_MAX;
volatile uint64_t t134 = 971870119578960LLU;
int16_t x698 = -2;
static int8_t x702 = 29;
int32_t x705 = 23770;
static volatile uint16_t x707 = UINT16_MAX;
static int32_t x709 = -25852976;
volatile int32_t t139 = 201698;
static uint32_t x718 = 5U;
volatile uint8_t x731 = 10U;
volatile int64_t t143 = 13428052LL;
uint64_t t144 = 3738581LLU;
volatile uint8_t x749 = 67U;
uint8_t x759 = UINT8_MAX;
int16_t x761 = 1252;
int16_t x763 = 48;
int8_t x766 = -49;
volatile int32_t x769 = -107813965;
uint64_t x772 = 182608577324LLU;
volatile int16_t x777 = 188;
int32_t t151 = 83;
volatile int32_t t154 = -35639227;
int32_t x806 = INT32_MAX;
int64_t x809 = -38207283070679617LL;
volatile uint32_t x813 = UINT32_MAX;
int32_t x814 = -906279;
uint8_t x820 = UINT8_MAX;
uint64_t x840 = 3LLU;
int64_t x841 = INT64_MIN;
int64_t x846 = INT64_MAX;
volatile int32_t x850 = 39081;
int8_t x851 = INT8_MIN;
uint32_t t167 = 52833U;
static int16_t x857 = INT16_MIN;
int32_t x858 = INT32_MIN;
volatile int32_t t170 = 7;
int16_t x879 = INT16_MIN;
volatile int32_t t171 = -3;
int8_t x886 = -1;
uint8_t x887 = 1U;
int64_t x888 = -1LL;
uint32_t x890 = UINT32_MAX;
volatile int8_t x892 = INT8_MIN;
static int32_t x897 = 5151;
static uint32_t x899 = 441U;
int8_t x916 = INT8_MIN;
volatile int8_t x925 = -1;
int8_t x929 = INT8_MIN;
int16_t x930 = -2481;
int16_t x935 = -1;
static volatile int64_t x936 = -13625693066183123LL;
uint16_t x945 = 181U;
uint16_t x957 = 13U;
uint32_t x961 = 479109U;
volatile uint8_t x966 = 0U;
volatile uint32_t t191 = 98811U;
int32_t x975 = INT32_MAX;
int32_t x976 = INT32_MIN;
uint32_t x979 = UINT32_MAX;
int64_t x981 = -1LL;
int16_t x986 = INT16_MAX;
int16_t x1002 = -1;
static uint8_t x1003 = 3U;


void f0(void) {
    	int32_t x2 = INT32_MIN;
	int32_t x3 = 28519;
	uint64_t x4 = 907385918682835444LLU;
	uint64_t t0 = 313127701068LLU;

    t0 = (((x1<=x2)-x3)-x4);

    if (t0 != 17539358155026687653LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 1U;
	volatile int64_t x6 = -1LL;
	int32_t x7 = -43;
	static volatile int32_t t1 = -84277764;

    t1 = (((x5<=x6)-x7)-x8);

    if (t1 != 32811) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x17 = 14U;
	static uint8_t x18 = UINT8_MAX;
	static uint8_t x19 = 75U;
	int32_t x20 = -1530;
	static int32_t t2 = -15460;

    t2 = (((x17<=x18)-x19)-x20);

    if (t2 != 1456) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x21 = 7118LLU;
	volatile uint8_t x22 = 1U;
	static volatile int16_t x23 = -1;

    t3 = (((x21<=x22)-x23)-x24);

    if (t3 != -2147483646) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = -761;
	static int32_t x26 = 904;
	static uint64_t x27 = 228694927757LLU;
	volatile int8_t x28 = -1;
	volatile uint64_t t4 = 30405334LLU;

    t4 = (((x25<=x26)-x27)-x28);

    if (t4 != 18446743845014623861LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x29 = -6;
	uint32_t x30 = 1446234U;
	static uint64_t x31 = 918777533940LLU;
	int16_t x32 = INT16_MIN;
	volatile uint64_t t5 = 26818LLU;

    t5 = (((x29<=x30)-x31)-x32);

    if (t5 != 18446743154932050444LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = -1LL;
	int16_t x34 = INT16_MIN;
	uint64_t x35 = 3444691LLU;
	int8_t x36 = INT8_MIN;
	static uint64_t t6 = 193LLU;

    t6 = (((x33<=x34)-x35)-x36);

    if (t6 != 18446744073706107053LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x41 = UINT16_MAX;
	uint32_t x42 = UINT32_MAX;
	uint8_t x43 = 3U;
	static volatile uint16_t x44 = UINT16_MAX;

    t7 = (((x41<=x42)-x43)-x44);

    if (t7 != -65537) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x45 = 1LLU;
	static int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MAX;
	int32_t t8 = 4;

    t8 = (((x45<=x46)-x47)-x48);

    if (t8 != 2147450882) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x53 = INT8_MIN;
	int64_t x55 = INT64_MAX;
	volatile int64_t x56 = INT64_MIN;
	int64_t t9 = -13079452030167500LL;

    t9 = (((x53<=x54)-x55)-x56);

    if (t9 != 2LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x57 = 113161U;
	volatile int16_t x58 = INT16_MIN;
	volatile uint32_t x59 = UINT32_MAX;
	volatile uint64_t x60 = 1LLU;
	uint64_t t10 = 88757370866531976LLU;

    t10 = (((x57<=x58)-x59)-x60);

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x61 = -1;
	uint64_t x62 = 9840LLU;
	static volatile uint16_t x64 = 5581U;
	volatile int32_t t11 = 1000;

    t11 = (((x61<=x62)-x63)-x64);

    if (t11 != -5580) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x66 = -25481339128503580LL;
	uint16_t x67 = 12U;
	int32_t x68 = -17667;
	volatile int32_t t12 = 547;

    t12 = (((x65<=x66)-x67)-x68);

    if (t12 != 17655) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x69 = UINT8_MAX;
	uint32_t x70 = 10938U;
	int8_t x71 = -1;
	int32_t x72 = -68541;
	static int32_t t13 = -109366;

    t13 = (((x69<=x70)-x71)-x72);

    if (t13 != 68543) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x77 = INT64_MIN;
	int8_t x78 = 0;
	static volatile uint16_t x79 = 8906U;
	int64_t x80 = 435903256226066LL;
	int64_t t14 = 934526LL;

    t14 = (((x77<=x78)-x79)-x80);

    if (t14 != -435903256234971LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x85 = UINT32_MAX;
	int64_t x86 = 151734009364LL;
	uint16_t x87 = 0U;
	int32_t x88 = INT32_MAX;

    t15 = (((x85<=x86)-x87)-x88);

    if (t15 != -2147483646) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x94 = -16494310;
	static volatile uint32_t x95 = UINT32_MAX;
	int8_t x96 = INT8_MIN;

    t16 = (((x93<=x94)-x95)-x96);

    if (t16 != 130U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x97 = 6U;
	int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MIN;
	int64_t x100 = -1LL;
	static volatile int64_t t17 = 0LL;

    t17 = (((x97<=x98)-x99)-x100);

    if (t17 != 32770LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x101 = 77U;
	uint16_t x104 = 113U;
	volatile int32_t t18 = 112794640;

    t18 = (((x101<=x102)-x103)-x104);

    if (t18 != -698) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x105 = 0;
	int16_t x106 = INT16_MIN;
	int8_t x108 = -1;
	int32_t t19 = -460950;

    t19 = (((x105<=x106)-x107)-x108);

    if (t19 != 129) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x109 = 14;
	uint16_t x110 = UINT16_MAX;
	uint64_t x111 = 89LLU;
	int16_t x112 = INT16_MIN;
	uint64_t t20 = 15991974994LLU;

    t20 = (((x109<=x110)-x111)-x112);

    if (t20 != 32680LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x113 = UINT16_MAX;
	int16_t x114 = -1;
	int64_t t21 = -5928401204LL;

    t21 = (((x113<=x114)-x115)-x116);

    if (t21 != -153861171388LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x118 = INT32_MIN;
	int16_t x119 = 138;
	static volatile int64_t t22 = 6196LL;

    t22 = (((x117<=x118)-x119)-x120);

    if (t22 != 9223372036854775670LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x121 = INT64_MAX;
	static volatile uint8_t x122 = UINT8_MAX;
	static volatile int16_t x124 = -8;

    t23 = (((x121<=x122)-x123)-x124);

    if (t23 != -9546) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x129 = UINT32_MAX;
	static uint64_t x130 = 329LLU;
	uint8_t x131 = 41U;
	static int64_t x132 = -1LL;

    t24 = (((x129<=x130)-x131)-x132);

    if (t24 != -40LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x133 = -1;
	uint8_t x134 = UINT8_MAX;
	uint32_t x135 = 338U;
	static uint64_t x136 = 222533778585LLU;
	uint64_t t25 = 159LLU;

    t25 = (((x133<=x134)-x135)-x136);

    if (t25 != 18446743855470739990LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x141 = 5U;
	volatile int16_t x142 = INT16_MIN;
	static int8_t x143 = -1;
	int32_t x144 = -1;
	volatile int32_t t26 = 2;

    t26 = (((x141<=x142)-x143)-x144);

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x145 = INT8_MIN;
	uint64_t x146 = UINT64_MAX;
	uint16_t x147 = 2U;
	static int8_t x148 = 0;
	int32_t t27 = -2;

    t27 = (((x145<=x146)-x147)-x148);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x153 = INT8_MAX;
	volatile int32_t x154 = INT32_MIN;
	static volatile int8_t x155 = INT8_MAX;
	int32_t x156 = INT32_MIN;
	int32_t t28 = 64924;

    t28 = (((x153<=x154)-x155)-x156);

    if (t28 != 2147483521) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x157 = -1955262730384LL;
	int32_t x158 = INT32_MAX;
	int64_t x159 = 44593LL;
	volatile int64_t t29 = -3LL;

    t29 = (((x157<=x158)-x159)-x160);

    if (t29 != -4295011887LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x162 = 12410LL;
	volatile int16_t x163 = 1;
	int64_t t30 = 16LL;

    t30 = (((x161<=x162)-x163)-x164);

    if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x177 = INT16_MIN;
	int8_t x178 = 0;
	uint16_t x179 = UINT16_MAX;
	uint32_t x180 = 3U;

    t31 = (((x177<=x178)-x179)-x180);

    if (t31 != 4294901759U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x181 = -85LL;
	int16_t x183 = 914;
	int64_t x184 = 23286222739000LL;
	int64_t t32 = -268754364410LL;

    t32 = (((x181<=x182)-x183)-x184);

    if (t32 != -23286222739914LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x186 = -933311LL;
	int64_t x187 = -655444989654557LL;
	volatile int64_t t33 = -105953LL;

    t33 = (((x185<=x186)-x187)-x188);

    if (t33 != 655444989654558LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x189 = 1U;
	int64_t x190 = 96373523704LL;
	volatile uint16_t x191 = UINT16_MAX;
	volatile int32_t t34 = 618;

    t34 = (((x189<=x190)-x191)-x192);

    if (t34 != -65530) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x194 = INT32_MAX;
	uint32_t x195 = UINT32_MAX;
	int16_t x196 = 99;

    t35 = (((x193<=x194)-x195)-x196);

    if (t35 != 4294967199U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x197 = 71U;
	static int8_t x198 = -1;
	uint64_t x199 = 6LLU;
	int64_t x200 = -1LL;
	volatile uint64_t t36 = 52243447843601LLU;

    t36 = (((x197<=x198)-x199)-x200);

    if (t36 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x201 = UINT64_MAX;
	int16_t x202 = -53;
	int8_t x203 = INT8_MAX;
	int32_t x204 = INT32_MIN;
	volatile int32_t t37 = -249;

    t37 = (((x201<=x202)-x203)-x204);

    if (t37 != 2147483521) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x209 = -1;
	uint16_t x210 = 26200U;
	int8_t x211 = 16;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t38 = 2625;

    t38 = (((x209<=x210)-x211)-x212);

    if (t38 != -65550) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x213 = INT8_MAX;
	int16_t x214 = INT16_MIN;
	volatile uint16_t x215 = UINT16_MAX;
	static int8_t x216 = INT8_MAX;
	volatile int32_t t39 = -51826756;

    t39 = (((x213<=x214)-x215)-x216);

    if (t39 != -65662) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x217 = INT8_MIN;
	uint16_t x218 = 3U;
	uint64_t x219 = UINT64_MAX;
	uint8_t x220 = 10U;
	uint64_t t40 = 1225248090474227LLU;

    t40 = (((x217<=x218)-x219)-x220);

    if (t40 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x225 = 114U;
	uint64_t x226 = 8499667325338644657LLU;
	int8_t x227 = INT8_MIN;
	int8_t x228 = -1;
	int32_t t41 = 12948219;

    t41 = (((x225<=x226)-x227)-x228);

    if (t41 != 130) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x229 = INT64_MAX;
	static uint32_t x230 = 45588U;
	int32_t t42 = 30;

    t42 = (((x229<=x230)-x231)-x232);

    if (t42 != 32769) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x233 = 12552459051214LL;
	int32_t x234 = INT32_MIN;
	int16_t x235 = -114;
	int32_t x236 = -1;
	volatile int32_t t43 = -23281520;

    t43 = (((x233<=x234)-x235)-x236);

    if (t43 != 115) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x237 = 6;
	int8_t x238 = INT8_MIN;
	uint64_t x239 = UINT64_MAX;
	int8_t x240 = -1;
	static uint64_t t44 = 10457978733LLU;

    t44 = (((x237<=x238)-x239)-x240);

    if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x241 = 60042LL;
	int8_t x242 = -1;
	static int16_t x243 = INT16_MAX;
	uint64_t x244 = 93148861719739LLU;
	static volatile uint64_t t45 = 51573524474278535LLU;

    t45 = (((x241<=x242)-x243)-x244);

    if (t45 != 18446650924847799110LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x249 = -1;
	uint16_t x250 = UINT16_MAX;
	static volatile int32_t x251 = -1;
	int32_t t46 = 2;

    t46 = (((x249<=x250)-x251)-x252);

    if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x253 = INT64_MIN;
	int16_t x254 = -1;
	static volatile int32_t x255 = -1;
	static int32_t x256 = -111;

    t47 = (((x253<=x254)-x255)-x256);

    if (t47 != 113) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x257 = INT32_MAX;
	static int64_t t48 = 14672757048848LL;

    t48 = (((x257<=x258)-x259)-x260);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x261 = INT32_MAX;
	int64_t x262 = 97399433016LL;
	static int64_t x263 = 123394533246674401LL;
	int64_t x264 = INT64_MIN;
	static volatile int64_t t49 = 672373054LL;

    t49 = (((x261<=x262)-x263)-x264);

    if (t49 != 9099977503608101408LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x266 = 11U;
	int8_t x267 = INT8_MAX;
	int8_t x268 = INT8_MIN;
	static int32_t t50 = -56816;

    t50 = (((x265<=x266)-x267)-x268);

    if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x269 = INT64_MIN;
	int64_t x270 = -773990152LL;
	uint16_t x271 = 201U;
	volatile uint16_t x272 = 37U;
	volatile int32_t t51 = 8445960;

    t51 = (((x269<=x270)-x271)-x272);

    if (t51 != -237) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x273 = -7959676150399LL;
	static volatile int16_t x274 = -1;
	int16_t x276 = -1;
	int32_t t52 = -1;

    t52 = (((x273<=x274)-x275)-x276);

    if (t52 != -65533) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x277 = 1952307U;
	uint64_t x279 = 80LLU;
	int8_t x280 = INT8_MIN;
	uint64_t t53 = 230696587498LLU;

    t53 = (((x277<=x278)-x279)-x280);

    if (t53 != 48LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x285 = INT64_MIN;
	volatile uint32_t x286 = UINT32_MAX;
	int16_t x287 = INT16_MIN;
	volatile int32_t t54 = 51;

    t54 = (((x285<=x286)-x287)-x288);

    if (t54 != -32766) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x289 = 12929U;
	int32_t x291 = -865200;
	int32_t t55 = -2;

    t55 = (((x289<=x290)-x291)-x292);

    if (t55 != 865202) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x293 = 7528U;
	static uint64_t x294 = UINT64_MAX;
	volatile uint64_t x296 = 153135467436LLU;
	uint64_t t56 = 430344069786656LLU;

    t56 = (((x293<=x294)-x295)-x296);

    if (t56 != 18446743920574084309LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x297 = 1924809871572LLU;
	static int64_t x298 = INT64_MIN;
	uint16_t x299 = 148U;
	static volatile int16_t x300 = INT16_MIN;
	static int32_t t57 = -39;

    t57 = (((x297<=x298)-x299)-x300);

    if (t57 != 32621) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x301 = INT8_MAX;
	uint16_t x303 = UINT16_MAX;
	uint64_t x304 = UINT64_MAX;
	static uint64_t t58 = 1577621413707037734LLU;

    t58 = (((x301<=x302)-x303)-x304);

    if (t58 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x309 = INT16_MAX;
	int16_t x310 = -1;
	int16_t x311 = INT16_MAX;
	static uint32_t x312 = 696U;
	volatile uint32_t t59 = 1385U;

    t59 = (((x309<=x310)-x311)-x312);

    if (t59 != 4294933833U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x313 = UINT32_MAX;
	int8_t x314 = -1;
	volatile int8_t x316 = INT8_MIN;
	volatile int32_t t60 = 27;

    t60 = (((x313<=x314)-x315)-x316);

    if (t60 != 130) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x329 = 9716881609LLU;
	volatile int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	static int8_t x332 = -5;
	volatile int32_t t61 = 11603;

    t61 = (((x329<=x330)-x331)-x332);

    if (t61 != 32774) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x333 = INT64_MIN;
	static int8_t x334 = INT8_MIN;
	int16_t x335 = -11014;
	uint32_t x336 = 412U;
	uint32_t t62 = 73U;

    t62 = (((x333<=x334)-x335)-x336);

    if (t62 != 10603U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x337 = 4369LL;
	uint32_t x338 = 79557U;
	static uint64_t x339 = 12198346990613074LLU;
	volatile uint64_t t63 = 735052247916897LLU;

    t63 = (((x337<=x338)-x339)-x340);

    if (t63 != 18434545726718938542LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x341 = INT16_MIN;
	int64_t x342 = INT64_MAX;
	int32_t x343 = 373;
	int32_t x344 = -2909;
	int32_t t64 = 877743397;

    t64 = (((x341<=x342)-x343)-x344);

    if (t64 != 2537) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x345 = 585381776232823LLU;
	uint16_t x346 = 462U;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = INT16_MAX;
	volatile int32_t t65 = 234;

    t65 = (((x345<=x346)-x347)-x348);

    if (t65 != -98302) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x349 = INT16_MIN;
	uint32_t x351 = 0U;
	int8_t x352 = 0;
	volatile uint32_t t66 = 20U;

    t66 = (((x349<=x350)-x351)-x352);

    if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x353 = 17351115963514LLU;
	uint32_t x354 = 7456U;
	static int32_t x355 = -288;
	int16_t x356 = INT16_MIN;
	volatile int32_t t67 = -483147930;

    t67 = (((x353<=x354)-x355)-x356);

    if (t67 != 33056) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x357 = 1;
	uint8_t x358 = 7U;
	static int8_t x359 = -1;
	static int64_t x360 = -1LL;

    t68 = (((x357<=x358)-x359)-x360);

    if (t68 != 3LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x361 = 9U;
	static int16_t x362 = INT16_MIN;
	int32_t x364 = INT32_MIN;
	volatile int32_t t69 = 148978871;

    t69 = (((x361<=x362)-x363)-x364);

    if (t69 != 2123166597) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MIN;
	static int16_t x368 = INT16_MAX;

    t70 = (((x365<=x366)-x367)-x368);

    if (t70 != 18446744073709153891LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x369 = INT32_MIN;
	int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MIN;
	volatile int32_t t71 = -144;

    t71 = (((x369<=x370)-x371)-x372);

    if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x373 = INT32_MIN;
	static volatile int64_t x374 = INT64_MAX;
	uint64_t x375 = UINT64_MAX;
	uint16_t x376 = 5963U;
	static volatile uint64_t t72 = 11LLU;

    t72 = (((x373<=x374)-x375)-x376);

    if (t72 != 18446744073709545655LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x377 = INT8_MIN;
	static int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	uint16_t x380 = 7138U;

    t73 = (((x377<=x378)-x379)-x380);

    if (t73 != -7010) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x389 = 3677LLU;
	int16_t x390 = -1;
	uint8_t x391 = 0U;
	static int64_t x392 = -1142552489546LL;
	volatile int64_t t74 = 68932746735181LL;

    t74 = (((x389<=x390)-x391)-x392);

    if (t74 != 1142552489547LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x393 = INT8_MIN;
	uint64_t x395 = 2968209172542LLU;
	int16_t x396 = INT16_MIN;
	static volatile uint64_t t75 = 26LLU;

    t75 = (((x393<=x394)-x395)-x396);

    if (t75 != 18446741105500411843LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x397 = 42U;
	static uint64_t x398 = 1825485809LLU;
	static uint32_t x400 = UINT32_MAX;

    t76 = (((x397<=x398)-x399)-x400);

    if (t76 != 3U) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x401 = INT64_MIN;
	uint32_t x402 = 13048U;
	static int8_t x403 = -24;
	static int16_t x404 = INT16_MIN;
	static int32_t t77 = 295;

    t77 = (((x401<=x402)-x403)-x404);

    if (t77 != 32793) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x405 = INT8_MIN;
	static int32_t x406 = 7441;
	int16_t x408 = -12;
	static uint32_t t78 = 1028712070U;

    t78 = (((x405<=x406)-x407)-x408);

    if (t78 != 14U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x413 = 429U;
	int32_t x414 = INT32_MIN;
	static volatile uint32_t x415 = 2U;
	volatile int32_t x416 = INT32_MIN;
	volatile uint32_t t79 = 11555U;

    t79 = (((x413<=x414)-x415)-x416);

    if (t79 != 2147483646U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x421 = -4;
	int64_t x422 = INT64_MIN;
	int16_t x423 = INT16_MAX;
	int64_t x424 = INT64_MIN;

    t80 = (((x421<=x422)-x423)-x424);

    if (t80 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x429 = -1;
	int32_t x430 = INT32_MIN;
	uint64_t x431 = 770132LLU;
	int32_t x432 = -234;
	uint64_t t81 = 2490LLU;

    t81 = (((x429<=x430)-x431)-x432);

    if (t81 != 18446744073708781718LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x434 = -3;
	uint8_t x435 = UINT8_MAX;
	int8_t x436 = INT8_MAX;

    t82 = (((x433<=x434)-x435)-x436);

    if (t82 != -381) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x437 = 0;
	uint16_t x439 = UINT16_MAX;
	uint8_t x440 = 25U;
	static int32_t t83 = 122713;

    t83 = (((x437<=x438)-x439)-x440);

    if (t83 != -65560) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x441 = 11646419852LLU;
	uint64_t x442 = UINT64_MAX;
	int16_t x444 = -231;
	static int32_t t84 = -71448355;

    t84 = (((x441<=x442)-x443)-x444);

    if (t84 != -65303) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	int16_t x446 = 14;
	uint8_t x447 = 62U;
	uint64_t x448 = 2255640LLU;
	uint64_t t85 = 11027399888814979LLU;

    t85 = (((x445<=x446)-x447)-x448);

    if (t85 != 18446744073707295914LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t t86 = -2393285683065LL;

    t86 = (((x449<=x450)-x451)-x452);

    if (t86 != -9223372036854743038LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x458 = INT64_MIN;
	static volatile int32_t x459 = 123;
	int16_t x460 = -1;
	static int32_t t87 = 8359;

    t87 = (((x457<=x458)-x459)-x460);

    if (t87 != -122) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x461 = 132741365149564LLU;
	int32_t x462 = 6707833;
	volatile int16_t x463 = INT16_MIN;
	static uint32_t x464 = UINT32_MAX;
	volatile uint32_t t88 = 1472U;

    t88 = (((x461<=x462)-x463)-x464);

    if (t88 != 32769U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x465 = -1;
	int32_t x466 = 2;
	int16_t x467 = INT16_MIN;
	uint16_t x468 = UINT16_MAX;
	int32_t t89 = -5864;

    t89 = (((x465<=x466)-x467)-x468);

    if (t89 != -32766) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x469 = INT32_MAX;
	int16_t x470 = INT16_MAX;
	static volatile uint64_t x471 = UINT64_MAX;
	int64_t x472 = INT64_MAX;
	volatile uint64_t t90 = 5LLU;

    t90 = (((x469<=x470)-x471)-x472);

    if (t90 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x473 = INT64_MAX;
	static int32_t x474 = -1217745;
	int64_t x475 = -1LL;

    t91 = (((x473<=x474)-x475)-x476);

    if (t91 != 2147483649LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x477 = INT16_MIN;
	int8_t x479 = INT8_MIN;
	volatile int8_t x480 = -1;

    t92 = (((x477<=x478)-x479)-x480);

    if (t92 != 130) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x481 = UINT64_MAX;
	int8_t x482 = -1;
	int32_t x483 = INT32_MAX;
	int8_t x484 = INT8_MIN;
	volatile int32_t t93 = 7;

    t93 = (((x481<=x482)-x483)-x484);

    if (t93 != -2147483518) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x485 = INT32_MIN;
	int16_t x486 = INT16_MIN;
	uint64_t x488 = 3782946100193921059LLU;

    t94 = (((x485<=x486)-x487)-x488);

    if (t94 != 14663797973515630555LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x489 = -53270;
	int64_t x492 = INT64_MIN;
	static uint64_t t95 = 2111102243888927LLU;

    t95 = (((x489<=x490)-x491)-x492);

    if (t95 != 9223372036854743722LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x497 = 224429;
	int32_t x498 = -1;
	int8_t x499 = 0;
	volatile uint8_t x500 = 0U;
	int32_t t96 = 6184;

    t96 = (((x497<=x498)-x499)-x500);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x501 = INT8_MAX;
	static int32_t x502 = INT32_MIN;
	volatile int16_t x503 = INT16_MIN;
	int16_t x504 = -10;
	volatile int32_t t97 = -59573;

    t97 = (((x501<=x502)-x503)-x504);

    if (t97 != 32778) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x505 = -915433327;
	int16_t x506 = 0;
	volatile int64_t x507 = -1LL;
	int64_t t98 = -3247978657519076LL;

    t98 = (((x505<=x506)-x507)-x508);

    if (t98 != -253LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x510 = UINT32_MAX;
	volatile int64_t x511 = -1LL;
	int8_t x512 = INT8_MIN;
	volatile int64_t t99 = 38670LL;

    t99 = (((x509<=x510)-x511)-x512);

    if (t99 != 129LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x521 = INT16_MIN;
	uint32_t x522 = 15442U;
	static volatile uint8_t x523 = 1U;
	static int32_t x524 = -297071301;
	int32_t t100 = -974001779;

    t100 = (((x521<=x522)-x523)-x524);

    if (t100 != 297071300) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x525 = INT16_MIN;
	int8_t x526 = -1;
	uint16_t x527 = 173U;
	int32_t t101 = -245;

    t101 = (((x525<=x526)-x527)-x528);

    if (t101 != 2147483476) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x529 = INT8_MIN;
	int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MIN;
	static int8_t x532 = INT8_MAX;
	static volatile int32_t t102 = -47031036;

    t102 = (((x529<=x530)-x531)-x532);

    if (t102 != 32641) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x537 = -1;
	static int32_t x538 = INT32_MIN;
	volatile uint64_t x539 = 5036452763131195LLU;
	int16_t x540 = -1;
	uint64_t t103 = 38593024380655LLU;

    t103 = (((x537<=x538)-x539)-x540);

    if (t103 != 18441707620946420422LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x541 = INT32_MAX;
	int16_t x542 = 16;
	int32_t x543 = -1;
	int16_t x544 = INT16_MIN;

    t104 = (((x541<=x542)-x543)-x544);

    if (t104 != 32769) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x546 = INT64_MIN;
	uint64_t x547 = 4208424LLU;
	int32_t x548 = -9;

    t105 = (((x545<=x546)-x547)-x548);

    if (t105 != 18446744073705343201LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x550 = -1;
	static uint16_t x552 = 1017U;

    t106 = (((x549<=x550)-x551)-x552);

    if (t106 != -1016) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x553 = 34U;
	uint8_t x554 = 0U;
	volatile uint16_t x555 = 888U;
	static int16_t x556 = -231;
	volatile int32_t t107 = -7;

    t107 = (((x553<=x554)-x555)-x556);

    if (t107 != -657) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x557 = INT8_MIN;
	int32_t x558 = -1;
	uint8_t x560 = 45U;
	volatile int32_t t108 = -169473541;

    t108 = (((x557<=x558)-x559)-x560);

    if (t108 != 32724) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x561 = 118264556376LLU;
	int32_t x563 = 63249051;
	uint64_t x564 = UINT64_MAX;
	static volatile uint64_t t109 = 2080422LLU;

    t109 = (((x561<=x562)-x563)-x564);

    if (t109 != 18446744073646302567LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x565 = INT64_MAX;
	volatile int8_t x566 = -17;
	static volatile int64_t t110 = -54478108945805476LL;

    t110 = (((x565<=x566)-x567)-x568);

    if (t110 != 2LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x569 = INT16_MIN;
	int16_t x570 = INT16_MIN;
	uint8_t x571 = 6U;
	volatile uint64_t x572 = 2043015352LLU;

    t111 = (((x569<=x570)-x571)-x572);

    if (t111 != 18446744071666536259LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x573 = INT16_MIN;
	int16_t x575 = INT16_MIN;
	int32_t x576 = -1;
	static volatile int32_t t112 = 0;

    t112 = (((x573<=x574)-x575)-x576);

    if (t112 != 32770) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x578 = -1;
	int16_t x580 = INT16_MAX;
	int32_t t113 = 12;

    t113 = (((x577<=x578)-x579)-x580);

    if (t113 != -32765) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x585 = INT64_MAX;
	uint32_t x586 = 280U;
	static volatile int8_t x587 = -32;
	uint16_t x588 = 14295U;

    t114 = (((x585<=x586)-x587)-x588);

    if (t114 != -14263) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x589 = INT16_MIN;
	static volatile uint64_t x592 = 66831805042419995LLU;
	volatile uint64_t t115 = 110633LLU;

    t115 = (((x589<=x590)-x591)-x592);

    if (t115 != 18379912268667131579LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x593 = -1126;
	uint8_t x594 = UINT8_MAX;
	static uint8_t x595 = 77U;
	static volatile int32_t t116 = 50466310;

    t116 = (((x593<=x594)-x595)-x596);

    if (t116 != -77) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x601 = UINT16_MAX;
	uint64_t x602 = UINT64_MAX;
	volatile int16_t x603 = INT16_MIN;
	int8_t x604 = -25;
	int32_t t117 = 24818;

    t117 = (((x601<=x602)-x603)-x604);

    if (t117 != 32794) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x605 = -1;
	int16_t x606 = 264;
	volatile int16_t x607 = INT16_MAX;

    t118 = (((x605<=x606)-x607)-x608);

    if (t118 != -32765) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x609 = 15;
	volatile uint32_t x610 = 7519U;
	int64_t x611 = 777788LL;
	static int64_t x612 = 63574307271LL;
	int64_t t119 = 378006624LL;

    t119 = (((x609<=x610)-x611)-x612);

    if (t119 != -63575085058LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x621 = 2045903015271848823LLU;
	int16_t x622 = INT16_MIN;
	static int8_t x623 = INT8_MIN;
	int64_t t120 = 4147262105292636919LL;

    t120 = (((x621<=x622)-x623)-x624);

    if (t120 != 130LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x625 = 4467486U;
	uint8_t x626 = 0U;
	int16_t x627 = INT16_MIN;
	volatile int32_t t121 = -26;

    t121 = (((x625<=x626)-x627)-x628);

    if (t121 != -32767) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x629 = 6566;
	int64_t x630 = INT64_MAX;
	static int32_t x631 = 53;
	static volatile int32_t t122 = -1186;

    t122 = (((x629<=x630)-x631)-x632);

    if (t122 != -51) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x637 = -1;
	int16_t x638 = INT16_MAX;
	volatile int8_t x640 = -2;

    t123 = (((x637<=x638)-x639)-x640);

    if (t123 != 4LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x642 = 0;
	uint64_t x643 = UINT64_MAX;
	volatile int16_t x644 = -1;
	volatile uint64_t t124 = 41572454139697342LLU;

    t124 = (((x641<=x642)-x643)-x644);

    if (t124 != 2LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x645 = -1;
	static int16_t x646 = INT16_MIN;
	int64_t x648 = INT64_MIN;
	static int64_t t125 = 32188260LL;

    t125 = (((x645<=x646)-x647)-x648);

    if (t125 != 9223372036854549085LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x650 = INT8_MAX;
	int32_t x652 = INT32_MIN;
	volatile int32_t t126 = -549;

    t126 = (((x649<=x650)-x651)-x652);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x657 = 172344LLU;
	uint64_t x659 = 35LLU;
	static int16_t x660 = -1;

    t127 = (((x657<=x658)-x659)-x660);

    if (t127 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x665 = INT8_MAX;
	uint32_t x666 = UINT32_MAX;
	int16_t x667 = -1;
	int8_t x668 = -1;
	static int32_t t128 = -502241;

    t128 = (((x665<=x666)-x667)-x668);

    if (t128 != 3) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x669 = 1U;
	volatile uint64_t x670 = 380316140334010789LLU;
	uint8_t x671 = 11U;
	static int16_t x672 = INT16_MAX;
	volatile int32_t t129 = -234393;

    t129 = (((x669<=x670)-x671)-x672);

    if (t129 != -32777) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x673 = UINT64_MAX;
	volatile int64_t x674 = -210395453139LL;
	volatile uint64_t x675 = UINT64_MAX;
	volatile int32_t x676 = INT32_MAX;
	static volatile uint64_t t130 = 29638261LLU;

    t130 = (((x673<=x674)-x675)-x676);

    if (t130 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x681 = INT8_MIN;
	uint8_t x683 = 5U;
	int16_t x684 = 1953;
	static volatile int32_t t131 = 119413;

    t131 = (((x681<=x682)-x683)-x684);

    if (t131 != -1958) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x685 = 83;
	uint32_t x686 = 7U;
	volatile int8_t x687 = -1;
	int64_t t132 = -196722LL;

    t132 = (((x685<=x686)-x687)-x688);

    if (t132 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x689 = UINT8_MAX;
	uint64_t x690 = 8159402LLU;
	int32_t x691 = -1;
	static volatile int16_t x692 = -1;
	volatile int32_t t133 = 82;

    t133 = (((x689<=x690)-x691)-x692);

    if (t133 != 3) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x693 = 5;
	volatile uint16_t x694 = 922U;
	static uint64_t x695 = 1958LLU;
	int32_t x696 = INT32_MIN;

    t134 = (((x693<=x694)-x695)-x696);

    if (t134 != 2147481691LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x697 = 1U;
	int8_t x699 = -1;
	int16_t x700 = -362;
	int32_t t135 = -1;

    t135 = (((x697<=x698)-x699)-x700);

    if (t135 != 363) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x701 = 30U;
	static volatile uint16_t x703 = UINT16_MAX;
	int32_t x704 = -456180;
	volatile int32_t t136 = -187900;

    t136 = (((x701<=x702)-x703)-x704);

    if (t136 != 390645) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x706 = 366;
	static int16_t x708 = INT16_MIN;
	volatile int32_t t137 = -23008;

    t137 = (((x705<=x706)-x707)-x708);

    if (t137 != -32767) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x710 = INT8_MIN;
	static volatile int32_t x711 = INT32_MAX;
	int8_t x712 = INT8_MIN;
	int32_t t138 = -19220342;

    t138 = (((x709<=x710)-x711)-x712);

    if (t138 != -2147483518) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x713 = INT64_MAX;
	static volatile int8_t x714 = INT8_MAX;
	int32_t x715 = -1;
	int8_t x716 = INT8_MIN;

    t139 = (((x713<=x714)-x715)-x716);

    if (t139 != 129) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x717 = 8600533;
	uint64_t x719 = 98319161762644LLU;
	uint64_t x720 = UINT64_MAX;
	uint64_t t140 = 0LLU;

    t140 = (((x717<=x718)-x719)-x720);

    if (t140 != 18446645754547788973LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x729 = 111U;
	int16_t x730 = INT16_MIN;
	uint64_t x732 = 248232898283LLU;
	static volatile uint64_t t141 = 28LLU;

    t141 = (((x729<=x730)-x731)-x732);

    if (t141 != 18446743825476653324LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x737 = 1U;
	uint16_t x738 = UINT16_MAX;
	int8_t x739 = -9;
	uint8_t x740 = UINT8_MAX;
	static int32_t t142 = -362;

    t142 = (((x737<=x738)-x739)-x740);

    if (t142 != -245) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x741 = 0LLU;
	static uint32_t x742 = 1U;
	static volatile int64_t x743 = -219927LL;
	int8_t x744 = 0;

    t143 = (((x741<=x742)-x743)-x744);

    if (t143 != 219928LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x745 = INT32_MIN;
	uint8_t x746 = 8U;
	volatile int16_t x747 = -30;
	uint64_t x748 = UINT64_MAX;

    t144 = (((x745<=x746)-x747)-x748);

    if (t144 != 32LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x750 = INT32_MIN;
	static int64_t x751 = -1LL;
	int32_t x752 = INT32_MIN;
	int64_t t145 = 65744113376148795LL;

    t145 = (((x749<=x750)-x751)-x752);

    if (t145 != 2147483649LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x757 = 55U;
	int32_t x758 = INT32_MIN;
	static int64_t x760 = -1LL;
	static volatile int64_t t146 = 10427072932280LL;

    t146 = (((x757<=x758)-x759)-x760);

    if (t146 != -254LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x762 = 0;
	int32_t x764 = 219317038;
	int32_t t147 = 239354084;

    t147 = (((x761<=x762)-x763)-x764);

    if (t147 != -219317086) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x765 = INT8_MAX;
	static int16_t x767 = INT16_MAX;
	int64_t x768 = -160LL;
	static volatile int64_t t148 = -128877387297LL;

    t148 = (((x765<=x766)-x767)-x768);

    if (t148 != -32607LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x770 = INT64_MAX;
	uint8_t x771 = 77U;
	uint64_t t149 = 1LLU;

    t149 = (((x769<=x770)-x771)-x772);

    if (t149 != 18446743891100974216LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x773 = UINT32_MAX;
	int32_t x774 = 38721;
	volatile int16_t x775 = INT16_MIN;
	volatile int16_t x776 = INT16_MAX;
	static volatile int32_t t150 = 64365;

    t150 = (((x773<=x774)-x775)-x776);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x778 = -1;
	int8_t x779 = INT8_MIN;
	uint8_t x780 = UINT8_MAX;

    t151 = (((x777<=x778)-x779)-x780);

    if (t151 != -127) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x785 = INT16_MAX;
	static int64_t x786 = 3156424417LL;
	uint8_t x787 = UINT8_MAX;
	volatile uint16_t x788 = UINT16_MAX;
	volatile int32_t t152 = -1;

    t152 = (((x785<=x786)-x787)-x788);

    if (t152 != -65789) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x789 = INT8_MIN;
	static int32_t x790 = -1;
	int8_t x791 = -1;
	uint64_t x792 = 7981088198LLU;
	uint64_t t153 = 34476407LLU;

    t153 = (((x789<=x790)-x791)-x792);

    if (t153 != 18446744065728463420LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x793 = 80U;
	volatile uint32_t x794 = 4U;
	int32_t x795 = 39;
	int32_t x796 = -1;

    t154 = (((x793<=x794)-x795)-x796);

    if (t154 != -38) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x797 = UINT8_MAX;
	int8_t x798 = INT8_MAX;
	uint64_t x799 = 351LLU;
	static int32_t x800 = -1;
	volatile uint64_t t155 = 579225654LLU;

    t155 = (((x797<=x798)-x799)-x800);

    if (t155 != 18446744073709551266LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x801 = -5;
	int32_t x802 = -1;
	static volatile uint32_t x803 = UINT32_MAX;
	volatile int8_t x804 = 21;
	volatile uint32_t t156 = 773876U;

    t156 = (((x801<=x802)-x803)-x804);

    if (t156 != 4294967277U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x805 = 1191;
	static volatile uint64_t x807 = 108955LLU;
	int8_t x808 = -1;
	volatile uint64_t t157 = 0LLU;

    t157 = (((x805<=x806)-x807)-x808);

    if (t157 != 18446744073709442663LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x810 = 222U;
	static uint32_t x811 = 31062U;
	static uint32_t x812 = UINT32_MAX;
	volatile uint32_t t158 = 7U;

    t158 = (((x809<=x810)-x811)-x812);

    if (t158 != 4294936236U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x815 = 14527LLU;
	static uint8_t x816 = 12U;
	volatile uint64_t t159 = 1124346545LLU;

    t159 = (((x813<=x814)-x815)-x816);

    if (t159 != 18446744073709537077LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x817 = INT8_MIN;
	int8_t x818 = INT8_MIN;
	uint64_t x819 = UINT64_MAX;
	static volatile uint64_t t160 = 1413LLU;

    t160 = (((x817<=x818)-x819)-x820);

    if (t160 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x821 = 0U;
	int8_t x822 = 7;
	int16_t x823 = -438;
	int16_t x824 = -1804;
	volatile int32_t t161 = -21020034;

    t161 = (((x821<=x822)-x823)-x824);

    if (t161 != 2243) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x825 = 115U;
	uint64_t x826 = 168248524151LLU;
	int64_t x827 = 2619114290572661LL;
	uint16_t x828 = UINT16_MAX;
	volatile int64_t t162 = 714LL;

    t162 = (((x825<=x826)-x827)-x828);

    if (t162 != -2619114290638195LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x837 = INT32_MIN;
	volatile uint8_t x838 = UINT8_MAX;
	static int32_t x839 = 1;
	static volatile uint64_t t163 = 426531LLU;

    t163 = (((x837<=x838)-x839)-x840);

    if (t163 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x842 = UINT16_MAX;
	int16_t x843 = -3;
	int64_t x844 = -560543512289472LL;
	volatile int64_t t164 = -18733200571199738LL;

    t164 = (((x841<=x842)-x843)-x844);

    if (t164 != 560543512289476LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x845 = 3;
	static volatile int32_t x847 = INT32_MAX;
	volatile int64_t x848 = 1057LL;
	int64_t t165 = 11886621788LL;

    t165 = (((x845<=x846)-x847)-x848);

    if (t165 != -2147484703LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x849 = UINT8_MAX;
	uint8_t x852 = 83U;
	int32_t t166 = 24876733;

    t166 = (((x849<=x850)-x851)-x852);

    if (t166 != 46) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x853 = INT64_MIN;
	static uint32_t x854 = 32U;
	int16_t x855 = -1;
	static uint32_t x856 = UINT32_MAX;

    t167 = (((x853<=x854)-x855)-x856);

    if (t167 != 3U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x859 = 11;
	static volatile uint16_t x860 = UINT16_MAX;
	int32_t t168 = 2190;

    t168 = (((x857<=x858)-x859)-x860);

    if (t168 != -65546) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x861 = INT64_MIN;
	uint64_t x862 = 3123324971755010483LLU;
	static uint64_t x863 = 6484444677125462675LLU;
	volatile int8_t x864 = -1;
	uint64_t t169 = 3179662133LLU;

    t169 = (((x861<=x862)-x863)-x864);

    if (t169 != 11962299396584088942LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x873 = -8;
	int16_t x874 = 13372;
	int32_t x875 = 931577;
	int32_t x876 = 32;

    t170 = (((x873<=x874)-x875)-x876);

    if (t170 != -931608) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x877 = UINT64_MAX;
	int64_t x878 = 98870200788523742LL;
	static uint8_t x880 = UINT8_MAX;

    t171 = (((x877<=x878)-x879)-x880);

    if (t171 != 32513) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x881 = INT16_MIN;
	int16_t x882 = -182;
	static volatile uint64_t x883 = 12770276LLU;
	static int32_t x884 = -171875718;
	volatile uint64_t t172 = 140966614LLU;

    t172 = (((x881<=x882)-x883)-x884);

    if (t172 != 159105443LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x885 = INT64_MAX;
	int64_t t173 = 9656LL;

    t173 = (((x885<=x886)-x887)-x888);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x889 = -3974411213498824156LL;
	volatile uint32_t x891 = 175U;
	volatile uint32_t t174 = 393967U;

    t174 = (((x889<=x890)-x891)-x892);

    if (t174 != 4294967250U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x898 = -34546;
	int16_t x900 = INT16_MIN;
	uint32_t t175 = 703876074U;

    t175 = (((x897<=x898)-x899)-x900);

    if (t175 != 32327U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x901 = INT16_MIN;
	static int64_t x902 = 1306598540LL;
	volatile int16_t x903 = -1;
	volatile int64_t x904 = -26981LL;
	int64_t t176 = -25036290912934LL;

    t176 = (((x901<=x902)-x903)-x904);

    if (t176 != 26983LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x909 = UINT16_MAX;
	int32_t x910 = INT32_MIN;
	static int64_t x911 = -1LL;
	int32_t x912 = -5;
	volatile int64_t t177 = -694984359858LL;

    t177 = (((x909<=x910)-x911)-x912);

    if (t177 != 6LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x913 = INT8_MAX;
	int16_t x914 = INT16_MIN;
	int16_t x915 = -447;
	volatile int32_t t178 = -45101071;

    t178 = (((x913<=x914)-x915)-x916);

    if (t178 != 575) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x917 = INT8_MIN;
	uint64_t x918 = 1017768182LLU;
	uint64_t x919 = 15308404703LLU;
	uint64_t x920 = UINT64_MAX;
	volatile uint64_t t179 = 1573346439329673LLU;

    t179 = (((x917<=x918)-x919)-x920);

    if (t179 != 18446744058401146914LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x921 = 6538U;
	int32_t x922 = INT32_MIN;
	static volatile int32_t x923 = INT32_MAX;
	uint32_t x924 = UINT32_MAX;
	volatile uint32_t t180 = 392U;

    t180 = (((x921<=x922)-x923)-x924);

    if (t180 != 2147483650U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x926 = INT16_MIN;
	int16_t x927 = INT16_MAX;
	int8_t x928 = INT8_MIN;
	int32_t t181 = 1;

    t181 = (((x925<=x926)-x927)-x928);

    if (t181 != -32639) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x931 = -144LL;
	uint64_t x932 = 52193923LLU;
	uint64_t t182 = 8702096304887864780LLU;

    t182 = (((x929<=x930)-x931)-x932);

    if (t182 != 18446744073657357837LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x933 = INT16_MAX;
	volatile uint8_t x934 = 6U;
	volatile int64_t t183 = 14597077535321LL;

    t183 = (((x933<=x934)-x935)-x936);

    if (t183 != 13625693066183124LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x937 = 1;
	uint64_t x938 = 7721986148287LLU;
	static int64_t x939 = -1LL;
	int8_t x940 = -13;
	int64_t t184 = 7234312801504344LL;

    t184 = (((x937<=x938)-x939)-x940);

    if (t184 != 15LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x941 = -10881;
	int64_t x942 = INT64_MIN;
	volatile uint8_t x943 = 1U;
	int32_t x944 = -1;
	static volatile int32_t t185 = -17095;

    t185 = (((x941<=x942)-x943)-x944);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x946 = INT32_MIN;
	uint8_t x947 = 70U;
	int8_t x948 = INT8_MIN;
	volatile int32_t t186 = -1;

    t186 = (((x945<=x946)-x947)-x948);

    if (t186 != 58) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x949 = 1;
	volatile int16_t x950 = 63;
	uint64_t x951 = 3119LLU;
	int16_t x952 = INT16_MIN;
	volatile uint64_t t187 = 63725032766LLU;

    t187 = (((x949<=x950)-x951)-x952);

    if (t187 != 29650LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x953 = 230U;
	static volatile int16_t x954 = 2079;
	static uint64_t x955 = UINT64_MAX;
	uint32_t x956 = UINT32_MAX;
	volatile uint64_t t188 = 16538702408059LLU;

    t188 = (((x953<=x954)-x955)-x956);

    if (t188 != 18446744069414584323LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x958 = -1LL;
	int64_t x959 = 304370662609946LL;
	static int16_t x960 = INT16_MIN;
	int64_t t189 = 51LL;

    t189 = (((x957<=x958)-x959)-x960);

    if (t189 != -304370662577178LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x962 = 63;
	int32_t x963 = -532;
	uint64_t x964 = 1859195714999947244LLU;
	uint64_t t190 = 1986476284025LLU;

    t190 = (((x961<=x962)-x963)-x964);

    if (t190 != 16587548358709604904LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x965 = -44;
	static volatile uint32_t x967 = 2452958U;
	int32_t x968 = 242;

    t191 = (((x965<=x966)-x967)-x968);

    if (t191 != 4292514097U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x969 = UINT64_MAX;
	uint8_t x970 = UINT8_MAX;
	int64_t x971 = 56828646446374LL;
	int16_t x972 = -1;
	static int64_t t192 = 7856786552272LL;

    t192 = (((x969<=x970)-x971)-x972);

    if (t192 != -56828646446373LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x973 = 0;
	volatile int64_t x974 = INT64_MIN;
	int32_t t193 = -2324532;

    t193 = (((x973<=x974)-x975)-x976);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x977 = 37U;
	static volatile int64_t x978 = INT64_MIN;
	uint16_t x980 = 1U;
	uint32_t t194 = 3755U;

    t194 = (((x977<=x978)-x979)-x980);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x982 = -1LL;
	static volatile uint64_t x983 = 2899312001511LLU;
	static uint32_t x984 = 1000032956U;
	volatile uint64_t t195 = 899348129272052811LLU;

    t195 = (((x981<=x982)-x983)-x984);

    if (t195 != 18446741173397517150LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x985 = 0U;
	uint8_t x987 = 52U;
	int16_t x988 = 3972;
	volatile int32_t t196 = 0;

    t196 = (((x985<=x986)-x987)-x988);

    if (t196 != -4023) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x993 = 25;
	int64_t x994 = INT64_MIN;
	int8_t x995 = INT8_MAX;
	int32_t x996 = -1;
	int32_t t197 = -2127554;

    t197 = (((x993<=x994)-x995)-x996);

    if (t197 != -126) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x997 = UINT32_MAX;
	volatile int16_t x998 = -1;
	volatile uint32_t x999 = UINT32_MAX;
	uint32_t x1000 = 27U;
	uint32_t t198 = 322682U;

    t198 = (((x997<=x998)-x999)-x1000);

    if (t198 != 4294967271U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1001 = INT8_MAX;
	int16_t x1004 = -26;
	volatile int32_t t199 = 20002649;

    t199 = (((x1001<=x1002)-x1003)-x1004);

    if (t199 != 23) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

