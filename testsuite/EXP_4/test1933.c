
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

static int8_t x1 = -1;
uint16_t x2 = UINT16_MAX;
int32_t x12 = -1817800;
int32_t x31 = 291070;
int8_t x36 = INT8_MIN;
volatile uint8_t x38 = 46U;
volatile int32_t t8 = 24;
int32_t x45 = -1;
volatile uint64_t t10 = 5620402LLU;
volatile uint8_t x53 = 0U;
volatile int64_t x55 = INT64_MIN;
uint8_t x71 = UINT8_MAX;
int64_t t16 = 254394353LL;
volatile uint32_t t17 = 653585129U;
static int8_t x86 = -9;
uint32_t x89 = 105842426U;
static int64_t x90 = INT64_MIN;
volatile uint64_t x92 = 1729413778LLU;
volatile int16_t x94 = INT16_MIN;
static volatile int32_t t21 = -812;
static uint16_t x99 = 328U;
int8_t x100 = INT8_MIN;
int16_t x106 = INT16_MIN;
int16_t x116 = 260;
int32_t x120 = 148;
uint32_t x133 = 3U;
int32_t x135 = INT32_MIN;
int8_t x136 = INT8_MAX;
uint32_t t30 = 713499828U;
int8_t x138 = -1;
uint32_t x142 = UINT32_MAX;
int64_t t32 = -1LL;
int16_t x149 = -1;
uint32_t x151 = UINT32_MAX;
volatile int32_t x155 = 10486237;
int64_t x161 = 3971684934380LL;
int16_t x162 = -1;
uint32_t x163 = 1297148U;
static volatile int32_t t39 = -39;
uint16_t x178 = 3947U;
volatile int16_t x180 = 97;
static volatile uint32_t t41 = 227567U;
int32_t x184 = 143116981;
volatile int8_t x187 = INT8_MIN;
int64_t x197 = INT64_MIN;
int64_t x200 = -115873836LL;
int64_t t45 = 2709568587LL;
static volatile int64_t x202 = -1LL;
uint8_t x204 = 2U;
static int64_t x206 = -943661183083LL;
static volatile int64_t t47 = -830LL;
uint8_t x212 = UINT8_MAX;
volatile uint64_t x213 = UINT64_MAX;
volatile int64_t x219 = INT64_MAX;
static int32_t x226 = INT32_MIN;
uint64_t x229 = UINT64_MAX;
static volatile int8_t x231 = INT8_MIN;
volatile int16_t x233 = INT16_MIN;
volatile int16_t x237 = INT16_MAX;
int64_t t55 = -2034869375232LL;
static uint8_t x242 = 40U;
volatile int32_t x255 = INT32_MAX;
int64_t x258 = 1267293297212749LL;
volatile int16_t x262 = -1;
volatile int8_t x272 = -1;
volatile int32_t t63 = 88603;
int8_t x283 = INT8_MIN;
volatile int32_t x293 = -1;
int64_t x296 = -136212930789298LL;
volatile int8_t x299 = INT8_MAX;
int32_t t70 = -330853;
uint64_t x310 = 21729528946468LLU;
uint16_t x314 = 6U;
int8_t x317 = 1;
uint32_t x318 = 32407U;
uint32_t x319 = UINT32_MAX;
static volatile int16_t x320 = INT16_MIN;
int64_t x321 = -1LL;
int32_t x322 = -1;
uint16_t x331 = 1896U;
volatile int64_t t75 = 3405LL;
static volatile int16_t x345 = -2;
int16_t x346 = -1;
int64_t x360 = INT64_MAX;
uint64_t x364 = 7110719395656366LLU;
int16_t x367 = 103;
volatile int64_t t84 = 74945LL;
int32_t t85 = 1;
uint8_t x377 = UINT8_MAX;
int32_t x380 = -12382673;
uint8_t x387 = UINT8_MAX;
int64_t x388 = INT64_MIN;
int64_t t90 = -715392172LL;
uint16_t x400 = UINT16_MAX;
volatile uint32_t t94 = 1U;
uint8_t x429 = UINT8_MAX;
uint32_t x430 = 96U;
static uint32_t t99 = 7070169U;
int16_t x433 = INT16_MAX;
int8_t x437 = INT8_MAX;
int64_t x450 = INT64_MAX;
volatile int8_t x458 = INT8_MIN;
static int32_t x463 = INT32_MIN;
int64_t x464 = -1LL;
int32_t x466 = -1;
static volatile int32_t t107 = -29585271;
int8_t x469 = 7;
uint32_t t109 = 5872156U;
static volatile int64_t x477 = 604727LL;
int8_t x496 = -33;
static int32_t t114 = 3468207;
int8_t x503 = 54;
volatile int16_t x509 = -720;
uint8_t x512 = 3U;
int32_t x514 = -160934;
volatile uint8_t x523 = 0U;
int32_t x532 = -1;
static uint64_t x534 = 467LLU;
uint16_t x541 = 3107U;
uint64_t x550 = UINT64_MAX;
int16_t x552 = -5370;
volatile uint64_t t126 = 1985729087193091147LLU;
volatile int64_t x555 = 492159LL;
volatile int64_t x561 = -1LL;
uint8_t x566 = 5U;
static uint16_t x578 = 24U;
uint8_t x589 = 4U;
volatile uint8_t x593 = 6U;
volatile int64_t x599 = -9LL;
int32_t x615 = 426;
int32_t x620 = 2202701;
int64_t t140 = 197888909LL;
int16_t x629 = INT16_MAX;
static volatile int32_t t144 = 47;
int64_t x660 = INT64_MAX;
static int32_t x663 = INT32_MIN;
static uint8_t x670 = 2U;
int8_t x672 = INT8_MIN;
volatile uint8_t x674 = 0U;
volatile uint64_t x683 = 8946555205681192731LLU;
static int16_t x686 = 12339;
static volatile int32_t x688 = 228564415;
volatile int32_t t153 = -50241002;
int8_t x689 = -4;
static uint8_t x692 = 4U;
uint32_t t154 = 3U;
uint8_t x702 = 1U;
uint8_t x703 = 2U;
int16_t x709 = INT16_MIN;
int64_t x723 = INT64_MIN;
int64_t x724 = -99710LL;
volatile uint64_t x735 = 1385963341923LLU;
int16_t x748 = 39;
int8_t x764 = INT8_MAX;
int16_t x765 = INT16_MAX;
int16_t x777 = 6;
int32_t x778 = INT32_MIN;
volatile uint32_t x782 = UINT32_MAX;
int16_t x786 = INT16_MAX;
int16_t x789 = 10;
int32_t x790 = INT32_MIN;
int64_t x796 = 10333103LL;
int32_t t180 = 9013323;
int64_t x798 = 7720314LL;
int32_t x800 = -9925019;
static int64_t t181 = 361LL;
int64_t x814 = -1759548041LL;
static int8_t x818 = INT8_MAX;
static int64_t x826 = 18LL;
uint64_t x833 = 3969406933243261LLU;
int32_t x836 = -1;
uint64_t t190 = 1092568853009020418LLU;
volatile int8_t x844 = -2;
static int32_t x848 = -1;
volatile uint64_t t193 = 267965514346184LLU;
int8_t x853 = -1;
static uint64_t x858 = 3291LLU;
uint8_t x861 = UINT8_MAX;
uint64_t x862 = UINT64_MAX;
int64_t t197 = 1288224551LL;


void f0(void) {
    	int8_t x3 = 7;
	int64_t x4 = -837621662267LL;
	volatile int32_t t0 = -113;

    t0 = (x1+(x2|(x3<=x4)));

    if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	int8_t x6 = -1;
	uint16_t x7 = 1U;
	static volatile int32_t x8 = 264882;
	static int32_t t1 = -1082;

    t1 = (x5+(x6|(x7<=x8)));

    if (t1 != 32766) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int16_t x10 = 1;
	int8_t x11 = INT8_MIN;
	volatile int64_t t2 = -14746769972LL;

    t2 = (x9+(x10|(x11<=x12)));

    if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -36;
	int32_t x14 = 0;
	volatile int32_t x15 = 421276;
	int64_t x16 = INT64_MIN;
	int32_t t3 = -45275;

    t3 = (x13+(x14|(x15<=x16)));

    if (t3 != -36) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = -2;
	uint32_t x18 = UINT32_MAX;
	volatile uint16_t x19 = UINT16_MAX;
	static int16_t x20 = 6;
	uint32_t t4 = 253U;

    t4 = (x17+(x18|(x19<=x20)));

    if (t4 != 4294967293U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x25 = 166LLU;
	int32_t x26 = -1;
	static int64_t x27 = -1LL;
	int32_t x28 = INT32_MAX;
	uint64_t t5 = 3LLU;

    t5 = (x25+(x26|(x27<=x28)));

    if (t5 != 165LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x29 = UINT32_MAX;
	uint64_t x30 = 408803LLU;
	uint8_t x32 = 1U;
	uint64_t t6 = 63183328LLU;

    t6 = (x29+(x30|(x31<=x32)));

    if (t6 != 4295376098LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x33 = INT8_MIN;
	static int8_t x34 = INT8_MAX;
	int64_t x35 = -1LL;
	int32_t t7 = 992416;

    t7 = (x33+(x34|(x35<=x36)));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x37 = 7U;
	uint16_t x39 = 80U;
	static uint8_t x40 = UINT8_MAX;

    t8 = (x37+(x38|(x39<=x40)));

    if (t8 != 54) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x41 = 2008;
	uint32_t x42 = 12U;
	int16_t x43 = -67;
	int16_t x44 = -1;
	static volatile uint32_t t9 = 106U;

    t9 = (x41+(x42|(x43<=x44)));

    if (t9 != 2021U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x46 = 769LLU;
	int64_t x47 = INT64_MAX;
	uint64_t x48 = UINT64_MAX;

    t10 = (x45+(x46|(x47<=x48)));

    if (t10 != 768LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MIN;
	int8_t x50 = 34;
	int64_t x51 = -1LL;
	int16_t x52 = INT16_MAX;
	int64_t t11 = 147354516321LL;

    t11 = (x49+(x50|(x51<=x52)));

    if (t11 != -9223372036854775773LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x54 = INT32_MIN;
	int8_t x56 = INT8_MAX;
	int32_t t12 = 112320797;

    t12 = (x53+(x54|(x55<=x56)));

    if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MIN;
	static volatile int16_t x58 = INT16_MAX;
	volatile uint16_t x59 = 1661U;
	int8_t x60 = -1;
	int32_t t13 = 302213;

    t13 = (x57+(x58|(x59<=x60)));

    if (t13 != -2147450881) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = 13795;
	volatile int16_t x66 = -138;
	int8_t x67 = INT8_MIN;
	int32_t x68 = INT32_MAX;
	int32_t t14 = -429200796;

    t14 = (x65+(x66|(x67<=x68)));

    if (t14 != 13658) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = INT16_MIN;
	uint16_t x70 = 0U;
	int32_t x72 = -143625;
	volatile int32_t t15 = -937;

    t15 = (x69+(x70|(x71<=x72)));

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = -9195;
	int64_t x74 = -1LL;
	volatile int8_t x75 = -1;
	volatile int64_t x76 = -13538804887981LL;

    t16 = (x73+(x74|(x75<=x76)));

    if (t16 != -9196LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = INT32_MIN;
	uint32_t x78 = 462715U;
	uint8_t x79 = 50U;
	uint32_t x80 = UINT32_MAX;

    t17 = (x77+(x78|(x79<=x80)));

    if (t17 != 2147946363U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x81 = INT64_MIN;
	volatile uint32_t x82 = 51U;
	int16_t x83 = INT16_MIN;
	int16_t x84 = -8600;
	int64_t t18 = 99851583351LL;

    t18 = (x81+(x82|(x83<=x84)));

    if (t18 != -9223372036854775757LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x85 = 3250181U;
	int32_t x87 = INT32_MAX;
	volatile uint16_t x88 = 30191U;
	volatile uint32_t t19 = 4030979U;

    t19 = (x85+(x86|(x87<=x88)));

    if (t19 != 3250172U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x91 = UINT8_MAX;
	static volatile int64_t t20 = -15954LL;

    t20 = (x89+(x90|(x91<=x92)));

    if (t20 != -9223372036748933381LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x93 = -38794297;
	static volatile int16_t x95 = 1;
	static int16_t x96 = 0;

    t21 = (x93+(x94|(x95<=x96)));

    if (t21 != -38827065) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x97 = 0;
	static int32_t x98 = 111152;
	int32_t t22 = 688953;

    t22 = (x97+(x98|(x99<=x100)));

    if (t22 != 111152) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = INT8_MIN;
	int32_t x102 = 833220;
	int8_t x103 = -1;
	int8_t x104 = 6;
	int32_t t23 = -2867435;

    t23 = (x101+(x102|(x103<=x104)));

    if (t23 != 833093) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = -1LL;
	uint16_t x107 = 90U;
	int64_t x108 = 69033553531363069LL;
	volatile int64_t t24 = 9184522276LL;

    t24 = (x105+(x106|(x107<=x108)));

    if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x109 = 0U;
	int32_t x110 = -1;
	uint16_t x111 = UINT16_MAX;
	int64_t x112 = 11017537907LL;
	uint32_t t25 = UINT32_MAX;

    t25 = (x109+(x110|(x111<=x112)));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x113 = 3;
	int32_t x114 = 768884995;
	volatile int64_t x115 = -7813789026LL;
	int32_t t26 = -2;

    t26 = (x113+(x114|(x115<=x116)));

    if (t26 != 768884998) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x117 = INT16_MIN;
	int8_t x118 = INT8_MIN;
	int64_t x119 = -1LL;
	int32_t t27 = -8000;

    t27 = (x117+(x118|(x119<=x120)));

    if (t27 != -32895) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint64_t x121 = 0LLU;
	int32_t x122 = -53248542;
	static int8_t x123 = -1;
	int16_t x124 = -1;
	volatile uint64_t t28 = 210796082253517LLU;

    t28 = (x121+(x122|(x123<=x124)));

    if (t28 != 18446744073656303075LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = -1LL;
	static int8_t x126 = 1;
	volatile uint8_t x127 = 40U;
	static uint64_t x128 = UINT64_MAX;
	volatile int64_t t29 = 65070914LL;

    t29 = (x125+(x126|(x127<=x128)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x134 = 12;

    t30 = (x133+(x134|(x135<=x136)));

    if (t30 != 16U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x137 = 132416110U;
	int32_t x139 = INT32_MIN;
	int16_t x140 = INT16_MAX;
	volatile uint32_t t31 = 7145U;

    t31 = (x137+(x138|(x139<=x140)));

    if (t31 != 132416109U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = INT64_MIN;
	int16_t x143 = 1;
	int64_t x144 = INT64_MIN;

    t32 = (x141+(x142|(x143<=x144)));

    if (t32 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MAX;
	int64_t x147 = -206745764623784LL;
	uint16_t x148 = UINT16_MAX;
	static volatile int32_t t33 = -82811;

    t33 = (x145+(x146|(x147<=x148)));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x150 = INT64_MAX;
	static int64_t x152 = INT64_MAX;
	volatile int64_t t34 = 1LL;

    t34 = (x149+(x150|(x151<=x152)));

    if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = INT8_MAX;
	int8_t x154 = INT8_MAX;
	volatile uint32_t x156 = 739706U;
	int32_t t35 = 1958095;

    t35 = (x153+(x154|(x155<=x156)));

    if (t35 != 254) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x157 = -1;
	int8_t x158 = INT8_MAX;
	uint64_t x159 = UINT64_MAX;
	static int32_t x160 = INT32_MIN;
	static int32_t t36 = 121058147;

    t36 = (x157+(x158|(x159<=x160)));

    if (t36 != 126) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x164 = 153899237LLU;
	int64_t t37 = -203337229174LL;

    t37 = (x161+(x162|(x163<=x164)));

    if (t37 != 3971684934379LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x165 = INT8_MIN;
	static int16_t x166 = -1;
	static volatile uint16_t x167 = 2U;
	int8_t x168 = INT8_MAX;
	volatile int32_t t38 = -58;

    t38 = (x165+(x166|(x167<=x168)));

    if (t38 != -129) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x169 = INT32_MIN;
	static uint8_t x170 = 13U;
	int16_t x171 = -1;
	static int16_t x172 = INT16_MAX;

    t39 = (x169+(x170|(x171<=x172)));

    if (t39 != -2147483635) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x173 = 98U;
	static int8_t x174 = 46;
	static int64_t x175 = INT64_MAX;
	volatile uint32_t x176 = 16932U;
	volatile uint32_t t40 = 2096U;

    t40 = (x173+(x174|(x175<=x176)));

    if (t40 != 144U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x177 = UINT32_MAX;
	volatile int16_t x179 = -1;

    t41 = (x177+(x178|(x179<=x180)));

    if (t41 != 3946U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x181 = 1904U;
	int64_t x182 = 1425740156608233427LL;
	int32_t x183 = 5269806;
	volatile int64_t t42 = -23003690717LL;

    t42 = (x181+(x182|(x183<=x184)));

    if (t42 != 1425740156608235331LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x185 = UINT8_MAX;
	uint8_t x186 = UINT8_MAX;
	uint16_t x188 = 1878U;
	volatile int32_t t43 = -25;

    t43 = (x185+(x186|(x187<=x188)));

    if (t43 != 510) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x189 = INT32_MAX;
	int16_t x190 = INT16_MIN;
	static uint8_t x191 = 2U;
	volatile int64_t x192 = INT64_MIN;
	volatile int32_t t44 = -250103;

    t44 = (x189+(x190|(x191<=x192)));

    if (t44 != 2147450879) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x198 = 2950U;
	uint64_t x199 = 1LLU;

    t45 = (x197+(x198|(x199<=x200)));

    if (t45 != -9223372036854772857LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x201 = 30;
	volatile int64_t x203 = INT64_MIN;
	volatile int64_t t46 = 25522351LL;

    t46 = (x201+(x202|(x203<=x204)));

    if (t46 != 29LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x205 = -1LL;
	uint64_t x207 = UINT64_MAX;
	int16_t x208 = -1;

    t47 = (x205+(x206|(x207<=x208)));

    if (t47 != -943661183084LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x209 = INT16_MAX;
	static uint8_t x210 = UINT8_MAX;
	static int16_t x211 = INT16_MAX;
	volatile int32_t t48 = -762390;

    t48 = (x209+(x210|(x211<=x212)));

    if (t48 != 33022) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x214 = INT16_MIN;
	volatile int32_t x215 = 786428;
	int8_t x216 = 35;
	volatile uint64_t t49 = 909LLU;

    t49 = (x213+(x214|(x215<=x216)));

    if (t49 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x217 = UINT64_MAX;
	int16_t x218 = INT16_MAX;
	int32_t x220 = -197525;
	uint64_t t50 = 21064216231272LLU;

    t50 = (x217+(x218|(x219<=x220)));

    if (t50 != 32766LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x221 = INT8_MIN;
	int32_t x222 = -1;
	int16_t x223 = INT16_MIN;
	volatile uint32_t x224 = 17438806U;
	volatile int32_t t51 = 187548755;

    t51 = (x221+(x222|(x223<=x224)));

    if (t51 != -129) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x225 = 1;
	static int32_t x227 = INT32_MIN;
	volatile int8_t x228 = INT8_MIN;
	int32_t t52 = 1328182;

    t52 = (x225+(x226|(x227<=x228)));

    if (t52 != -2147483646) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x230 = 1U;
	uint32_t x232 = UINT32_MAX;
	static uint64_t t53 = 64512739LLU;

    t53 = (x229+(x230|(x231<=x232)));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x234 = 9034U;
	volatile uint32_t x235 = UINT32_MAX;
	static int64_t x236 = INT64_MIN;
	uint32_t t54 = 743266133U;

    t54 = (x233+(x234|(x235<=x236)));

    if (t54 != 4294943562U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x238 = INT64_MIN;
	uint8_t x239 = 24U;
	volatile int32_t x240 = -1;

    t55 = (x237+(x238|(x239<=x240)));

    if (t55 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x241 = INT16_MAX;
	static uint64_t x243 = UINT64_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t56 = 2091436;

    t56 = (x241+(x242|(x243<=x244)));

    if (t56 != 32807) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x245 = INT64_MIN;
	int32_t x246 = INT32_MAX;
	int32_t x247 = 0;
	uint16_t x248 = UINT16_MAX;
	volatile int64_t t57 = -6946000385283LL;

    t57 = (x245+(x246|(x247<=x248)));

    if (t57 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x253 = -1LL;
	uint16_t x254 = 22U;
	volatile int32_t x256 = 216114671;
	volatile int64_t t58 = -235480160850634LL;

    t58 = (x253+(x254|(x255<=x256)));

    if (t58 != 21LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x257 = UINT64_MAX;
	static volatile int32_t x259 = -1;
	int64_t x260 = INT64_MIN;
	uint64_t t59 = 778549741665862602LLU;

    t59 = (x257+(x258|(x259<=x260)));

    if (t59 != 1267293297212748LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x261 = 0U;
	int8_t x263 = -1;
	static uint32_t x264 = UINT32_MAX;
	static int32_t t60 = 1377559;

    t60 = (x261+(x262|(x263<=x264)));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x265 = 86U;
	int64_t x266 = -1LL;
	int64_t x267 = INT64_MIN;
	int32_t x268 = INT32_MIN;
	int64_t t61 = -205208684056LL;

    t61 = (x265+(x266|(x267<=x268)));

    if (t61 != 85LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x269 = -3;
	static volatile uint64_t x270 = UINT64_MAX;
	int8_t x271 = -1;
	volatile uint64_t t62 = 133147893797931658LLU;

    t62 = (x269+(x270|(x271<=x272)));

    if (t62 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x277 = 12162U;
	static int32_t x278 = -27148218;
	volatile int8_t x279 = 1;
	static uint64_t x280 = UINT64_MAX;

    t63 = (x277+(x278|(x279<=x280)));

    if (t63 != -27136055) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x281 = 35562;
	int64_t x282 = -1LL;
	volatile int32_t x284 = -1;
	int64_t t64 = 13808065721LL;

    t64 = (x281+(x282|(x283<=x284)));

    if (t64 != 35561LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x285 = 50;
	uint64_t x286 = UINT64_MAX;
	uint64_t x287 = 67442LLU;
	int8_t x288 = INT8_MIN;
	volatile uint64_t t65 = 23964575425701LLU;

    t65 = (x285+(x286|(x287<=x288)));

    if (t65 != 49LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x289 = INT16_MAX;
	volatile int16_t x290 = INT16_MAX;
	int32_t x291 = 1195;
	int8_t x292 = -1;
	volatile int32_t t66 = 9;

    t66 = (x289+(x290|(x291<=x292)));

    if (t66 != 65534) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x294 = INT32_MAX;
	int64_t x295 = 8004560493236LL;
	int32_t t67 = 119;

    t67 = (x293+(x294|(x295<=x296)));

    if (t67 != 2147483646) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x297 = 1;
	int32_t x298 = INT32_MIN;
	uint8_t x300 = 43U;
	volatile int32_t t68 = -9534;

    t68 = (x297+(x298|(x299<=x300)));

    if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x301 = -1;
	int64_t x302 = 327633875027LL;
	static int64_t x303 = 714673799364LL;
	volatile int8_t x304 = -8;
	volatile int64_t t69 = -1818241820150667LL;

    t69 = (x301+(x302|(x303<=x304)));

    if (t69 != 327633875026LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x305 = 0U;
	volatile int32_t x306 = 29595541;
	int16_t x307 = INT16_MAX;
	uint64_t x308 = UINT64_MAX;

    t70 = (x305+(x306|(x307<=x308)));

    if (t70 != 29595541) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x309 = INT32_MAX;
	int16_t x311 = 57;
	int16_t x312 = 63;
	uint64_t t71 = 5298LLU;

    t71 = (x309+(x310|(x311<=x312)));

    if (t71 != 21731676430116LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x313 = -28LL;
	int64_t x315 = INT64_MIN;
	int8_t x316 = 4;
	volatile int64_t t72 = 527347095018227LL;

    t72 = (x313+(x314|(x315<=x316)));

    if (t72 != -21LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t t73 = 6258U;

    t73 = (x317+(x318|(x319<=x320)));

    if (t73 != 32408U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x323 = INT32_MIN;
	int16_t x324 = INT16_MIN;
	volatile int64_t t74 = 114LL;

    t74 = (x321+(x322|(x323<=x324)));

    if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x329 = INT64_MIN;
	static uint32_t x330 = 1054U;
	int8_t x332 = INT8_MAX;

    t75 = (x329+(x330|(x331<=x332)));

    if (t75 != -9223372036854774754LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x333 = UINT32_MAX;
	int32_t x334 = INT32_MIN;
	static uint16_t x335 = UINT16_MAX;
	volatile uint8_t x336 = 3U;
	static uint32_t t76 = 7903U;

    t76 = (x333+(x334|(x335<=x336)));

    if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x341 = INT8_MIN;
	volatile int32_t x342 = -1;
	int32_t x343 = 605398295;
	int32_t x344 = INT32_MIN;
	int32_t t77 = 21;

    t77 = (x341+(x342|(x343<=x344)));

    if (t77 != -129) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x347 = 1;
	uint32_t x348 = UINT32_MAX;
	int32_t t78 = 109964598;

    t78 = (x345+(x346|(x347<=x348)));

    if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x349 = -1LL;
	volatile uint8_t x350 = 92U;
	uint64_t x351 = 166820521664LLU;
	volatile uint64_t x352 = 5328425082084427LLU;
	int64_t t79 = -4570898LL;

    t79 = (x349+(x350|(x351<=x352)));

    if (t79 != 92LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x353 = -1LL;
	uint64_t x354 = 122551765489973965LLU;
	int8_t x355 = INT8_MAX;
	int16_t x356 = INT16_MAX;
	volatile uint64_t t80 = 28LLU;

    t80 = (x353+(x354|(x355<=x356)));

    if (t80 != 122551765489973964LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x357 = 1;
	int64_t x358 = -1LL;
	static volatile uint64_t x359 = 6585444957168LLU;
	volatile int64_t t81 = 66003LL;

    t81 = (x357+(x358|(x359<=x360)));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x361 = 7U;
	volatile int8_t x362 = -1;
	uint32_t x363 = 140U;
	int32_t t82 = -12;

    t82 = (x361+(x362|(x363<=x364)));

    if (t82 != 6) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x365 = UINT32_MAX;
	int32_t x366 = INT32_MIN;
	uint64_t x368 = 63226510LLU;
	static uint32_t t83 = 29U;

    t83 = (x365+(x366|(x367<=x368)));

    if (t83 != 2147483648U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MAX;
	int64_t x371 = -225LL;
	uint16_t x372 = 223U;

    t84 = (x369+(x370|(x371<=x372)));

    if (t84 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x373 = 14U;
	uint8_t x374 = UINT8_MAX;
	uint64_t x375 = 7LLU;
	int8_t x376 = -1;

    t85 = (x373+(x374|(x375<=x376)));

    if (t85 != 269) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x378 = INT16_MAX;
	int64_t x379 = -1LL;
	int32_t t86 = -287696;

    t86 = (x377+(x378|(x379<=x380)));

    if (t86 != 33022) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x381 = INT8_MIN;
	static int32_t x382 = INT32_MAX;
	int16_t x383 = INT16_MAX;
	static volatile uint32_t x384 = UINT32_MAX;
	volatile int32_t t87 = -25211;

    t87 = (x381+(x382|(x383<=x384)));

    if (t87 != 2147483519) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x385 = INT16_MIN;
	static int32_t x386 = -1;
	static int32_t t88 = -23529;

    t88 = (x385+(x386|(x387<=x388)));

    if (t88 != -32769) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x389 = 521715LLU;
	static int16_t x390 = INT16_MAX;
	static int32_t x391 = 37;
	uint16_t x392 = 678U;
	volatile uint64_t t89 = 17331799111302LLU;

    t89 = (x389+(x390|(x391<=x392)));

    if (t89 != 554482LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x393 = 1965U;
	static int64_t x394 = 443173320389387LL;
	volatile uint8_t x395 = UINT8_MAX;
	int16_t x396 = -1;

    t90 = (x393+(x394|(x395<=x396)));

    if (t90 != 443173320391352LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x397 = UINT8_MAX;
	static int32_t x398 = -1;
	uint16_t x399 = 11695U;
	static int32_t t91 = 3633;

    t91 = (x397+(x398|(x399<=x400)));

    if (t91 != 254) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x401 = -2;
	static uint32_t x402 = UINT32_MAX;
	uint8_t x403 = 3U;
	uint32_t x404 = 33221520U;
	uint32_t t92 = 29U;

    t92 = (x401+(x402|(x403<=x404)));

    if (t92 != 4294967293U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x405 = INT16_MAX;
	static volatile int8_t x406 = 56;
	int64_t x407 = 34LL;
	volatile uint16_t x408 = 4896U;
	int32_t t93 = 2600;

    t93 = (x405+(x406|(x407<=x408)));

    if (t93 != 32824) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x409 = UINT32_MAX;
	int8_t x410 = -1;
	int32_t x411 = 5;
	int32_t x412 = -21864713;

    t94 = (x409+(x410|(x411<=x412)));

    if (t94 != 4294967294U) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x413 = INT64_MAX;
	int32_t x414 = INT32_MIN;
	uint64_t x415 = 278820LLU;
	volatile int16_t x416 = INT16_MAX;
	int64_t t95 = 82967920768132LL;

    t95 = (x413+(x414|(x415<=x416)));

    if (t95 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x417 = -16;
	int32_t x418 = 72;
	static volatile uint32_t x419 = 1U;
	int32_t x420 = INT32_MIN;
	static volatile int32_t t96 = 0;

    t96 = (x417+(x418|(x419<=x420)));

    if (t96 != 57) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x421 = UINT64_MAX;
	uint64_t x422 = 4198141096LLU;
	static volatile int16_t x423 = INT16_MAX;
	volatile uint64_t x424 = UINT64_MAX;
	static uint64_t t97 = 16962912156194507LLU;

    t97 = (x421+(x422|(x423<=x424)));

    if (t97 != 4198141096LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x425 = 0U;
	volatile int8_t x426 = -1;
	int8_t x427 = INT8_MIN;
	int16_t x428 = INT16_MAX;
	int32_t t98 = 684711017;

    t98 = (x425+(x426|(x427<=x428)));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x431 = -5680LL;
	int16_t x432 = -96;

    t99 = (x429+(x430|(x431<=x432)));

    if (t99 != 352U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x434 = -1;
	int16_t x435 = -6;
	int32_t x436 = INT32_MAX;
	volatile int32_t t100 = -61765049;

    t100 = (x433+(x434|(x435<=x436)));

    if (t100 != 32766) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x438 = 468LL;
	int8_t x439 = INT8_MAX;
	int8_t x440 = INT8_MAX;
	volatile int64_t t101 = 79658LL;

    t101 = (x437+(x438|(x439<=x440)));

    if (t101 != 596LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x441 = INT16_MIN;
	int64_t x442 = -3962828317383892755LL;
	volatile uint16_t x443 = 8U;
	volatile int64_t x444 = -1LL;
	volatile int64_t t102 = -951635789533652LL;

    t102 = (x441+(x442|(x443<=x444)));

    if (t102 != -3962828317383925523LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x449 = -34512521;
	uint32_t x451 = 11314102U;
	uint16_t x452 = UINT16_MAX;
	volatile int64_t t103 = 3LL;

    t103 = (x449+(x450|(x451<=x452)));

    if (t103 != 9223372036820263286LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x453 = -1LL;
	static int32_t x454 = INT32_MAX;
	volatile int32_t x455 = -1;
	static uint32_t x456 = 1579243U;
	volatile int64_t t104 = 108425655LL;

    t104 = (x453+(x454|(x455<=x456)));

    if (t104 != 2147483646LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x457 = 12660304LLU;
	static int16_t x459 = INT16_MIN;
	static int16_t x460 = -1104;
	volatile uint64_t t105 = 102030976790441LLU;

    t105 = (x457+(x458|(x459<=x460)));

    if (t105 != 12660177LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x461 = 3514U;
	volatile int16_t x462 = INT16_MIN;
	volatile uint32_t t106 = 1747U;

    t106 = (x461+(x462|(x463<=x464)));

    if (t106 != 4294938043U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x465 = -1;
	volatile uint32_t x467 = UINT32_MAX;
	volatile uint16_t x468 = 233U;

    t107 = (x465+(x466|(x467<=x468)));

    if (t107 != -2) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x470 = INT64_MIN;
	int16_t x471 = -2;
	int8_t x472 = 1;
	static volatile int64_t t108 = -110077LL;

    t108 = (x469+(x470|(x471<=x472)));

    if (t108 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x473 = INT32_MIN;
	uint32_t x474 = 3331907U;
	uint16_t x475 = UINT16_MAX;
	uint16_t x476 = UINT16_MAX;

    t109 = (x473+(x474|(x475<=x476)));

    if (t109 != 2150815555U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x478 = INT32_MAX;
	int8_t x479 = 9;
	static volatile int16_t x480 = INT16_MAX;
	static int64_t t110 = -148946LL;

    t110 = (x477+(x478|(x479<=x480)));

    if (t110 != 2148088374LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x481 = -1;
	uint8_t x482 = 21U;
	static int32_t x483 = -1;
	static int32_t x484 = -1;
	int32_t t111 = 47398163;

    t111 = (x481+(x482|(x483<=x484)));

    if (t111 != 20) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x489 = INT8_MIN;
	int16_t x490 = INT16_MIN;
	int16_t x491 = 15927;
	int32_t x492 = -1;
	int32_t t112 = 1;

    t112 = (x489+(x490|(x491<=x492)));

    if (t112 != -32896) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x493 = 3292U;
	uint64_t x494 = 9189448613166657LLU;
	int8_t x495 = 0;
	uint64_t t113 = 37524LLU;

    t113 = (x493+(x494|(x495<=x496)));

    if (t113 != 9189448613169949LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x497 = 127U;
	static int16_t x498 = -97;
	static volatile int32_t x499 = INT32_MIN;
	static volatile int32_t x500 = -249;

    t114 = (x497+(x498|(x499<=x500)));

    if (t114 != 30) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x501 = INT16_MIN;
	uint32_t x502 = 0U;
	static uint64_t x504 = 73630331824278777LLU;
	static uint32_t t115 = 58U;

    t115 = (x501+(x502|(x503<=x504)));

    if (t115 != 4294934529U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x510 = -58352LL;
	volatile int8_t x511 = INT8_MIN;
	static volatile int64_t t116 = -1117139207753LL;

    t116 = (x509+(x510|(x511<=x512)));

    if (t116 != -59071LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x513 = INT8_MIN;
	uint8_t x515 = 1U;
	int64_t x516 = INT64_MAX;
	volatile int32_t t117 = 0;

    t117 = (x513+(x514|(x515<=x516)));

    if (t117 != -161061) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x517 = -1;
	uint8_t x518 = 0U;
	uint32_t x519 = 1046160976U;
	int8_t x520 = 0;
	int32_t t118 = 18171;

    t118 = (x517+(x518|(x519<=x520)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x521 = -1;
	int8_t x522 = -19;
	volatile int32_t x524 = INT32_MIN;
	int32_t t119 = -31859;

    t119 = (x521+(x522|(x523<=x524)));

    if (t119 != -20) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x525 = INT32_MAX;
	static uint64_t x526 = 7312555826791583LLU;
	int64_t x527 = -1LL;
	int64_t x528 = -1048875807LL;
	uint64_t t120 = 100783LLU;

    t120 = (x525+(x526|(x527<=x528)));

    if (t120 != 7312557974275230LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x529 = UINT32_MAX;
	uint32_t x530 = 20U;
	int8_t x531 = INT8_MIN;
	uint32_t t121 = 78157662U;

    t121 = (x529+(x530|(x531<=x532)));

    if (t121 != 20U) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x533 = INT16_MIN;
	volatile int32_t x535 = INT32_MAX;
	uint8_t x536 = 52U;
	uint64_t t122 = 387437703886941LLU;

    t122 = (x533+(x534|(x535<=x536)));

    if (t122 != 18446744073709519315LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x537 = 0;
	int8_t x538 = -4;
	int32_t x539 = 46157802;
	int8_t x540 = -9;
	int32_t t123 = -24530382;

    t123 = (x537+(x538|(x539<=x540)));

    if (t123 != -4) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x542 = 184383;
	int32_t x543 = INT32_MIN;
	static int16_t x544 = -56;
	static int32_t t124 = 365709;

    t124 = (x541+(x542|(x543<=x544)));

    if (t124 != 187490) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x545 = UINT8_MAX;
	int32_t x546 = -1;
	int8_t x547 = INT8_MAX;
	int32_t x548 = INT32_MIN;
	int32_t t125 = -4;

    t125 = (x545+(x546|(x547<=x548)));

    if (t125 != 254) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x549 = -1;
	int64_t x551 = -804LL;

    t126 = (x549+(x550|(x551<=x552)));

    if (t126 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x553 = 2776U;
	uint64_t x554 = UINT64_MAX;
	int32_t x556 = -1;
	uint64_t t127 = 30LLU;

    t127 = (x553+(x554|(x555<=x556)));

    if (t127 != 2775LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x562 = INT32_MIN;
	uint32_t x563 = 1423574U;
	int8_t x564 = -1;
	volatile int64_t t128 = -64665453LL;

    t128 = (x561+(x562|(x563<=x564)));

    if (t128 != -2147483648LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x565 = -1LL;
	uint64_t x567 = UINT64_MAX;
	static uint8_t x568 = UINT8_MAX;
	volatile int64_t t129 = -1224978LL;

    t129 = (x565+(x566|(x567<=x568)));

    if (t129 != 4LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x569 = 154286U;
	static volatile uint8_t x570 = 2U;
	uint32_t x571 = 2952U;
	int64_t x572 = -2224912503440278LL;
	uint32_t t130 = 250813U;

    t130 = (x569+(x570|(x571<=x572)));

    if (t130 != 154288U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x573 = INT8_MAX;
	volatile int8_t x574 = -36;
	int8_t x575 = INT8_MAX;
	volatile int8_t x576 = 3;
	volatile int32_t t131 = 4;

    t131 = (x573+(x574|(x575<=x576)));

    if (t131 != 91) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x577 = INT8_MAX;
	int32_t x579 = 1288475;
	int32_t x580 = -1;
	volatile int32_t t132 = 251194348;

    t132 = (x577+(x578|(x579<=x580)));

    if (t132 != 151) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x581 = INT64_MIN;
	uint16_t x582 = 9U;
	int8_t x583 = INT8_MIN;
	static uint64_t x584 = UINT64_MAX;
	static int64_t t133 = 44586935122929LL;

    t133 = (x581+(x582|(x583<=x584)));

    if (t133 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x590 = INT8_MIN;
	volatile int32_t x591 = -58552907;
	int64_t x592 = 0LL;
	static volatile int32_t t134 = -38;

    t134 = (x589+(x590|(x591<=x592)));

    if (t134 != -123) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x594 = 56U;
	static int8_t x595 = -1;
	static int16_t x596 = INT16_MIN;
	int32_t t135 = -9460;

    t135 = (x593+(x594|(x595<=x596)));

    if (t135 != 62) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x597 = -4293;
	int8_t x598 = -1;
	uint8_t x600 = 5U;
	int32_t t136 = 504918848;

    t136 = (x597+(x598|(x599<=x600)));

    if (t136 != -4294) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x605 = -1;
	volatile uint16_t x606 = UINT16_MAX;
	uint32_t x607 = 352U;
	uint16_t x608 = 13U;
	static int32_t t137 = 12;

    t137 = (x605+(x606|(x607<=x608)));

    if (t137 != 65534) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x609 = 0U;
	int64_t x610 = -25829742167278744LL;
	volatile uint8_t x611 = 0U;
	volatile int32_t x612 = -1;
	volatile int64_t t138 = -288164822271832LL;

    t138 = (x609+(x610|(x611<=x612)));

    if (t138 != -25829742167278744LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x613 = -520300185870686716LL;
	uint8_t x614 = 0U;
	int32_t x616 = INT32_MIN;
	static volatile int64_t t139 = 25669644016LL;

    t139 = (x613+(x614|(x615<=x616)));

    if (t139 != -520300185870686716LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x617 = 2091009487416221191LL;
	int32_t x618 = INT32_MAX;
	static int32_t x619 = -1;

    t140 = (x617+(x618|(x619<=x620)));

    if (t140 != 2091009489563704838LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x621 = -56708;
	volatile int64_t x622 = -1LL;
	int64_t x623 = -1LL;
	int64_t x624 = -15660660895443LL;
	volatile int64_t t141 = -138140359185889LL;

    t141 = (x621+(x622|(x623<=x624)));

    if (t141 != -56709LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x625 = -1;
	int32_t x626 = 28431;
	static uint16_t x627 = 28942U;
	uint32_t x628 = UINT32_MAX;
	static volatile int32_t t142 = 7908756;

    t142 = (x625+(x626|(x627<=x628)));

    if (t142 != 28430) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x630 = 437U;
	int16_t x631 = INT16_MIN;
	static uint64_t x632 = UINT64_MAX;
	volatile int32_t t143 = 44046;

    t143 = (x629+(x630|(x631<=x632)));

    if (t143 != 33204) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x637 = -1;
	uint16_t x638 = 0U;
	int32_t x639 = 26129753;
	static uint32_t x640 = 625U;

    t144 = (x637+(x638|(x639<=x640)));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x641 = INT32_MIN;
	uint16_t x642 = 2U;
	volatile uint32_t x643 = UINT32_MAX;
	int8_t x644 = 1;
	volatile int32_t t145 = -39;

    t145 = (x641+(x642|(x643<=x644)));

    if (t145 != -2147483646) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x645 = INT16_MIN;
	int32_t x646 = 938041;
	volatile int32_t x647 = INT32_MIN;
	int8_t x648 = INT8_MIN;
	int32_t t146 = 296033;

    t146 = (x645+(x646|(x647<=x648)));

    if (t146 != 905273) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x649 = INT8_MIN;
	uint8_t x650 = 63U;
	static uint32_t x651 = 12U;
	static uint8_t x652 = 1U;
	int32_t t147 = -5664532;

    t147 = (x649+(x650|(x651<=x652)));

    if (t147 != -65) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x657 = INT16_MIN;
	uint8_t x658 = 1U;
	int32_t x659 = 6;
	volatile int32_t t148 = 767706;

    t148 = (x657+(x658|(x659<=x660)));

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x661 = 34;
	volatile uint32_t x662 = 59642992U;
	static int16_t x664 = -556;
	static uint32_t t149 = 198373U;

    t149 = (x661+(x662|(x663<=x664)));

    if (t149 != 59643027U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x669 = INT16_MAX;
	volatile uint8_t x671 = UINT8_MAX;
	int32_t t150 = 8;

    t150 = (x669+(x670|(x671<=x672)));

    if (t150 != 32769) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x673 = INT8_MIN;
	static int8_t x675 = INT8_MIN;
	uint64_t x676 = 0LLU;
	volatile int32_t t151 = 135;

    t151 = (x673+(x674|(x675<=x676)));

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x681 = 0U;
	int8_t x682 = INT8_MIN;
	int64_t x684 = INT64_MIN;
	volatile int32_t t152 = -2;

    t152 = (x681+(x682|(x683<=x684)));

    if (t152 != -127) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x685 = INT32_MIN;
	int8_t x687 = -1;

    t153 = (x685+(x686|(x687<=x688)));

    if (t153 != -2147471309) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x690 = 1739U;
	int8_t x691 = INT8_MIN;

    t154 = (x689+(x690|(x691<=x692)));

    if (t154 != 1735U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x693 = 13069584;
	static uint8_t x694 = 16U;
	int8_t x695 = INT8_MIN;
	int32_t x696 = 9702571;
	static int32_t t155 = 343133596;

    t155 = (x693+(x694|(x695<=x696)));

    if (t155 != 13069601) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x697 = 212U;
	int64_t x698 = -1LL;
	int8_t x699 = -1;
	int32_t x700 = INT32_MIN;
	volatile int64_t t156 = -533LL;

    t156 = (x697+(x698|(x699<=x700)));

    if (t156 != 211LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x701 = -1;
	int8_t x704 = -1;
	volatile int32_t t157 = -343;

    t157 = (x701+(x702|(x703<=x704)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x705 = 119539057U;
	static int16_t x706 = -1;
	static uint16_t x707 = 10176U;
	int64_t x708 = 3677LL;
	static volatile uint32_t t158 = 24063U;

    t158 = (x705+(x706|(x707<=x708)));

    if (t158 != 119539056U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x710 = -1LL;
	int32_t x711 = -1;
	uint32_t x712 = 9U;
	static volatile int64_t t159 = -1035521339LL;

    t159 = (x709+(x710|(x711<=x712)));

    if (t159 != -32769LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x713 = INT64_MAX;
	int64_t x714 = INT64_MIN;
	int32_t x715 = 4;
	int8_t x716 = 39;
	int64_t t160 = -2205142368501299LL;

    t160 = (x713+(x714|(x715<=x716)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x717 = INT8_MIN;
	uint64_t x718 = 19106290728033661LLU;
	int8_t x719 = INT8_MAX;
	int8_t x720 = INT8_MIN;
	static volatile uint64_t t161 = 555889967789763LLU;

    t161 = (x717+(x718|(x719<=x720)));

    if (t161 != 19106290728033533LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x721 = INT8_MIN;
	volatile int64_t x722 = -1LL;
	int64_t t162 = -3472LL;

    t162 = (x721+(x722|(x723<=x724)));

    if (t162 != -129LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x725 = INT32_MIN;
	int64_t x726 = INT64_MAX;
	volatile uint32_t x727 = 27591U;
	uint64_t x728 = 77595187323075942LLU;
	static int64_t t163 = 1LL;

    t163 = (x725+(x726|(x727<=x728)));

    if (t163 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x729 = UINT8_MAX;
	uint64_t x730 = 17589817540836LLU;
	int8_t x731 = INT8_MIN;
	static int32_t x732 = INT32_MAX;
	static volatile uint64_t t164 = 6065014994LLU;

    t164 = (x729+(x730|(x731<=x732)));

    if (t164 != 17589817541092LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x733 = 62U;
	int16_t x734 = INT16_MIN;
	static uint32_t x736 = 40607U;
	volatile int32_t t165 = 194131006;

    t165 = (x733+(x734|(x735<=x736)));

    if (t165 != -32706) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x737 = 186712603U;
	uint32_t x738 = UINT32_MAX;
	uint16_t x739 = 23U;
	int32_t x740 = INT32_MIN;
	volatile uint32_t t166 = 7253407U;

    t166 = (x737+(x738|(x739<=x740)));

    if (t166 != 186712602U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x741 = UINT64_MAX;
	uint64_t x742 = 1424389854801624LLU;
	int64_t x743 = INT64_MAX;
	static int32_t x744 = INT32_MIN;
	uint64_t t167 = 4512685685772172LLU;

    t167 = (x741+(x742|(x743<=x744)));

    if (t167 != 1424389854801623LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x745 = INT16_MIN;
	int32_t x746 = INT32_MAX;
	uint32_t x747 = 204107U;
	int32_t t168 = -7981528;

    t168 = (x745+(x746|(x747<=x748)));

    if (t168 != 2147450879) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x749 = UINT16_MAX;
	uint64_t x750 = 220195LLU;
	int32_t x751 = -25;
	int32_t x752 = INT32_MIN;
	uint64_t t169 = 1585974LLU;

    t169 = (x749+(x750|(x751<=x752)));

    if (t169 != 285730LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x753 = 93000892;
	volatile int16_t x754 = -1;
	static uint64_t x755 = 93797747815384330LLU;
	static int32_t x756 = INT32_MIN;
	static volatile int32_t t170 = -3136;

    t170 = (x753+(x754|(x755<=x756)));

    if (t170 != 93000891) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint16_t x757 = UINT16_MAX;
	static volatile uint8_t x758 = 13U;
	static int32_t x759 = -215109874;
	uint32_t x760 = UINT32_MAX;
	volatile int32_t t171 = -3281277;

    t171 = (x757+(x758|(x759<=x760)));

    if (t171 != 65548) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x761 = 1;
	volatile int16_t x762 = -1;
	uint16_t x763 = 15U;
	static int32_t t172 = 447208;

    t172 = (x761+(x762|(x763<=x764)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x766 = UINT32_MAX;
	uint16_t x767 = 43U;
	static int8_t x768 = INT8_MAX;
	volatile uint32_t t173 = 2094U;

    t173 = (x765+(x766|(x767<=x768)));

    if (t173 != 32766U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x769 = 23;
	volatile uint16_t x770 = 0U;
	uint16_t x771 = 23U;
	uint32_t x772 = 35U;
	int32_t t174 = 50;

    t174 = (x769+(x770|(x771<=x772)));

    if (t174 != 24) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x773 = 3LLU;
	static volatile int64_t x774 = INT64_MIN;
	static int32_t x775 = INT32_MIN;
	volatile uint64_t x776 = 648LLU;
	uint64_t t175 = 28055764523428LLU;

    t175 = (x773+(x774|(x775<=x776)));

    if (t175 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x779 = INT16_MIN;
	uint16_t x780 = UINT16_MAX;
	volatile int32_t t176 = -159604;

    t176 = (x777+(x778|(x779<=x780)));

    if (t176 != -2147483641) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x781 = -1;
	volatile uint64_t x783 = 3570648LLU;
	int32_t x784 = INT32_MIN;
	uint32_t t177 = 575696U;

    t177 = (x781+(x782|(x783<=x784)));

    if (t177 != 4294967294U) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x785 = -1;
	volatile uint64_t x787 = 0LLU;
	int8_t x788 = INT8_MIN;
	volatile int32_t t178 = 13810300;

    t178 = (x785+(x786|(x787<=x788)));

    if (t178 != 32766) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x791 = 1040439582U;
	volatile int8_t x792 = INT8_MIN;
	int32_t t179 = 46021;

    t179 = (x789+(x790|(x791<=x792)));

    if (t179 != -2147483637) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x793 = UINT16_MAX;
	int8_t x794 = -1;
	int64_t x795 = -1LL;

    t180 = (x793+(x794|(x795<=x796)));

    if (t180 != 65534) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x797 = 3U;
	volatile uint64_t x799 = 103748675412095LLU;

    t181 = (x797+(x798|(x799<=x800)));

    if (t181 != 7720318LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x801 = 1126382234163925960LLU;
	static int8_t x802 = -1;
	volatile int64_t x803 = INT64_MAX;
	uint8_t x804 = 0U;
	volatile uint64_t t182 = 31508304202823342LLU;

    t182 = (x801+(x802|(x803<=x804)));

    if (t182 != 1126382234163925959LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x805 = INT32_MIN;
	uint16_t x806 = 2540U;
	static int64_t x807 = 128LL;
	static int16_t x808 = INT16_MIN;
	int32_t t183 = 2144;

    t183 = (x805+(x806|(x807<=x808)));

    if (t183 != -2147481108) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x809 = INT8_MAX;
	static volatile int16_t x810 = -1;
	int8_t x811 = INT8_MIN;
	static int64_t x812 = 3795506238916677063LL;
	static volatile int32_t t184 = 13824;

    t184 = (x809+(x810|(x811<=x812)));

    if (t184 != 126) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x813 = -100592;
	int64_t x815 = INT64_MAX;
	int32_t x816 = -1;
	static int64_t t185 = -305227041811667738LL;

    t185 = (x813+(x814|(x815<=x816)));

    if (t185 != -1759648633LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x817 = 576195462956LLU;
	int32_t x819 = INT32_MAX;
	int16_t x820 = -10;
	volatile uint64_t t186 = 2544990101LLU;

    t186 = (x817+(x818|(x819<=x820)));

    if (t186 != 576195463083LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x821 = 774U;
	static int8_t x822 = INT8_MIN;
	uint8_t x823 = UINT8_MAX;
	int64_t x824 = INT64_MIN;
	static int32_t t187 = 122053835;

    t187 = (x821+(x822|(x823<=x824)));

    if (t187 != 646) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x825 = UINT16_MAX;
	uint8_t x827 = 13U;
	uint16_t x828 = UINT16_MAX;
	static volatile int64_t t188 = 789367468LL;

    t188 = (x825+(x826|(x827<=x828)));

    if (t188 != 65554LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x829 = UINT32_MAX;
	uint16_t x830 = 2U;
	int64_t x831 = INT64_MIN;
	static int32_t x832 = INT32_MAX;
	uint32_t t189 = 87223U;

    t189 = (x829+(x830|(x831<=x832)));

    if (t189 != 2U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x834 = UINT32_MAX;
	int16_t x835 = 10;

    t190 = (x833+(x834|(x835<=x836)));

    if (t190 != 3969411228210556LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x841 = INT32_MAX;
	static uint32_t x842 = 1U;
	int32_t x843 = INT32_MAX;
	volatile uint32_t t191 = 6U;

    t191 = (x841+(x842|(x843<=x844)));

    if (t191 != 2147483648U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x845 = 121227958U;
	static uint32_t x846 = 17164744U;
	static int32_t x847 = INT32_MIN;
	volatile uint32_t t192 = 74810887U;

    t192 = (x845+(x846|(x847<=x848)));

    if (t192 != 138392703U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x849 = -307;
	uint64_t x850 = UINT64_MAX;
	int32_t x851 = 1;
	volatile int16_t x852 = 11038;

    t193 = (x849+(x850|(x851<=x852)));

    if (t193 != 18446744073709551308LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x854 = INT32_MAX;
	int32_t x855 = INT32_MIN;
	static uint64_t x856 = 325611096779890903LLU;
	int32_t t194 = 42;

    t194 = (x853+(x854|(x855<=x856)));

    if (t194 != 2147483646) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x857 = -1;
	int8_t x859 = INT8_MIN;
	int16_t x860 = INT16_MIN;
	uint64_t t195 = 59439169LLU;

    t195 = (x857+(x858|(x859<=x860)));

    if (t195 != 3290LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x863 = INT16_MIN;
	static uint8_t x864 = 7U;
	static uint64_t t196 = 330573036162644LLU;

    t196 = (x861+(x862|(x863<=x864)));

    if (t196 != 254LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x865 = INT64_MIN;
	uint16_t x866 = 8758U;
	int8_t x867 = -1;
	int32_t x868 = -25393440;

    t197 = (x865+(x866|(x867<=x868)));

    if (t197 != -9223372036854767050LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x869 = INT64_MIN;
	volatile uint16_t x870 = 81U;
	static volatile uint16_t x871 = 4467U;
	int8_t x872 = -62;
	int64_t t198 = 13275306396340109LL;

    t198 = (x869+(x870|(x871<=x872)));

    if (t198 != -9223372036854775727LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x873 = 1414U;
	uint64_t x874 = UINT64_MAX;
	int32_t x875 = -1;
	int64_t x876 = 14565632953511LL;
	volatile uint64_t t199 = 11335LLU;

    t199 = (x873+(x874|(x875<=x876)));

    if (t199 != 1413LLU) { NG(); } else { ; }
	
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

