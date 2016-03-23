
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

volatile uint8_t x8 = 107U;
volatile int8_t x12 = INT8_MIN;
volatile int8_t x14 = -1;
int16_t x21 = 18;
static int16_t x24 = INT16_MIN;
uint64_t x25 = 755992143LLU;
uint16_t x30 = 126U;
volatile int32_t x32 = INT32_MIN;
int8_t x35 = -4;
volatile uint8_t x38 = 0U;
uint64_t x43 = 246881346LLU;
int8_t x68 = INT8_MAX;
int16_t x76 = INT16_MAX;
uint8_t x86 = UINT8_MAX;
int32_t x90 = -27709;
static int8_t x91 = -1;
int64_t x103 = -1LL;
int8_t x114 = INT8_MAX;
int16_t x115 = -3;
int32_t t20 = -6956;
uint16_t x121 = 5U;
static volatile int32_t x132 = INT32_MIN;
static uint16_t x139 = 0U;
int8_t x141 = INT8_MIN;
static uint64_t x144 = 25556310674022LLU;
uint8_t x151 = 16U;
int64_t x156 = INT64_MAX;
int8_t x157 = -1;
static int16_t x160 = INT16_MIN;
static uint32_t t29 = 353U;
uint8_t x161 = 80U;
static volatile uint64_t x169 = 3502755127LLU;
int16_t x179 = -1;
static uint64_t x181 = 621289LLU;
uint64_t x187 = 12LLU;
volatile int32_t t35 = 236109772;
uint16_t x190 = UINT16_MAX;
static int64_t t37 = 188920416898057379LL;
static int16_t x201 = INT16_MAX;
volatile uint8_t x225 = UINT8_MAX;
int32_t x228 = -1;
volatile int32_t t42 = -54;
volatile uint64_t t43 = 2368756261LLU;
int8_t x234 = -1;
int8_t x235 = INT8_MIN;
int32_t t44 = -484;
int16_t x244 = INT16_MAX;
int32_t x245 = -431096839;
int8_t x249 = INT8_MAX;
int32_t x251 = 2;
static uint64_t x252 = 1376LLU;
static int64_t x255 = 54LL;
int32_t x262 = 60150;
int64_t x272 = INT64_MIN;
volatile int32_t t50 = 31353;
int16_t x277 = INT16_MIN;
int8_t x281 = 0;
static int64_t x285 = INT64_MIN;
static volatile uint32_t x290 = 3791U;
int64_t x292 = INT64_MIN;
int32_t x300 = INT32_MIN;
int8_t x306 = -55;
int32_t t62 = 1965515;
uint16_t x334 = 17U;
int64_t x335 = INT64_MIN;
int8_t x336 = -3;
int64_t x343 = INT64_MAX;
int64_t x346 = -87812917814LL;
int32_t x350 = INT32_MAX;
int32_t t69 = 14;
volatile int16_t x363 = -421;
volatile uint64_t x369 = 34LLU;
int8_t x374 = -1;
uint16_t x380 = 209U;
int64_t x381 = INT64_MIN;
int32_t x382 = INT32_MAX;
volatile int32_t x384 = INT32_MIN;
int64_t t76 = -18609LL;
static int16_t x391 = -1;
int64_t t78 = -6LL;
uint32_t x394 = 1013493U;
static int16_t x396 = INT16_MAX;
static volatile uint64_t x400 = 10387LLU;
static uint64_t x405 = 5734893479323884LLU;
uint32_t x410 = 206630U;
int8_t x421 = INT8_MIN;
int32_t x423 = 0;
int8_t x426 = INT8_MAX;
int64_t x431 = INT64_MAX;
volatile uint32_t t85 = 169U;
volatile int64_t x440 = INT64_MIN;
int64_t t87 = -15811899641870LL;
uint16_t x455 = 1U;
static uint64_t x461 = UINT64_MAX;
int16_t x466 = -1;
static int64_t x474 = -1LL;
uint64_t x476 = 0LLU;
uint64_t t96 = 9284910LLU;
volatile uint8_t x483 = 3U;
volatile uint32_t x484 = UINT32_MAX;
volatile int32_t t98 = 1135;
int16_t x516 = -1;
volatile int16_t x520 = 0;
uint32_t x522 = UINT32_MAX;
uint32_t x526 = 75779566U;
static int8_t x546 = INT8_MIN;
int16_t x552 = INT16_MIN;
static volatile uint64_t t108 = 1708908977LLU;
volatile int32_t x554 = -1;
int16_t x559 = -1;
int8_t x565 = -1;
uint32_t x566 = 5731408U;
volatile int8_t x575 = -1;
volatile uint64_t t113 = 107086665128LLU;
uint32_t x579 = 1926143591U;
static uint64_t x590 = 65824365989LLU;
uint64_t t116 = 10572198353024755LLU;
int8_t x596 = -1;
int16_t x601 = INT16_MIN;
uint64_t x602 = 2215445LLU;
static volatile uint64_t t118 = 524668484459144LLU;
volatile uint8_t x607 = 0U;
static int16_t x614 = INT16_MAX;
static uint32_t x615 = 162353415U;
uint64_t x618 = 1427278152LLU;
volatile uint32_t x631 = UINT32_MAX;
int64_t x636 = 54774423460LL;
volatile uint32_t t124 = 201075U;
volatile int64_t x650 = -462LL;
int8_t x653 = INT8_MIN;
static volatile int64_t x665 = INT64_MIN;
int16_t x670 = 10402;
int32_t x676 = -1;
int8_t x679 = INT8_MAX;
static uint32_t x680 = 610U;
uint8_t x681 = 0U;
uint8_t x682 = 1U;
uint64_t x694 = 5174332610765016LLU;
static volatile uint8_t x695 = 18U;
int16_t x703 = 6;
static int64_t x706 = 12LL;
uint8_t x708 = 3U;
volatile uint16_t x710 = 7U;
int64_t x711 = -1LL;
static int32_t t141 = -139821575;
int8_t x716 = INT8_MIN;
uint64_t x726 = 1665639215332504733LLU;
uint64_t x730 = 1315854171LLU;
int32_t x731 = INT32_MAX;
int64_t x733 = -5142083LL;
volatile int16_t x734 = INT16_MAX;
int8_t x736 = INT8_MIN;
volatile uint32_t x741 = 11218U;
int8_t x749 = INT8_MIN;
int64_t x752 = -1LL;
int64_t x757 = -1LL;
int32_t t152 = 60;
int16_t x777 = -453;
int8_t x785 = INT8_MAX;
uint32_t x786 = UINT32_MAX;
volatile uint32_t x793 = 6U;
uint16_t x803 = 235U;
int64_t x808 = -2040LL;
int32_t x809 = INT32_MIN;
int16_t x820 = INT16_MIN;
volatile uint64_t t163 = 54850877367LLU;
uint64_t x836 = 3338907086089755815LLU;
int8_t x839 = 3;
int32_t t167 = -104;
uint16_t x849 = 120U;
volatile int32_t t170 = -1;
volatile int8_t x858 = 2;
static int32_t x860 = -12227992;
static uint64_t t172 = 5980LLU;
int32_t x861 = -1205;
static int64_t x867 = INT64_MAX;
int32_t x881 = -1;
volatile uint64_t x882 = 309502382517754LLU;
static int8_t x884 = 11;
static int64_t x887 = INT64_MAX;
volatile uint32_t t178 = 111U;
static uint64_t x900 = 16342070LLU;
uint64_t t179 = 19160412828LLU;
static int64_t x905 = INT64_MIN;
int64_t x918 = -3984006767LL;
int16_t x920 = -2;
uint16_t x924 = UINT16_MAX;
static int64_t x932 = 108490270919400LL;
int32_t x934 = -116;
int8_t x937 = 0;
volatile int32_t t187 = 488;
volatile uint8_t x942 = UINT8_MAX;
uint64_t x944 = 401587743209702481LLU;
int64_t t188 = -26051LL;
static int64_t x946 = 1329295475LL;
static int16_t x952 = -10;
int64_t t190 = -31477146010942872LL;
int64_t x959 = -1LL;
int16_t x960 = -1;
volatile uint32_t x962 = 741U;
int8_t x963 = INT8_MAX;
int32_t t194 = -1776725;
int16_t x978 = -143;
volatile int32_t x981 = -1;
int32_t t196 = -851276628;
uint64_t t197 = 85365963880LLU;
static int32_t x989 = 781;
int8_t x994 = -1;
uint64_t t199 = 26443811026LLU;


void f0(void) {
    	static volatile int16_t x5 = -1;
	int64_t x6 = 2LL;
	int16_t x7 = INT16_MIN;
	int64_t t0 = -217734606224565LL;

    t0 = (x5+(x6-(x7!=x8)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = INT64_MAX;
	static volatile int8_t x10 = -62;
	int32_t x11 = 257389;
	volatile int64_t t1 = -4720708463LL;

    t1 = (x9+(x10-(x11!=x12)));

    if (t1 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = UINT64_MAX;
	static uint8_t x15 = 13U;
	uint8_t x16 = 7U;
	volatile uint64_t t2 = 8916707LLU;

    t2 = (x13+(x14-(x15!=x16)));

    if (t2 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x22 = 776001051LLU;
	static uint8_t x23 = 98U;
	uint64_t t3 = 38188072078891746LLU;

    t3 = (x21+(x22-(x23!=x24)));

    if (t3 != 776001068LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x26 = -1;
	int32_t x27 = INT32_MIN;
	volatile int64_t x28 = INT64_MIN;
	static volatile uint64_t t4 = 57438069573LLU;

    t4 = (x25+(x26-(x27!=x28)));

    if (t4 != 755992141LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = -1;
	volatile int64_t x31 = INT64_MIN;
	volatile int32_t t5 = 439;

    t5 = (x29+(x30-(x31!=x32)));

    if (t5 != 124) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = -1;
	int32_t x34 = 2003467;
	int32_t x36 = INT32_MIN;
	int32_t t6 = 0;

    t6 = (x33+(x34-(x35!=x36)));

    if (t6 != 2003465) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x37 = -410;
	uint16_t x39 = 215U;
	uint16_t x40 = UINT16_MAX;
	static volatile int32_t t7 = 256972163;

    t7 = (x37+(x38-(x39!=x40)));

    if (t7 != -411) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x41 = 2U;
	int16_t x42 = INT16_MIN;
	uint64_t x44 = UINT64_MAX;
	int32_t t8 = -2316693;

    t8 = (x41+(x42-(x43!=x44)));

    if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x45 = INT8_MIN;
	static uint8_t x46 = 2U;
	int32_t x47 = INT32_MIN;
	int16_t x48 = INT16_MIN;
	int32_t t9 = 6;

    t9 = (x45+(x46-(x47!=x48)));

    if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x61 = 109987U;
	int16_t x62 = -1;
	uint8_t x63 = 0U;
	static uint64_t x64 = 62870LLU;
	static volatile uint32_t t10 = 5274622U;

    t10 = (x61+(x62-(x63!=x64)));

    if (t10 != 109985U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x65 = 1334U;
	uint16_t x66 = UINT16_MAX;
	static int8_t x67 = INT8_MAX;
	volatile int32_t t11 = 2;

    t11 = (x65+(x66-(x67!=x68)));

    if (t11 != 66869) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = 3162962201LL;
	static int32_t x75 = -6637599;
	volatile int64_t t12 = 1568783075885783LL;

    t12 = (x73+(x74-(x75!=x76)));

    if (t12 != 1015478552LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x77 = INT32_MAX;
	int16_t x78 = INT16_MIN;
	int16_t x79 = -10278;
	uint64_t x80 = UINT64_MAX;
	int32_t t13 = 109402357;

    t13 = (x77+(x78-(x79!=x80)));

    if (t13 != 2147450878) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x81 = 6U;
	int16_t x82 = 52;
	volatile uint64_t x83 = UINT64_MAX;
	static uint64_t x84 = UINT64_MAX;
	volatile uint32_t t14 = 6866U;

    t14 = (x81+(x82-(x83!=x84)));

    if (t14 != 58U) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint32_t x85 = 50420710U;
	uint64_t x87 = 13824498904LLU;
	int64_t x88 = -1702601600535LL;
	volatile uint32_t t15 = 1509U;

    t15 = (x85+(x86-(x87!=x88)));

    if (t15 != 50420964U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x89 = 21U;
	int32_t x92 = 8479266;
	uint32_t t16 = 1047U;

    t16 = (x89+(x90-(x91!=x92)));

    if (t16 != 4294939607U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x101 = -1;
	int8_t x102 = INT8_MIN;
	static volatile int16_t x104 = INT16_MIN;
	static volatile int32_t t17 = 464903;

    t17 = (x101+(x102-(x103!=x104)));

    if (t17 != -130) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x109 = 24254U;
	int8_t x110 = INT8_MIN;
	static int8_t x111 = 1;
	static uint8_t x112 = 6U;
	int32_t t18 = 25069;

    t18 = (x109+(x110-(x111!=x112)));

    if (t18 != 24125) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x113 = 428LL;
	uint64_t x116 = 724634280LLU;
	volatile int64_t t19 = 1145719005567736264LL;

    t19 = (x113+(x114-(x115!=x116)));

    if (t19 != 554LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x117 = 3372;
	int8_t x118 = INT8_MIN;
	uint32_t x119 = 42U;
	int16_t x120 = -1;

    t20 = (x117+(x118-(x119!=x120)));

    if (t20 != 3243) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x122 = UINT64_MAX;
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = 1;
	volatile uint64_t t21 = 1832478LLU;

    t21 = (x121+(x122-(x123!=x124)));

    if (t21 != 3LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x125 = 7249803454LLU;
	static int16_t x126 = -67;
	static int16_t x127 = 3;
	static uint16_t x128 = UINT16_MAX;
	volatile uint64_t t22 = 51LLU;

    t22 = (x125+(x126-(x127!=x128)));

    if (t22 != 7249803386LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x129 = 16522205U;
	uint16_t x130 = UINT16_MAX;
	uint64_t x131 = UINT64_MAX;
	uint32_t t23 = 3U;

    t23 = (x129+(x130-(x131!=x132)));

    if (t23 != 16587739U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x133 = 368LLU;
	volatile uint64_t x134 = 38LLU;
	uint16_t x135 = 8U;
	int32_t x136 = INT32_MIN;
	static uint64_t t24 = 34336234LLU;

    t24 = (x133+(x134-(x135!=x136)));

    if (t24 != 405LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x137 = -37468;
	uint32_t x138 = 1292139072U;
	int16_t x140 = INT16_MIN;
	volatile uint32_t t25 = 1U;

    t25 = (x137+(x138-(x139!=x140)));

    if (t25 != 1292101603U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x142 = 104463852;
	uint8_t x143 = 4U;
	static volatile int32_t t26 = -112556400;

    t26 = (x141+(x142-(x143!=x144)));

    if (t26 != 104463723) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x149 = INT64_MAX;
	int16_t x150 = INT16_MIN;
	static volatile uint8_t x152 = 3U;
	volatile int64_t t27 = 30551253LL;

    t27 = (x149+(x150-(x151!=x152)));

    if (t27 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x153 = INT64_MIN;
	uint32_t x154 = UINT32_MAX;
	uint32_t x155 = UINT32_MAX;
	volatile int64_t t28 = 666082524LL;

    t28 = (x153+(x154-(x155!=x156)));

    if (t28 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x158 = 1U;
	static volatile int16_t x159 = INT16_MIN;

    t29 = (x157+(x158-(x159!=x160)));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x162 = UINT32_MAX;
	volatile uint64_t x163 = 17839771415LLU;
	int8_t x164 = -7;
	static uint32_t t30 = 47U;

    t30 = (x161+(x162-(x163!=x164)));

    if (t30 != 78U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x165 = 594U;
	volatile uint16_t x166 = 112U;
	volatile int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;
	int32_t t31 = -143376136;

    t31 = (x165+(x166-(x167!=x168)));

    if (t31 != 705) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x170 = 11974277688805LLU;
	int64_t x171 = -91277566LL;
	int64_t x172 = 550309956992246LL;
	volatile uint64_t t32 = 14436LLU;

    t32 = (x169+(x170-(x171!=x172)));

    if (t32 != 11977780443931LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x177 = UINT32_MAX;
	static int64_t x178 = 31784LL;
	uint16_t x180 = 106U;
	static volatile int64_t t33 = 2349969LL;

    t33 = (x177+(x178-(x179!=x180)));

    if (t33 != 4294999078LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x182 = 125U;
	static int32_t x183 = -1;
	uint8_t x184 = UINT8_MAX;
	uint64_t t34 = 33795353753LLU;

    t34 = (x181+(x182-(x183!=x184)));

    if (t34 != 621413LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x185 = -1;
	uint16_t x186 = UINT16_MAX;
	uint32_t x188 = 256883U;

    t35 = (x185+(x186-(x187!=x188)));

    if (t35 != 65533) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x189 = 51;
	static uint32_t x191 = UINT32_MAX;
	static uint8_t x192 = UINT8_MAX;
	volatile int32_t t36 = -1;

    t36 = (x189+(x190-(x191!=x192)));

    if (t36 != 65585) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x193 = UINT16_MAX;
	int64_t x194 = -1LL;
	static volatile uint64_t x195 = 471774LLU;
	static uint8_t x196 = 0U;

    t37 = (x193+(x194-(x195!=x196)));

    if (t37 != 65533LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x202 = 3LL;
	int32_t x203 = INT32_MAX;
	uint32_t x204 = 151201U;
	volatile int64_t t38 = -1905698154273109950LL;

    t38 = (x201+(x202-(x203!=x204)));

    if (t38 != 32769LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x213 = UINT32_MAX;
	int32_t x214 = INT32_MAX;
	static int16_t x215 = INT16_MIN;
	static int64_t x216 = INT64_MIN;
	static uint32_t t39 = 6U;

    t39 = (x213+(x214-(x215!=x216)));

    if (t39 != 2147483645U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x217 = 9U;
	int16_t x218 = 710;
	volatile uint8_t x219 = 5U;
	int64_t x220 = -270414513222909582LL;
	volatile int32_t t40 = -473504512;

    t40 = (x217+(x218-(x219!=x220)));

    if (t40 != 718) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x221 = INT16_MAX;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 8U;
	int16_t x224 = 11587;
	int32_t t41 = -350841;

    t41 = (x221+(x222-(x223!=x224)));

    if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x226 = 2;
	static uint16_t x227 = 12U;

    t42 = (x225+(x226-(x227!=x228)));

    if (t42 != 256) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x229 = 15037008682326285LLU;
	volatile int8_t x230 = INT8_MIN;
	uint8_t x231 = 1U;
	volatile int64_t x232 = INT64_MIN;

    t43 = (x229+(x230-(x231!=x232)));

    if (t43 != 15037008682326156LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x233 = -1;
	int8_t x236 = INT8_MIN;

    t44 = (x233+(x234-(x235!=x236)));

    if (t44 != -2) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x241 = INT16_MAX;
	int16_t x242 = INT16_MIN;
	volatile int64_t x243 = INT64_MIN;
	int32_t t45 = 25921;

    t45 = (x241+(x242-(x243!=x244)));

    if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x246 = 164743911;
	int64_t x247 = INT64_MIN;
	static int64_t x248 = 10202LL;
	int32_t t46 = 784;

    t46 = (x245+(x246-(x247!=x248)));

    if (t46 != -266352929) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x250 = INT16_MIN;
	volatile int32_t t47 = 147;

    t47 = (x249+(x250-(x251!=x252)));

    if (t47 != -32642) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x253 = -1;
	volatile int64_t x254 = INT64_MAX;
	int16_t x256 = -1;
	int64_t t48 = 7LL;

    t48 = (x253+(x254-(x255!=x256)));

    if (t48 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x261 = 140088944597402LLU;
	uint64_t x263 = UINT64_MAX;
	int32_t x264 = -3917164;
	static volatile uint64_t t49 = 2302175LLU;

    t49 = (x261+(x262-(x263!=x264)));

    if (t49 != 140088944657551LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x269 = INT16_MIN;
	static int8_t x270 = -1;
	uint32_t x271 = 5336U;

    t50 = (x269+(x270-(x271!=x272)));

    if (t50 != -32770) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x273 = INT8_MAX;
	int8_t x274 = -1;
	uint64_t x275 = UINT64_MAX;
	static volatile int32_t x276 = INT32_MIN;
	int32_t t51 = -25495051;

    t51 = (x273+(x274-(x275!=x276)));

    if (t51 != 125) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x278 = INT8_MIN;
	int32_t x279 = -16668039;
	int16_t x280 = INT16_MAX;
	int32_t t52 = 1641;

    t52 = (x277+(x278-(x279!=x280)));

    if (t52 != -32897) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x282 = 1;
	int64_t x283 = -1LL;
	volatile int16_t x284 = -16;
	volatile int32_t t53 = -9;

    t53 = (x281+(x282-(x283!=x284)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x286 = 96U;
	int8_t x287 = INT8_MIN;
	static uint64_t x288 = UINT64_MAX;
	volatile int64_t t54 = -99076231895191LL;

    t54 = (x285+(x286-(x287!=x288)));

    if (t54 != -9223372036854775713LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x289 = UINT16_MAX;
	volatile int16_t x291 = -1;
	volatile uint32_t t55 = 10762688U;

    t55 = (x289+(x290-(x291!=x292)));

    if (t55 != 69325U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x293 = UINT32_MAX;
	int64_t x294 = -720120LL;
	static uint16_t x295 = UINT16_MAX;
	int32_t x296 = 115;
	static int64_t t56 = 4290355787LL;

    t56 = (x293+(x294-(x295!=x296)));

    if (t56 != 4294247174LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x297 = INT64_MAX;
	int16_t x298 = INT16_MIN;
	int8_t x299 = -1;
	static int64_t t57 = 457442440105LL;

    t57 = (x297+(x298-(x299!=x300)));

    if (t57 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x301 = 172434;
	int16_t x302 = -1;
	uint8_t x303 = 84U;
	int16_t x304 = INT16_MIN;
	int32_t t58 = -22634;

    t58 = (x301+(x302-(x303!=x304)));

    if (t58 != 172432) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x305 = -39;
	int64_t x307 = -1LL;
	uint8_t x308 = 1U;
	static volatile int32_t t59 = 35;

    t59 = (x305+(x306-(x307!=x308)));

    if (t59 != -95) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x309 = INT32_MAX;
	uint32_t x310 = 10276U;
	int64_t x311 = -1631192372LL;
	static int16_t x312 = INT16_MAX;
	uint32_t t60 = 306592900U;

    t60 = (x309+(x310-(x311!=x312)));

    if (t60 != 2147493922U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x313 = 6U;
	static uint64_t x314 = 1739787138LLU;
	volatile int32_t x315 = -1;
	int16_t x316 = -1;
	static volatile uint64_t t61 = 860834234LLU;

    t61 = (x313+(x314-(x315!=x316)));

    if (t61 != 1739787144LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x317 = UINT8_MAX;
	volatile int8_t x318 = -1;
	volatile int32_t x319 = 294214495;
	volatile int64_t x320 = -1LL;

    t62 = (x317+(x318-(x319!=x320)));

    if (t62 != 253) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x321 = UINT32_MAX;
	int8_t x322 = -1;
	int32_t x323 = -29658279;
	uint64_t x324 = 102417627089LLU;
	uint32_t t63 = 336890U;

    t63 = (x321+(x322-(x323!=x324)));

    if (t63 != 4294967293U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x325 = 4;
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MAX;
	int8_t x328 = INT8_MIN;
	volatile int32_t t64 = -30625;

    t64 = (x325+(x326-(x327!=x328)));

    if (t64 != 32770) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x333 = -66157790481379385LL;
	volatile int64_t t65 = -25139598LL;

    t65 = (x333+(x334-(x335!=x336)));

    if (t65 != -66157790481379369LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x341 = 129U;
	int32_t x342 = 34;
	static int16_t x344 = 165;
	int32_t t66 = -3120175;

    t66 = (x341+(x342-(x343!=x344)));

    if (t66 != 162) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x345 = INT16_MAX;
	int32_t x347 = 519843;
	int64_t x348 = 1172556LL;
	int64_t t67 = -9356499035838646LL;

    t67 = (x345+(x346-(x347!=x348)));

    if (t67 != -87812885048LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x349 = -1;
	int32_t x351 = -1;
	static volatile uint8_t x352 = 0U;
	volatile int32_t t68 = 1057696905;

    t68 = (x349+(x350-(x351!=x352)));

    if (t68 != 2147483645) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x353 = -56;
	volatile int32_t x354 = -1;
	int8_t x355 = -1;
	static int8_t x356 = INT8_MIN;

    t69 = (x353+(x354-(x355!=x356)));

    if (t69 != -58) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x357 = 8666LLU;
	int32_t x358 = -1;
	static int64_t x359 = INT64_MIN;
	volatile int32_t x360 = INT32_MAX;
	static volatile uint64_t t70 = 427331793536370756LLU;

    t70 = (x357+(x358-(x359!=x360)));

    if (t70 != 8664LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x361 = -1;
	uint8_t x362 = UINT8_MAX;
	int8_t x364 = -1;
	int32_t t71 = 0;

    t71 = (x361+(x362-(x363!=x364)));

    if (t71 != 253) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x365 = 25;
	volatile uint64_t x366 = UINT64_MAX;
	uint64_t x367 = 9164LLU;
	uint8_t x368 = UINT8_MAX;
	uint64_t t72 = 3LLU;

    t72 = (x365+(x366-(x367!=x368)));

    if (t72 != 23LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x370 = 7437792LLU;
	static int16_t x371 = -14;
	static int64_t x372 = INT64_MIN;
	static uint64_t t73 = 9771097693464LLU;

    t73 = (x369+(x370-(x371!=x372)));

    if (t73 != 7437825LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x373 = -16;
	int8_t x375 = 2;
	int32_t x376 = 43;
	volatile int32_t t74 = -179480;

    t74 = (x373+(x374-(x375!=x376)));

    if (t74 != -18) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x377 = -1LL;
	volatile int32_t x378 = INT32_MAX;
	static volatile uint32_t x379 = UINT32_MAX;
	volatile int64_t t75 = 3327930855252005847LL;

    t75 = (x377+(x378-(x379!=x380)));

    if (t75 != 2147483645LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x383 = UINT16_MAX;

    t76 = (x381+(x382-(x383!=x384)));

    if (t76 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x385 = -1;
	static uint16_t x386 = 6158U;
	uint8_t x387 = 6U;
	int16_t x388 = INT16_MIN;
	static int32_t t77 = 759;

    t77 = (x385+(x386-(x387!=x388)));

    if (t77 != 6156) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x389 = INT64_MAX;
	int16_t x390 = -11796;
	uint8_t x392 = UINT8_MAX;

    t78 = (x389+(x390-(x391!=x392)));

    if (t78 != 9223372036854764010LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x393 = 63U;
	volatile int16_t x395 = -1;
	uint32_t t79 = 475916552U;

    t79 = (x393+(x394-(x395!=x396)));

    if (t79 != 1013555U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x397 = INT32_MAX;
	int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MIN;
	volatile int32_t t80 = 315;

    t80 = (x397+(x398-(x399!=x400)));

    if (t80 != 2147450878) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x406 = INT32_MAX;
	uint64_t x407 = 135759262335185LLU;
	static int8_t x408 = -8;
	volatile uint64_t t81 = 311840989616757LLU;

    t81 = (x405+(x406-(x407!=x408)));

    if (t81 != 5734895626807530LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x409 = 125U;
	static uint8_t x411 = 48U;
	static int64_t x412 = 0LL;
	uint32_t t82 = 26990457U;

    t82 = (x409+(x410-(x411!=x412)));

    if (t82 != 206754U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x422 = 982;
	int64_t x424 = INT64_MAX;
	int32_t t83 = 0;

    t83 = (x421+(x422-(x423!=x424)));

    if (t83 != 853) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x425 = 0U;
	int8_t x427 = INT8_MAX;
	static int8_t x428 = 10;
	int32_t t84 = 229;

    t84 = (x425+(x426-(x427!=x428)));

    if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x429 = 1;
	uint32_t x430 = 514005U;
	int32_t x432 = INT32_MAX;

    t85 = (x429+(x430-(x431!=x432)));

    if (t85 != 514005U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x433 = 276U;
	int16_t x434 = -30;
	uint32_t x435 = 81249119U;
	int64_t x436 = -42894847937LL;
	volatile uint32_t t86 = 112U;

    t86 = (x433+(x434-(x435!=x436)));

    if (t86 != 245U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x437 = 89459494676889LL;
	uint32_t x438 = 853168670U;
	static int32_t x439 = INT32_MIN;

    t87 = (x437+(x438-(x439!=x440)));

    if (t87 != 89460347845558LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x445 = INT16_MAX;
	volatile int16_t x446 = INT16_MIN;
	volatile int16_t x447 = -1;
	int32_t x448 = -1;
	int32_t t88 = 219493;

    t88 = (x445+(x446-(x447!=x448)));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x449 = 27130650477LL;
	int16_t x450 = INT16_MAX;
	volatile uint64_t x451 = 106714539161LLU;
	static uint64_t x452 = 299LLU;
	volatile int64_t t89 = 373622LL;

    t89 = (x449+(x450-(x451!=x452)));

    if (t89 != 27130683243LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x453 = UINT16_MAX;
	volatile uint32_t x454 = 35U;
	uint64_t x456 = 3059531030260625292LLU;
	static uint32_t t90 = 48925578U;

    t90 = (x453+(x454-(x455!=x456)));

    if (t90 != 65569U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x457 = -1;
	static uint8_t x458 = 15U;
	static volatile int8_t x459 = -1;
	uint32_t x460 = 1882489U;
	volatile int32_t t91 = 233008;

    t91 = (x457+(x458-(x459!=x460)));

    if (t91 != 13) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x462 = 3610682880978481235LL;
	int32_t x463 = INT32_MAX;
	int8_t x464 = INT8_MAX;
	static uint64_t t92 = 22141351364LLU;

    t92 = (x461+(x462-(x463!=x464)));

    if (t92 != 3610682880978481233LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x465 = INT8_MIN;
	volatile uint32_t x467 = 2114U;
	int64_t x468 = 3645869636369973247LL;
	volatile int32_t t93 = -1;

    t93 = (x465+(x466-(x467!=x468)));

    if (t93 != -130) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x469 = -1;
	int16_t x470 = INT16_MAX;
	int8_t x471 = -1;
	int8_t x472 = 0;
	int32_t t94 = 541819906;

    t94 = (x469+(x470-(x471!=x472)));

    if (t94 != 32765) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x473 = -1386246792556129LL;
	int64_t x475 = INT64_MIN;
	int64_t t95 = 764033463095658LL;

    t95 = (x473+(x474-(x475!=x476)));

    if (t95 != -1386246792556131LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x477 = INT16_MAX;
	uint64_t x478 = 9357611LLU;
	static int64_t x479 = 125378677426367565LL;
	int8_t x480 = -1;

    t96 = (x477+(x478-(x479!=x480)));

    if (t96 != 9390377LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x481 = 331U;
	uint32_t x482 = 5830605U;
	static volatile uint32_t t97 = 30493110U;

    t97 = (x481+(x482-(x483!=x484)));

    if (t97 != 5830935U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x509 = 5;
	int16_t x510 = INT16_MAX;
	static uint8_t x511 = 2U;
	volatile uint32_t x512 = 147703862U;

    t98 = (x509+(x510-(x511!=x512)));

    if (t98 != 32771) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x513 = 2764421209892228027LLU;
	static int64_t x514 = INT64_MIN;
	int8_t x515 = -1;
	static uint64_t t99 = 2511LLU;

    t99 = (x513+(x514-(x515!=x516)));

    if (t99 != 11987793246747003835LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x517 = 111542854LLU;
	static volatile int8_t x518 = INT8_MIN;
	volatile uint16_t x519 = 191U;
	volatile uint64_t t100 = 3476306577537177LLU;

    t100 = (x517+(x518-(x519!=x520)));

    if (t100 != 111542725LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x521 = INT16_MAX;
	static volatile int32_t x523 = INT32_MIN;
	int16_t x524 = INT16_MIN;
	volatile uint32_t t101 = 4169703U;

    t101 = (x521+(x522-(x523!=x524)));

    if (t101 != 32765U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x525 = INT32_MIN;
	uint8_t x527 = UINT8_MAX;
	int64_t x528 = INT64_MAX;
	uint32_t t102 = 1115997U;

    t102 = (x525+(x526-(x527!=x528)));

    if (t102 != 2223263213U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x529 = 0;
	static uint64_t x530 = 1709890097197014211LLU;
	static int32_t x531 = 3128008;
	uint64_t x532 = 401510244LLU;
	uint64_t t103 = 219977267568814LLU;

    t103 = (x529+(x530-(x531!=x532)));

    if (t103 != 1709890097197014210LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x533 = 96;
	uint8_t x534 = 2U;
	volatile int16_t x535 = INT16_MIN;
	int16_t x536 = INT16_MAX;
	int32_t t104 = -16755258;

    t104 = (x533+(x534-(x535!=x536)));

    if (t104 != 97) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x537 = 1206350U;
	uint16_t x538 = UINT16_MAX;
	volatile int64_t x539 = -1LL;
	int8_t x540 = INT8_MAX;
	volatile uint32_t t105 = 7136110U;

    t105 = (x537+(x538-(x539!=x540)));

    if (t105 != 1271884U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x541 = 53LLU;
	volatile int64_t x542 = 128763905LL;
	volatile int8_t x543 = 48;
	uint64_t x544 = UINT64_MAX;
	uint64_t t106 = 183855488782176502LLU;

    t106 = (x541+(x542-(x543!=x544)));

    if (t106 != 128763957LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x545 = 10U;
	static int32_t x547 = INT32_MIN;
	volatile int32_t x548 = INT32_MIN;
	int32_t t107 = 0;

    t107 = (x545+(x546-(x547!=x548)));

    if (t107 != -118) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x549 = 1844179516579LLU;
	int16_t x550 = INT16_MIN;
	uint64_t x551 = UINT64_MAX;

    t108 = (x549+(x550-(x551!=x552)));

    if (t108 != 1844179483810LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x553 = 947;
	int64_t x555 = INT64_MIN;
	volatile int8_t x556 = INT8_MAX;
	volatile int32_t t109 = 7;

    t109 = (x553+(x554-(x555!=x556)));

    if (t109 != 945) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x557 = 17U;
	static int16_t x558 = 0;
	int8_t x560 = INT8_MIN;
	int32_t t110 = -27478;

    t110 = (x557+(x558-(x559!=x560)));

    if (t110 != 16) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x561 = 3786U;
	uint8_t x562 = 5U;
	int32_t x563 = -1;
	int32_t x564 = 408365;
	volatile uint32_t t111 = 3038U;

    t111 = (x561+(x562-(x563!=x564)));

    if (t111 != 3790U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x567 = 112539942439LL;
	uint8_t x568 = 8U;
	volatile uint32_t t112 = 4749130U;

    t112 = (x565+(x566-(x567!=x568)));

    if (t112 != 5731406U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x573 = 1;
	static uint64_t x574 = 1920312LLU;
	int8_t x576 = 6;

    t113 = (x573+(x574-(x575!=x576)));

    if (t113 != 1920312LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x577 = -16;
	int32_t x578 = -97326114;
	int8_t x580 = INT8_MAX;
	volatile int32_t t114 = 1067324141;

    t114 = (x577+(x578-(x579!=x580)));

    if (t114 != -97326131) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x585 = INT8_MIN;
	int16_t x586 = INT16_MIN;
	int32_t x587 = INT32_MIN;
	volatile int16_t x588 = INT16_MAX;
	int32_t t115 = 1;

    t115 = (x585+(x586-(x587!=x588)));

    if (t115 != -32897) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x589 = -1LL;
	uint8_t x591 = 83U;
	volatile uint64_t x592 = 9007584968366LLU;

    t116 = (x589+(x590-(x591!=x592)));

    if (t116 != 65824365987LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x593 = INT64_MIN;
	static int64_t x594 = INT64_MAX;
	static uint32_t x595 = 276805601U;
	volatile int64_t t117 = 3LL;

    t117 = (x593+(x594-(x595!=x596)));

    if (t117 != -2LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x603 = 3272564;
	int32_t x604 = INT32_MIN;

    t118 = (x601+(x602-(x603!=x604)));

    if (t118 != 2182676LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x605 = -391;
	int16_t x606 = -1;
	uint32_t x608 = 900033U;
	volatile int32_t t119 = 34008506;

    t119 = (x605+(x606-(x607!=x608)));

    if (t119 != -393) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x609 = INT64_MAX;
	int64_t x610 = -522484694703LL;
	int16_t x611 = INT16_MAX;
	int64_t x612 = 9603LL;
	static volatile int64_t t120 = -115534027949006LL;

    t120 = (x609+(x610-(x611!=x612)));

    if (t120 != 9223371514370081103LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x613 = INT64_MIN;
	int16_t x616 = -1;
	int64_t t121 = -11344LL;

    t121 = (x613+(x614-(x615!=x616)));

    if (t121 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x617 = INT32_MAX;
	uint32_t x619 = 39537U;
	volatile int64_t x620 = INT64_MIN;
	static volatile uint64_t t122 = 1097090413445320LLU;

    t122 = (x617+(x618-(x619!=x620)));

    if (t122 != 3574761798LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x629 = -1;
	int16_t x630 = INT16_MIN;
	volatile uint32_t x632 = 2512244U;
	int32_t t123 = 1;

    t123 = (x629+(x630-(x631!=x632)));

    if (t123 != -32770) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x633 = 9804390U;
	static int16_t x634 = INT16_MIN;
	volatile int8_t x635 = 1;

    t124 = (x633+(x634-(x635!=x636)));

    if (t124 != 9771621U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x637 = -24LL;
	static uint8_t x638 = 89U;
	int32_t x639 = -441695052;
	int64_t x640 = -1LL;
	volatile int64_t t125 = 15546533471551507LL;

    t125 = (x637+(x638-(x639!=x640)));

    if (t125 != 64LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x641 = -2984028LL;
	int8_t x642 = INT8_MAX;
	int16_t x643 = INT16_MIN;
	int64_t x644 = INT64_MAX;
	int64_t t126 = 85653657204823LL;

    t126 = (x641+(x642-(x643!=x644)));

    if (t126 != -2983902LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x649 = 268169LLU;
	volatile uint16_t x651 = UINT16_MAX;
	int16_t x652 = 4;
	volatile uint64_t t127 = 21LLU;

    t127 = (x649+(x650-(x651!=x652)));

    if (t127 != 267706LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x654 = 184351LL;
	int16_t x655 = 19;
	static uint8_t x656 = UINT8_MAX;
	static int64_t t128 = 13037909LL;

    t128 = (x653+(x654-(x655!=x656)));

    if (t128 != 184222LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x657 = INT64_MIN;
	uint8_t x658 = UINT8_MAX;
	uint8_t x659 = UINT8_MAX;
	int64_t x660 = INT64_MIN;
	int64_t t129 = -297264803603LL;

    t129 = (x657+(x658-(x659!=x660)));

    if (t129 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x666 = 11371;
	static int16_t x667 = INT16_MIN;
	static int32_t x668 = INT32_MIN;
	static volatile int64_t t130 = -784061848577LL;

    t130 = (x665+(x666-(x667!=x668)));

    if (t130 != -9223372036854764438LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x669 = 62275856320LLU;
	static int32_t x671 = -132341881;
	int32_t x672 = -1;
	volatile uint64_t t131 = 33603730702374398LLU;

    t131 = (x669+(x670-(x671!=x672)));

    if (t131 != 62275866721LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x673 = 13U;
	int8_t x674 = INT8_MAX;
	uint64_t x675 = 183894979393LLU;
	volatile int32_t t132 = -12874655;

    t132 = (x673+(x674-(x675!=x676)));

    if (t132 != 139) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x677 = INT16_MIN;
	int16_t x678 = INT16_MIN;
	volatile int32_t t133 = 154343;

    t133 = (x677+(x678-(x679!=x680)));

    if (t133 != -65537) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x683 = INT64_MIN;
	int16_t x684 = 550;
	volatile int32_t t134 = -2029980;

    t134 = (x681+(x682-(x683!=x684)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x685 = 4;
	uint32_t x686 = UINT32_MAX;
	uint64_t x687 = UINT64_MAX;
	static int16_t x688 = -1;
	volatile uint32_t t135 = 67U;

    t135 = (x685+(x686-(x687!=x688)));

    if (t135 != 3U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x689 = 11542U;
	uint16_t x690 = UINT16_MAX;
	int16_t x691 = 0;
	int32_t x692 = -1;
	static volatile int32_t t136 = 444597002;

    t136 = (x689+(x690-(x691!=x692)));

    if (t136 != 77076) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x693 = INT16_MIN;
	int32_t x696 = -1;
	volatile uint64_t t137 = 19496LLU;

    t137 = (x693+(x694-(x695!=x696)));

    if (t137 != 5174332610732247LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x697 = -69;
	uint16_t x698 = UINT16_MAX;
	int8_t x699 = -1;
	int8_t x700 = 0;
	volatile int32_t t138 = -83851299;

    t138 = (x697+(x698-(x699!=x700)));

    if (t138 != 65465) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x701 = 264LL;
	static int64_t x702 = -4415055352493574LL;
	static uint32_t x704 = 12200414U;
	volatile int64_t t139 = -2437LL;

    t139 = (x701+(x702-(x703!=x704)));

    if (t139 != -4415055352493311LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x705 = UINT32_MAX;
	volatile int64_t x707 = INT64_MIN;
	volatile int64_t t140 = 513299LL;

    t140 = (x705+(x706-(x707!=x708)));

    if (t140 != 4294967306LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x709 = INT8_MIN;
	int16_t x712 = -1;

    t141 = (x709+(x710-(x711!=x712)));

    if (t141 != -121) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x713 = -1;
	uint64_t x714 = 466018306110247479LLU;
	int8_t x715 = INT8_MIN;
	uint64_t t142 = 26LLU;

    t142 = (x713+(x714-(x715!=x716)));

    if (t142 != 466018306110247478LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x721 = INT64_MIN;
	uint64_t x722 = 6LLU;
	int8_t x723 = INT8_MIN;
	volatile uint8_t x724 = 56U;
	volatile uint64_t t143 = 98854814LLU;

    t143 = (x721+(x722-(x723!=x724)));

    if (t143 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x725 = 39016892815LLU;
	int8_t x727 = -1;
	volatile int8_t x728 = INT8_MAX;
	static volatile uint64_t t144 = 147869LLU;

    t144 = (x725+(x726-(x727!=x728)));

    if (t144 != 1665639254349397547LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x729 = INT8_MIN;
	int16_t x732 = 1177;
	static volatile uint64_t t145 = 35727055832LLU;

    t145 = (x729+(x730-(x731!=x732)));

    if (t145 != 1315854042LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x735 = INT8_MAX;
	static volatile int64_t t146 = 201742425853221LL;

    t146 = (x733+(x734-(x735!=x736)));

    if (t146 != -5109317LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x737 = -63983742931LL;
	uint8_t x738 = UINT8_MAX;
	uint8_t x739 = UINT8_MAX;
	static int32_t x740 = INT32_MIN;
	volatile int64_t t147 = -3338994322206236200LL;

    t147 = (x737+(x738-(x739!=x740)));

    if (t147 != -63983742677LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x742 = 31;
	volatile int16_t x743 = INT16_MIN;
	int8_t x744 = 14;
	uint32_t t148 = 0U;

    t148 = (x741+(x742-(x743!=x744)));

    if (t148 != 11248U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x745 = 319985474921878LLU;
	int16_t x746 = -1;
	int64_t x747 = -13943LL;
	int16_t x748 = -1;
	volatile uint64_t t149 = 15430159499092706LLU;

    t149 = (x745+(x746-(x747!=x748)));

    if (t149 != 319985474921876LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x750 = INT16_MIN;
	int64_t x751 = INT64_MIN;
	volatile int32_t t150 = -3176;

    t150 = (x749+(x750-(x751!=x752)));

    if (t150 != -32897) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x758 = INT32_MAX;
	int16_t x759 = -1;
	static volatile int64_t x760 = INT64_MIN;
	static volatile int64_t t151 = 327426588319LL;

    t151 = (x757+(x758-(x759!=x760)));

    if (t151 != 2147483645LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x761 = INT16_MIN;
	uint16_t x762 = 331U;
	uint64_t x763 = 20LLU;
	int64_t x764 = 54722071829206650LL;

    t152 = (x761+(x762-(x763!=x764)));

    if (t152 != -32438) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x765 = 66U;
	uint32_t x766 = 60927U;
	int32_t x767 = INT32_MAX;
	int32_t x768 = INT32_MAX;
	volatile uint32_t t153 = 0U;

    t153 = (x765+(x766-(x767!=x768)));

    if (t153 != 60993U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x769 = -1;
	uint32_t x770 = 507841805U;
	volatile int32_t x771 = -1;
	int8_t x772 = INT8_MIN;
	volatile uint32_t t154 = 3436U;

    t154 = (x769+(x770-(x771!=x772)));

    if (t154 != 507841803U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x778 = 66U;
	static volatile uint16_t x779 = 725U;
	static volatile int16_t x780 = INT16_MAX;
	volatile int32_t t155 = -316;

    t155 = (x777+(x778-(x779!=x780)));

    if (t155 != -388) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x787 = 4U;
	volatile uint32_t x788 = 16768U;
	uint32_t t156 = 14U;

    t156 = (x785+(x786-(x787!=x788)));

    if (t156 != 125U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x794 = 2124U;
	int16_t x795 = 6119;
	volatile uint8_t x796 = 10U;
	uint32_t t157 = 1581933U;

    t157 = (x793+(x794-(x795!=x796)));

    if (t157 != 2129U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x797 = 1;
	static int32_t x798 = 1;
	static int64_t x799 = INT64_MAX;
	int16_t x800 = INT16_MIN;
	int32_t t158 = -1;

    t158 = (x797+(x798-(x799!=x800)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x801 = UINT32_MAX;
	static int8_t x802 = -6;
	int32_t x804 = INT32_MAX;
	static volatile uint32_t t159 = 1089U;

    t159 = (x801+(x802-(x803!=x804)));

    if (t159 != 4294967288U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x805 = -44733LL;
	uint8_t x806 = UINT8_MAX;
	int8_t x807 = -1;
	int64_t t160 = 214LL;

    t160 = (x805+(x806-(x807!=x808)));

    if (t160 != -44479LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x810 = UINT8_MAX;
	uint64_t x811 = 11243686758713LLU;
	uint16_t x812 = UINT16_MAX;
	int32_t t161 = 60136;

    t161 = (x809+(x810-(x811!=x812)));

    if (t161 != -2147483394) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x813 = -1;
	uint32_t x814 = 720U;
	int8_t x815 = -1;
	volatile uint8_t x816 = 1U;
	uint32_t t162 = 19U;

    t162 = (x813+(x814-(x815!=x816)));

    if (t162 != 718U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x817 = 2154835500906LLU;
	int64_t x818 = -16625294815LL;
	int16_t x819 = INT16_MAX;

    t163 = (x817+(x818-(x819!=x820)));

    if (t163 != 2138210206090LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x821 = -136335122335270LL;
	volatile int16_t x822 = -1;
	int16_t x823 = INT16_MIN;
	volatile uint8_t x824 = 6U;
	volatile int64_t t164 = -252094385908LL;

    t164 = (x821+(x822-(x823!=x824)));

    if (t164 != -136335122335272LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x825 = -1LL;
	volatile uint32_t x826 = 694613U;
	int16_t x827 = -1;
	uint16_t x828 = UINT16_MAX;
	int64_t t165 = 289LL;

    t165 = (x825+(x826-(x827!=x828)));

    if (t165 != 694611LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x833 = UINT32_MAX;
	static int8_t x834 = 1;
	int64_t x835 = INT64_MIN;
	uint32_t t166 = UINT32_MAX;

    t166 = (x833+(x834-(x835!=x836)));

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x837 = INT16_MIN;
	int16_t x838 = 0;
	uint32_t x840 = 98U;

    t167 = (x837+(x838-(x839!=x840)));

    if (t167 != -32769) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x841 = 3U;
	uint16_t x842 = UINT16_MAX;
	int8_t x843 = -1;
	int16_t x844 = INT16_MIN;
	volatile int32_t t168 = 186;

    t168 = (x841+(x842-(x843!=x844)));

    if (t168 != 65537) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x845 = -351;
	volatile uint32_t x846 = 24671205U;
	static int32_t x847 = INT32_MIN;
	int64_t x848 = INT64_MIN;
	uint32_t t169 = 1728426U;

    t169 = (x845+(x846-(x847!=x848)));

    if (t169 != 24670853U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x850 = INT8_MAX;
	volatile uint32_t x851 = 45U;
	int64_t x852 = INT64_MIN;

    t170 = (x849+(x850-(x851!=x852)));

    if (t170 != 246) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x853 = -2536961723344437393LL;
	uint64_t x854 = 541304458971459LLU;
	uint64_t x855 = 9711898607677LLU;
	int32_t x856 = -1;
	uint64_t t171 = 6872891657653838111LLU;

    t171 = (x853+(x854-(x855!=x856)));

    if (t171 != 15910323654824085681LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x857 = 6227182LLU;
	int8_t x859 = -1;

    t172 = (x857+(x858-(x859!=x860)));

    if (t172 != 6227183LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x862 = 0;
	uint16_t x863 = 56U;
	uint8_t x864 = 87U;
	volatile int32_t t173 = 11685515;

    t173 = (x861+(x862-(x863!=x864)));

    if (t173 != -1206) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x865 = UINT64_MAX;
	int8_t x866 = INT8_MAX;
	uint16_t x868 = UINT16_MAX;
	uint64_t t174 = 5306032142378LLU;

    t174 = (x865+(x866-(x867!=x868)));

    if (t174 != 125LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x877 = -11;
	volatile int16_t x878 = INT16_MIN;
	uint32_t x879 = 15917277U;
	static uint64_t x880 = UINT64_MAX;
	volatile int32_t t175 = 0;

    t175 = (x877+(x878-(x879!=x880)));

    if (t175 != -32780) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x883 = 0;
	uint64_t t176 = 5103158794076LLU;

    t176 = (x881+(x882-(x883!=x884)));

    if (t176 != 309502382517752LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x885 = 36;
	static int8_t x886 = INT8_MAX;
	volatile int8_t x888 = INT8_MAX;
	static volatile int32_t t177 = 503565;

    t177 = (x885+(x886-(x887!=x888)));

    if (t177 != 162) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x893 = 224U;
	static uint32_t x894 = 430U;
	int16_t x895 = -2;
	uint32_t x896 = UINT32_MAX;

    t178 = (x893+(x894-(x895!=x896)));

    if (t178 != 653U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x897 = INT32_MIN;
	volatile uint64_t x898 = 951LLU;
	int64_t x899 = INT64_MIN;

    t179 = (x897+(x898-(x899!=x900)));

    if (t179 != 18446744071562068918LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x906 = 17332138257088343LLU;
	int8_t x907 = 0;
	uint64_t x908 = 37LLU;
	uint64_t t180 = 2724LLU;

    t180 = (x905+(x906-(x907!=x908)));

    if (t180 != 9240704175111864150LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x909 = INT32_MIN;
	volatile uint64_t x910 = 9754LLU;
	uint64_t x911 = 123LLU;
	uint32_t x912 = 11519536U;
	uint64_t t181 = 11271384LLU;

    t181 = (x909+(x910-(x911!=x912)));

    if (t181 != 18446744071562077721LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x917 = -1;
	volatile uint16_t x919 = UINT16_MAX;
	static volatile int64_t t182 = 265174LL;

    t182 = (x917+(x918-(x919!=x920)));

    if (t182 != -3984006769LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x921 = 0U;
	static volatile int32_t x922 = INT32_MAX;
	int32_t x923 = -1;
	volatile int32_t t183 = 535971582;

    t183 = (x921+(x922-(x923!=x924)));

    if (t183 != 2147483646) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x925 = 4551446811277430651LL;
	static int64_t x926 = -3LL;
	static uint32_t x927 = 13807U;
	uint16_t x928 = 15285U;
	int64_t t184 = -6526LL;

    t184 = (x925+(x926-(x927!=x928)));

    if (t184 != 4551446811277430647LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x929 = INT64_MIN;
	volatile int32_t x930 = INT32_MAX;
	volatile int32_t x931 = -1;
	int64_t t185 = -1128LL;

    t185 = (x929+(x930-(x931!=x932)));

    if (t185 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x933 = 20263LL;
	static uint8_t x935 = UINT8_MAX;
	static uint16_t x936 = UINT16_MAX;
	volatile int64_t t186 = -102212LL;

    t186 = (x933+(x934-(x935!=x936)));

    if (t186 != 20146LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x938 = 1;
	int64_t x939 = -1LL;
	int16_t x940 = INT16_MIN;

    t187 = (x937+(x938-(x939!=x940)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x941 = -1LL;
	volatile int16_t x943 = INT16_MIN;

    t188 = (x941+(x942-(x943!=x944)));

    if (t188 != 253LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x945 = UINT32_MAX;
	volatile int16_t x947 = INT16_MIN;
	uint64_t x948 = 3219858829521LLU;
	int64_t t189 = 1LL;

    t189 = (x945+(x946-(x947!=x948)));

    if (t189 != 5624262769LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x949 = -38546LL;
	uint32_t x950 = 16309748U;
	static int16_t x951 = INT16_MIN;

    t190 = (x949+(x950-(x951!=x952)));

    if (t190 != 16271201LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x957 = -19;
	int32_t x958 = -1;
	int32_t t191 = 3193797;

    t191 = (x957+(x958-(x959!=x960)));

    if (t191 != -20) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x961 = INT32_MIN;
	volatile int64_t x964 = INT64_MIN;
	volatile uint32_t t192 = 14U;

    t192 = (x961+(x962-(x963!=x964)));

    if (t192 != 2147484388U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x965 = INT32_MIN;
	static uint8_t x966 = 117U;
	int64_t x967 = 12143078857LL;
	int8_t x968 = -1;
	static volatile int32_t t193 = 503826;

    t193 = (x965+(x966-(x967!=x968)));

    if (t193 != -2147483532) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x969 = UINT8_MAX;
	uint8_t x970 = UINT8_MAX;
	volatile int64_t x971 = INT64_MIN;
	volatile int8_t x972 = 1;

    t194 = (x969+(x970-(x971!=x972)));

    if (t194 != 509) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x977 = 239LLU;
	static volatile uint64_t x979 = 695565297969835LLU;
	int64_t x980 = 8692290924LL;
	uint64_t t195 = 12072LLU;

    t195 = (x977+(x978-(x979!=x980)));

    if (t195 != 95LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x982 = 41U;
	static int32_t x983 = INT32_MIN;
	int64_t x984 = -1LL;

    t196 = (x981+(x982-(x983!=x984)));

    if (t196 != 39) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x985 = 4;
	uint64_t x986 = UINT64_MAX;
	uint32_t x987 = 744604U;
	int32_t x988 = -60;

    t197 = (x985+(x986-(x987!=x988)));

    if (t197 != 2LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x990 = 2061U;
	static volatile uint32_t x991 = 21360743U;
	int32_t x992 = -10;
	volatile uint32_t t198 = 36135760U;

    t198 = (x989+(x990-(x991!=x992)));

    if (t198 != 2841U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x993 = 895559432535360734LLU;
	uint32_t x995 = UINT32_MAX;
	volatile uint8_t x996 = 2U;

    t199 = (x993+(x994-(x995!=x996)));

    if (t199 != 895559432535360732LLU) { NG(); } else { ; }
	
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

