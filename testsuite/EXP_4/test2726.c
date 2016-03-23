
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

int8_t x3 = INT8_MIN;
volatile int32_t x5 = INT32_MIN;
int16_t x6 = 1;
int32_t x15 = INT32_MIN;
volatile int32_t x18 = INT32_MIN;
volatile uint8_t x20 = 2U;
int32_t t4 = 396;
volatile uint64_t x21 = 7548119LLU;
int16_t x22 = INT16_MIN;
volatile int32_t x24 = INT32_MAX;
static uint16_t x28 = 2U;
uint64_t x32 = 0LLU;
int32_t x50 = -11200121;
uint16_t x51 = UINT16_MAX;
int32_t t13 = -272731934;
uint64_t x59 = 415333374LLU;
static int32_t t14 = -216720;
int16_t x61 = 870;
static int32_t x67 = INT32_MIN;
int64_t x68 = INT64_MAX;
int16_t x74 = INT16_MIN;
volatile int32_t t18 = -6730;
uint64_t x77 = 829392233109LLU;
volatile int32_t t19 = -73;
static volatile uint16_t x84 = UINT16_MAX;
int8_t x85 = INT8_MAX;
int32_t x88 = INT32_MIN;
volatile int64_t x92 = INT64_MAX;
volatile int32_t t22 = -125909;
volatile int32_t x107 = -155815;
volatile int32_t t26 = -1577;
static int32_t x110 = INT32_MIN;
int32_t x111 = -1;
volatile uint8_t x117 = UINT8_MAX;
int8_t x122 = INT8_MIN;
int8_t x124 = INT8_MAX;
int16_t x126 = INT16_MAX;
int32_t x128 = INT32_MIN;
uint16_t x132 = 188U;
uint16_t x136 = UINT16_MAX;
int32_t t33 = 182753;
static int32_t x141 = -1;
int16_t x145 = 2745;
static int32_t x147 = INT32_MIN;
static int16_t x148 = INT16_MIN;
uint8_t x153 = UINT8_MAX;
int32_t t38 = 639;
volatile uint8_t x159 = 2U;
static volatile uint8_t x173 = 5U;
int32_t x179 = INT32_MIN;
static int16_t x182 = 12030;
int16_t x189 = -1;
int8_t x194 = INT8_MIN;
volatile uint8_t x196 = 0U;
static volatile uint8_t x201 = 1U;
volatile int64_t x203 = INT64_MIN;
volatile int32_t t51 = 246915230;
uint32_t x210 = 4839033U;
volatile int64_t x215 = INT64_MAX;
int8_t x220 = INT8_MAX;
static volatile int32_t t54 = -161;
static uint64_t x228 = 5070696171LLU;
int32_t t59 = -55557;
volatile uint32_t x242 = 247458U;
int8_t x245 = -48;
int64_t x249 = -1LL;
volatile int32_t t62 = -10825405;
int32_t x255 = INT32_MAX;
volatile int8_t x261 = INT8_MIN;
static int16_t x262 = INT16_MAX;
int16_t x263 = -2305;
int32_t x264 = 2529;
uint32_t x265 = 10806U;
int8_t x267 = INT8_MIN;
volatile int32_t t66 = -1717;
uint16_t x271 = UINT16_MAX;
static volatile int32_t t67 = 5;
int32_t x274 = 59822724;
int8_t x287 = INT8_MIN;
int32_t x288 = INT32_MIN;
volatile int32_t t72 = -67;
int16_t x296 = INT16_MIN;
static int32_t x303 = INT32_MIN;
int64_t x305 = -912002825LL;
int32_t t76 = -3549448;
int32_t t78 = -165133;
static int64_t x320 = -4072LL;
volatile uint16_t x322 = 23410U;
int64_t x323 = INT64_MIN;
int16_t x331 = INT16_MIN;
int16_t x332 = 695;
int64_t x336 = 0LL;
static int32_t t83 = 505432;
volatile uint32_t x337 = 71125934U;
static int32_t x338 = INT32_MIN;
static int16_t x340 = -1;
int64_t x341 = INT64_MIN;
int16_t x351 = INT16_MAX;
uint16_t x353 = 28U;
static volatile uint64_t x359 = 25832235732156061LLU;
volatile uint8_t x360 = 6U;
uint16_t x361 = 206U;
uint8_t x370 = 108U;
uint8_t x375 = 2U;
int64_t x379 = 3595020450234LL;
volatile int32_t t94 = 84103627;
uint32_t x384 = UINT32_MAX;
static int32_t x392 = 70994357;
volatile int8_t x395 = 1;
uint32_t x396 = 4U;
int32_t t98 = 182789;
int8_t x398 = INT8_MAX;
int16_t x406 = -1;
int8_t x418 = INT8_MIN;
uint32_t x420 = UINT32_MAX;
uint16_t x425 = 1U;
int64_t x427 = -1LL;
int8_t x428 = -1;
int16_t x433 = -1;
volatile int64_t x435 = INT64_MAX;
uint16_t x440 = UINT16_MAX;
static int32_t t111 = 980;
volatile int32_t t115 = 430;
static volatile int8_t x468 = INT8_MIN;
int32_t x469 = -1;
uint8_t x471 = 0U;
int8_t x474 = -1;
int8_t x475 = 1;
uint8_t x477 = 1U;
int32_t t119 = -40294;
static int64_t x486 = -1LL;
volatile int16_t x487 = INT16_MAX;
uint16_t x496 = 58U;
volatile int8_t x499 = INT8_MIN;
int8_t x500 = 1;
int32_t t124 = 92;
int64_t x501 = 561363LL;
int64_t x504 = INT64_MIN;
int32_t t125 = -9;
int64_t x505 = INT64_MAX;
uint8_t x507 = 3U;
int16_t x509 = -1;
uint8_t x516 = 11U;
volatile int32_t t129 = 6980293;
static volatile int32_t x523 = INT32_MAX;
uint16_t x527 = 13638U;
static uint16_t x531 = 47U;
volatile int16_t x532 = INT16_MIN;
uint16_t x537 = 20U;
volatile int32_t x544 = -66;
uint8_t x547 = 1U;
uint8_t x558 = 43U;
int64_t x560 = INT64_MIN;
uint8_t x564 = 10U;
int8_t x568 = 1;
int16_t x572 = -1;
int16_t x573 = INT16_MAX;
int32_t x578 = -118174;
static uint32_t x581 = 1344257645U;
volatile int32_t t147 = 37865457;
volatile int32_t t148 = -1;
int8_t x598 = -5;
static uint64_t x599 = UINT64_MAX;
volatile int32_t t149 = 3943110;
volatile uint16_t x608 = 50U;
int8_t x609 = 4;
int16_t x618 = -615;
uint16_t x619 = UINT16_MAX;
int32_t x625 = -32629;
uint16_t x629 = UINT16_MAX;
uint8_t x630 = UINT8_MAX;
int8_t x637 = INT8_MIN;
int64_t x647 = 41970830LL;
int64_t x651 = 5066460452LL;
static int32_t t162 = 143758808;
int32_t t163 = -9;
int32_t x670 = INT32_MIN;
static int16_t x672 = INT16_MIN;
uint64_t x676 = 7003221276035016067LLU;
int64_t x678 = INT64_MAX;
int32_t t169 = -94272;
volatile int64_t x682 = 64048640778LL;
volatile int32_t x686 = -129126;
volatile int32_t t173 = 60832;
volatile uint32_t x698 = UINT32_MAX;
static volatile int16_t x700 = -1;
static int16_t x704 = -1;
uint64_t x709 = UINT64_MAX;
uint64_t x710 = UINT64_MAX;
int32_t t177 = -311244832;
static int32_t t178 = -89540516;
int8_t x723 = INT8_MIN;
int8_t x725 = INT8_MIN;
int64_t x732 = 140771198LL;
uint32_t x735 = UINT32_MAX;
int64_t x739 = -1LL;
int64_t x741 = -1LL;
volatile uint32_t x752 = 107867536U;
int64_t x757 = -205LL;
uint64_t x759 = 8440689995279650LLU;
static uint64_t x762 = 64028065446465481LLU;
int32_t x763 = -1;
int8_t x767 = -1;
int16_t x768 = INT16_MIN;
int8_t x769 = INT8_MAX;
uint8_t x770 = 37U;
int32_t x773 = -1;
volatile int32_t t193 = 1;
volatile uint64_t x777 = 11609624373612920LLU;
static int8_t x781 = -1;
int32_t x782 = INT32_MIN;
int64_t x795 = INT64_MAX;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	uint64_t x2 = 71LLU;
	uint32_t x4 = UINT32_MAX;
	int32_t t0 = 6;

    t0 = (x1<=(x2|(x3^x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x7 = 751252U;
	static int16_t x8 = -1;
	static volatile int32_t t1 = -66821;

    t1 = (x5<=(x6|(x7^x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	volatile int64_t x10 = -112839090LL;
	int64_t x11 = INT64_MIN;
	static volatile int64_t x12 = INT64_MIN;
	static volatile int32_t t2 = 1744;

    t2 = (x9<=(x10|(x11^x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MIN;
	uint16_t x14 = 28U;
	volatile int16_t x16 = INT16_MIN;
	int32_t t3 = -273163;

    t3 = (x13<=(x14|(x15^x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 757;
	static int32_t x19 = INT32_MAX;

    t4 = (x17<=(x18|(x19^x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x23 = 302070U;
	volatile int32_t t5 = -1039149657;

    t5 = (x21<=(x22|(x23^x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 478;
	uint8_t x26 = UINT8_MAX;
	volatile int16_t x27 = 205;
	int32_t t6 = 98129577;

    t6 = (x25<=(x26|(x27^x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -6;
	uint64_t x30 = 60090713501301LLU;
	uint64_t x31 = 13873LLU;
	int32_t t7 = 43263031;

    t7 = (x29<=(x30|(x31^x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MAX;
	volatile int16_t x34 = INT16_MIN;
	volatile uint16_t x35 = UINT16_MAX;
	uint64_t x36 = 1301761LLU;
	int32_t t8 = 6;

    t8 = (x33<=(x34|(x35^x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 5;
	int16_t x38 = INT16_MAX;
	int8_t x39 = -12;
	volatile uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = -3250061;

    t9 = (x37<=(x38|(x39^x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -15780314264LL;
	int8_t x42 = INT8_MIN;
	volatile int8_t x43 = INT8_MIN;
	static uint64_t x44 = 1467191LLU;
	static volatile int32_t t10 = 1109224;

    t10 = (x41<=(x42|(x43^x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	int64_t x47 = -1LL;
	volatile int8_t x48 = INT8_MAX;
	int32_t t11 = 6;

    t11 = (x45<=(x46|(x47^x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	uint8_t x52 = 16U;
	int32_t t12 = 262017261;

    t12 = (x49<=(x50|(x51^x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MAX;
	int16_t x54 = INT16_MAX;
	int32_t x55 = INT32_MIN;
	static int16_t x56 = -1;

    t13 = (x53<=(x54|(x55^x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	volatile int64_t x58 = INT64_MIN;
	static int64_t x60 = 218061863609LL;

    t14 = (x57<=(x58|(x59^x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x62 = 14U;
	volatile int64_t x63 = -45351LL;
	static int16_t x64 = 5959;
	volatile int32_t t15 = -4123;

    t15 = (x61<=(x62|(x63^x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -885215664;
	static volatile int8_t x66 = 24;
	static volatile int32_t t16 = -2607450;

    t16 = (x65<=(x66|(x67^x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	int8_t x70 = INT8_MIN;
	int32_t x71 = 0;
	static int64_t x72 = INT64_MIN;
	volatile int32_t t17 = -2;

    t17 = (x69<=(x70|(x71^x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x73 = -75738;
	volatile int16_t x75 = INT16_MAX;
	int32_t x76 = INT32_MAX;

    t18 = (x73<=(x74|(x75^x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x78 = 4784U;
	static int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MAX;

    t19 = (x77<=(x78|(x79^x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 36U;
	int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MIN;
	static volatile int32_t t20 = -8;

    t20 = (x81<=(x82|(x83^x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x86 = -1;
	uint32_t x87 = 635573U;
	static int32_t t21 = 372542;

    t21 = (x85<=(x86|(x87^x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 49741604575LLU;
	uint64_t x90 = 51805LLU;
	static int64_t x91 = INT64_MIN;

    t22 = (x89<=(x90|(x91^x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = UINT16_MAX;
	uint16_t x94 = UINT16_MAX;
	static int16_t x95 = INT16_MIN;
	volatile int64_t x96 = -3LL;
	volatile int32_t t23 = -8129;

    t23 = (x93<=(x94|(x95^x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 0U;
	static int16_t x98 = 8833;
	int32_t x99 = INT32_MAX;
	int16_t x100 = 24;
	volatile int32_t t24 = 6603040;

    t24 = (x97<=(x98|(x99^x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 11U;
	static int32_t x102 = -1;
	static int32_t x103 = INT32_MIN;
	volatile int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 30985411;

    t25 = (x101<=(x102|(x103^x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = 2028;
	int32_t x106 = 3603;
	int64_t x108 = 1199186427216LL;

    t26 = (x105<=(x106|(x107^x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x109 = 50U;
	uint16_t x112 = 11U;
	int32_t t27 = 1206;

    t27 = (x109<=(x110|(x111^x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 1LL;
	uint16_t x114 = 5U;
	uint64_t x115 = 31888223241386875LLU;
	volatile uint8_t x116 = 0U;
	volatile int32_t t28 = -5018361;

    t28 = (x113<=(x114|(x115^x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x118 = -1;
	uint64_t x119 = 623108634965505LLU;
	uint64_t x120 = UINT64_MAX;
	static volatile int32_t t29 = -20837;

    t29 = (x117<=(x118|(x119^x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x121 = UINT32_MAX;
	int16_t x123 = -1;
	volatile int32_t t30 = -482014679;

    t30 = (x121<=(x122|(x123^x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 7161;
	uint64_t x127 = 83LLU;
	int32_t t31 = -40;

    t31 = (x125<=(x126|(x127^x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	int8_t x130 = 11;
	int64_t x131 = 25462575LL;
	volatile int32_t t32 = -37272;

    t32 = (x129<=(x130|(x131^x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MAX;
	static uint64_t x135 = 2LLU;

    t33 = (x133<=(x134|(x135^x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = UINT64_MAX;
	uint8_t x138 = 1U;
	static int16_t x139 = INT16_MAX;
	volatile int64_t x140 = -1LL;
	volatile int32_t t34 = 18346980;

    t34 = (x137<=(x138|(x139^x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x142 = INT16_MIN;
	uint8_t x143 = 3U;
	volatile int32_t x144 = INT32_MAX;
	int32_t t35 = 1;

    t35 = (x141<=(x142|(x143^x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x146 = -41514357;
	static int32_t t36 = 3;

    t36 = (x145<=(x146|(x147^x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x149 = 168419U;
	int8_t x150 = -1;
	volatile uint64_t x151 = 102498776LLU;
	uint16_t x152 = 1589U;
	volatile int32_t t37 = -6572;

    t37 = (x149<=(x150|(x151^x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = INT16_MAX;
	static volatile int32_t x155 = -1;
	int8_t x156 = INT8_MIN;

    t38 = (x153<=(x154|(x155^x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -259238617429707776LL;
	int64_t x158 = INT64_MIN;
	int32_t x160 = INT32_MAX;
	volatile int32_t t39 = -279745;

    t39 = (x157<=(x158|(x159^x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	int64_t x162 = INT64_MIN;
	uint64_t x163 = UINT64_MAX;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = 182564804;

    t40 = (x161<=(x162|(x163^x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = -2643;
	int16_t x166 = 0;
	static int64_t x167 = -1LL;
	int16_t x168 = INT16_MIN;
	int32_t t41 = -3;

    t41 = (x165<=(x166|(x167^x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = UINT16_MAX;
	uint8_t x170 = UINT8_MAX;
	int16_t x171 = 21;
	static uint64_t x172 = UINT64_MAX;
	volatile int32_t t42 = -47;

    t42 = (x169<=(x170|(x171^x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x174 = UINT16_MAX;
	static uint16_t x175 = 7U;
	volatile uint64_t x176 = 8920944LLU;
	volatile int32_t t43 = 127587676;

    t43 = (x173<=(x174|(x175^x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	int8_t x178 = 2;
	uint16_t x180 = UINT16_MAX;
	static int32_t t44 = 10636;

    t44 = (x177<=(x178|(x179^x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	uint32_t x183 = UINT32_MAX;
	volatile uint16_t x184 = UINT16_MAX;
	int32_t t45 = 8537;

    t45 = (x181<=(x182|(x183^x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = -1;
	static int32_t x186 = -165;
	static uint16_t x187 = 1032U;
	static volatile uint64_t x188 = 6622384889294590LLU;
	int32_t t46 = 125;

    t46 = (x185<=(x186|(x187^x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x190 = INT16_MAX;
	uint64_t x191 = 10LLU;
	static uint8_t x192 = 1U;
	static int32_t t47 = 259897;

    t47 = (x189<=(x190|(x191^x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -4;
	uint32_t x195 = UINT32_MAX;
	volatile int32_t t48 = 356899898;

    t48 = (x193<=(x194|(x195^x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	uint64_t x198 = 156556579328033LLU;
	uint64_t x199 = 1569339LLU;
	int16_t x200 = -1;
	int32_t t49 = 295;

    t49 = (x197<=(x198|(x199^x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x202 = 14626LLU;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t50 = -135612603;

    t50 = (x201<=(x202|(x203^x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -30;
	volatile uint8_t x206 = 3U;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = 43U;

    t51 = (x205<=(x206|(x207^x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -1;
	uint32_t x211 = 0U;
	int32_t x212 = -1;
	int32_t t52 = 716;

    t52 = (x209<=(x210|(x211^x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = UINT32_MAX;
	static int8_t x214 = INT8_MAX;
	int16_t x216 = 1096;
	int32_t t53 = -104608;

    t53 = (x213<=(x214|(x215^x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 11U;
	int8_t x218 = -1;
	int32_t x219 = -1;

    t54 = (x217<=(x218|(x219^x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 86U;
	int64_t x222 = -32488035566765LL;
	int64_t x223 = INT64_MIN;
	int32_t x224 = INT32_MAX;
	volatile int32_t t55 = -359217;

    t55 = (x221<=(x222|(x223^x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = INT64_MIN;
	int32_t x226 = -1;
	uint8_t x227 = 28U;
	int32_t t56 = 52170;

    t56 = (x225<=(x226|(x227^x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MAX;
	static volatile uint32_t x230 = 619245U;
	int64_t x231 = INT64_MIN;
	static volatile uint8_t x232 = 14U;
	volatile int32_t t57 = -986742058;

    t57 = (x229<=(x230|(x231^x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	int64_t x234 = 127478983140LL;
	uint64_t x235 = 67822260909820LLU;
	static volatile int32_t x236 = 3;
	int32_t t58 = 1761;

    t58 = (x233<=(x234|(x235^x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	volatile int64_t x238 = -1LL;
	uint8_t x239 = UINT8_MAX;
	static int8_t x240 = INT8_MIN;

    t59 = (x237<=(x238|(x239^x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x241 = 197206647LLU;
	int16_t x243 = -1;
	int64_t x244 = -1LL;
	volatile int32_t t60 = 191141;

    t60 = (x241<=(x242|(x243^x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MIN;
	int32_t x248 = -1;
	volatile int32_t t61 = 0;

    t61 = (x245<=(x246|(x247^x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x250 = -1037949LL;
	int8_t x251 = -1;
	int32_t x252 = INT32_MAX;

    t62 = (x249<=(x250|(x251^x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -36293434;
	int64_t x254 = -1LL;
	int8_t x256 = -1;
	volatile int32_t t63 = 2;

    t63 = (x253<=(x254|(x255^x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MIN;
	uint64_t x258 = 75134667LLU;
	int32_t x259 = INT32_MIN;
	uint32_t x260 = 4U;
	volatile int32_t t64 = 112244;

    t64 = (x257<=(x258|(x259^x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t t65 = -239;

    t65 = (x261<=(x262|(x263^x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x266 = 23;
	int64_t x268 = 30755770595153LL;

    t66 = (x265<=(x266|(x267^x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -11;
	int8_t x270 = INT8_MIN;
	uint64_t x272 = 65261366LLU;

    t67 = (x269<=(x270|(x271^x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = 22LL;
	int32_t x275 = INT32_MIN;
	int32_t x276 = -1;
	int32_t t68 = 4129560;

    t68 = (x273<=(x274|(x275^x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MAX;
	int64_t x278 = INT64_MIN;
	uint64_t x279 = 9852652LLU;
	volatile int64_t x280 = -58052708LL;
	static int32_t t69 = -263753;

    t69 = (x277<=(x278|(x279^x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	volatile int8_t x282 = INT8_MAX;
	int16_t x283 = INT16_MIN;
	static uint64_t x284 = UINT64_MAX;
	int32_t t70 = -8928;

    t70 = (x281<=(x282|(x283^x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = UINT32_MAX;
	uint64_t x286 = UINT64_MAX;
	volatile int32_t t71 = 65533385;

    t71 = (x285<=(x286|(x287^x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint64_t x289 = 28418949LLU;
	static int8_t x290 = -1;
	int16_t x291 = INT16_MIN;
	static volatile int64_t x292 = -3773345LL;

    t72 = (x289<=(x290|(x291^x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x293 = INT32_MIN;
	volatile int16_t x294 = INT16_MAX;
	static volatile uint8_t x295 = 0U;
	volatile int32_t t73 = 98774;

    t73 = (x293<=(x294|(x295^x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x297 = UINT16_MAX;
	int8_t x298 = INT8_MIN;
	static int8_t x299 = INT8_MAX;
	static int16_t x300 = INT16_MIN;
	volatile int32_t t74 = 0;

    t74 = (x297<=(x298|(x299^x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x301 = 0U;
	int64_t x302 = INT64_MIN;
	uint8_t x304 = 59U;
	volatile int32_t t75 = -362070;

    t75 = (x301<=(x302|(x303^x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x306 = 5U;
	int16_t x307 = 3;
	volatile int64_t x308 = -1LL;

    t76 = (x305<=(x306|(x307^x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x309 = UINT8_MAX;
	volatile int32_t x310 = 868488;
	int32_t x311 = INT32_MIN;
	volatile int16_t x312 = INT16_MAX;
	int32_t t77 = 57;

    t77 = (x309<=(x310|(x311^x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	int32_t x314 = INT32_MAX;
	static int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MAX;

    t78 = (x313<=(x314|(x315^x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 9U;
	static int32_t x318 = INT32_MIN;
	int64_t x319 = 211LL;
	volatile int32_t t79 = 5894054;

    t79 = (x317<=(x318|(x319^x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = 3;
	int8_t x324 = INT8_MIN;
	int32_t t80 = -166877;

    t80 = (x321<=(x322|(x323^x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MAX;
	static int64_t x326 = -1LL;
	static uint16_t x327 = UINT16_MAX;
	int64_t x328 = INT64_MAX;
	volatile int32_t t81 = -22390;

    t81 = (x325<=(x326|(x327^x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = -56;
	int16_t x330 = INT16_MIN;
	int32_t t82 = 7;

    t82 = (x329<=(x330|(x331^x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 152LLU;
	volatile int16_t x334 = INT16_MIN;
	int8_t x335 = 16;

    t83 = (x333<=(x334|(x335^x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x339 = -7076;
	int32_t t84 = 866342;

    t84 = (x337<=(x338|(x339^x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x342 = UINT64_MAX;
	static int8_t x343 = INT8_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 7672511;

    t85 = (x341<=(x342|(x343^x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x345 = INT8_MIN;
	int64_t x346 = -27932626103714077LL;
	volatile int16_t x347 = 194;
	volatile int32_t x348 = 6644672;
	static int32_t t86 = 937031929;

    t86 = (x345<=(x346|(x347^x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x349 = 6035;
	volatile int32_t x350 = INT32_MIN;
	int8_t x352 = -9;
	int32_t t87 = -29;

    t87 = (x349<=(x350|(x351^x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MIN;
	volatile int16_t x355 = INT16_MAX;
	int8_t x356 = 49;
	volatile int32_t t88 = -91910;

    t88 = (x353<=(x354|(x355^x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MAX;
	uint16_t x358 = UINT16_MAX;
	static int32_t t89 = 9977307;

    t89 = (x357<=(x358|(x359^x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	int16_t x364 = 105;
	volatile int32_t t90 = 236873419;

    t90 = (x361<=(x362|(x363^x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = -1;
	static volatile uint32_t x366 = UINT32_MAX;
	volatile int64_t x367 = INT64_MIN;
	int8_t x368 = INT8_MIN;
	volatile int32_t t91 = -28;

    t91 = (x365<=(x366|(x367^x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x369 = 3;
	volatile int32_t x371 = -1;
	static volatile uint64_t x372 = UINT64_MAX;
	int32_t t92 = 551876213;

    t92 = (x369<=(x370|(x371^x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x373 = INT16_MIN;
	uint8_t x374 = UINT8_MAX;
	volatile int8_t x376 = INT8_MIN;
	int32_t t93 = 201057;

    t93 = (x373<=(x374|(x375^x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 313U;
	static volatile int8_t x378 = -1;
	int16_t x380 = -1;

    t94 = (x377<=(x378|(x379^x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	static int16_t x382 = 1;
	static int16_t x383 = INT16_MAX;
	int32_t t95 = -752851318;

    t95 = (x381<=(x382|(x383^x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = INT64_MAX;
	static int32_t x386 = -1;
	int64_t x387 = INT64_MAX;
	static uint8_t x388 = 0U;
	int32_t t96 = 105;

    t96 = (x385<=(x386|(x387^x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = UINT16_MAX;
	uint8_t x390 = 1U;
	int8_t x391 = 1;
	static volatile int32_t t97 = 7170;

    t97 = (x389<=(x390|(x391^x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 110U;
	uint32_t x394 = 2U;

    t98 = (x393<=(x394|(x395^x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = 3;
	int32_t x399 = -426620;
	static int64_t x400 = INT64_MIN;
	volatile int32_t t99 = 336159;

    t99 = (x397<=(x398|(x399^x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	volatile int32_t x402 = INT32_MAX;
	int64_t x403 = -1LL;
	volatile int64_t x404 = INT64_MIN;
	volatile int32_t t100 = -463826123;

    t100 = (x401<=(x402|(x403^x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x405 = INT16_MIN;
	uint16_t x407 = 3684U;
	int32_t x408 = INT32_MIN;
	int32_t t101 = -1;

    t101 = (x405<=(x406|(x407^x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MIN;
	int64_t x411 = -1LL;
	static volatile int8_t x412 = INT8_MIN;
	int32_t t102 = -1564029;

    t102 = (x409<=(x410|(x411^x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 496650U;
	uint64_t x414 = 25419492007788269LLU;
	volatile int64_t x415 = INT64_MIN;
	uint64_t x416 = 284063576413476LLU;
	volatile int32_t t103 = 222558381;

    t103 = (x413<=(x414|(x415^x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -1;
	int32_t x419 = -280647;
	static volatile int32_t t104 = -1736377;

    t104 = (x417<=(x418|(x419^x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = -1;
	static int32_t x422 = 375834971;
	int16_t x423 = -1;
	volatile uint16_t x424 = UINT16_MAX;
	int32_t t105 = -21;

    t105 = (x421<=(x422|(x423^x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x426 = 208782174U;
	static volatile int32_t t106 = -1;

    t106 = (x425<=(x426|(x427^x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x429 = UINT8_MAX;
	int16_t x430 = INT16_MAX;
	static volatile uint64_t x431 = 316741277LLU;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t107 = 37536;

    t107 = (x429<=(x430|(x431^x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x434 = -1;
	static volatile int64_t x436 = 1620789984196LL;
	volatile int32_t t108 = -1;

    t108 = (x433<=(x434|(x435^x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	int32_t x438 = -1;
	uint16_t x439 = UINT16_MAX;
	int32_t t109 = -3296614;

    t109 = (x437<=(x438|(x439^x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x441 = INT16_MIN;
	volatile uint32_t x442 = 86U;
	volatile int8_t x443 = INT8_MAX;
	int32_t x444 = -81;
	int32_t t110 = -14;

    t110 = (x441<=(x442|(x443^x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MAX;
	static uint16_t x446 = UINT16_MAX;
	uint8_t x447 = UINT8_MAX;
	static uint8_t x448 = UINT8_MAX;

    t111 = (x445<=(x446|(x447^x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MAX;
	volatile int32_t x450 = -1;
	static uint8_t x451 = 92U;
	static uint64_t x452 = UINT64_MAX;
	int32_t t112 = 807564;

    t112 = (x449<=(x450|(x451^x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	volatile uint16_t x454 = 2U;
	int64_t x455 = -1973472LL;
	volatile uint64_t x456 = 46117784LLU;
	int32_t t113 = -85;

    t113 = (x453<=(x454|(x455^x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = -1;
	uint16_t x458 = UINT16_MAX;
	int64_t x459 = -2835601LL;
	int32_t x460 = INT32_MAX;
	volatile int32_t t114 = 50253;

    t114 = (x457<=(x458|(x459^x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x461 = UINT32_MAX;
	volatile int8_t x462 = 3;
	static volatile uint64_t x463 = UINT64_MAX;
	volatile int8_t x464 = -1;

    t115 = (x461<=(x462|(x463^x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = UINT64_MAX;
	volatile int8_t x466 = INT8_MIN;
	int32_t x467 = INT32_MIN;
	static int32_t t116 = -498317393;

    t116 = (x465<=(x466|(x467^x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = -1;
	int8_t x472 = INT8_MAX;
	volatile int32_t t117 = 0;

    t117 = (x469<=(x470|(x471^x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -1;
	int64_t x476 = -1LL;
	int32_t t118 = -7820243;

    t118 = (x473<=(x474|(x475^x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x478 = INT32_MIN;
	volatile uint8_t x479 = 20U;
	int16_t x480 = -10;

    t119 = (x477<=(x478|(x479^x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = 1;
	int64_t x482 = -1LL;
	int64_t x483 = -1LL;
	uint32_t x484 = 2724686U;
	static int32_t t120 = -2;

    t120 = (x481<=(x482|(x483^x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	int8_t x488 = INT8_MIN;
	static int32_t t121 = 92;

    t121 = (x485<=(x486|(x487^x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	uint32_t x490 = 62438U;
	volatile int64_t x491 = INT64_MIN;
	volatile uint8_t x492 = UINT8_MAX;
	int32_t t122 = 734154;

    t122 = (x489<=(x490|(x491^x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint32_t x493 = 173007491U;
	int8_t x494 = INT8_MIN;
	static int16_t x495 = 3;
	volatile int32_t t123 = 476123;

    t123 = (x493<=(x494|(x495^x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x497 = -1;
	volatile int32_t x498 = INT32_MIN;

    t124 = (x497<=(x498|(x499^x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = -1990;
	uint32_t x503 = 38081210U;

    t125 = (x501<=(x502|(x503^x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x506 = INT16_MIN;
	uint64_t x508 = UINT64_MAX;
	static int32_t t126 = -24788247;

    t126 = (x505<=(x506|(x507^x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x510 = INT64_MAX;
	int64_t x511 = INT64_MIN;
	static int16_t x512 = INT16_MAX;
	static int32_t t127 = 438;

    t127 = (x509<=(x510|(x511^x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = INT16_MAX;
	static uint32_t x514 = 23U;
	uint32_t x515 = UINT32_MAX;
	volatile int32_t t128 = -207355;

    t128 = (x513<=(x514|(x515^x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = 64870;
	int16_t x518 = INT16_MIN;
	uint32_t x519 = 134602592U;
	static uint64_t x520 = 467182102912492LLU;

    t129 = (x517<=(x518|(x519^x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = UINT32_MAX;
	uint32_t x522 = 146604U;
	uint8_t x524 = 17U;
	volatile int32_t t130 = 1028836;

    t130 = (x521<=(x522|(x523^x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = INT8_MAX;
	int8_t x526 = -5;
	static int32_t x528 = INT32_MIN;
	int32_t t131 = 2040;

    t131 = (x525<=(x526|(x527^x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MAX;
	uint32_t x530 = UINT32_MAX;
	int32_t t132 = 182641;

    t132 = (x529<=(x530|(x531^x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = INT16_MIN;
	uint32_t x534 = UINT32_MAX;
	uint64_t x535 = UINT64_MAX;
	uint32_t x536 = 456U;
	volatile int32_t t133 = -62;

    t133 = (x533<=(x534|(x535^x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x538 = INT8_MIN;
	int16_t x539 = 102;
	static int32_t x540 = -420;
	volatile int32_t t134 = -826;

    t134 = (x537<=(x538|(x539^x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MAX;
	volatile uint64_t x542 = 55333107LLU;
	static int64_t x543 = -1LL;
	volatile int32_t t135 = -1046953;

    t135 = (x541<=(x542|(x543^x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x545 = 374U;
	int32_t x546 = INT32_MAX;
	volatile int8_t x548 = INT8_MIN;
	volatile int32_t t136 = -207;

    t136 = (x545<=(x546|(x547^x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = -61219;
	uint16_t x550 = UINT16_MAX;
	uint16_t x551 = UINT16_MAX;
	volatile int8_t x552 = 0;
	static volatile int32_t t137 = 361;

    t137 = (x549<=(x550|(x551^x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -1;
	uint8_t x554 = 11U;
	int8_t x555 = INT8_MIN;
	int32_t x556 = INT32_MIN;
	static volatile int32_t t138 = 674750043;

    t138 = (x553<=(x554|(x555^x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	static int16_t x559 = -1;
	static volatile int32_t t139 = -9722;

    t139 = (x557<=(x558|(x559^x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MAX;
	static int16_t x562 = -1;
	uint8_t x563 = 10U;
	volatile int32_t t140 = 76;

    t140 = (x561<=(x562|(x563^x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = -1;
	int64_t x566 = INT64_MAX;
	int64_t x567 = 94514LL;
	volatile int32_t t141 = 1;

    t141 = (x565<=(x566|(x567^x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = 3;
	int64_t x570 = INT64_MIN;
	int8_t x571 = INT8_MAX;
	volatile int32_t t142 = 86183;

    t142 = (x569<=(x570|(x571^x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x574 = 15U;
	int16_t x575 = INT16_MIN;
	static uint32_t x576 = 20069365U;
	static int32_t t143 = -1;

    t143 = (x573<=(x574|(x575^x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MAX;
	volatile int64_t x579 = INT64_MIN;
	uint16_t x580 = 0U;
	volatile int32_t t144 = -630079;

    t144 = (x577<=(x578|(x579^x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x582 = INT16_MIN;
	int16_t x583 = INT16_MIN;
	int8_t x584 = INT8_MIN;
	volatile int32_t t145 = -19;

    t145 = (x581<=(x582|(x583^x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x585 = 147278181U;
	static uint16_t x586 = 11495U;
	static int8_t x587 = INT8_MIN;
	static uint8_t x588 = 1U;
	int32_t t146 = -115284;

    t146 = (x585<=(x586|(x587^x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	uint8_t x590 = UINT8_MAX;
	int64_t x591 = INT64_MAX;
	int8_t x592 = INT8_MIN;

    t147 = (x589<=(x590|(x591^x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = -165;
	int64_t x594 = -1LL;
	uint64_t x595 = 6160210100240LLU;
	static volatile uint8_t x596 = UINT8_MAX;

    t148 = (x593<=(x594|(x595^x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = UINT8_MAX;
	int32_t x600 = INT32_MAX;

    t149 = (x597<=(x598|(x599^x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = 44;
	volatile uint16_t x602 = 385U;
	int8_t x603 = INT8_MIN;
	volatile int32_t x604 = 332920;
	static volatile int32_t t150 = -1588;

    t150 = (x601<=(x602|(x603^x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = INT16_MIN;
	int8_t x606 = 0;
	int32_t x607 = 99745;
	volatile int32_t t151 = -74225122;

    t151 = (x605<=(x606|(x607^x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x610 = UINT16_MAX;
	int8_t x611 = -1;
	uint32_t x612 = 94627691U;
	volatile int32_t t152 = -3155805;

    t152 = (x609<=(x610|(x611^x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MIN;
	volatile int8_t x614 = INT8_MIN;
	uint32_t x615 = 300316U;
	int8_t x616 = INT8_MIN;
	volatile int32_t t153 = -6137881;

    t153 = (x613<=(x614|(x615^x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	volatile int64_t x620 = -7887435143393749LL;
	int32_t t154 = 20819;

    t154 = (x617<=(x618|(x619^x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 1801382LLU;
	volatile uint32_t x622 = 185620961U;
	int16_t x623 = -1;
	uint8_t x624 = 14U;
	volatile int32_t t155 = -37048715;

    t155 = (x621<=(x622|(x623^x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x626 = 505LLU;
	volatile int16_t x627 = INT16_MAX;
	int8_t x628 = -44;
	static int32_t t156 = 4057970;

    t156 = (x625<=(x626|(x627^x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x631 = INT16_MIN;
	static int8_t x632 = INT8_MIN;
	int32_t t157 = 26726715;

    t157 = (x629<=(x630|(x631^x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	int32_t x634 = -1;
	int16_t x635 = 0;
	int64_t x636 = INT64_MIN;
	volatile int32_t t158 = 506256;

    t158 = (x633<=(x634|(x635^x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = 4282539078LL;
	int8_t x639 = 30;
	int16_t x640 = -1444;
	volatile int32_t t159 = 0;

    t159 = (x637<=(x638|(x639^x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = INT16_MIN;
	uint64_t x642 = UINT64_MAX;
	int8_t x643 = INT8_MIN;
	int32_t x644 = 0;
	volatile int32_t t160 = -3786;

    t160 = (x641<=(x642|(x643^x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 821U;
	volatile int8_t x646 = INT8_MIN;
	int32_t x648 = -40;
	volatile int32_t t161 = -118562;

    t161 = (x645<=(x646|(x647^x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 2U;
	int8_t x650 = -1;
	int32_t x652 = INT32_MIN;

    t162 = (x649<=(x650|(x651^x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x653 = -89432715501008905LL;
	uint32_t x654 = 2632U;
	volatile uint16_t x655 = 3387U;
	static int8_t x656 = INT8_MIN;

    t163 = (x653<=(x654|(x655^x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = UINT64_MAX;
	volatile int8_t x658 = INT8_MIN;
	int64_t x659 = INT64_MAX;
	int32_t x660 = INT32_MAX;
	volatile int32_t t164 = -764356204;

    t164 = (x657<=(x658|(x659^x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x661 = INT64_MIN;
	static int16_t x662 = -8227;
	int8_t x663 = -1;
	int16_t x664 = -2223;
	volatile int32_t t165 = -4550;

    t165 = (x661<=(x662|(x663^x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = -2668781LL;
	int8_t x666 = INT8_MAX;
	uint64_t x667 = UINT64_MAX;
	int32_t x668 = 348331;
	volatile int32_t t166 = 790737;

    t166 = (x665<=(x666|(x667^x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 6U;
	uint16_t x671 = UINT16_MAX;
	int32_t t167 = -80059;

    t167 = (x669<=(x670|(x671^x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 5033U;
	volatile int64_t x674 = INT64_MIN;
	volatile int16_t x675 = -1;
	int32_t t168 = -276;

    t168 = (x673<=(x674|(x675^x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = 9;
	uint64_t x679 = UINT64_MAX;
	uint8_t x680 = 0U;

    t169 = (x677<=(x678|(x679^x680)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = INT32_MAX;
	static volatile int16_t x683 = -5;
	int8_t x684 = 1;
	volatile int32_t t170 = 4056633;

    t170 = (x681<=(x682|(x683^x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -102;
	uint32_t x687 = 4974U;
	uint32_t x688 = UINT32_MAX;
	static volatile int32_t t171 = 842597;

    t171 = (x685<=(x686|(x687^x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -4359987603198674LL;
	static volatile int16_t x690 = -1;
	int8_t x691 = -4;
	static int64_t x692 = -482465744597893366LL;
	int32_t t172 = 0;

    t172 = (x689<=(x690|(x691^x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MAX;
	volatile int16_t x694 = INT16_MAX;
	int64_t x695 = -1LL;
	static int64_t x696 = INT64_MIN;

    t173 = (x693<=(x694|(x695^x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 1U;
	uint16_t x699 = 1U;
	static int32_t t174 = -1015555;

    t174 = (x697<=(x698|(x699^x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = 15;
	int32_t x702 = -26487;
	uint32_t x703 = UINT32_MAX;
	static int32_t t175 = 388;

    t175 = (x701<=(x702|(x703^x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile uint32_t x706 = UINT32_MAX;
	int32_t x707 = 1775;
	static volatile uint32_t x708 = UINT32_MAX;
	static volatile int32_t t176 = 58;

    t176 = (x705<=(x706|(x707^x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x711 = INT32_MIN;
	int8_t x712 = INT8_MIN;

    t177 = (x709<=(x710|(x711^x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x713 = -218;
	static int32_t x714 = 59;
	int64_t x715 = -885328951130LL;
	int64_t x716 = INT64_MIN;

    t178 = (x713<=(x714|(x715^x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	static int32_t x718 = -1;
	uint32_t x719 = UINT32_MAX;
	volatile int64_t x720 = INT64_MAX;
	int32_t t179 = 6798;

    t179 = (x717<=(x718|(x719^x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	static uint64_t x722 = UINT64_MAX;
	uint16_t x724 = UINT16_MAX;
	static volatile int32_t t180 = 5112383;

    t180 = (x721<=(x722|(x723^x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x726 = -1;
	int8_t x727 = -52;
	int8_t x728 = -7;
	volatile int32_t t181 = 1;

    t181 = (x725<=(x726|(x727^x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = -742421575;
	int8_t x730 = 0;
	static volatile uint64_t x731 = 157LLU;
	int32_t t182 = 15;

    t182 = (x729<=(x730|(x731^x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x733 = INT64_MAX;
	volatile int8_t x734 = -1;
	uint64_t x736 = 3221LLU;
	volatile int32_t t183 = 789;

    t183 = (x733<=(x734|(x735^x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	static int16_t x738 = INT16_MIN;
	int32_t x740 = INT32_MIN;
	static int32_t t184 = 297694;

    t184 = (x737<=(x738|(x739^x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x742 = 33U;
	int64_t x743 = -1LL;
	volatile uint64_t x744 = 307LLU;
	int32_t t185 = 1;

    t185 = (x741<=(x742|(x743^x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = 5422159704831LL;
	int64_t x746 = INT64_MIN;
	int64_t x747 = -1LL;
	uint8_t x748 = UINT8_MAX;
	int32_t t186 = -78215;

    t186 = (x745<=(x746|(x747^x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -12;
	int8_t x750 = 9;
	int32_t x751 = -181;
	volatile int32_t t187 = -1;

    t187 = (x749<=(x750|(x751^x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x753 = 177614840224464733LLU;
	int32_t x754 = 1;
	volatile int64_t x755 = -1724307088247LL;
	static uint16_t x756 = UINT16_MAX;
	volatile int32_t t188 = -222;

    t188 = (x753<=(x754|(x755^x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x758 = 5982U;
	int8_t x760 = 49;
	static int32_t t189 = -249640;

    t189 = (x757<=(x758|(x759^x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x761 = INT32_MIN;
	static int8_t x764 = 11;
	static int32_t t190 = -136565;

    t190 = (x761<=(x762|(x763^x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = UINT64_MAX;
	int32_t x766 = INT32_MAX;
	int32_t t191 = 7525;

    t191 = (x765<=(x766|(x767^x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x771 = INT8_MIN;
	uint64_t x772 = UINT64_MAX;
	volatile int32_t t192 = 2;

    t192 = (x769<=(x770|(x771^x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint64_t x774 = 251226453963381567LLU;
	int16_t x775 = -6;
	int16_t x776 = 1;

    t193 = (x773<=(x774|(x775^x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x778 = -1;
	int64_t x779 = 2327618LL;
	volatile uint64_t x780 = UINT64_MAX;
	int32_t t194 = 17735;

    t194 = (x777<=(x778|(x779^x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x783 = UINT64_MAX;
	int64_t x784 = -1LL;
	volatile int32_t t195 = 264666399;

    t195 = (x781<=(x782|(x783^x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x785 = -1LL;
	static int64_t x786 = -1LL;
	volatile int32_t x787 = INT32_MIN;
	int64_t x788 = INT64_MIN;
	volatile int32_t t196 = -694;

    t196 = (x785<=(x786|(x787^x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 2U;
	volatile uint64_t x790 = UINT64_MAX;
	uint64_t x791 = UINT64_MAX;
	int16_t x792 = -1;
	int32_t t197 = 37;

    t197 = (x789<=(x790|(x791^x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = UINT32_MAX;
	int16_t x794 = 81;
	int64_t x796 = 43LL;
	int32_t t198 = -526;

    t198 = (x793<=(x794|(x795^x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x797 = UINT8_MAX;
	uint8_t x798 = UINT8_MAX;
	int16_t x799 = -1;
	int8_t x800 = 1;
	int32_t t199 = -2026;

    t199 = (x797<=(x798|(x799^x800)));

    if (t199 != 0) { NG(); } else { ; }
	
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

